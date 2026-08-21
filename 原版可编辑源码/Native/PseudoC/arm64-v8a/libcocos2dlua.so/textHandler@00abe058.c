
/* fairygui::HtmlParser::textHandler(void*, char const*, unsigned long) */

void __thiscall
fairygui::HtmlParser::textHandler(HtmlParser *this,void *param_1,char *param_2,ulong param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  ulong uVar14;
  undefined8 local_88;
  ulong local_80;
  char *local_78;
  locale alStack_70 [8];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (this[0xac] == (HtmlParser)0x0) {
    local_80 = 0;
    local_78 = (char *)0x0;
    local_88 = 0;
    if (0xffffffffffffffef < param_3) goto LAB_00abe410;
    if (param_3 < 0x17) {
      pcVar11 = (char *)((ulong)&local_88 | 1);
      local_88 = (ulong)(byte)((int)param_3 << 1);
      if (param_3 != 0) goto LAB_00abe1d4;
    }
    else {
      uVar5 = param_3 + 0x10 & 0xfffffffffffffff0;
      pcVar11 = operator_new(uVar5);
      local_88 = uVar5 | 1;
      local_80 = param_3;
      local_78 = pcVar11;
LAB_00abe1d4:
      memcpy(pcVar11,param_2,param_3);
    }
    pcVar11[param_3] = '\0';
    uVar5 = local_88 >> 1 & 0x7f;
    pcVar11 = (char *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      uVar5 = local_80;
      pcVar11 = local_78;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0xb0),pcVar11,uVar5);
    goto LAB_00abe3bc;
  }
  local_80 = 0;
  local_78 = (char *)0x0;
  local_88 = 0;
  if (0xffffffffffffffef < param_3) {
LAB_00abe410:
    local_78 = (char *)0x0;
    local_80 = 0;
    local_88 = 0;
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    pcVar11 = (char *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)param_3 << 1);
    if (param_3 != 0) goto LAB_00abe118;
  }
  else {
    uVar5 = param_3 + 0x10 & 0xfffffffffffffff0;
    pcVar11 = operator_new(uVar5);
    local_88 = uVar5 | 1;
    local_80 = param_3;
    local_78 = pcVar11;
LAB_00abe118:
    memcpy(pcVar11,param_2,param_3);
  }
  pcVar11[param_3] = '\0';
  pcVar10 = (char *)((ulong)&local_88 | 1);
  pcVar11 = pcVar10;
  uVar5 = local_88 >> 1 & 0x7f;
  if ((local_88 & 1) != 0) {
    pcVar11 = local_78;
    uVar5 = local_80;
  }
  pcVar12 = pcVar11;
  if (uVar5 != 0) {
    pcVar7 = pcVar11 + uVar5;
    pcVar13 = pcVar11;
    while( true ) {
      cVar1 = *pcVar13;
      std::__ndk1::locale::locale(alStack_70);
      lVar3 = std::__ndk1::locale::use_facet(alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      pcVar12 = pcVar13;
      if (cVar1 < '\0') break;
      uVar14 = *(ulong *)(*(long *)(lVar3 + 0x10) + (long)cVar1 * 8);
      std::__ndk1::locale::~locale(alStack_70);
      if (((uVar14 & 1) == 0) ||
         (uVar5 = uVar5 - 1, pcVar12 = pcVar7, pcVar13 = pcVar13 + 1, uVar5 == 0))
      goto LAB_00abe21c;
    }
    std::__ndk1::locale::~locale(alStack_70);
  }
LAB_00abe21c:
  uVar5 = (ulong)((byte)local_88 >> 1);
  pcVar7 = pcVar10;
  if ((local_88 & 1) != 0) {
    uVar5 = local_80;
    pcVar7 = local_78;
  }
  uVar6 = (long)pcVar11 - (long)pcVar7;
  uVar14 = uVar5 - uVar6;
  if (uVar5 < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar8 = (long)pcVar12 - (long)pcVar11;
  if (uVar8 != 0) {
    uVar9 = uVar14;
    if (uVar8 <= uVar14) {
      uVar9 = uVar8;
    }
    if (uVar14 - uVar9 != 0) {
      memmove(pcVar7 + uVar6,pcVar7 + uVar6 + uVar9,uVar14 - uVar9);
    }
    uVar5 = uVar5 - uVar9;
    if ((local_88 & 1) == 0) {
      local_88 = CONCAT71(local_88._1_7_,(char)((int)uVar5 << 1));
    }
    else {
      local_80 = uVar5;
    }
    pcVar7[uVar5] = '\0';
  }
  if (((byte)local_88 & 1) == 0) {
    pcVar11 = (char *)((long)&local_88 + (ulong)((byte)local_88 >> 1) + 1);
    pcVar7 = pcVar10;
    pcVar12 = pcVar11;
    if (pcVar11 == pcVar10) goto joined_r0x00abe32c;
LAB_00abe2b4:
    do {
      pcVar13 = pcVar11 + -1;
      cVar1 = *pcVar13;
      std::__ndk1::locale::locale(alStack_70);
      lVar3 = std::__ndk1::locale::use_facet(alStack_70,(id *)&std::__ndk1::ctype<char>::id);
      pcVar12 = pcVar11;
      if (cVar1 < '\0') {
        std::__ndk1::locale::~locale(alStack_70);
        goto joined_r0x00abe32c;
      }
      uVar5 = *(ulong *)(*(long *)(lVar3 + 0x10) + (long)cVar1 * 8);
      std::__ndk1::locale::~locale(alStack_70);
    } while (((uVar5 & 1) != 0) && (pcVar12 = pcVar7, pcVar11 = pcVar13, pcVar7 != pcVar13));
    uVar5 = local_88 & 0xff;
    if ((local_88 & 1) != 0) goto LAB_00abe330;
LAB_00abe2fc:
    pcVar11 = (char *)((long)&local_88 + (uVar5 >> 1) + 1);
    pcVar7 = pcVar10;
    uVar14 = uVar5 >> 1;
  }
  else {
    pcVar11 = local_78 + local_80;
    pcVar7 = local_78;
    pcVar12 = pcVar11;
    if (pcVar11 != local_78) goto LAB_00abe2b4;
joined_r0x00abe32c:
    uVar5 = local_88 & 0xff;
    if ((local_88 & 1) == 0) goto LAB_00abe2fc;
LAB_00abe330:
    pcVar11 = local_78 + local_80;
    pcVar7 = local_78;
    uVar14 = local_80;
  }
  uVar8 = (long)pcVar12 - (long)pcVar7;
  uVar6 = uVar14 - uVar8;
  if (uVar14 < uVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  uVar9 = (long)pcVar11 - (long)pcVar12;
  uVar4 = (uint)uVar5;
  if (uVar9 != 0) {
    pcVar11 = pcVar10;
    if ((uVar5 & 1) != 0) {
      pcVar11 = local_78;
    }
    uVar5 = uVar6;
    if (uVar9 <= uVar6) {
      uVar5 = uVar9;
    }
    if (uVar6 - uVar5 != 0) {
      memmove(pcVar11 + uVar8,pcVar11 + uVar8 + uVar5,uVar6 - uVar5);
    }
    uVar14 = uVar14 - uVar5;
    uVar5 = uVar14;
    if ((local_88 & 1) == 0) {
      local_88 = CONCAT71(local_88._1_7_,(char)((int)uVar14 << 1));
      uVar5 = local_80;
    }
    local_80 = uVar5;
    pcVar11[uVar14] = '\0';
    uVar5 = local_88 & 0xff;
    uVar4 = (uint)(byte)local_88;
  }
  uVar5 = uVar5 >> 1;
  if ((uVar4 & 1) != 0) {
    uVar5 = local_80;
    pcVar10 = local_78;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0xb0),pcVar10,uVar5);
LAB_00abe3bc:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

