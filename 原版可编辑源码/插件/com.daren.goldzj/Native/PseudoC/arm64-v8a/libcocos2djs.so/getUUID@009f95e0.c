
/* universe::Device::getUUID() */

void __thiscall universe::Device::getUUID(Device *this)

{
  long lVar1;
  _jclass *p_Var2;
  _jmethodID *p_Var3;
  undefined8 uVar4;
  char *__s;
  size_t __n;
  ulong *in_x8;
  void *__dest;
  ulong uVar5;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  p_Var2 = (_jclass *)JniAssistant::getEnv();
  p_Var3 = (_jmethodID *)
           (**(code **)(*(long *)p_Var2 + 0x30))(p_Var2,"com/bianfeng/libuniverse/Device");
  uVar4 = (**(code **)(*(long *)p_Var2 + 0x388))(p_Var2,p_Var3,"getUUID","()Ljava/lang/String;");
  uVar4 = _JNIEnv::CallStaticObjectMethod(p_Var2,p_Var3,uVar4);
  __s = (char *)(**(code **)(*(long *)p_Var2 + 0x548))(p_Var2,uVar4,0);
  if (__s == (char *)0x0) {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    goto LAB_009f9750;
  }
  local_80 = 0;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_009f96ec;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_80 = uVar5 | 1;
    sStack_78 = __n;
    local_70 = __dest;
LAB_009f96ec:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*(long *)p_Var2 + 0x550))(p_Var2,uVar4,__s);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,p_Var3);
  (**(code **)(*(long *)p_Var2 + 0xb8))(p_Var2,uVar4);
  in_x8[2] = (ulong)local_70;
  in_x8[1] = sStack_78;
  *in_x8 = local_80;
LAB_009f9750:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009f9884 with catch @ 009f9768
                       catch() { ... } // from try @ 009f990c with catch @ 009f9768
                       catch() { ... } // from try @ 009f9b24 with catch @ 009f9768
                       catch() { ... } // from try @ 009f9c60 with catch @ 009f9768 */
  return;
}

