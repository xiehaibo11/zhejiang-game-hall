
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__lookup_collatename<char const*>(char const*, char const*,
   char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__lookup_collatename<char_const*>
          (regex_traits<char> *this,char *param_1,char *param_2,char param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  __ndk1 *p_Var6;
  char *extraout_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  ulong uVar7;
  __ndk1 *p_Var8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  __ndk1 *p_Var12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  __ndk1 *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  uVar13 = (long)param_2 - (long)param_1;
  local_68 = 0;
  local_60 = (__ndk1 *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar13) {
                    /* WARNING: Subroutine does not return */
    __basic_string_common<true>::__throw_length_error();
  }
  if (uVar13 < 0x17) {
    uVar2 = (int)uVar13 << 1;
    uVar7 = (ulong)uVar2;
    local_70 = (ulong)(byte)uVar2;
    p_Var6 = (__ndk1 *)((ulong)&local_70 | 1);
    pcVar5 = param_1;
  }
  else {
    uVar7 = uVar13 + 0x10 & 0xfffffffffffffff0;
    p_Var6 = operator_new(uVar7);
    uVar7 = uVar7 | 1;
    local_68 = uVar13;
    local_70 = uVar7;
    local_60 = p_Var6;
    pcVar5 = extraout_x1;
  }
  if (param_1 != param_2) {
    p_Var12 = p_Var6;
    if (0x1f < uVar13) {
      uVar9 = uVar13 & 0xffffffffffffffe0;
      p_Var12 = p_Var6 + 0x10;
      p_Var6 = p_Var6 + uVar9;
      pcVar10 = param_1 + 0x10;
      uVar11 = uVar9;
      do {
        pcVar4 = pcVar10 + -8;
        uVar14 = *(undefined8 *)(pcVar10 + -0x10);
        uVar16 = *(undefined8 *)(pcVar10 + 8);
        uVar15 = *(undefined8 *)pcVar10;
        uVar11 = uVar11 - 0x20;
        pcVar10 = pcVar10 + 0x20;
        *(undefined8 *)(p_Var12 + -8) = *(undefined8 *)pcVar4;
        *(undefined8 *)(p_Var12 + -0x10) = uVar14;
        *(undefined8 *)(p_Var12 + 8) = uVar16;
        *(undefined8 *)p_Var12 = uVar15;
        p_Var12 = p_Var12 + 0x20;
      } while (uVar11 != 0);
      p_Var12 = p_Var6;
      param_1 = (char *)(param_1 + uVar9);
      if (uVar13 == uVar9) goto LAB_00eaeea8;
    }
    do {
      p_Var8 = (__ndk1 *)(param_1 + 1);
      p_Var6 = p_Var12 + 1;
      *p_Var12 = (__ndk1)*param_1;
      p_Var12 = p_Var6;
      param_1 = (char *)p_Var8;
    } while ((__ndk1 *)param_2 != p_Var8);
  }
LAB_00eaeea8:
  *p_Var6 = (__ndk1)0x0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  uVar13 = (ulong)((uint)uVar7 >> 1 & 0x7f);
  if ((uVar7 & 1) != 0) {
    uVar13 = local_68;
  }
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (uVar13 != 0) {
    p_Var12 = (__ndk1 *)((ulong)&local_70 | 1);
    p_Var6 = p_Var12;
    if ((uVar7 & 1) != 0) {
      p_Var6 = local_60;
    }
    __get_collation_name(p_Var6,pcVar5);
    *(undefined8 *)(in_x8 + 8) = uStack_80;
    *(undefined8 *)in_x8 = local_88;
    bVar1 = *in_x8;
    *(undefined8 *)(in_x8 + 0x10) = local_78;
    uVar13 = (ulong)((byte)bVar1 >> 1);
    if (((byte)bVar1 & 1) != 0) {
      uVar13 = *(ulong *)(in_x8 + 8);
    }
    if (uVar13 == 0) {
      uVar13 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar13 = local_68;
      }
      if (uVar13 < 3) {
        p_Var6 = p_Var12;
        if ((local_70 & 1) != 0) {
          p_Var6 = local_60;
        }
        (**(code **)(**(long **)(this + 0x10) + 0x20))
                  (&local_88,*(long **)(this + 0x10),p_Var6,p_Var6 + uVar13);
        if (((byte)bVar1 & 1) == 0) {
          *(undefined2 *)in_x8 = 0;
        }
        else {
          **(undefined1 **)(in_x8 + 0x10) = 0;
          *(undefined8 *)(in_x8 + 8) = 0;
          if (((byte)*in_x8 & 1) != 0) {
            operator_delete(*(void **)(in_x8 + 0x10));
            *(undefined8 *)in_x8 = 0;
          }
        }
        *(undefined8 *)(in_x8 + 8) = uStack_80;
        *(undefined8 *)in_x8 = local_88;
        bVar1 = *in_x8;
        *(undefined8 *)(in_x8 + 0x10) = local_78;
        uVar13 = (ulong)((byte)bVar1 >> 1);
        if (((byte)bVar1 & 1) != 0) {
          uVar13 = *(ulong *)(in_x8 + 8);
        }
        if ((uVar13 == 0xc) || (uVar13 == 1)) {
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_70 != in_x8) {
            uVar13 = local_70 >> 1 & 0x7f;
            if ((local_70 & 1) != 0) {
              uVar13 = local_68;
              p_Var12 = local_60;
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (in_x8,(char *)p_Var12,uVar13);
          }
        }
        else if (((byte)bVar1 & 1) == 0) {
          *(undefined2 *)in_x8 = 0;
        }
        else {
          **(undefined1 **)(in_x8 + 0x10) = 0;
          *(undefined8 *)(in_x8 + 8) = 0;
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

