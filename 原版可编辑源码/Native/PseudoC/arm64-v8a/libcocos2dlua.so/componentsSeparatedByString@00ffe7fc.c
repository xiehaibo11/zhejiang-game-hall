
/* cocos2d::__String::componentsSeparatedByString(char const*) */

__Array * __thiscall cocos2d::__String::componentsSeparatedByString(__String *this,char *param_1)

{
  long lVar1;
  bool bVar2;
  __Array *this_00;
  size_t sVar3;
  char *pcVar4;
  Ref *pRVar5;
  char *pcVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  ulong local_98;
  ulong uStack_90;
  char *local_88;
  ulong local_80;
  ulong uStack_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ffe834 to 010fe83b has its CatchHandler @ 00ffe908 */
  this_00 = (__Array *)__Array::create();
                    /* try { // try from 00ffe83c to 010fe91b has its CatchHandler @ 00ffe6fc */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_80,(basic_string *)(this + 0x30));
  uVar9 = uStack_78;
  uVar8 = local_80;
  uVar11 = local_80 & 0xff;
  bVar2 = (local_80 & 1) == 0;
  uVar15 = local_80 >> 1 & 0x7f;
  if (!bVar2) {
    uVar15 = uStack_78;
  }
  sVar3 = strlen(param_1);
  if ((uVar15 != 0) && (sVar3 != 0)) {
    pcVar12 = (char *)((ulong)&local_80 | 1);
    pcVar14 = pcVar12;
    if ((uVar8 & 1) != 0) {
      pcVar14 = local_70;
    }
    pcVar13 = (char *)((ulong)&local_98 | 1);
    pcVar4 = local_70;
LAB_00ffe890:
    uVar10 = (uint)uVar11;
    pcVar6 = pcVar14;
    do {
      sVar7 = 0;
      do {
        if (*pcVar6 == param_1[sVar7]) {
          if (pcVar6 == pcVar14 + uVar15) goto LAB_00ffea7c;
          uVar15 = (long)pcVar6 - (long)pcVar14;
          if (uVar15 != 0) {
            if (uVar15 == 0xffffffffffffffff) goto LAB_00ffea7c;
            pcVar14 = pcVar12;
            uVar8 = (ulong)(uVar10 >> 1);
            if (!bVar2) {
              pcVar14 = pcVar4;
              uVar8 = uVar9;
            }
            if (uVar15 <= uVar8) {
              uVar8 = uVar15;
            }
            uStack_90 = 0;
            local_88 = (char *)0x0;
            local_98 = 0;
            if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
                    /* catch() { ... } // from try @ 00ffe834 with catch @ 00ffe908 */
            if (uVar8 < 0x17) {
              local_98 = (ulong)(byte)((int)uVar8 << 1);
              pcVar4 = pcVar13;
              if (uVar8 != 0) goto LAB_00ffe944;
            }
            else {
              uVar9 = uVar8 + 0x10 & 0xfffffffffffffff0;
              pcVar4 = operator_new(uVar9);
              local_98 = uVar9 | 1;
              uStack_90 = uVar8;
              local_88 = pcVar4;
LAB_00ffe944:
              memcpy(pcVar4,pcVar14,uVar8);
            }
            pcVar4[uVar8] = '\0';
            pRVar5 = (Ref *)create((basic_string *)&local_98);
            __Array::addObject(this_00,pRVar5);
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
            uVar10 = (uint)(byte)local_80._0_1_;
            uVar9 = uStack_78;
          }
          uVar8 = (ulong)(uVar10 >> 1);
          if ((uVar10 & 1) != 0) {
            uVar8 = uVar9;
          }
          uStack_90 = 0;
          local_88 = (char *)0x0;
          local_98 = 0;
          if (uVar8 <= uVar15) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          uVar8 = uVar8 - (uVar15 + 1);
          pcVar14 = pcVar12;
          if ((uVar10 & 1) != 0) {
            pcVar14 = local_70;
          }
          if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar8 < 0x17) {
            local_98 = (ulong)(byte)((int)uVar8 << 1);
            pcVar4 = pcVar13;
            if (uVar8 != 0) goto LAB_00ffea04;
            *pcVar13 = '\0';
          }
          else {
            uVar9 = uVar8 + 0x10 & 0xfffffffffffffff0;
            pcVar4 = operator_new(uVar9);
            local_98 = uVar9 | 1;
            uStack_90 = uVar8;
            local_88 = pcVar4;
LAB_00ffea04:
            memcpy(pcVar4,pcVar14 + uVar15 + 1,uVar8);
            pcVar4[uVar8] = '\0';
          }
          if ((uVar10 & 1) != 0) {
            *local_70 = '\0';
            uStack_78 = 0;
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
          }
          pcVar4 = local_88;
          uVar9 = uStack_90;
          uStack_78 = uStack_90;
          local_80 = local_98;
          uVar11 = local_98 & 0xff;
          local_70 = local_88;
          bVar2 = (local_98 & 1) == 0;
          uVar15 = local_98 >> 1 & 0x7f;
          pcVar14 = pcVar12;
          if (!bVar2) {
            uVar15 = uStack_90;
            pcVar14 = local_88;
          }
          sVar3 = strlen(param_1);
          if ((uVar15 == 0) || (sVar3 == 0)) goto LAB_00ffea7c;
          goto LAB_00ffe890;
        }
        sVar7 = sVar7 + 1;
      } while (sVar3 != sVar7);
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 != pcVar14 + uVar15);
  }
LAB_00ffea7c:
  uVar15 = uVar11 >> 1;
  if (!bVar2) {
    uVar15 = uVar9;
  }
  if (uVar15 != 0) {
    pRVar5 = (Ref *)create((basic_string *)&local_80);
    __Array::addObject(this_00,pRVar5);
    uVar11 = local_80 & 0xff;
  }
  if ((uVar11 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}

