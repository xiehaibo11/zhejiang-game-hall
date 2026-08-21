
int name_cmp(char *name,char *cmp)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(cmp);
  iVar1 = strncmp(name,cmp,(long)(int)sVar2);
  if (((iVar1 == 0) && (name[(int)sVar2] != '\0')) && (name[(int)sVar2] != '.')) {
    iVar1 = 1;
  }
  return iVar1;
}

