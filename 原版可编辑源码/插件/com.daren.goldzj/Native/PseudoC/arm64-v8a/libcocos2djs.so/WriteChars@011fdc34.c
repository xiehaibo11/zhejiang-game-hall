
/* v8::internal::WriteChars(char const*, char const*, int, bool) */

int v8::internal::WriteChars(char *param_1,char *param_2,int param_3,bool param_4)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  int iVar3;
  
  __s = (FILE *)base::OS::FOpen(param_1,"wb");
  if (__s == (FILE *)0x0) {
    if (param_4) {
      base::OS::PrintError("Cannot open file %s for writing.\n",param_1);
    }
    iVar3 = 0;
  }
  else {
    if (param_3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        sVar2 = fwrite(param_2,1,(long)(param_3 - iVar3),__s);
        iVar1 = (int)sVar2;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + iVar1;
        param_2 = param_2 + iVar1;
      } while (iVar3 < param_3);
    }
    fclose(__s);
  }
  return iVar3;
}

