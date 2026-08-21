
/* cocos2d::network::HttpURLConnection::setRequestMethod(char const*) */

void __thiscall
cocos2d::network::HttpURLConnection::setRequestMethod(HttpURLConnection *this,char *param_1)

{
  long lVar1;
  size_t sVar2;
  ulong uVar3;
  undefined8 uVar4;
  HttpURLConnection *pHVar5;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  sVar2 = strlen(param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x10),param_1,sVar2);
                    /* catch() { ... } // from try @ 009a98dc with catch @ 009a9b08 */
  uVar3 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                     "setRequestMethod","(Ljava/net/HttpURLConnection;Ljava/lang/String;)V");
  if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 009a993c with catch @ 009a9b28 */
    if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (this + 0x10) & 1) == 0) {
      pHVar5 = this + 0x11;
    }
    else {
      pHVar5 = *(HttpURLConnection **)(this + 0x20);
    }
    uVar4 = (**(code **)(*(long *)local_50 + 0x538))(local_50,pHVar5);
                    /* catch() { ... } // from try @ 009a98ec with catch @ 009a9b48 */
                    /* catch() { ... } // from try @ 009a98b8 with catch @ 009a9b4c */
    _JNIEnv::CallStaticVoidMethod(local_50,p_Stack_48,local_40,*(undefined8 *)(this + 8),uVar4);
                    /* catch() { ... } // from try @ 009a998c with catch @ 009a9b6c */
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar4);
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009a9948 with catch @ 009a9b94 */
                    /* catch() { ... } // from try @ 009a9918 with catch @ 009a9b98 */
                    /* catch() { ... } // from try @ 009a989c with catch @ 009a9b9c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

