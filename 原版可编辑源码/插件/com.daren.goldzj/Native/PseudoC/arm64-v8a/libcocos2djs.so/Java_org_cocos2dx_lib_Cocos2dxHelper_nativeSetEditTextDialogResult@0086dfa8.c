
void Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetEditTextDialogResult
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x558))(param_1,param_3);
  if (0 < iVar1) {
    uVar2 = (**(code **)(*param_1 + 0x5c0))(param_1,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x0086e00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x600))(param_1,param_3,uVar2,0);
    return;
  }
  return;
}

