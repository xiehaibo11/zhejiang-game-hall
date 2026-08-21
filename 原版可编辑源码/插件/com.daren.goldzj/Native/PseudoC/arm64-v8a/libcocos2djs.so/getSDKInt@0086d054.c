
void getSDKInt(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if ((((param_1 != (long *)0x0) && (DAT_01d35b30 == 0)) &&
      (lVar1 = (**(code **)(*param_1 + 0x30))(param_1,"android/os/Build$VERSION"), lVar1 != 0)) &&
     (lVar2 = (**(code **)(*param_1 + 0x480))(param_1,lVar1,"SDK_INT",&DAT_0188ccb8), lVar2 != 0)) {
    DAT_01d35b30 = (**(code **)(*param_1 + 0x4b0))(param_1,lVar1,lVar2);
  }
  return;
}

