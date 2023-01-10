bool is_Capitalization(char s1,char s2)
{
return ((s1+32==s2)||(s2+32==s1))?true:false;
}
char * makeGood(char * s){
        int len=strlen(s);
        int Newlen=len+2;
        char *tmp=(char*)calloc(Newlen,sizeof(char));
        int i=0;
        int k=1;
        while(i<len-1)
        {
            if(!is_Capitalization(s[i],s[i+1]))//不互为大小写
            {
                if(!is_Capitalization(s[i],tmp[k-1]))//不互为大小写
                {
                    tmp[k++]=s[i];
                }
                else
                {
                    tmp[--k]='\0';
                }
                i++;
            }
            else
            {
                i+=2;
            }
        }
        if(i<len)//对最后一个字符做判断
        if(!is_Capitalization(s[i],tmp[k-1]))
        {
            tmp[k++]=s[i];
        }
        else
        {
            tmp[--k]='\0';
        }
        strcpy(s,tmp+1);
        free(tmp);
        return s;
}
char * makeGood1(char * s){
        int len=strlen(s);
        int i=0;
        int k=0;
        while(i<len-1)
        {
            if(!is_Capitalization(s[i],s[i+1]))//不互为大小写
            {
                if(k==0||!is_Capitalization(s[i],s[k-1]))//不互为大小写
                {
                    s[k++]=s[i];
                }
                else
                {
                    s[--k]='\0';
                }
                i++;
            }
            else
            {
                i+=2;
            }
        }
        if(i<len)//对最后一个字符做判断
        if(k==0||!is_Capitalization(s[i],s[k-1]))
        {
            s[k++]=s[i];
        }
        else
        {
            s[--k]='\0';
        }
        s[k]='\0';
        return s;
}
void PrevRoot(struct TreeNode*root,int *ret)
{
    if(!root)
    return;
    ret[root->val]++;
    PrevRoot(root->left,ret);
    PrevRoot(root->right,ret);
}

int numColor(struct TreeNode* root){
        int*Count=(int*)calloc(1001,sizeof(int));
        PrevRoot(root,Count);
        int x=0;
        for(int i=1;i<1001;i++)
        {
            if(Count[i])
            x++;
        }
        return x;
}

