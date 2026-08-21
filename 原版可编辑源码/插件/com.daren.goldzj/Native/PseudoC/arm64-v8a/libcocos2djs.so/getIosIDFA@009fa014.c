
/* universe::Device::getIosIDFA() */

void __thiscall universe::Device::getIosIDFA(Device *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *__s;
  size_t __n;
  ulong *in_x8;
  void *__dest;
  _jclass *local_70;
  _jmethodID *p_Stack_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_70,"com/bianfeng/libuniverse/Device","getIosIDFA",
                     "()Ljava/lang/String;");
  if ((uVar2 & 1) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    goto LAB_009fa144;
  }
  uVar3 = _JNIEnv::CallStaticObjectMethod(local_70,p_Stack_68,local_60);
                    /* try { // try from 009fa080 to 00afa08b has its CatchHandler @ 009fa3b8 */
  __s = (char *)(**(code **)(*(long *)local_70 + 0x548))(local_70,uVar3,0);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 009fa0b0 to 00afa0b7 has its CatchHandler @ 009fa43c */
  if (__n < 0x17) {
                    /* try { // try from 009fa0b8 to 00afa0d3 has its CatchHandler @ 009fa424 */
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_009fa0f4;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009fa0e0 to 00afa113 has its CatchHandler @ 009fa43c */
    __dest = operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
LAB_009fa0f4:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*(long *)local_70 + 0x550))(local_70,uVar3,__s);
  (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
                    /* try { // try from 009fa130 to 00afa1bf has its CatchHandler @ 009fa3e0 */
  (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar3);
LAB_009fa144:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

