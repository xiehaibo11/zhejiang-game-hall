
/* std::__ndk1::enable_if<__is_forward_iterator<char
   const*>::value&&__libcpp_string_gets_noexcept_iterator<char const*>::value,
   std::__ndk1::__wrap_iter<char*> >::type std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >::insert<char
   const*>(std::__ndk1::__wrap_iter<char const*>, char const*, char const*) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
insert<char_const*>(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *this,long param_2,
                   basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                   *param_3,basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            *param_4)

{
  long lVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_80;
  ulong local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  bVar2 = *this;
  if (((byte)bVar2 & 1) == 0) {
    pbVar10 = this + 1;
  }
  else {
    pbVar10 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
  }
  uVar4 = (long)param_4 - (long)param_3;
  uVar11 = param_2 - (long)pbVar10;
  if (uVar4 != 0) {
    if (((byte)bVar2 & 1) == 0) {
      pbVar12 = this + 1;
      uVar9 = (ulong)((byte)bVar2 >> 1);
    }
    else {
      uVar9 = *(ulong *)(this + 8);
      pbVar12 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
    }
    if ((pbVar12 <= param_3) && (param_3 < pbVar12 + uVar9)) {
      local_78 = 0;
      local_70 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 0x0;
      local_80 = 0;
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        __basic_string_common<true>::__throw_length_error();
      }
      if (uVar4 < 0x17) {
        uVar3 = (int)uVar4 << 1;
        uVar11 = (ulong)uVar3;
                    /* try { // try from 00df8ef8 to 00ef8efb has its CatchHandler @ 00df8fa0 */
        local_80 = (ulong)(byte)uVar3;
        pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  ((ulong)&local_80 | 1);
      }
      else {
                    /* try { // try from 00df8f7c to 00ef8f83 has its CatchHandler @ 00df8fec */
        uVar11 = uVar4 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00df8f84 to 00ef8f8b has its CatchHandler @ 00df8f8c */
        pbVar10 = operator_new(uVar11);
                    /* catch() { ... } // from try @ 00df8c30 with catch @ 00df8f8c
                       catch() { ... } // from try @ 00df8f84 with catch @ 00df8f8c
                       try { // try from 00df8f8c to 00ef9103 has its CatchHandler @ 00df7f60 */
        uVar11 = uVar11 | 1;
        local_78 = uVar4;
        local_80 = uVar11;
        local_70 = pbVar10;
      }
      if (param_3 != param_4) {
        pbVar12 = pbVar10;
        if (0x1f < uVar4) {
                    /* catch() { ... } // from try @ 00df8b14 with catch @ 00df8fa4 */
          uVar7 = uVar4 & 0xffffffffffffffe0;
                    /* catch() { ... } // from try @ 00df8a84 with catch @ 00df8fa8 */
          pbVar12 = pbVar10 + 0x10;
                    /* catch() { ... } // from try @ 00df8bfc with catch @ 00df8fac */
          pbVar10 = pbVar10 + uVar7;
          pbVar8 = param_3 + 0x10;
          uVar9 = uVar7;
          do {
            pbVar6 = pbVar8 + -8;
            uVar13 = *(undefined8 *)(pbVar8 + -0x10);
            uVar15 = *(undefined8 *)(pbVar8 + 8);
            uVar14 = *(undefined8 *)pbVar8;
            uVar9 = uVar9 - 0x20;
            pbVar8 = pbVar8 + 0x20;
            *(undefined8 *)(pbVar12 + -8) = *(undefined8 *)pbVar6;
            *(undefined8 *)(pbVar12 + -0x10) = uVar13;
            *(undefined8 *)(pbVar12 + 8) = uVar15;
            *(undefined8 *)pbVar12 = uVar14;
                    /* catch() { ... } // from try @ 00df8e10 with catch @ 00df8fcc */
            pbVar12 = pbVar12 + 0x20;
                    /* catch() { ... } // from try @ 00df81c4 with catch @ 00df8fd0 */
          } while (uVar9 != 0);
                    /* catch() { ... } // from try @ 00df80e4 with catch @ 00df8fd4 */
          pbVar12 = pbVar10;
          param_3 = param_3 + uVar7;
                    /* catch() { ... } // from try @ 00df7fac with catch @ 00df8fd8 */
          if (uVar4 == uVar7) goto LAB_00df8fec;
        }
        do {
          pbVar8 = param_3 + 1;
          pbVar10 = pbVar12 + 1;
          *pbVar12 = *param_3;
          pbVar12 = pbVar10;
          param_3 = pbVar8;
                    /* catch() { ... } // from try @ 00df88e4 with catch @ 00df8fe8 */
        } while (param_4 != pbVar8);
      }
