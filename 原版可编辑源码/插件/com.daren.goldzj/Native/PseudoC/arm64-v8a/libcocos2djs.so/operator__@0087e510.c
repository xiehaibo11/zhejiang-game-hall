
/* std::__ndk1::regex_iterator<std::__ndk1::__wrap_iter<char const*>, char,
   std::__ndk1::regex_traits<char> >::TEMPNAMEPLACEHOLDERVALUE() */

regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>> *
__thiscall
std::__ndk1::
regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>::
operator++(regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
           *this)

{
  regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>> *prVar1
  ;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  bool bVar6;
  regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>> *prVar7
  ;
  match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
  *pmVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined7 local_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pmVar8 = (match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
            *)(this + 0x20);
  prVar7 = *(regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
             **)pmVar8;
  uVar4 = *(uint *)(this + 0x18);
  uVar11 = uVar4 | 0x800;
  *(uint *)(this + 0x18) = uVar11;
  prVar1 = this + 0x38;
  if (*(regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
        **)(this + 0x28) != prVar7) {
    prVar1 = prVar7;
  }
  lVar2 = *(long *)prVar1;
  lVar9 = *(long *)(prVar1 + 8);
  if (lVar2 == lVar9) {
    lVar10 = *(long *)(this + 8);
    if (lVar10 != lVar2) {
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_af = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_c1 = 0;
      local_d0 = 0;
      uStack_c9 = 0;
      uStack_b8 = 0;
      local_b7 = 0;
      uStack_c0 = 0;
      bVar6 = basic_regex<char,std::__ndk1::regex_traits<char>>::
              __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                        (*(basic_regex<char,std::__ndk1::regex_traits<char>> **)(this + 0x10),lVar2,
                         lVar10,&local_d0,uVar4 | 0x860);
      match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
      ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                (pmVar8,lVar9,lVar10,&local_d0,1);
      if ((void *)CONCAT17(uStack_c9,local_d0) != (void *)0x0) {
        uStack_c8 = local_d0;
        uStack_c1 = uStack_c9;
        operator_delete((void *)CONCAT17(uStack_c9,local_d0));
      }
      if (bVar6) goto LAB_0087e61c;
      uVar11 = *(uint *)(this + 0x18);
      lVar9 = lVar2 + 1;
      goto LAB_0087e56c;
    }
  }
  else {
LAB_0087e56c:
    uVar3 = *(undefined8 *)(this + 8);
    *(uint *)(this + 0x18) = uVar11 | 0x80;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_af = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_c1 = 0;
    local_d0 = 0;
    uStack_c9 = 0;
    uStack_b8 = 0;
    local_b7 = 0;
    uStack_c0 = 0;
    bVar6 = basic_regex<char,std::__ndk1::regex_traits<char>>::
            __search<std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
                      (*(basic_regex<char,std::__ndk1::regex_traits<char>> **)(this + 0x10),lVar9,
                       uVar3,&local_d0);
    match_results<std::__ndk1::__wrap_iter<char_const*>,std::__ndk1::allocator<std::__ndk1::sub_match<std::__ndk1::__wrap_iter<char_const*>>>>
    ::__assign<char_const*,std::__ndk1::allocator<std::__ndk1::sub_match<char_const*>>>
              (pmVar8,lVar9,uVar3,&local_d0,uVar11 >> 0xb & 1);
    if ((void *)CONCAT17(uStack_c9,local_d0) != (void *)0x0) {
      uStack_c8 = local_d0;
      uStack_c1 = uStack_c9;
      operator_delete((void *)CONCAT17(uStack_c9,local_d0));
    }
    if (bVar6) goto LAB_0087e61c;
    prVar7 = *(regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
               **)pmVar8;
  }
  if (prVar7 != (regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
                 *)0x0) {
    *(regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>> **)
     (this + 0x28) = prVar7;
    operator_delete(prVar7);
    *(undefined8 *)pmVar8 = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  this[0x48] = (regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
                )0x0;
  this[0x60] = (regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
                )0x0;
  this[0x78] = (regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
                )0x0;
  this[0x80] = (regex_iterator<std::__ndk1::__wrap_iter<char_const*>,char,std::__ndk1::regex_traits<char>>
                )0x0;
  *(undefined8 *)pmVar8 = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(ulong *)(this + 0x88) = CONCAT71(uStack_c8,uStack_c9);
  *(ulong *)(this + 0x81) = CONCAT17(uStack_c9,local_d0);
LAB_0087e61c:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

