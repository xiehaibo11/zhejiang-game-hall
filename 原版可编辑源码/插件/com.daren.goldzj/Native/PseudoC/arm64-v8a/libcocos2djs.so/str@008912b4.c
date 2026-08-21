
/* WARNING: Type propagation algorithm not settling */
/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::str(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
          (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x40);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    uVar7 = *(ulong *)(param_1 + 8);
    pbVar1 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar7 = (ulong)((byte)*param_1 >> 1);
    }
    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
              (this_00,(char *)pbVar1,uVar7);
  }
  *(undefined8 *)(this + 0x58) = 0;
  if ((*(uint *)(this + 0x60) >> 3 & 1) != 0) {
    if (((byte)*this_00 & 1) == 0) {
      pbVar3 = this + 0x41;
      pbVar6 = pbVar3 + ((byte)*this_00 >> 1);
    }
    else {
      pbVar3 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                 **)(this + 0x50);
      pbVar6 = pbVar3 + *(long *)(this + 0x48);
    }
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = pbVar6;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = pbVar3;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x18) = pbVar3;
    *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x20) = pbVar6;
  }
  if ((*(uint *)(this + 0x60) >> 4 & 1) == 0) {
    return;
  }
  bVar2 = *this_00;
  if (((byte)bVar2 & 1) == 0) {
    uVar7 = (ulong)((byte)bVar2 >> 1);
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x58) = this_00 + uVar7 + 1;
    uVar4 = 0x16;
    uVar5 = 0x16 - uVar7;
    if (uVar7 < 0x17 && uVar5 != 0) {
LAB_00891390:
      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                (this_00,uVar5,'\0');
      bVar2 = *this_00;
      goto joined_r0x008913a0;
    }
  }
  else {
    uVar7 = *(ulong *)(this + 0x48);
    *(ulong *)(this + 0x58) = *(long *)(this + 0x50) + uVar7;
    uVar4 = (*(ulong *)(this + 0x40) & 0xfffffffffffffffe) - 1;
    uVar5 = uVar4 - uVar7;
    if (uVar7 <= uVar4 && uVar5 != 0) goto LAB_00891390;
  }
  if (((byte)bVar2 & 1) == 0) {
    this_00[uVar4 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    *this_00 = SUB41((int)uVar4 << 1,0);
    bVar2 = *this_00;
  }
  else {
    *(undefined1 *)(*(long *)(this + 0x50) + uVar4) = 0;
    *(ulong *)(this + 0x48) = uVar4;
    bVar2 = *this_00;
  }
joined_r0x008913a0:
  if (((byte)bVar2 & 1) == 0) {
    pbVar3 = this + 0x41;
    uVar5 = (ulong)((byte)bVar2 >> 1);
  }
  else {
    uVar5 = *(ulong *)(this + 0x48);
    pbVar3 = *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x50);
  }
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x28) = pbVar3;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x30) = pbVar3;
  *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
   (this + 0x38) = pbVar3 + uVar5;
  if (((byte)this[0x60] & 3) != 0) {
    if (uVar7 >> 0x1f != 0) {
      uVar5 = (uVar7 - 0x80000000) / 0x7fffffff;
      pbVar3 = pbVar3 + uVar5 * 0x7fffffff + 0x7fffffff;
      uVar7 = (uVar7 - 0x7fffffff) + uVar5 * -0x7fffffff;
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x30) = pbVar3;
    }
    if (uVar7 != 0) {
      *(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
       (this + 0x30) = pbVar3 + (int)uVar7;
    }
  }
  return;
}

