
/* universe::Device::getOsName() */

void __thiscall universe::Device::getOsName(Device *this)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  char *__s;
  size_t __n;
  ulong *in_x8;
  void *__dest;
  ulong uVar4;
  
  p_Var1 = (_jclass *)JniAssistant::getEnv();
  p_Var2 = (_jmethodID *)
           (**(code **)(*(long *)p_Var1 + 0x30))(p_Var1,"com/bianfeng/libuniverse/Device");
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x388))(p_Var1,p_Var2,"getOsName","()Ljava/lang/String;");
  uVar3 = _JNIEnv::CallStaticObjectMethod(p_Var1,p_Var2,uVar3);
  __s = (char *)(**(code **)(*(long *)p_Var1 + 0x548))(p_Var1,uVar3,0);
  in_x8[1] = 0;
  in_x8[2] = 0;
  *in_x8 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_009f90e8;
  }
  else {
    uVar4 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    in_x8[1] = __n;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
  }
  memcpy(__dest,__s,__n);
LAB_009f90e8:
  *(undefined1 *)((long)__dest + __n) = 0;
  (**(code **)(*(long *)p_Var1 + 0x550))(p_Var1,uVar3,__s);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
  return;
}

