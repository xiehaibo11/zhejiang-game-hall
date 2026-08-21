
undefined4
Java_org_cocos2dx_lib_Cocos2dxLuaJavaBridge_callLuaGlobalFunctionWithString
          (StringUtils *param_1,undefined8 param_2,_JNIEnv *param_3,_JNIEnv *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  undefined4 uVar4;
  _JNIEnv *p_Var5;
  byte local_78 [16];
  char *local_68;
  byte local_60 [16];
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  p_Var5 = param_4;
  cocos2d::StringUtils::getStringUTFCharsJNI(param_1,param_3,(_jstring *)0x0,(bool *)param_4);
  cocos2d::StringUtils::getStringUTFCharsJNI(param_1,param_4,(_jstring *)0x0,(bool *)p_Var5);
  pcVar1 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar1 = local_50;
  }
  pcVar2 = (char *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pcVar2 = local_68;
  }
  uVar4 = LuaJavaBridge::callLuaGlobalFunction(pcVar1,pcVar2);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

