
void getJavaThread(undefined8 param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = strcmp(param_3,"main");
  if (iVar1 != 0) {
    getJavaThreadByName(param_1,param_2,param_3);
    return;
  }
  getJavaMainThread(param_1);
  return;
}

