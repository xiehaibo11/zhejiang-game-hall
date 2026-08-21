
/* cocos2d::network::WebSocket::closeAsync(int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::network::WebSocket::closeAsync(WebSocket *this,int param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x10);
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
  lws_close_reason(*(undefined8 *)(lVar3 + 0x68),param_1,pbVar2,uVar1);
  if (*(int *)(lVar3 + 0x130) != 0) {
    return;
  }
  *(undefined4 *)(lVar3 + 0x130) = 3;
  std::__ndk1::mutex::lock((mutex *)(lVar3 + 0xc));
                    /* catch() { ... } // from try @ 009ecf30 with catch @ 009ecfc0 */
                    /* catch() { ... } // from try @ 009ecf24 with catch @ 009ecfc4 */
                    /* catch() { ... } // from try @ 009ecf3c with catch @ 009ecfc8 */
  if ((*(uint *)(lVar3 + 8) & 0xfffffffe) != 2) {
    *(undefined4 *)(lVar3 + 8) = 2;
  }
                    /* catch() { ... } // from try @ 009ecf04 with catch @ 009ecfe0 */
  std::__ndk1::mutex::unlock((mutex *)(lVar3 + 0xc));
  return;
}

