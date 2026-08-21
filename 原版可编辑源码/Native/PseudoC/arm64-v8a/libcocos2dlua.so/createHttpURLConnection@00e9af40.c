
/* cocos2d::network::HttpURLConnection::createHttpURLConnection(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::HttpURLConnection::createHttpURLConnection
          (HttpURLConnection *this,basic_string *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  basic_string *pbVar6;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org.cocos2dx.lib.Cocos2dxHttpURLConnection",
                     "createHttpURLConnection","(Ljava/lang/String;)Ljava/net/HttpURLConnection;");
  if ((uVar2 & 1) != 0) {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x58) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar2 = *(ulong *)(param_1 + 8);
      pbVar6 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar6 = param_1 + 1;
        uVar2 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),(char *)pbVar6,uVar2);
    }
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    uVar3 = (**(code **)(*(long *)local_50 + 0x538))(local_50,pbVar6);
    uVar4 = _JNIEnv::CallStaticObjectMethod(local_50,p_Stack_48,local_40,uVar3);
    uVar5 = (**(code **)(*(long *)local_50 + 0xa8))(local_50,uVar4);
    *(undefined8 *)(this + 8) = uVar5;
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar3);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

