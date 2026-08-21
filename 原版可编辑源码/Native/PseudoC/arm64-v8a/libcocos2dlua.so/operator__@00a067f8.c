
/* universe::network::OStream::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

OStream * __thiscall universe::network::OStream::operator>>(OStream *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string *__dest;
  basic_string bVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = readStrLen(this);
  if (uVar3 != 0) {
    bVar2 = *param_1;
    uVar1 = (ulong)((byte)bVar2 >> 1);
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
    }
    if (uVar3 < uVar1 || uVar3 - uVar1 == 0) {
      if (((byte)bVar2 & 1) == 0) {
        param_1[uVar3 + 1] = (basic_string)0x0;
        *param_1 = SUB41((int)uVar3 << 1,0);
      }
      else {
        *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar3) = 0;
        *(ulong *)(param_1 + 8) = uVar3;
      }
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1,uVar3 - uVar1,'\0');
    }
    uVar3 = *(ulong *)(param_1 + 8);
    __dest = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      __dest = param_1 + 1;
      uVar3 = (ulong)((byte)*param_1 >> 1);
    }
    if ((ulong)(*(long *)(this + 8) - *(long *)(this + 0x10)) < uVar3) {
      pcVar4 = (char *)Translated::getInstance();
      Translated::log(pcVar4,&DAT_012f87ed,uVar3,*(long *)(this + 8) - *(long *)(this + 0x10));
    }
    else {
      memcpy(__dest,(void *)(*(long *)this + *(long *)(this + 0x10)),uVar3);
      *(ulong *)(this + 0x10) = *(long *)(this + 0x10) + uVar3;
    }
  }
  return this;
}

