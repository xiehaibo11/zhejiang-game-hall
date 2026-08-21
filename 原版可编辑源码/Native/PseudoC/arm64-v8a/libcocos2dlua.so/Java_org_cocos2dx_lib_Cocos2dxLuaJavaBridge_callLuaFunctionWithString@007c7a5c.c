
undefined4
Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge_callLuaFunctionWithString
          (StringUtils *param_1,undefined8 param_2,int param_3,_JNIEnv *param_4)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_50 [16];
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cocos2d::StringUtils::getStringUTFCharsJNI(param_1,param_4,(_jstring *)0x0,(bool *)param_4);
  pcVar1 = (char *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pcVar1 = local_40;
  }
  uVar3 = LuaJavaBridge::callLuaFunctionById(param_3,pcVar1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

