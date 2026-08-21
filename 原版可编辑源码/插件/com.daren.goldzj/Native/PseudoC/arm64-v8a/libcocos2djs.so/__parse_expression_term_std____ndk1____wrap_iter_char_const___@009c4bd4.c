
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_expression_term<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_expression_term<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3,
          char *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  char *pcVar5;
  char cVar6;
  ulong uVar7;
  char *pcVar8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  char *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_2 == param_3) || (*param_2 == ']')) goto LAB_009c4f90;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (char *)0x0;
  if ((param_2 + 1 == param_3) || (*param_2 != '[')) {
LAB_009c4c70:
    uVar7 = 0;
LAB_009c4c78:
    uVar2 = uVar7 >> 1;
    if ((uVar7 & 1) != 0) {
      uVar2 = uStack_58;
    }
    uVar1 = *(uint *)(this + 0x18) & 0x1f0;
    if (uVar2 == 0) {
      if (((uVar1 | 0x40) != 0x40) || (*param_2 != '\\')) {
        cVar6 = *param_2;
        if ((uVar7 & 1) == 0) {
                    /* catch() { ... } // from try @ 009c4b34 with catch @ 009c4cdc */
          local_60 = CONCAT71(local_60._1_7_,2);
          pcVar5 = (char *)((ulong)&local_60 | 1);
        }
        else {
          uStack_58 = 1;
          pcVar5 = local_50;
        }
        param_2 = param_2 + 1;
        *pcVar5 = cVar6;
        pcVar5[1] = '\0';
        goto joined_r0x009c4d08;
      }
      if (uVar1 == 0) {
        param_2 = (char *)__parse_class_escape<std::__ndk1::__wrap_iter<char_const*>>
                                    (this,param_2 + 1,param_3,&local_60,param_4);
      }
      else {
                    /* catch() { ... } // from try @ 009c4b28 with catch @ 009c4cc4 */
                    /* catch() { ... } // from try @ 009c4b1c with catch @ 009c4cc8 */
        param_2 = (char *)__parse_awk_escape<std::__ndk1::__wrap_iter<char_const*>>
                                    (this,param_2 + 1,param_3,&local_60);
                    /* catch() { ... } // from try @ 009c4afc with catch @ 009c4ccc */
      }
      if (param_2 != param_3) goto LAB_009c4d7c;
LAB_009c4d88:
                    /* try { // try from 009c4d88 to 00ac4d9f has its CatchHandler @ 009c4fa4 */
      uVar7 = (ulong)((byte)local_60 >> 1);
      if ((local_60 & 1) != 0) {
        uVar7 = uStack_58;
      }
      pcVar5 = param_2;
      if (uVar7 != 0) {
        if ((local_60 & 1) == 0) {
                    /* try { // try from 009c4da8 to 00ac4db3 has its CatchHandler @ 009c4f88 */
          cVar6 = local_60._1_1_;
          if (((byte)local_60 & 0xfe) == 2) {
LAB_009c4e28:
            FUN_008662f0(param_4,cVar6);
            goto LAB_009c4f74;
          }
                    /* try { // try from 009c4db4 to 00ac4dbf has its CatchHandler @ 009c4f84 */
          pcVar8 = (char *)((ulong)&local_60 | 1);
        }
        else {
          cVar6 = *local_50;
          pcVar8 = local_50;
          if (uStack_58 == 1) goto LAB_009c4e28;
        }
                    /* try { // try from 009c4e3c to 00ac4ebb has its CatchHandler @ 009c4fb4 */
        FUN_00868720(param_4,cVar6,pcVar8[1]);
      }
    }
    else {
joined_r0x009c4d08:
      if (param_2 == param_3) goto LAB_009c4d88;
LAB_009c4d7c:
      if (*param_2 == ']') goto LAB_009c4d88;
                    /* try { // try from 009c4dc0 to 00ac4deb has its CatchHandler @ 009c4fb4 */
      pcVar8 = param_2 + 1;
      if (((pcVar8 == param_3) || (*param_2 != '-')) || (*pcVar8 == ']')) {
        uVar7 = (ulong)((byte)local_60 >> 1);
        if ((local_60 & 1) != 0) {
          uVar7 = uStack_58;
        }
        pcVar5 = param_2;
        if (uVar7 != 0) {
          if ((local_60 & 1) == 0) {
                    /* try { // try from 009c4e00 to 00ac4e1f has its CatchHandler @ 009c4f8c */
            cVar6 = local_60._1_1_;
            if (((byte)local_60 & 0xfe) == 2) {
LAB_009c4e98:
              FUN_008662f0(param_4,cVar6);
              goto LAB_009c4f74;
            }
            pcVar8 = (char *)((ulong)&local_60 | 1);
          }
          else {
            cVar6 = *local_50;
            pcVar8 = local_50;
            if (uStack_58 == 1) goto LAB_009c4e98;
          }
          FUN_00868720(param_4,cVar6,pcVar8[1]);
        }
      }
      else {
        pcVar5 = param_2 + 2;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = (void *)0x0;
        if (((pcVar5 == param_3) || (*pcVar8 != '[')) || (*pcVar5 != '.')) {
          if (((uVar1 | 0x40) == 0x40) && (*pcVar8 == '\\')) {
            if (uVar1 == 0) {
              pcVar5 = (char *)__parse_class_escape<std::__ndk1::__wrap_iter<char_const*>>
                                         (this,pcVar5,param_3,&local_78,param_4);
            }
            else {
              pcVar5 = (char *)__parse_awk_escape<std::__ndk1::__wrap_iter<char_const*>>
                                         (this,pcVar5,param_3,&local_78);
            }
          }
          else {
                    /* try { // try from 009c4ef4 to 00ac4f37 has its CatchHandler @ 009c4f8c */
            local_78 = (ulong)CONCAT11(*pcVar8,2);
          }
        }
        else {
          pcVar5 = (char *)__parse_collating_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,param_2 + 3,param_3,&local_78);
        }
        local_80 = local_50;
        uStack_88 = uStack_58;
        local_90 = local_60;
        uStack_a8 = uStack_70;
        local_b0 = local_78;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = (char *)0x0;
        local_78 = 0;
        uStack_70 = 0;
                    /* try { // try from 009c4f38 to 00ac500b has its CatchHandler @ 009c4d34 */
        local_a0 = local_68;
        local_68 = (void *)0x0;
        FUN_00868248(param_4,&local_90,&local_b0);
        if ((local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
      }
    }
LAB_009c4f74:
    bVar4 = true;
    param_2 = pcVar5;
  }
  else {
    cVar6 = param_2[1];
    if (cVar6 == '.') {
      param_2 = (char *)__parse_collating_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                  (this,param_2 + 2,param_3,&local_60);
      uVar7 = local_60 & 0xff;
      goto LAB_009c4c78;
    }
    if (cVar6 == ':') {
      param_4 = (char *)__parse_character_class<std::__ndk1::__wrap_iter<char_const*>>
                                  (this,param_2 + 2,param_3,param_4);
    }
    else {
                    /* try { // try from 009c4c50 to 00ac4d33 has its CatchHandler @ 009c4aa8 */
      if (cVar6 != '=') goto LAB_009c4c70;
      param_4 = (char *)__parse_equivalence_class<std::__ndk1::__wrap_iter<char_const*>>
                                  (this,param_2 + 2,param_3,param_4);
    }
    bVar4 = false;
  }
  if ((local_60 & 1) != 0) {
                    /* catch() { ... } // from try @ 009c4db4 with catch @ 009c4f84 */
    operator_delete(local_50);
  }
                    /* catch() { ... } // from try @ 009c4da8 with catch @ 009c4f88 */
                    /* catch() { ... } // from try @ 009c4e00 with catch @ 009c4f8c
                       catch() { ... } // from try @ 009c4ef4 with catch @ 009c4f8c */
  if (!bVar4) {
    param_2 = param_4;
  }
LAB_009c4f90:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 009c4d88 with catch @ 009c4fa4 */
                    /* catch() { ... } // from try @ 009c4dc0 with catch @ 009c4fb4
                       catch() { ... } // from try @ 009c4e3c with catch @ 009c4fb4 */
  return param_2;
}

