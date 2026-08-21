
/* universe::Device::startApp(char const*) */

void universe::Device::startApp(char *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  _jclass *local_40;
  _jmethodID *p_Stack_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_40,"com/bianfeng/libuniverse/Device","startApp",
                     "(Ljava/lang/String;)V");
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*(long *)local_40 + 0x538))(local_40,param_1);
    _JNIEnv::CallStaticVoidMethod(local_40,p_Stack_38,local_30,uVar3);
                    /* try { // try from 009fa6f0 to 00afa6f7 has its CatchHandler @ 009fa760 */
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,uVar3);
                    /* try { // try from 009fa6f8 to 00afa757 has its CatchHandler @ 009fa570 */
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,p_Stack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

