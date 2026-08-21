
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__lookup_collatename<std::__ndk1::__wrap_iter<char_const*>>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_1,
          regex_traits<char> *this,__ndk1 *param_3,__ndk1 *param_4)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  uint uVar2;
  long lVar3;
  __ndk1 *p_Var4;
  __ndk1 *p_Var5;
  __ndk1 *p_Var6;
  __ndk1 *extraout_x1;
  ulong uVar7;
  __ndk1 *p_Var8;
  ulong uVar9;
  ulong uVar10;
  __ndk1 *p_Var11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  __ndk1 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar12 = (long)param_4 - (long)param_3;
  local_68 = 0;
  local_60 = (__ndk1 *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar12) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar12 < 0x17) {
    uVar2 = (int)uVar12 << 1;
    uVar7 = (ulong)uVar2;
                    /* try { // try from 00f2af54 to 0102b0c3 has its CatchHandler @ 00f2af54
                       catch() { ... } // from try @ 00f2af54 with catch @ 00f2af54
                       catch() { ... } // from try @ 00f2b0d4 with catch @ 00f2af54 */
    local_70 = (ulong)(byte)uVar2;
    p_Var6 = (__ndk1 *)((ulong)&local_70 | 1);
    p_Var5 = param_3;
  }
  else {
    uVar7 = uVar12 + 0x10 & 0xfffffffffffffff0;
    p_Var6 = operator_new(uVar7);
    uVar7 = uVar7 | 1;
    local_68 = uVar12;
    local_70 = uVar7;
    local_60 = p_Var6;
    p_Var5 = extraout_x1;
  }
  if (param_3 != param_4) {
    if ((0x1f < uVar12) && ((param_4 <= p_Var6 || (p_Var6 + uVar12 <= param_3)))) {
      uVar9 = uVar12 & 0xffffffffffffffe0;
      p_Var8 = param_3 + 0x10;
      p_Var11 = p_Var6 + uVar9;
      param_3 = param_3 + uVar9;
      p_Var6 = p_Var6 + 0x10;
      uVar10 = uVar9;
      do {
        p_Var4 = p_Var8 + -8;
        uVar13 = *(undefined8 *)(p_Var8 + -0x10);
        uVar15 = *(undefined8 *)(p_Var8 + 8);
        uVar14 = *(undefined8 *)p_Var8;
        p_Var8 = p_Var8 + 0x20;
        uVar10 = uVar10 - 0x20;
        *(undefined8 *)(p_Var6 + -8) = *(undefined8 *)p_Var4;
        *(undefined8 *)(p_Var6 + -0x10) = uVar13;
        *(undefined8 *)(p_Var6 + 8) = uVar15;
        *(undefined8 *)p_Var6 = uVar14;
        p_Var6 = p_Var6 + 0x20;
      } while (uVar10 != 0);
      p_Var6 = p_Var11;
      if (uVar9 == uVar12) goto LAB_00f2b008;
    }
    do {
      p_Var11 = param_3 + 1;
      p_Var8 = p_Var6 + 1;
      *p_Var6 = *param_3;
      p_Var6 = p_Var8;
      param_3 = p_Var11;
    } while (param_4 != p_Var11);
  }
LAB_00f2b008:
  *p_Var6 = (__ndk1)0x0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar12 = (ulong)((uint)uVar7 >> 1 & 0x7f);
  if ((uVar7 & 1) != 0) {
    uVar12 = local_68;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (uVar12 != 0) {
    p_Var8 = (__ndk1 *)((ulong)&local_70 | 1);
    p_Var6 = p_Var8;
    if ((uVar7 & 1) != 0) {
      p_Var6 = local_60;
    }
    __get_collation_name(p_Var6,(char *)p_Var5);
    *(undefined8 *)(param_1 + 8) = uStack_80;
    *(undefined8 *)param_1 = local_88;
    bVar1 = *param_1;
    *(undefined8 *)(param_1 + 0x10) = local_78;
    uVar12 = (ulong)((byte)bVar1 >> 1);
    if (((byte)bVar1 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + 8);
    }
    if (uVar12 == 0) {
      uVar12 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar12 = local_68;
      }
      if (uVar12 < 3) {
        p_Var6 = p_Var8;
        if ((local_70 & 1) != 0) {
          p_Var6 = local_60;
        }
        (**(code **)(**(long **)(this + 0x10) + 0x20))
                  (&local_88,*(long **)(this + 0x10),p_Var6,p_Var6 + uVar12);
        if (((byte)bVar1 & 1) == 0) {
          *(undefined2 *)param_1 = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x10) = 0;
                    /* try { // try from 00f2b0c4 to 0102b0d3 has its CatchHandler @ 00f2b178 */
          *(undefined8 *)(param_1 + 8) = 0;
          if (((byte)*param_1 & 1) != 0) {
            operator_delete(*(void **)(param_1 + 0x10));
                    /* try { // try from 00f2b0d4 to 0102b18b has its CatchHandler @ 00f2af54 */
            *(undefined8 *)param_1 = 0;
          }
        }
        *(undefined8 *)(param_1 + 8) = uStack_80;
        *(undefined8 *)param_1 = local_88;
        bVar1 = *param_1;
        *(undefined8 *)(param_1 + 0x10) = local_78;
        uVar12 = (ulong)((byte)bVar1 >> 1);
        if (((byte)bVar1 & 1) != 0) {
          uVar12 = *(ulong *)(param_1 + 8);
        }
        if ((uVar12 == 0xc) || (uVar12 == 1)) {
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_70 != param_1) {
            uVar12 = local_70 >> 1 & 0x7f;
            if ((local_70 & 1) != 0) {
              uVar12 = local_68;
              p_Var8 = local_60;
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (param_1,(char *)p_Var8,uVar12);
          }
        }
        else if (((byte)bVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00f2b0c4 with catch @ 00f2b178 */
          *(undefined2 *)param_1 = 0;
        }
        else {
          **(undefined1 **)(param_1 + 0x10) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
        }
      }
    }
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

