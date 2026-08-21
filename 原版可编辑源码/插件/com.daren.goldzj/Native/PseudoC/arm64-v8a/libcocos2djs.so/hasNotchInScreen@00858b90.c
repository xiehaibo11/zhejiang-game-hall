
/* cocos2d::Native::hasNotchInScreen() */

void cocos2d::Native::hasNotchInScreen(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  _jclass *local_40;
  _jmethodID *p_Stack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar4 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_40,"org.cocos2dx.lib.Cocos2dxActivity",
                     "hasNotchInScreen","()Z");
  if ((uVar4 & 1) == 0) {
    bVar2 = false;
  }
  else {
    cVar3 = _JNIEnv::CallStaticBooleanMethod(local_40,p_Stack_38,local_30);
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,p_Stack_38);
    bVar2 = cVar3 != '\0';
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

