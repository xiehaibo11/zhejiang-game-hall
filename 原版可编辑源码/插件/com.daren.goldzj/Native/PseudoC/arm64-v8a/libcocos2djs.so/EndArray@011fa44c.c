
/* v8::tracing::TracedValue::EndArray() */

void __thiscall v8::tracing::TracedValue::EndArray(TracedValue *this)

{
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  TracedValue *pTVar3;
  ulong uVar4;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  bVar2 = *this_00;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 0x16;
    if (uVar4 != 0x16) goto LAB_011fa4b4;
  }
  else {
    uVar4 = *(ulong *)(this + 0x10);
    uVar1 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
    if (uVar4 != uVar1) goto LAB_011fa4b4;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __grow_by(this_00,uVar1,1,uVar1,uVar1,0,0);
  bVar2 = *this_00;
LAB_011fa4b4:
  if (((byte)bVar2 & 1) == 0) {
    pTVar3 = this + 9;
    *this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
               ((char)uVar4 * '\x02' + '\x02');
  }
  else {
    pTVar3 = *(TracedValue **)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar4 + 1;
  }
  *(undefined2 *)(pTVar3 + uVar4) = 0x5d;
  this[0x20] = (TracedValue)0x0;
  return;
}

