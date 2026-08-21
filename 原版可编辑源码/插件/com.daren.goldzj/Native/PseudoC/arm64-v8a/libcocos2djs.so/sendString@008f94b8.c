
/* XMLHttpRequest::sendString(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall XMLHttpRequest::sendString(XMLHttpRequest *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  setHttpRequestData(this,(char *)pbVar2,uVar1);
  sendRequest(this);
  return;
}

