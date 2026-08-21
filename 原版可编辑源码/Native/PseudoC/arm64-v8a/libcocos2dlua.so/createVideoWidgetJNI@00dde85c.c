
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* createVideoWidgetJNI() */

undefined4 createVideoWidgetJNI(void)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  _jclass *local_40;
  _jmethodID *p_Stack_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  pcVar1 = DAT_017889e8;
  if ((DAT_017889d8 & 1) == 0) {
    pcVar1 = &DAT_017889d9;
  }
                    /* try { // try from 00dde8a4 to 00ede9e3 has its CatchHandler @ 00ddec14 */
  uVar4 = cocos2d::JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_40,pcVar1,"createVideoWidget","()I");
  if ((uVar4 & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = _JNIEnv::CallStaticIntMethod(local_40,p_Stack_38,local_30);
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,p_Stack_38);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

