
/* v8::tracing::TracedValue::AppendDouble(double) */

void __thiscall v8::tracing::TracedValue::AppendDouble(TracedValue *this,double param_1)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  TracedValue *pTVar5;
  ulong uVar6;
  undefined1 auStack_b0 [104];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x20] != (TracedValue)0x0) {
    this[0x20] = (TracedValue)0x0;
    goto LAB_011f9f58;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 8);
  bVar4 = *this_00;
  if (((byte)bVar4 & 1) == 0) {
    uVar6 = (ulong)((byte)bVar4 >> 1);
    uVar3 = 0x16;
    if (uVar6 == 0x16) goto LAB_011f9f10;
  }
  else {
    uVar6 = *(ulong *)(this + 0x10);
    uVar3 = (*(ulong *)(this + 8) & 0xfffffffffffffffe) - 1;
    if (uVar6 == uVar3) {
LAB_011f9f10:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by(this_00,uVar3,1,uVar3,uVar3,0,0);
      bVar4 = *this_00;
    }
  }
  if (((byte)bVar4 & 1) == 0) {
    pTVar5 = this + 9;
    *this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
               ((char)uVar6 * '\x02' + '\x02');
  }
  else {
    pTVar5 = *(TracedValue **)(this + 0x18);
    *(ulong *)(this + 0x10) = uVar6 + 1;
  }
  *(undefined2 *)(pTVar5 + uVar6) = 0x2c;
LAB_011f9f58:
  pcVar2 = (char *)internal::DoubleToCString((internal *)param_1,auStack_b0,100);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 8),pcVar2);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

