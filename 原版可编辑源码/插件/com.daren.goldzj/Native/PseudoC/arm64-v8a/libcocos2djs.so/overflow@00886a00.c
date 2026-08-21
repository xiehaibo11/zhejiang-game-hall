
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::overflow(int) */

ulong __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
overflow(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
        int param_1)

{
  long lVar1;
  long lVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  ulong uVar4;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  long lVar10;
  long lVar11;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_68;
  
  if (param_1 == -1) {
    return 0;
  }
  pbVar9 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x30);
  pbVar5 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x38);
  lVar1 = *(long *)(this + 0x10);
  lVar2 = *(long *)(this + 0x18);
  if (pbVar9 != pbVar5) {
    pbVar7 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x58);
    goto LAB_00886b20;
  }
  if (((byte)this[0x60] >> 4 & 1) == 0) {
    return 0xffffffff;
  }
  lVar10 = *(long *)(this + 0x58);
  lVar11 = *(long *)(this + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x40);
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::push_back
            (this_00,'\0');
  bVar3 = *this_00;
  if (((byte)bVar3 & 1) == 0) {
    uVar6 = 0x16;
    uVar4 = 0x16 - (ulong)((byte)bVar3 >> 1);
    if ((ulong)((byte)bVar3 >> 1) < 0x17 && uVar4 != 0) goto LAB_00886acc;
LAB_00886aa0:
    if (((byte)bVar3 & 1) == 0) {
      this_00[uVar6 + 1] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
      *this_00 = SUB41((int)uVar6 << 1,0);
    }
    else {
      *(undefined1 *)(*(long *)(this + 0x50) + uVar6) = 0;
      *(ulong *)(this + 0x48) = uVar6;
    }
  }
  else {
    uVar6 = (*(ulong *)(this + 0x40) & 0xfffffffffffffffe) - 1;
    uVar4 = uVar6 - *(ulong *)(this + 0x48);
    if (uVar6 < *(ulong *)(this + 0x48) || uVar4 == 0) goto LAB_00886aa0;
LAB_00886acc:
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
              (this_00,uVar4,'\0');
  }
  if (((byte)*this_00 & 1) == 0) {
    pbVar8 = this + 0x41;
    uVar4 = (ulong)((byte)*this_00 >> 1);
  }
  else {
    uVar4 = *(ulong *)(this + 0x48);
    pbVar8 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x50);
  }
  pbVar5 = pbVar8 + uVar4;
  pbVar9 = pbVar8 + ((long)pbVar9 - lVar11);
  pbVar7 = pbVar8 + (lVar10 - lVar11);
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x30) = pbVar9;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x38) = pbVar5;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x28) = pbVar8;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x58) = pbVar7;
LAB_00886b20:
  local_68 = pbVar9 + 1;
  pbVar8 = this + 0x58;
  if (pbVar7 <= local_68) {
    pbVar8 = (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_68;
  }
  pbVar8 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            pbVar8;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x58) = pbVar8;
  if (((byte)this[0x60] >> 3 & 1) != 0) {
    if (((byte)this[0x40] & 1) == 0) {
      pbVar7 = this + 0x41;
    }
    else {
      pbVar7 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 **)(this + 0x50);
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar7;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x18) = pbVar7 + (lVar2 - lVar1);
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x20) = pbVar8;
  }
  if (pbVar9 != pbVar5) {
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x30) = local_68;
    *pbVar9 = SUB41(param_1,0);
    return (ulong)(param_1 & 0xff);
  }
                    /* WARNING: Could not recover jumptable at 0x00886bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*(long *)this + 0x68))(this,param_1 & 0xff);
  return uVar4;
}

