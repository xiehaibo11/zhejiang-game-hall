
/* universe::Device::getCarrierName() */

void __thiscall universe::Device::getCarrierName(Device *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"com/bianfeng/libuniverse/Device","getCarrierName",
                     "()Ljava/lang/String;");
  if ((uVar2 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,"");
  }
  else {
    uVar3 = _JNIEnv::CallStaticObjectMethod(local_50,p_Stack_48,local_40);
    pcVar4 = (char *)(**(code **)(*(long *)local_50 + 0x548))(local_50,uVar3,0);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(in_x8,pcVar4);
    (**(code **)(*(long *)local_50 + 0x550))(local_50,uVar3,pcVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

