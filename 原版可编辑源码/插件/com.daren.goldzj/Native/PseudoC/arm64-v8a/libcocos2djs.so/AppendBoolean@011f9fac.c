
/* v8::tracing::TracedValue::AppendBoolean(bool) */

void __thiscall v8::tracing::TracedValue::AppendBoolean(TracedValue *this,bool param_1)

{
  char *pcVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  TracedValue *pTVar4;
  ulong uVar5;
  
  if (this[0x20] != (TracedValue)0x0) {
    this[0x20] = (TracedValue)0x0;
    goto LAB_011fa050;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  bVar3 = *this_00;
  if (((byte)bVar3 & 1) == 0) {
    uVar5 = (ulong)((byte)bVar3 >> 1);
    uVar2 = 0x16;
    if (uVar5 == 0x16) goto LAB_011fa008;
  }
  else {
    uVar5 = *(ulong *)(this + 0x10);
    uVar2 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
    if (uVar5 == uVar2) {
LAB_011fa008:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by(this_00,uVar2,1,uVar2,uVar2,0,0);
      bVar3 = *this_00;
    }
  }
  if (((byte)bVar3 & 1) == 0) {
    pTVar4 = this + 9;
    *this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
               ((char)uVar5 * '\x02' + '\x02');
  }
  else {
    pTVar4 = *(TracedValue **)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar5 + 1;
  }
  *(undefined2 *)(pTVar4 + uVar5) = 0x2c;
LAB_011fa050:
  pcVar1 = "true";
  if (!param_1) {
    pcVar1 = "false";
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 8),pcVar1);
  return;
}

