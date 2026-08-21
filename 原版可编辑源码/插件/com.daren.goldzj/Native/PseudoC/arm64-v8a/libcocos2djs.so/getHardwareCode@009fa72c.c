
/* universe::Device::getHardwareCode() */

void __thiscall universe::Device::getHardwareCode(Device *this)

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
                    /* try { // try from 009fa758 to 00afa75f has its CatchHandler @ 009fa760 */
                    /* catch() { ... } // from try @ 009fa6f0 with catch @ 009fa760
                       catch() { ... } // from try @ 009fa758 with catch @ 009fa760
                       try { // try from 009fa760 to 00afa77f has its CatchHandler @ 009fa570 */
  uVar2 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_70,"com/bianfeng/libuniverse/Device","getHardwareCode"
                     ,"()Ljava/lang/String;");
  if ((uVar2 & 1) == 0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    goto LAB_009fa85c;
  }
                    /* catch() { ... } // from try @ 009fa600 with catch @ 009fa77c */
                    /* catch() { ... } // from try @ 009fa838 with catch @ 009fa780
                       catch() { ... } // from try @ 009fa8c4 with catch @ 009fa780
                       catch() { ... } // from try @ 009fa90c with catch @ 009fa780 */
  uVar3 = _JNIEnv::CallStaticObjectMethod(local_70,p_Stack_68,local_60);
  __s = (char *)(**(code **)(*(long *)local_70 + 0x548))(local_70,uVar3,0);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 009fa88c to 00afa8c3 has its CatchHandler @ 009fa91c */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_009fa80c;
  }
  else {
    uVar2 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar2);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar2 | 1;
LAB_009fa80c:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 009fa830 to 00afa837 has its CatchHandler @ 009fa90c */
  (**(code **)(*(long *)local_70 + 0x550))(local_70,uVar3,__s);
                    /* try { // try from 009fa838 to 00afa88b has its CatchHandler @ 009fa780 */
  (**(code **)(*(long *)local_70 + 0xb8))(local_70,p_Stack_68);
  (**(code **)(*(long *)local_70 + 0xb8))(local_70,uVar3);
LAB_009fa85c:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

