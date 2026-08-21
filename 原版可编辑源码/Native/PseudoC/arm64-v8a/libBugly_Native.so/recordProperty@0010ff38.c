
int recordProperty(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  iVar1 = recordStr();
  if (iVar1 == -1) {
    pcVar3 = "write key fail";
  }
  else {
    iVar2 = recordStr(param_1,param_3);
    if (iVar2 != -1) {
      return iVar2 + iVar1;
    }
    pcVar3 = "write value fail";
  }
  log2Console(6,"eup",pcVar3);
  return -1;
}

