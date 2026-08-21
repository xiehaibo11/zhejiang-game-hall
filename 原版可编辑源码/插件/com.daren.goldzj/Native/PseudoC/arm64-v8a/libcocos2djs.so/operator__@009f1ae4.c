
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
  undefined4 local_40;
  undefined2 local_3c;
  regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> local_3a;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009f1b08 to 00af1b37 has its CatchHandler @ 009f1b08
                       catch() { ... } // from try @ 009f1b08 with catch @ 009f1b08
                       catch() { ... } // from try @ 009f1b40 with catch @ 009f1b08
                       catch() { ... } // from try @ 009f1c94 with catch @ 009f1b08
                       catch() { ... } // from try @ 009f1cf8 with catch @ 009f1b08
                       catch() { ... } // from try @ 009f1fac with catch @ 009f1b08
                       catch() { ... } // from try @ 009f1ff4 with catch @ 009f1b08 */
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
                    /* try { // try from 009f1bd0 to 00af1c17 has its CatchHandler @ 009f20f0 */
    if (lVar9 != *(long *)(this + 8)) {
      bVar4 = basic_regex<char,std::__ndk1::regex_traits<char>>::
              __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                        (*(basic_regex<char,std::__ndk1::regex_traits<char>> **)(this + 0x10),lVar9,
                         *(long *)(this + 8),prVar8,uVar2 | 0x860);
      if (bVar4) goto LAB_009f1ba8;
      uVar7 = *(uint *)(this + 0x18);
      lVar9 = lVar9 + 1;
      goto LAB_009f1b38;
    }
  }
  else {
LAB_009f1b38:
                    /* try { // try from 009f1b38 to 00af1b3f has its CatchHandler @ 009f20d0 */
                    /* try { // try from 009f1b40 to 00af1bcf has its CatchHandler @ 009f1b08 */
    *(uint *)(this + 0x18) = uVar7 | 0x80;
    bVar4 = basic_regex<char,std::__ndk1::regex_traits<char>>::
            __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                      (*(basic_regex<char,std::__ndk1::regex_traits<char>> **)(this + 0x10),lVar9,
                       *(undefined8 *)(this + 8),prVar8);
    if (bVar4) goto LAB_009f1ba8;
    prVar5 = *(regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> **)prVar8;
  }
  if (prVar5 != (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> *)0x0) {
    *(regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>> **)(this + 0x28) = prVar5;
    operator_delete(prVar5);
    *(undefined8 *)prVar8 = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  this[0x80] = (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>)0x0;
  *(undefined8 *)(this + 0x41) = 0;
  *(undefined8 *)(this + 0x39) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)prVar8 = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x60] = (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>)0x0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x78] = (regex_iterator<char_const*,char,std::__ndk1::regex_traits<char>>)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  this[0x87] = local_3a;
  *(undefined2 *)(this + 0x85) = local_3c;
  *(undefined4 *)(this + 0x81) = local_40;
LAB_009f1ba8:
  if (*(long *)(lVar3 + 0x28) != lVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

