
/* universe::Device::getUUID() */

void __thiscall universe::Device::getUUID(Device *this)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  p_Var1 = (_jclass *)JniAssistant::getEnv();
  p_Var2 = (_jmethodID *)
           (**(code **)(*(long *)p_Var1 + 0x30))(p_Var1,"com/bianfeng/libuniverse/Device");
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x388))(p_Var1,p_Var2,"getUUID","()Ljava/lang/String;");
  uVar3 = _JNIEnv::CallStaticObjectMethod(p_Var1,p_Var2,uVar3);
  pcVar4 = (char *)(**(code **)(*(long *)p_Var1 + 0x548))(p_Var1,uVar3,0);
                    /* try { // try from 009dc3ac to 00adc3fb has its CatchHandler @ 009dc3ac
                       catch() { ... } // from try @ 009dc3ac with catch @ 009dc3ac
                       catch() { ... } // from try @ 009dc42c with catch @ 009dc3ac
                       catch() { ... } // from try @ 009dc498 with catch @ 009dc3ac */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0x550))(p_Var1,uVar3,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
                    /* try { // try from 009dc3fc to 00adc42b has its CatchHandler @ 009dc4a0 */
  return;
}

