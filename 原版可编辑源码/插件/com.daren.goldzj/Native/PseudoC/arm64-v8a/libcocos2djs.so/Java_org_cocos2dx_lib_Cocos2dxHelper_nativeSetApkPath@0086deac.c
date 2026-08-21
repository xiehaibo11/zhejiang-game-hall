
void Java_org_cocos2dx_lib_Cocos2dxHelper_nativeSetApkPath
               (undefined8 param_1,undefined8 param_2,_jstring *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  cocos2d::JniHelper::jstring2string(param_3);
  if ((DAT_01d35b18 & 1) != 0) {
    *DAT_01d35b28 = 0;
    DAT_01d35b20 = 0;
    if ((DAT_01d35b18 & 1) != 0) {
      operator_delete(DAT_01d35b28);
    }
  }
  DAT_01d35b28 = (undefined1 *)local_30;
  DAT_01d35b20 = uStack_38;
  DAT_01d35b18 = local_40;
  if (*(long *)(lVar1 + 0x28) != lVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

