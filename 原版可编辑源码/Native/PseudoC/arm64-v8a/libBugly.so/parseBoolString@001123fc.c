
bool parseBoolString(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  iVar2 = strncmp(param_1,"true",4);
  if ((iVar2 != 0) && (iVar2 = strncmp(param_1,"True",4), iVar2 != 0)) {
    iVar2 = strncmp(param_1,"TRUE",4);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

