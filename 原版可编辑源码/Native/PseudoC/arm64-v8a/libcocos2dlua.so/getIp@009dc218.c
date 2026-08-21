
/* universe::Device::getIp() */

void __thiscall universe::Device::getIp(Device *this)

{
  _jclass *p_Var1;
  _jmethodID *p_Var2;
  undefined8 uVar3;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  
  p_Var1 = (_jclass *)JniAssistant::getEnv();
  p_Var2 = (_jmethodID *)
           (**(code **)(*(long *)p_Var1 + 0x30))(p_Var1,"com/bianfeng/libuniverse/Device");
  uVar3 = (**(code **)(*(long *)p_Var1 + 0x388))(p_Var1,p_Var2,"getIp","()Ljava/lang/String;");
  uVar3 = _JNIEnv::CallStaticObjectMethod(p_Var1,p_Var2,uVar3);
  pcVar4 = (char *)(**(code **)(*(long *)p_Var1 + 0x548))(p_Var1,uVar3,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(in_x8,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0x550))(p_Var1,uVar3,pcVar4);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,p_Var2);
  (**(code **)(*(long *)p_Var1 + 0xb8))(p_Var1,uVar3);
  return;
}

