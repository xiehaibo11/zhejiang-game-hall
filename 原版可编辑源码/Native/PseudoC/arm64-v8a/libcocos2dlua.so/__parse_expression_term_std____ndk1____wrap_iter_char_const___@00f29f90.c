
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_expression_term<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_expression_term<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          byte *param_4)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  byte *pbVar5;
  byte bVar6;
  ulong uVar7;
  byte *pbVar8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  byte *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 local_70;
  ulong uStack_68;
  byte *local_60;
  long local_58;
  
                    /* try { // try from 00f29f90 to 01029fbf has its CatchHandler @ 00f29f90
                       catch() { ... } // from try @ 00f29f90 with catch @ 00f29f90
                       catch() { ... } // from try @ 00f29fd0 with catch @ 00f29f90 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00f29fc0 to 01029fcf has its CatchHandler @ 00f2a008 */
  if ((param_2 == param_3) || (*param_2 == 0x5d)) goto LAB_00f2a350;
                    /* try { // try from 00f29fd0 to 0102a01b has its CatchHandler @ 00f29f90 */
  uStack_68 = 0;
  local_60 = (byte *)0x0;
  local_70 = 0;
  if ((param_2 + 1 == param_3) || (*param_2 != 0x5b)) {
LAB_00f2a030:
    uVar7 = 0;
LAB_00f2a038:
    uVar2 = *(uint *)(this + 0x18);
    uVar1 = uVar7 >> 1;
    if ((uVar7 & 1) != 0) {
      uVar1 = uStack_68;
    }
                    /* try { // try from 00f2a048 to 0102a07b has its CatchHandler @ 00f2a048
                       catch() { ... } // from try @ 00f2a048 with catch @ 00f2a048
                       catch() { ... } // from try @ 00f2a080 with catch @ 00f2a048 */
    if (uVar1 == 0) {
      if (((uVar2 & 0x1b0) != 0) || (*param_2 != 0x5c)) {
                    /* catch() { ... } // from try @ 00f2a07c with catch @ 00f2a090 */
        bVar6 = *param_2;
        if ((uVar7 & 1) == 0) {
          local_70 = CONCAT71(local_70._1_7_,2);
          pbVar5 = (byte *)((ulong)&local_70 | 1);
        }
        else {
          uStack_68 = 1;
          pbVar5 = local_60;
        }
        param_2 = param_2 + 1;
        *pbVar5 = bVar6;
        pbVar5[1] = 0;
        goto joined_r0x00f2a0c8;
      }
      if ((uVar2 & 0x1f0) == 0) {
        param_2 = (byte *)__parse_class_escape<std::__ndk1::__wrap_iter<char_const*>>
                                    (this,param_2 + 1,param_3,&local_70,param_4);
      }
      else {
                    /* try { // try from 00f2a07c to 0102a07f has its CatchHandler @ 00f2a090 */
                    /* try { // try from 00f2a080 to 0102a0a3 has its CatchHandler @ 00f2a048 */
        param_2 = (byte *)__parse_awk_escape<std::__ndk1::__wrap_iter<char_const*>>
                                    (this,param_2 + 1,param_3,&local_70);
      }
      if (param_2 != param_3) goto LAB_00f2a0cc;
LAB_00f2a0d8:
      uVar7 = (ulong)((byte)local_70 >> 1);
      if ((local_70 & 1) != 0) {
        uVar7 = uStack_68;
      }
      pbVar5 = param_2;
      if (uVar7 != 0) {
        if ((local_70 & 1) == 0) {
          bVar6 = local_70._1_1_;
          if (((byte)local_70 & 0xfe) == 2) {
LAB_00f2a178:
            FUN_00eac2e0(param_4,bVar6);
            goto LAB_00f2a334;
          }
          pbVar8 = (byte *)((ulong)&local_70 | 1);
        }
        else {
          bVar6 = *local_60;
          pbVar8 = local_60;
          if (uStack_68 == 1) goto LAB_00f2a178;
        }
        FUN_00eaec78(param_4,bVar6,pbVar8[1]);
      }
    }
    else {
joined_r0x00f2a0c8:
      if (param_2 == param_3) goto LAB_00f2a0d8;
LAB_00f2a0cc:
      if (*param_2 == 0x5d) goto LAB_00f2a0d8;
      pbVar8 = param_2 + 1;
      if (((pbVar8 == param_3) || (*param_2 != 0x2d)) || (*pbVar8 == 0x5d)) {
        uVar7 = (ulong)((byte)local_70 >> 1);
        if ((local_70 & 1) != 0) {
          uVar7 = uStack_68;
        }
        pbVar5 = param_2;
        if (uVar7 != 0) {
          if ((local_70 & 1) == 0) {
            bVar6 = local_70._1_1_;
            if (((byte)local_70 & 0xfe) == 2) {
LAB_00f2a234:
              FUN_00eac2e0(param_4,bVar6);
              goto LAB_00f2a334;
            }
            pbVar8 = (byte *)((ulong)&local_70 | 1);
          }
          else {
            bVar6 = *local_60;
            pbVar8 = local_60;
                    /* catch() { ... } // from try @ 00f2a1d8 with catch @ 00f2a230 */
            if (uStack_68 == 1) goto LAB_00f2a234;
          }
          FUN_00eaec78(param_4,bVar6,pbVar8[1]);
        }
      }
      else {
        pbVar5 = param_2 + 2;
        uStack_80 = 0;
        local_78 = (void *)0x0;
        local_88 = 0;
                    /* try { // try from 00f2a200 to 0102a203 has its CatchHandler @ 00f2a220 */
                    /* try { // try from 00f2a204 to 0102a24b has its CatchHandler @ 00f2a1b4 */
        if (((pbVar5 == param_3) || (*pbVar8 != 0x5b)) || (*pbVar5 != 0x2e)) {
          if (((uVar2 & 0x1b0) == 0) && (*pbVar8 == 0x5c)) {
            if ((uVar2 & 0x1f0) == 0) {
              pbVar5 = (byte *)__parse_class_escape<std::__ndk1::__wrap_iter<char_const*>>
                                         (this,pbVar5,param_3,&local_88,param_4);
            }
            else {
              pbVar5 = (byte *)__parse_awk_escape<std::__ndk1::__wrap_iter<char_const*>>
                                         (this,pbVar5,param_3,&local_88);
            }
          }
          else {
            local_88 = CONCAT71((uint7)*pbVar8,2);
          }
        }
        else {
          pbVar5 = (byte *)__parse_collating_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,param_2 + 3,param_3,&local_88);
                    /* catch() { ... } // from try @ 00f2a200 with catch @ 00f2a220 */
        }
        local_90 = local_60;
        uStack_98 = uStack_68;
        local_a0 = local_70;
        uStack_b8 = uStack_80;
        local_c0 = local_88;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = (byte *)0x0;
        local_88 = 0;
        uStack_80 = 0;
        local_b0 = local_78;
        local_78 = (void *)0x0;
        FUN_00eae718(param_4,&local_a0,&local_c0);
        if ((local_c0 & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
        if ((local_88 & 1) != 0) {
          operator_delete(local_78);
        }
      }
    }
LAB_00f2a334:
    bVar4 = true;
    param_2 = pbVar5;
  }
  else {
    bVar6 = param_2[1];
    if (bVar6 == 0x2e) {
      param_2 = (byte *)__parse_collating_symbol<std::__ndk1::__wrap_iter<char_const*>>
                                  (this,param_2 + 2,param_3,&local_70);
      uVar7 = local_70 & 0xff;
                    /* catch() { ... } // from try @ 00f2a204 with catch @ 00f2a1b4 */
      goto LAB_00f2a038;
    }
                    /* catch() { ... } // from try @ 00f29fc0 with catch @ 00f2a008 */
    if (bVar6 == 0x3a) {
      param_4 = (byte *)__parse_character_class<std::__ndk1::__wrap_iter<char_const*>>
                                  (this,param_2 + 2,param_3,param_4);
    }
    else {
      if (bVar6 != 0x3d) goto LAB_00f2a030;
      param_4 = (byte *)__parse_equivalence_class<std::__ndk1::__wrap_iter<char_const*>>
                                  (this,param_2 + 2,param_3,param_4);
    }
    bVar4 = false;
                    /* try { // try from 00f2a1d8 to 0102a1df has its CatchHandler @ 00f2a230 */
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (!bVar4) {
    param_2 = param_4;
  }
LAB_00f2a350:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

