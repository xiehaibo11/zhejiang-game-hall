
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
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  char *pcVar9;
  ulong uVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  char *pcVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  ulong uVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong local_60;
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  bVar1 = *this;
  if (((byte)bVar1 & 1) == 0) {
    uVar14 = (ulong)((byte)bVar1 >> 1);
    uVar6 = 0x16;
    uVar7 = (ulong)(byte)bVar1;
  }
  else {
    uVar7 = *(ulong *)this;
    uVar14 = *(ulong *)(this + 8);
    uVar6 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  uVar4 = (long)param_2 - (long)param_1;
  if (uVar4 == 0) goto LAB_018294ec;
  if (((byte)bVar1 & 1) == 0) {
    pbVar8 = this + 1;
    uVar10 = (ulong)((byte)bVar1 >> 1);
  }
  else {
    uVar10 = *(ulong *)(this + 8);
    pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  if ((pbVar8 <= param_1) && (param_1 < pbVar8 + uVar10)) {
    local_60 = 0;
    local_58 = 0;
    local_50 = (char *)0x0;
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      __basic_string_common<true>::__throw_length_error();
    }
    if (uVar4 < 0x17) {
      local_60 = (ulong)(byte)((int)uVar4 << 1);
      pcVar5 = (char *)((ulong)&local_60 | 1);
    }
    else {
      uVar7 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pcVar5 = operator_new(uVar7);
      local_60 = uVar7 | 1;
      local_50 = pcVar5;
      local_58 = uVar4;
    }
    if (param_1 != param_2) {
      pcVar12 = pcVar5;
      if (uVar4 < 0x20) {
LAB_0182949c:
        do {
          pcVar9 = param_1 + 1;
          *pcVar12 = *param_1;
          param_1 = pcVar9;
          pcVar12 = pcVar12 + 1;
        } while (param_2 != pcVar9);
      }
      else {
        uVar14 = uVar4 & 0xffffffffffffffe0;
        pcVar12 = pcVar5 + 0x10;
        pcVar9 = param_1 + 0x10;
        uVar7 = uVar14;
        do {
          pcVar3 = pcVar9 + -8;
          uVar16 = *(undefined8 *)(pcVar9 + -0x10);
          uVar18 = *(undefined8 *)(pcVar9 + 8);
          uVar17 = *(undefined8 *)pcVar9;
          uVar7 = uVar7 - 0x20;
          pcVar9 = pcVar9 + 0x20;
          *(undefined8 *)(pcVar12 + -8) = *(undefined8 *)pcVar3;
          *(undefined8 *)(pcVar12 + -0x10) = uVar16;
          *(undefined8 *)(pcVar12 + 8) = uVar18;
          *(undefined8 *)pcVar12 = uVar17;
          pcVar12 = pcVar12 + 0x20;
        } while (uVar7 != 0);
        param_1 = param_1 + uVar14;
        pcVar12 = pcVar5 + uVar14;
        if (uVar4 != uVar14) goto LAB_0182949c;
      }
      pcVar5 = pcVar5 + uVar4;
    }
    *pcVar5 = '\0';
    uVar7 = local_60 >> 1 & 0x7f;
    pcVar5 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      uVar7 = local_58;
      pcVar5 = local_50;
    }
    append(this,pcVar5,uVar7);
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    goto LAB_018294ec;
  }
  if (uVar6 - uVar14 < uVar4) {
    __grow_by(this,uVar6,(uVar14 + uVar4) - uVar6,uVar14,uVar14,0,0);
    uVar7 = (ulong)(byte)*this;
  }
  if ((uVar7 & 1) == 0) {
    pbVar8 = this + 1;
  }
  else {
    pbVar8 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  pbVar11 = pbVar8 + uVar14;
  if (param_1 != param_2) {
    pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1;
    if ((uVar4 < 0x20) ||
       ((pbVar11 < param_2 && (param_1 < pbVar8 + (long)(param_2 + (uVar14 - (long)param_1)))))) {
LAB_01829404:
      do {
        pbVar15 = pbVar13 + 1;
        *pbVar11 = *pbVar13;
        pbVar11 = pbVar11 + 1;
        pbVar13 = pbVar15;
      } while ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_2 != pbVar15);
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffffe0;
      pcVar5 = param_1 + 0x10;
      pbVar13 = pbVar8 + uVar14 + 0x10;
      uVar7 = uVar6;
      do {
        pcVar12 = pcVar5 + -8;
        uVar16 = *(undefined8 *)(pcVar5 + -0x10);
        uVar18 = *(undefined8 *)(pcVar5 + 8);
        uVar17 = *(undefined8 *)pcVar5;
        pcVar5 = pcVar5 + 0x20;
        uVar7 = uVar7 - 0x20;
        *(undefined8 *)(pbVar13 + -8) = *(undefined8 *)pcVar12;
        *(undefined8 *)(pbVar13 + -0x10) = uVar16;
        *(undefined8 *)(pbVar13 + 8) = uVar18;
        *(undefined8 *)pbVar13 = uVar17;
        pbVar13 = pbVar13 + 0x20;
      } while (uVar7 != 0);
      pbVar11 = pbVar11 + uVar6;
      pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (param_1 + uVar6);
      if (uVar4 != uVar6) goto LAB_01829404;
    }
    pbVar11 = pbVar8 + (long)(param_2 + (uVar14 - (long)param_1));
  }
  *pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)(uVar14 + uVar4) << 1,0);
  }
  else {
    *(ulong *)(this + 8) = uVar14 + uVar4;
  }
LAB_018294ec:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (basic_string *)this;
}

