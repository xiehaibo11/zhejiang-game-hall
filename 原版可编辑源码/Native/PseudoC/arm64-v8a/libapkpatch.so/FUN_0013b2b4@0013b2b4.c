
bool FUN_0013b2b4(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = strcmp(param_1,"zlib");
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = strcmp(param_1,"pzlib");
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

