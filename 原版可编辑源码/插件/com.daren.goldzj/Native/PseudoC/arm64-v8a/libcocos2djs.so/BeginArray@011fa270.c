
/* v8::tracing::TracedValue::BeginArray() */

void __thiscall v8::tracing::TracedValue::BeginArray(TracedValue *this)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  TracedValue *pTVar4;
  ulong uVar5;
  
  if (this[0x20] == (TracedValue)0x0) {
    pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 8);
    bVar2 = *pbVar3;
    if (((byte)bVar2 & 1) == 0) {
      uVar5 = (ulong)((byte)bVar2 >> 1);
      uVar1 = 0x16;
      if (uVar5 == 0x16) goto LAB_011fa2c8;
    }
    else {
      uVar5 = *(ulong *)(this + 0x10);
      uVar1 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
      if (uVar5 == uVar1) {
LAB_011fa2c8:
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::__grow_by(pbVar3,uVar1,1,uVar1,uVar1,0,0);
        bVar2 = *pbVar3;
      }
    }
    if (((byte)bVar2 & 1) == 0) {
      pTVar4 = this + 9;
      *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                ((char)uVar5 * '\x02' + '\x02');
    }
    else {
      pTVar4 = *(TracedValue **)(this + 0x18);
      *(ulong *)(this + 0x10) = uVar5 + 1;
    }
    *(undefined2 *)(pTVar4 + uVar5) = 0x2c;
  }
  else {
    this[0x20] = (TracedValue)0x0;
  }
  pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 8);
  bVar2 = *pbVar3;
  if (((byte)bVar2 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 0x16;
    if (uVar5 != 0x16) goto joined_r0x011fa344;
  }
  else {
    uVar5 = *(ulong *)(this + 0x10);
    uVar1 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
    if (uVar5 != uVar1) goto joined_r0x011fa344;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __grow_by(pbVar3,uVar1,1,uVar1,uVar1,0,0);
  bVar2 = *pbVar3;
joined_r0x011fa344:
  if (((byte)bVar2 & 1) == 0) {
    pTVar4 = this + 9;
    *pbVar3 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
              ((char)uVar5 * '\x02' + '\x02');
  }
  else {
    pTVar4 = *(TracedValue **)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar5 + 1;
  }
  *(undefined2 *)(pTVar4 + uVar5) = 0x5b;
  this[0x20] = (TracedValue)0x1;
  return;
}

