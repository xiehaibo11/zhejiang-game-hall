
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   std::__ndk1::regex_traits<char>::__lookup_collatename<char*>(char*, char*, char) const */

void __thiscall
std::__ndk1::regex_traits<char>::__lookup_collatename<char*>
          (regex_traits<char> *this,char *param_1,char *param_2,char param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  __ndk1 *p_Var5;
  char *extraout_x1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *in_x8;
  __ndk1 *p_Var6;
  ulong uVar7;
  char *pcVar8;
  __ndk1 *p_Var9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  __ndk1 *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar11 = (long)param_2 - (long)param_1;
  local_70 = 0;
  local_68 = 0;
  local_60 = (__ndk1 *)0x0;
  if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar11 < 0x17) {
    local_70 = (ulong)(byte)((int)uVar11 << 1);
    p_Var5 = (__ndk1 *)((ulong)&local_70 | 1);
    pcVar4 = param_1;
  }
  else {
    uVar10 = uVar11 + 0x10 & 0xfffffffffffffff0;
    p_Var5 = operator_new(uVar10);
    local_70 = uVar10 | 1;
    local_68 = uVar11;
    local_60 = p_Var5;
    pcVar4 = extraout_x1;
  }
  if (param_1 == param_2) goto LAB_008671e0;
  p_Var9 = p_Var5;
  if (uVar11 < 0x20) {
LAB_008671cc:
    do {
      p_Var6 = (__ndk1 *)(param_1 + 1);
      *p_Var9 = (__ndk1)*param_1;
      param_1 = (char *)p_Var6;
      p_Var9 = p_Var9 + 1;
    } while ((__ndk1 *)param_2 != p_Var6);
  }
  else {
    uVar7 = uVar11 & 0xffffffffffffffe0;
    p_Var9 = p_Var5 + 0x10;
    pcVar8 = param_1 + 0x10;
    uVar10 = uVar7;
    do {
      pcVar3 = pcVar8 + -8;
      uVar12 = *(undefined8 *)(pcVar8 + -0x10);
      uVar14 = *(undefined8 *)(pcVar8 + 8);
      uVar13 = *(undefined8 *)pcVar8;
      uVar10 = uVar10 - 0x20;
      pcVar8 = pcVar8 + 0x20;
      *(undefined8 *)(p_Var9 + -8) = *(undefined8 *)pcVar3;
      *(undefined8 *)(p_Var9 + -0x10) = uVar12;
      *(undefined8 *)(p_Var9 + 8) = uVar14;
      *(undefined8 *)p_Var9 = uVar13;
      p_Var9 = p_Var9 + 0x20;
    } while (uVar10 != 0);
    param_1 = (char *)(param_1 + uVar7);
    p_Var9 = p_Var5 + uVar7;
    if (uVar11 != uVar7) goto LAB_008671cc;
  }
  p_Var5 = p_Var5 + uVar11;
LAB_008671e0:
  *p_Var5 = (__ndk1)0x0;
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  uVar11 = local_70 >> 1 & 0x7f;
  if ((local_70 & 1) != 0) {
    uVar11 = local_68;
  }
  if (uVar11 != 0) {
    p_Var9 = (__ndk1 *)((ulong)&local_70 | 1);
    p_Var5 = p_Var9;
    if ((local_70 & 1) != 0) {
      p_Var5 = local_60;
    }
    __get_collation_name(p_Var5,pcVar4);
    *(undefined8 *)(in_x8 + 8) = uStack_80;
    *(undefined8 *)in_x8 = local_88;
    bVar1 = *in_x8;
    *(undefined8 *)(in_x8 + 0x10) = local_78;
    uVar11 = (ulong)((byte)bVar1 >> 1);
    if (((byte)bVar1 & 1) != 0) {
      uVar11 = *(ulong *)(in_x8 + 8);
    }
    if (uVar11 == 0) {
      uVar11 = local_70 >> 1 & 0x7f;
      if ((local_70 & 1) != 0) {
        uVar11 = local_68;
      }
      if (uVar11 < 3) {
        p_Var5 = p_Var9;
        if ((local_70 & 1) != 0) {
          p_Var5 = local_60;
        }
        (**(code **)(**(long **)(this + 0x10) + 0x20))
                  (&local_88,*(long **)(this + 0x10),p_Var5,p_Var5 + uVar11);
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
        uVar11 = (ulong)((byte)bVar1 >> 1);
        if (((byte)bVar1 & 1) != 0) {
          uVar11 = *(ulong *)(in_x8 + 8);
        }
        if ((uVar11 == 0xc) || (uVar11 == 1)) {
          if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_70 != in_x8) {
            uVar11 = local_70 >> 1 & 0x7f;
            if ((local_70 & 1) != 0) {
              uVar11 = local_68;
              p_Var9 = local_60;
            }
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (in_x8,(char *)p_Var9,uVar11);
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
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

