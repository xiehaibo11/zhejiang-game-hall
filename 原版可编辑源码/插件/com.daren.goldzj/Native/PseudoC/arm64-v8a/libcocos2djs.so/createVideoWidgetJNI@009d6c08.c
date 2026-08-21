
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
  
                    /* try { // try from 009d6c08 to 00ad6c0f has its CatchHandler @ 009d6f04 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 009d6c40 to 00ad6c4b has its CatchHandler @ 009d6f24 */
  pcVar1 = DAT_01d38720;
  if (((byte)DAT_01d38710 & 1) == 0) {
    pcVar1 = (char *)((long)&DAT_01d38710 + 1);
  }
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
                    /* try { // try from 009d6c98 to 00ad6cbb has its CatchHandler @ 009d6f20 */
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

