
/* universe::Device::getNetEnvName() */

void __thiscall universe::Device::getNetEnvName(Device *this)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  p_Var1 = (_jclass *)JniAssistant::getEnv();
  p_Var2 = (_jmethodID *)
           (**(code **)(*(long *)p_Var1 + 0x30))(p_Var1,"com/bianfeng/libuniverse/Device");
                    /* try { // try from 009dc688 to 00adc707 has its CatchHandler @ 009dc688
                       catch() { ... } // from try @ 009dc688 with catch @ 009dc688
                       catch() { ... } // from try @ 009dc718 with catch @ 009dc688 */
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x388))(p_Var1,p_Var2,&DAT_012f164c,"()Ljava/lang/String;")
  ;
  uVar3 = _JNIEnv::CallStaticObjectMethod(p_Var1,p_Var2,uVar3);
  pcVar4 = (char *)(**(code **)(*(long *)p_Var1 + 0x548))(p_Var1,uVar3,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0x550))(p_Var1,uVar3,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
                    /* try { // try from 009dc708 to 00adc717 has its CatchHandler @ 009dc7a8 */
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
                    /* try { // try from 009dc718 to 00adc7c3 has its CatchHandler @ 009dc688 */
  return;
}

