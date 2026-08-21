
/* cocos2d::Properties::clone() */

Properties * __thiscall cocos2d::Properties::clone(Properties *this)

{
  long *plVar1;
  Properties *pPVar2;
  long lVar3;
  long lVar4;
  Properties *this_00;
  long lVar5;
  ulong uVar6;
  Properties *local_50;
  long local_48;
  
                    /* try { // try from 00faf664 to 010af66b has its CatchHandler @ 00faf684 */
  lVar4 = tpidr_el0;
                    /* try { // try from 00faf66c to 010af697 has its CatchHandler @ 00faf64c */
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00faf664 with catch @ 00faf684 */
  this_00 = operator_new(0xb0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Properties *)0x0) {
    Properties(this_00);
  }
  if (this_00 != this) {
    uVar6 = *(ulong *)(this + 0x18);
    pPVar2 = *(Properties **)(this + 0x20);
    if (((byte)this[0x10] & 1) == 0) {
      pPVar2 = this + 0x11;
      uVar6 = (ulong)((byte)this[0x10] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x10),(char *)pPVar2,uVar6);
    uVar6 = (ulong)((byte)this[0x28] >> 1);
    pPVar2 = this + 0x29;
    if (((byte)this[0x28] & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x30);
      pPVar2 = *(Properties **)(this + 0x38);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x28),(char *)pPVar2,uVar6);
    uVar6 = (ulong)((byte)this[0x40] >> 1);
    pPVar2 = this + 0x41;
    if (((byte)this[0x40] & 1) != 0) {
      uVar6 = *(ulong *)(this + 0x48);
      pPVar2 = *(Properties **)(this + 0x50);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_00 + 0x40),(char *)pPVar2,uVar6);
    std::__ndk1::
    vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
    assign<cocos2d::Properties::Property*>
              ((vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
                *)(this_00 + 0x58),*(Property **)(this + 0x58),*(Property **)(this + 0x60));
  }
  *(undefined8 *)(this_00 + 0x70) = *(undefined8 *)(this_00 + 0x60);
  setDirectoryPath(this_00,*(basic_string **)(this + 0xa0));
  lVar5 = *(long *)(this + 0x78);
  lVar3 = *(long *)(this + 0x80) - lVar5;
  if (lVar3 != 0) {
    uVar6 = 0;
    while( true ) {
      local_50 = (Properties *)clone(*(Properties **)(lVar5 + uVar6 * 8));
      plVar1 = *(long **)(this_00 + 0x80);
      if (plVar1 == *(long **)(this_00 + 0x88)) {
        std::__ndk1::vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>>::
        __push_back_slow_path<cocos2d::Properties*const&>
                  ((vector<cocos2d::Properties*,std::__ndk1::allocator<cocos2d::Properties*>> *)
                   (this_00 + 0x78),&local_50);
      }
      else {
        *plVar1 = (long)local_50;
        *(long **)(this_00 + 0x80) = plVar1 + 1;
      }
      uVar6 = uVar6 + 1;
      *(Properties **)(local_50 + 0xa8) = this_00;
      if ((ulong)(lVar3 >> 3) <= uVar6) break;
      lVar5 = *(long *)(this + 0x78);
    }
  }
  *(undefined8 *)(this_00 + 0x90) = *(undefined8 *)(this_00 + 0x80);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