LAB_00df8fec:
                    /* catch() { ... } // from try @ 00df8b90 with catch @ 00df8fec
                       catch() { ... } // from try @ 00df8c1c with catch @ 00df8fec
                       catch() { ... } // from try @ 00df8c84 with catch @ 00df8fec
                       catch() { ... } // from try @ 00df8f7c with catch @ 00df8fec */
      *pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0
      ;
                    /* catch() { ... } // from try @ 00df814c with catch @ 00df8ff0
                       catch() { ... } // from try @ 00df829c with catch @ 00df8ff0 */
                    /* catch() { ... } // from try @ 00df8f14 with catch @ 00df8ff4 */
                    /* catch() { ... } // from try @ 00df8160 with catch @ 00df8ff8 */
      uVar4 = (ulong)((uint)uVar11 >> 1 & 0x7f);
      pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                ((ulong)&local_80 | 1);
      if ((uVar11 & 1) != 0) {
        uVar4 = local_78;
        pbVar10 = local_70;
      }
                    /* catch() { ... } // from try @ 00df8940 with catch @ 00df9008 */
                    /* catch() { ... } // from try @ 00df8db4 with catch @ 00df900c */
      this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             insert<char_const*>(this,param_2,pbVar10,pbVar10 + uVar4);
                    /* catch() { ... } // from try @ 00df883c with catch @ 00df901c */
                    /* catch() { ... } // from try @ 00df86f8 with catch @ 00df9020 */
                    /* catch() { ... } // from try @ 00df84fc with catch @ 00df9024 */
      if ((local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      goto LAB_00df9104;
    }
    if (((byte)bVar2 & 1) == 0) {
      uVar9 = (ulong)((byte)bVar2 >> 1);
      uVar7 = 0x16;
    }
    else {
      uVar9 = *(ulong *)(this + 8);
      uVar7 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
    }
    if (uVar7 - uVar9 < uVar4) {
                    /* try { // try from 00df8f5c to 00ef8f7b has its CatchHandler @ 00df7f60 */
      __grow_by(this,uVar7,(uVar9 + uVar4) - uVar7,uVar9,uVar11,0,uVar4);
      pbVar12 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
    }
    else {
      if (((byte)bVar2 & 1) == 0) {
        pbVar12 = this + 1;
      }
      else {
        pbVar12 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(this + 0x10);
      }
                    /* catch() { ... } // from try @ 00df8898 with catch @ 00df903c */
      if (uVar9 - uVar11 != 0) {
                    /* catch() { ... } // from try @ 00df850c with catch @ 00df9040 */
                    /* catch() { ... } // from try @ 00df8528 with catch @ 00df9044 */
                    /* catch() { ... } // from try @ 00df87e0 with catch @ 00df9048 */
        memmove(pbVar12 + uVar11 + uVar4,pbVar12 + uVar11,uVar9 - uVar11);
      }
    }
                    /* catch() { ... } // from try @ 00df8614 with catch @ 00df904c */
                    /* catch() { ... } // from try @ 00df8504 with catch @ 00df9050
                       catch() { ... } // from try @ 00df8608 with catch @ 00df9050 */
    lVar1 = uVar9 + uVar4;
                    /* catch() { ... } // from try @ 00df87f8 with catch @ 00df9054 */
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
                    /* catch() { ... } // from try @ 00df878c with catch @ 00df906c */
    pbVar12[lVar1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    if (param_3 != param_4) {
      pbVar8 = pbVar12 + uVar11;
      if ((0x1f < uVar4) &&
         ((param_4 <= pbVar8 ||
          (pbVar12 + (long)(param_4 + ((param_2 - (long)param_3) - (long)pbVar10)) <= param_3)))) {
        uVar7 = uVar4 & 0xffffffffffffffe0;
        pbVar10 = param_3 + 0x10;
        pbVar12 = pbVar12 + uVar11 + 0x10;
        uVar9 = uVar7;
        do {
          pbVar6 = pbVar10 + -8;
          uVar13 = *(undefined8 *)(pbVar10 + -0x10);
          uVar15 = *(undefined8 *)(pbVar10 + 8);
          uVar14 = *(undefined8 *)pbVar10;
          pbVar10 = pbVar10 + 0x20;
          uVar9 = uVar9 - 0x20;
          *(undefined8 *)(pbVar12 + -8) = *(undefined8 *)pbVar6;
          *(undefined8 *)(pbVar12 + -0x10) = uVar13;
          *(undefined8 *)(pbVar12 + 8) = uVar15;
          *(undefined8 *)pbVar12 = uVar14;
          pbVar12 = pbVar12 + 0x20;
        } while (uVar9 != 0);
        pbVar8 = pbVar8 + uVar7;
        param_3 = param_3 + uVar7;
        if (uVar4 == uVar7) goto LAB_00df90ec;
      }
      do {
        pbVar10 = param_3 + 1;
        *pbVar8 = *param_3;
        pbVar8 = pbVar8 + 1;
        param_3 = pbVar10;
      } while (param_4 != pbVar10);
    }
  }
LAB_00df90ec:
  if (((byte)*this & 1) == 0) {
    this = this + 1;
  }
  else {
    this = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  }
  this = this + uVar11;
LAB_00df9104:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}

