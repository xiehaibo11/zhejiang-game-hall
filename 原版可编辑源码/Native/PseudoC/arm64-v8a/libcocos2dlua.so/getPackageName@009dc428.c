
/* universe::Device::getPackageName() */

void __thiscall universe::Device::getPackageName(Device *this)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
                    /* try { // try from 009dc42c to 00adc483 has its CatchHandler @ 009dc3ac */
  p_Var1 = (_jclass *)JniAssistant::getEnv();
  p_Var2 = (_jmethodID *)
           (**(code **)(*(long *)p_Var1 + 0x30))(p_Var1,"com/bianfeng/libuniverse/Device");
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x388))
                    (p_Var1,p_Var2,"getPackageName","()Ljava/lang/String;");
                    /* try { // try from 009dc484 to 00adc497 has its CatchHandler @ 009dc4a0 */
  uVar3 = _JNIEnv::CallStaticObjectMethod(p_Var1,p_Var2,uVar3);
                    /* try { // try from 009dc498 to 00adc4bb has its CatchHandler @ 009dc3ac */
                    /* catch() { ... } // from try @ 009dc3fc with catch @ 009dc4a0
                       catch() { ... } // from try @ 009dc484 with catch @ 009dc4a0 */
  pcVar4 = (char *)(**(code **)(*(long *)p_Var1 + 0x548))(p_Var1,uVar3,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0x550))(p_Var1,uVar3,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
  return;
}

