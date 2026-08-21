
void getAbortMessage(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = getAndroidApiLevel();
  if (0x1c < iVar1) {
    GetAbortMessageAfterQ(param_1,param_2,param_3);
    return;
  }
  GetAbortMessageBeforeQ(param_1,param_2,param_3);
  return;
}

