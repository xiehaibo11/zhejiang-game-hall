
/* WebSocketImpl::closeAsync(int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall WebSocketImpl::closeAsync(WebSocketImpl *this,int param_1,basic_string *param_2)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(basic_string **)(param_2 + 0x10);
  if (((byte)*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)((byte)*param_2 >> 1);
  }
  lws_close_reason(*(undefined8 *)(this + 0x68),param_1,pbVar2,uVar1);
  if (*(int *)(this + 0x130) != 0) {
    return;
  }
  *(undefined4 *)(this + 0x130) = 3;
  std::__ndk1::mutex::lock((mutex *)(this + 0xc));
  if ((*(uint *)(this + 8) & 0xfffffffe) != 2) {
    *(undefined4 *)(this + 8) = 2;
  }
  std::__ndk1::mutex::unlock((mutex *)(this + 0xc));
  return;
}

