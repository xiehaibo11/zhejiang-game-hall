
/* WARNING: Removing unreachable block (ram,0x00fafd98) */
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Properties::setVariable(char const*, char const*) */

void __thiscall cocos2d::Properties::setVariable(Properties *this,char *param_1,char *param_2)

{
  size_t sVar1;
  char *pcVar2;
  byte *pbVar3;
  ulong *puVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  size_t sVar10;
  void *pvVar11;
  long *plVar12;
  byte *__s1;
  byte *pbVar13;
  vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
  *this_00;
  Properties *pPVar14;
  ulong uVar15;
  byte *pbVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8;
  undefined7 uStack_b7;
  ulong uStack_b0;
  void *local_a8;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  undefined8 local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
                    /* try { // try from 00fafab0 to 010afab7 has its CatchHandler @ 00fafb00 */
                    /* try { // try from 00fafab8 to 010afb97 has its CatchHandler @ 00fafa10 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  if (this != (Properties *)0x0) {
    pbVar16 = (byte *)0x0;
                    /* catch() { ... } // from try @ 00fafab0 with catch @ 00fafb00 */
    plVar12 = *(long **)(this + 0x98);
    pPVar14 = this;
    do {
      if (plVar12 != (long *)0x0) {
        pbVar3 = (byte *)*plVar12;
        lVar5 = plVar12[1];
        if (lVar5 - (long)pbVar3 != 0) {
          sVar10 = strlen(param_1);
          uVar15 = 0;
          pbVar13 = pbVar3;
          do {
            bVar6 = *pbVar13;
            sVar1 = (ulong)(bVar6 >> 1);
            if ((bVar6 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar13 + 8);
            }
            if (sVar10 == sVar1) {
              if (sVar10 == 0) {
                pbVar16 = pbVar3 + uVar15 * 0x30;
                break;
              }
              if (sVar10 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              __s1 = *(byte **)(pbVar13 + 0x10);
                    /* try { // try from 00fafb98 to 010afbaf has its CatchHandler @ 00fafb98
                       catch() { ... } // from try @ 00fafb98 with catch @ 00fafb98
                       catch() { ... } // from try @ 00fafbb8 with catch @ 00fafb98 */
              if ((bVar6 & 1) == 0) {
                __s1 = pbVar13 + 1;
              }
              iVar9 = memcmp(__s1,param_1,sVar10);
              if (iVar9 == 0) {
                pPVar14 = *(Properties **)(pPVar14 + 0xa8);
                pbVar16 = pbVar13;
                goto joined_r0x00fafbb0;
              }
            }
            uVar15 = uVar15 + 1;
                    /* catch() { ... } // from try @ 00fafa70 with catch @ 00fafb5c */
            pbVar13 = pbVar13 + 0x30;
          } while (uVar15 < (ulong)((lVar5 - (long)pbVar3 >> 4) * -0x5555555555555555));
        }
      }
      pPVar14 = *(Properties **)(pPVar14 + 0xa8);
joined_r0x00fafbb0:
                    /* try { // try from 00fafbb0 to 010afbb7 has its CatchHandler @ 00fafbd0 */
      if (pPVar14 == (Properties *)0x0) goto LAB_00fafbb4;
      plVar12 = *(long **)(pPVar14 + 0x98);
    } while( true );
  }
LAB_00fafbf0:
  this_00 = *(vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
              **)(this + 0x98);
  if (this_00 ==
      (vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>> *
      )0x0) {
                    /* try { // try from 00fafbfc to 010afc03 has its CatchHandler @ 00fafc1c */
                    /* try { // try from 00fafc04 to 010afc2f has its CatchHandler @ 00fafbe4 */
    this_00 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (this_00 !=
        (vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>
         *)0x0) {
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)(this_00 + 8) = 0;
      *(undefined8 *)(this_00 + 0x10) = 0;
    }
    *(vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>> **
     )(this + 0x98) = this_00;
  }
                    /* catch() { ... } // from try @ 00fafbfc with catch @ 00fafc1c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_b8,param_1);
  pcVar2 = "";
  if (param_2 != (char *)0x0) {
    pcVar2 = param_2;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_d0,pcVar2);
  pvVar8 = local_a8;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (((byte)local_b8 & 1) == 0) {
    local_a0 = CONCAT71(uStack_b7,local_b8);
    uStack_98 = uStack_b0;
    local_90 = local_a8;
  }
  else {
    if (0xffffffffffffffef < uStack_b0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_b0 < 0x17) {
      pvVar11 = (void *)((ulong)&local_a0 | 1);
      local_a0 = (ulong)(byte)((int)uStack_b0 << 1);
      if (uStack_b0 != 0) goto LAB_00fafcac;
    }
    else {
      uVar15 = uStack_b0 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = operator_new(uVar15);
      local_a0 = uVar15 | 1;
      uStack_98 = uStack_b0;
      local_90 = pvVar11;
LAB_00fafcac:
      memcpy(pvVar11,pvVar8,uStack_b0);
    }
    *(undefined1 *)((long)pvVar11 + uStack_b0) = 0;
  }
  pvVar8 = local_c0;
  uStack_80 = 0;
  local_78 = (void *)0x0;
  local_88 = 0;
  if (((byte)local_d0 & 1) == 0) {
    local_88 = CONCAT71(uStack_cf,local_d0);
    local_78 = local_c0;
    uStack_80 = uStack_c8;
  }
  else {
    if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uStack_c8 < 0x17) {
      pvVar11 = (void *)((long)&local_88 + 1);
      local_88 = (ulong)(byte)((int)uStack_c8 << 1);
      if (uStack_c8 != 0) goto LAB_00fafd38;
    }
    else {
      uVar15 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
      pvVar11 = operator_new(uVar15);
      local_88 = uVar15 | 1;
      uStack_80 = uStack_c8;
      local_78 = pvVar11;
LAB_00fafd38:
      memcpy(pvVar11,pvVar8,uStack_c8);
    }
    *(undefined1 *)((long)pvVar11 + uStack_c8) = 0;
  }
  puVar4 = *(ulong **)(this_00 + 8);
  if (puVar4 < *(ulong **)(this_00 + 0x10)) {
    puVar4[2] = (ulong)local_90;
    puVar4[1] = uStack_98;
    *puVar4 = local_a0;
    uStack_98 = 0;
    local_90 = (void *)0x0;
    local_a0 = 0;
    puVar4[5] = (ulong)local_78;
    puVar4[4] = uStack_80;
    puVar4[3] = local_88;
    uStack_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    *(ulong **)(this_00 + 8) = puVar4 + 6;
  }
  else {
    std::__ndk1::
    vector<cocos2d::Properties::Property,std::__ndk1::allocator<cocos2d::Properties::Property>>::
    __push_back_slow_path<cocos2d::Properties::Property>(this_00,(Property *)&local_a0);
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if (((byte)local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
LAB_00fafdd0:
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00fafbb4:
                    /* try { // try from 00fafbb8 to 010afbe3 has its CatchHandler @ 00fafb98 */
  if (pbVar16 != (byte *)0x0) {
    pcVar2 = "";
    if (param_2 != (char *)0x0) {
      pcVar2 = param_2;
    }
                    /* catch() { ... } // from try @ 00fafbb0 with catch @ 00fafbd0 */
    sVar10 = strlen(pcVar2);
                    /* try { // try from 00fafbe4 to 010afbfb has its CatchHandler @ 00fafbe4
                       catch() { ... } // from try @ 00fafbe4 with catch @ 00fafbe4
                       catch() { ... } // from try @ 00fafc04 with catch @ 00fafbe4 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pbVar16 + 0x18),pcVar2,sVar10);
    goto LAB_00fafdd0;
  }
  goto LAB_00fafbf0;
}

