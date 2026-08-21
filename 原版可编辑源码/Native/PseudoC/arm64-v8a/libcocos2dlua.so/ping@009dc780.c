
/* universe::Device::ping(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, int) */

undefined4 universe::Device::ping(byte *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009dc708 with catch @ 009dc7a8 */
  uVar3 = JniAssistant::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"com/bianfeng/libuniverse/Device","ping",
                     "(Ljava/lang/String;I)I");
  if ((uVar3 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*param_1 & 1) == 0) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = *(byte **)(param_1 + 0x10);
    }
    uVar4 = (**(code **)(*(long *)local_50 + 0x538))(local_50,param_1);
    uVar2 = _JNIEnv::CallStaticIntMethod(local_50,p_Stack_48,local_40,uVar4,(ulong)param_2);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

