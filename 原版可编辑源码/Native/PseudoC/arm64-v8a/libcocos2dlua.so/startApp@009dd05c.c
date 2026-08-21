
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
                    /* try { // try from 009dd080 to 00add0d7 has its CatchHandler @ 009dd080
                       catch() { ... } // from try @ 009dd080 with catch @ 009dd080
                       catch() { ... } // from try @ 009dd0dc with catch @ 009dd080 */
  uVar2 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_40,"com/bianfeng/libuniverse/Device","startApp",
                     "(Ljava/lang/String;)V");
  if ((uVar2 & 1) != 0) {
    uVar3 = (**(code **)(*(long *)local_40 + 0x538))(local_40,param_1);
    _JNIEnv::CallStaticVoidMethod(local_40,p_Stack_38,local_30,uVar3);
                    /* try { // try from 009dd0d8 to 00add0db has its CatchHandler @ 009dd138 */
                    /* try { // try from 009dd0dc to 00add153 has its CatchHandler @ 009dd080 */
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,uVar3);
    (**(code **)(*(long *)local_40 + 0xb8))(local_40,p_Stack_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

