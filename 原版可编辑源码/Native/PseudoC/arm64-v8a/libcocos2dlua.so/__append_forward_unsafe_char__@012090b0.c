
/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__append_forward_unsafe<char*>(char*, char*) */

basic_string * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__append_forward_unsafe<char*>
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,char *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  ulong uVar12;
  char *pcVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar15 = (ulong)((byte)bVar1 >> 1);
    uVar8 = 0x16;
    uVar9 = (ulong)(byte)bVar1;
  }
  else {
    uVar9 = *(ulong *)this;
    uVar15 = *(ulong *)(this + 8);
    uVar8 = (uVar9 & 0xfffffffffffffffe) - 1;
  }
  uVar5 = (long)param_2 - (long)param_1;
  if (uVar5 == 0) goto LAB_0120930c;
  if (((byte)bVar1 & 1) == 0) {
    pbVar14 = this + 1;
    uVar12 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar12 = *(ulong *)(this + 8);
    pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
  }
  if ((pbVar14 <= param_1) && (param_1 < pbVar14 + uVar12)) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (uVar5 < 0x17) {
      uVar2 = (int)uVar5 << 1;
      uVar9 = (ulong)uVar2;
      local_60 = (ulong)(byte)uVar2;
      pcVar6 = (char *)((ulong)&local_60 | 1);
    }
    else {
      uVar9 = uVar5 + 0x10 & 0xfffffffffffffff0;
      pcVar6 = operator_new(uVar9);
      uVar9 = uVar9 | 1;
      local_60 = uVar9;
      local_50 = pcVar6;
      local_58 = uVar5;
    }
    if (param_1 != param_2) {
      pcVar7 = pcVar6;
      if (0x1f < uVar5) {
        uVar8 = uVar5 & 0xffffffffffffffe0;
        pcVar7 = pcVar6 + 0x10;
        pcVar6 = pcVar6 + uVar8;
        pcVar13 = param_1 + 0x10;
        uVar15 = uVar8;
        do {
          pcVar4 = pcVar13 + -8;
          uVar16 = *(undefined8 *)(pcVar13 + -0x10);
          uVar18 = *(undefined8 *)(pcVar13 + 8);
          uVar17 = *(undefined8 *)pcVar13;
          uVar15 = uVar15 - 0x20;
          pcVar13 = pcVar13 + 0x20;
          *(undefined8 *)(pcVar7 + -8) = *(undefined8 *)pcVar4;
          *(undefined8 *)(pcVar7 + -0x10) = uVar16;
          *(undefined8 *)(pcVar7 + 8) = uVar18;
          *(undefined8 *)pcVar7 = uVar17;
          pcVar7 = pcVar7 + 0x20;
        } while (uVar15 != 0);
        pcVar7 = pcVar6;
        param_1 = param_1 + uVar8;
        if (uVar5 == uVar8) goto LAB_012092d4;
      }
      do {
        pcVar13 = param_1 + 1;
        pcVar6 = pcVar7 + 1;
        *pcVar7 = *param_1;
        pcVar7 = pcVar6;
        param_1 = pcVar13;
      } while (param_2 != pcVar13);
    }
LAB_012092d4:
    *pcVar6 = '\0';
    uVar15 = (ulong)((uint)uVar9 >> 1 & 0x7f);
    pcVar6 = (char *)((ulong)&local_60 | 1);
    if ((uVar9 & 1) != 0) {
      uVar15 = local_58;
      pcVar6 = local_50;
    }
    append(this,pcVar6,uVar15);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    goto LAB_0120930c;
  }
  if (uVar8 - uVar15 < uVar5) {
    __grow_by(this,uVar8,(uVar15 + uVar5) - uVar8,uVar15,uVar15,0,0);
    uVar9 = (ulong)(byte)*this;
  }
  if ((uVar9 & 1) == 0) {
    pbVar14 = this + 1;
  }
  else {
    pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10);
  }
  pbVar11 = pbVar14 + uVar15;
  if (param_1 != param_2) {
    pbVar10 = pbVar11;
    if ((0x1f < uVar5) &&
       ((param_2 <= pbVar11 || (pbVar14 + (long)(param_2 + (uVar15 - (long)param_1)) <= param_1))))
    {
      uVar8 = uVar5 & 0xffffffffffffffe0;
      pcVar6 = param_1 + 0x10;
      pbVar11 = pbVar11 + uVar8;
      pbVar14 = pbVar14 + uVar15 + 0x10;
      uVar9 = uVar8;
      do {
        pcVar7 = pcVar6 + -8;
        uVar16 = *(undefined8 *)(pcVar6 + -0x10);
        uVar18 = *(undefined8 *)(pcVar6 + 8);
        uVar17 = *(undefined8 *)pcVar6;
        pcVar6 = pcVar6 + 0x20;
        uVar9 = uVar9 - 0x20;
        *(undefined8 *)(pbVar14 + -8) = *(undefined8 *)pcVar7;
        *(undefined8 *)(pbVar14 + -0x10) = uVar16;
        *(undefined8 *)(pbVar14 + 8) = uVar18;
        *(undefined8 *)pbVar14 = uVar17;
        pbVar14 = pbVar14 + 0x20;
      } while (uVar9 != 0);
      pbVar10 = pbVar11;
      param_1 = (char *)(param_1 + uVar8);
      if (uVar5 == uVar8) goto LAB_01209240;
    }
    do {
      pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + 1);
      pbVar11 = pbVar10 + 1;
      *pbVar10 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                 *param_1;
      pbVar10 = pbVar11;
      param_1 = (char *)pbVar14;
    } while ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2 != pbVar14);
  }
LAB_01209240:
  *pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)(uVar15 + uVar5) << 1,0);
  }
  else {
    *(ulong *)(this + 8) = uVar15 + uVar5;
  }
LAB_0120930c:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string *)this;
}

