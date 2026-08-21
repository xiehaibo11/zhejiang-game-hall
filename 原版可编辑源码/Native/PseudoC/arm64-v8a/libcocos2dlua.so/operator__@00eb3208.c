
/* std::__ndk1::regex_iterator<char const*, char, std::__ndk1::regex_traits<char>
   >::TEMPNAMEPLACEHOLDERVALUE() */

regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> * __thiscall
std::__ndk1::regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>::operator++
          (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *this)

{
  regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *prVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *prVar5;
  long lVar6;
  uint uVar7;
  regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *prVar8;
  long lVar9;
  undefined4 uStack_40;
  undefined3 uStack_3c;
  
                    /* try { // try from 00eb3208 to 00fb327f has its CatchHandler @ 00eb3208
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3208 with catch @ 00eb3208
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3474 with catch @ 00eb3208
                       catch(type#1 @ 00000000) { ... } // from try @ 00eb3508 with catch @ 00eb3208
                        */
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  prVar8 = this + 0x20;
  prVar5 = *(regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> **)prVar8;
  uVar2 = *(uint *)(this + 0x18);
  uVar7 = uVar2 | 0x800;
  *(uint *)(this + 0x18) = uVar7;
  prVar1 = this + 0x38;
  if (*(regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> **)(this + 0x28) != prVar5)
  {
    prVar1 = prVar5;
  }
  lVar9 = *(long *)(prVar1 + 8);
  if (*(long *)prVar1 == lVar9) {
    if (lVar9 != *(long *)(this + 8)) {
      bVar4 = basic_regex<char,std::__ndk1::regex_traits<char>>::
              __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                        (*(basic_regex<char,std::__ndk1::regex_traits<char>> **)(this + 0x10),lVar9,
                         *(long *)(this + 8),prVar8,uVar2 | 0x860);
      if (bVar4) goto LAB_00eb32c4;
      uVar7 = *(uint *)(this + 0x18);
      lVar9 = lVar9 + 1;
      goto LAB_00eb325c;
    }
  }
  else {
LAB_00eb325c:
    *(uint *)(this + 0x18) = uVar7 | 0x80;
    bVar4 = basic_regex<char,std::__ndk1::regex_traits<char>>::
            __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                      (*(basic_regex<char,std::__ndk1::regex_traits<char>> **)(this + 0x10),lVar9,
                       *(undefined8 *)(this + 8),prVar8);
    if (bVar4) goto LAB_00eb32c4;
    prVar5 = *(regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> **)prVar8;
  }
                    /* try { // try from 00eb3320 to 00fb3323 has its CatchHandler @ 00eb34ec */
  if (prVar5 != (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *)0x0) {
                    /* try { // try from 00eb3280 to 00fb3287 has its CatchHandler @ 00eb34d8 */
    *(regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> **)(this + 0x28) = prVar5;
    operator_delete(prVar5);
    *(undefined8 *)prVar8 = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  this[0x80] = (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>)0x0;
                    /* try { // try from 00eb3298 to 00fb329b has its CatchHandler @ 00eb352c */
  *(undefined8 *)(this + 0x41) = 0;
  *(undefined8 *)(this + 0x39) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)prVar8 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x60] = (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  this[0x78] = (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>)0x0;
  *(undefined8 *)(this + 0x88) = 0;
  *(uint *)(this + 0x84) = CONCAT31(uStack_3c,uStack_40._3_1_);
  *(undefined4 *)(this + 0x81) = uStack_40;
LAB_00eb32c4:
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

