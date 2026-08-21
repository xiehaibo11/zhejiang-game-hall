
/* v8::tracing::TracedValue::WriteName(char const*) */

void __thiscall v8::tracing::TracedValue::WriteName(TracedValue *this,char *param_1)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  TracedValue *pTVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar4;
  ulong uVar5;
  
  if (this[0x20] == (TracedValue)0x0) {
    pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 8);
    bVar2 = *pbVar4;
    if (((byte)bVar2 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar2 >> 1);
      uVar1 = 0x16;
      if (uVar5 == 0x16) goto LAB_011f9520;
    }
    else {
      uVar5 = *(ulong *)(this + 0x10);
      uVar1 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
      if (uVar5 == uVar1) {
LAB_011f9520:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__grow_by(pbVar4,uVar1,1,uVar1,uVar1,0,0);
        bVar2 = *pbVar4;
      }
    }
    if (((byte)bVar2 & 1) == 0) {
      pTVar3 = this + 9;
      *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                ((char)uVar5 * '\x02' + '\x02');
    }
    else {
      pTVar3 = *(TracedValue **)(this + 0x18);
      *(ulong *)(this + 0x10) = uVar5 + 1;
    }
    *(undefined2 *)(pTVar3 + uVar5) = 0x2c;
  }
  else {
    this[0x20] = (TracedValue)0x0;
  }
  pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 8);
  bVar2 = *pbVar4;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 0x16;
    if (uVar5 != 0x16) goto joined_r0x011f959c;
  }
  else {
    uVar5 = *(ulong *)(this + 0x10);
    uVar1 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
    if (uVar5 != uVar1) goto joined_r0x011f959c;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __grow_by(pbVar4,uVar1,1,uVar1,uVar1,0,0);
  bVar2 = *pbVar4;
joined_r0x011f959c:
  if (((byte)bVar2 & 1) == 0) {
    pTVar3 = this + 9;
    *pbVar4 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
              ((char)uVar5 * '\x02' + '\x02');
  }
  else {
    pTVar3 = *(TracedValue **)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar5 + 1;
  }
  *(undefined2 *)(pTVar3 + uVar5) = 0x22;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pbVar4,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(pbVar4,"\":");
  return;
}

