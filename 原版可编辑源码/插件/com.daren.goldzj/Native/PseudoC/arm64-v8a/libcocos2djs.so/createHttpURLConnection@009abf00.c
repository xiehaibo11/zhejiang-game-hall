
/* cocos2d::network::HttpURLConnection::createHttpURLConnection(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::HttpURLConnection::createHttpURLConnection
          (HttpURLConnection *this,basic_string *param_1)

{
  basic_string *pbVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  _jclass *local_50;
  _jmethodID *p_Stack_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = JniHelper::getStaticMethodInfo
                    ((JniMethodInfo_ *)&local_50,"org/cocos2dx/lib/Cocos2dxHttpURLConnection",
                     "createHttpURLConnection","(Ljava/lang/String;)Ljava/net/HttpURLConnection;");
  if ((uVar3 & 1) != 0) {
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (this + 0x58) !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar3 = *(ulong *)(param_1 + 8);
      pbVar1 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar1 = param_1 + 1;
        uVar3 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x58),(char *)pbVar1,uVar3);
    }
    pbVar1 = param_1 + 1;
    if (((byte)*param_1 & 1) != 0) {
      pbVar1 = *(basic_string **)(param_1 + 0x10);
    }
    uVar4 = (**(code **)(*(long *)local_50 + 0x538))(local_50,pbVar1);
    uVar5 = _JNIEnv::CallStaticObjectMethod(local_50,p_Stack_48,local_40,uVar4);
                    /* try { // try from 009abfc0 to 00aabfe7 has its CatchHandler @ 009ac078 */
    uVar6 = (**(code **)(*(long *)local_50 + 0xa8))(local_50,uVar5);
    *(undefined8 *)(this + 8) = uVar6;
                    /* try { // try from 009abfe8 to 00aac11f has its CatchHandler @ 009abbd0 */
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar4);
                    /* catch() { ... } // from try @ 009abd64 with catch @ 009abff0 */
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,uVar5);
                    /* catch() { ... } // from try @ 009abd54 with catch @ 009ac000 */
    (**(code **)(*(long *)local_50 + 0xb8))(local_50,p_Stack_48);
  }
                    /* catch() { ... } // from try @ 009abd38 with catch @ 009ac010 */
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 009abd28 with catch @ 009ac020 */
                    /* catch() { ... } // from try @ 009abd14 with catch @ 009ac030 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

