
/* setUserInputEnabledJNI(int, bool) */

void setUserInputEnabledJNI(int param_1,bool param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pcVar1 = DAT_017889e8;
  if ((DAT_017889d8 & 1) == 0) {
    pcVar1 = &DAT_017889d9;
  }
  uVar3 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,pcVar1,"setUserInputEnabled","(IZ)V");
  if ((uVar3 & 1) != 0) {
    _JNIEnv::CallStaticVoidMethod(local_50,p_Stack_48,local_40,(ulong)(uint)param_1,(ulong)param_2);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

