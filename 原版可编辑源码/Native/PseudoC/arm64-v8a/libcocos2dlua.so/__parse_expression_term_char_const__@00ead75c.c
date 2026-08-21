
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_expression_term<char const*>(char const*, char const*,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_expression_term<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __bracket_expression *param_3)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  __bracket_expression *p_Var6;
  __bracket_expression _Var7;
  uint uVar8;
  __bracket_expression *p_Var9;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  __bracket_expression *local_90;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 local_70;
  ulong uStack_68;
  __bracket_expression *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_1 != param_2) && (*param_1 != ']')) {
    uVar8 = 0;
    uStack_68 = 0;
    local_60 = (__bracket_expression *)0x0;
    local_70 = 0;
    if ((param_1 + 1 == param_2) || (*param_1 != '[')) {
LAB_00ead854:
      uVar2 = *(uint *)(this + 0x18);
      uVar1 = (ulong)(uVar8 >> 1);
      if ((uVar8 & 1) != 0) {
        uVar1 = uStack_68;
      }
      if (uVar1 == 0) {
        _Var7 = (__bracket_expression)*param_1;
        if (((uVar2 & 0x1b0) != 0) || (_Var7 != (__bracket_expression)0x5c)) {
          if ((uVar8 & 1) == 0) {
            local_70 = CONCAT71(local_70._1_7_,2);
            p_Var9 = (__bracket_expression *)((ulong)&local_70 | 1);
          }
          else {
            uStack_68 = 1;
            p_Var9 = local_60;
          }
          param_1 = param_1 + 1;
          *p_Var9 = _Var7;
          p_Var9[1] = (__bracket_expression)0x0;
          goto joined_r0x00ead8e4;
        }
        if ((uVar2 & 0x1f0) == 0) {
          param_1 = __parse_class_escape<char_const*>
                              (this,param_1 + 1,param_2,(basic_string *)&local_70,param_3);
        }
        else {
          param_1 = __parse_awk_escape<char_const*>
                              (this,(char *)(param_1 + 1),param_2,(basic_string *)&local_70);
        }
        if (param_1 != param_2) goto LAB_00ead90c;
LAB_00ead918:
        uVar1 = (ulong)((byte)local_70._0_1_ >> 1);
        if ((local_70 & 1) != 0) {
          uVar1 = uStack_68;
        }
        if (uVar1 != 0) {
          if ((local_70 & 1) == 0) {
            _Var7 = local_70._1_1_;
            if (((byte)local_70._0_1_ & 0xfe) == 2) {
LAB_00ead9b8:
              FUN_00eac2e0(param_3,_Var7);
              goto LAB_00eada40;
            }
            p_Var9 = (__bracket_expression *)((ulong)&local_70 | 1);
          }
          else {
            _Var7 = *local_60;
            p_Var9 = local_60;
            if (uStack_68 == 1) goto LAB_00ead9b8;
          }
          FUN_00eaec78(param_3,_Var7,p_Var9[1]);
        }
      }
      else {
joined_r0x00ead8e4:
        if (param_1 == param_2) goto LAB_00ead918;
LAB_00ead90c:
        if ((__bracket_expression)*param_1 == (__bracket_expression)0x5d) goto LAB_00ead918;
        p_Var9 = (__bracket_expression *)(param_1 + 1);
        if (((p_Var9 != (__bracket_expression *)param_2) &&
            ((__bracket_expression)*param_1 == (__bracket_expression)0x2d)) &&
           (*p_Var9 != (__bracket_expression)0x5d)) {
          p_Var6 = (__bracket_expression *)(param_1 + 2);
          uStack_80 = 0;
          local_78 = (void *)0x0;
          local_88 = 0;
          if (((p_Var6 == (__bracket_expression *)param_2) ||
              (*p_Var9 != (__bracket_expression)0x5b)) || (*p_Var6 != (__bracket_expression)0x2e)) {
            if (((uVar2 & 0x1b0) == 0) && (*p_Var9 == (__bracket_expression)0x5c)) {
              if ((uVar2 & 0x1f0) == 0) {
                p_Var6 = (__bracket_expression *)
                         __parse_class_escape<char_const*>
                                   (this,(char *)p_Var6,param_2,(basic_string *)&local_88,param_3);
              }
              else {
                p_Var6 = (__bracket_expression *)
                         __parse_awk_escape<char_const*>
                                   (this,(char *)p_Var6,param_2,(basic_string *)&local_88);
              }
            }
            else {
                    /* try { // try from 00eadac4 to 00fadacb has its CatchHandler @ 00eadb98 */
                    /* try { // try from 00eadacc to 00fadbab has its CatchHandler @ 00ead980 */
              local_88 = CONCAT71((uint7)(byte)*p_Var9,2);
            }
          }
          else {
            p_Var6 = (__bracket_expression *)
                     __parse_collating_symbol<char_const*>
                               (this,(char *)(param_1 + 3),param_2,(basic_string *)&local_88);
          }
          local_90 = local_60;
          uStack_98 = uStack_68;
          local_a0 = local_70;
          uStack_b8 = uStack_80;
          local_c0 = local_88;
          local_70 = 0;
          uStack_68 = 0;
          local_60 = (__bracket_expression *)0x0;
          local_88 = 0;
          uStack_80 = 0;
          local_b0 = local_78;
          local_78 = (void *)0x0;
          FUN_00eae718(param_3,&local_a0,&local_c0);
          if ((local_c0 & 1) != 0) {
            operator_delete(local_b0);
          }
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          bVar5 = true;
          param_1 = (char *)p_Var6;
          goto joined_r0x00eada4c;
        }
        uVar1 = (ulong)((byte)local_70._0_1_ >> 1);
                    /* try { // try from 00ead980 to 00fadac3 has its CatchHandler @ 00ead980
                       catch() { ... } // from try @ 00ead980 with catch @ 00ead980
                       catch() { ... } // from try @ 00eadacc with catch @ 00ead980 */
        if ((local_70 & 1) != 0) {
          uVar1 = uStack_68;
        }
        if (uVar1 != 0) {
          if ((local_70 & 1) == 0) {
            _Var7 = local_70._1_1_;
            if (((byte)local_70._0_1_ & 0xfe) == 2) {
LAB_00eada28:
              FUN_00eac2e0(param_3,_Var7);
              goto LAB_00eada40;
            }
            p_Var9 = (__bracket_expression *)((ulong)&local_70 | 1);
          }
          else {
            _Var7 = *local_60;
            p_Var9 = local_60;
            if (uStack_68 == 1) goto LAB_00eada28;
          }
          FUN_00eaec78(param_3,_Var7,p_Var9[1]);
        }
      }
LAB_00eada40:
      bVar5 = true;
    }
    else {
      cVar3 = param_1[1];
      if (cVar3 == '.') {
        param_1 = __parse_collating_symbol<char_const*>
                            (this,param_1 + 2,param_2,(basic_string *)&local_70);
        uVar8 = (uint)(byte)local_70._0_1_;
        goto LAB_00ead854;
      }
      if (cVar3 == ':') {
        param_3 = (__bracket_expression *)
                  __parse_character_class<char_const*>(this,param_1 + 2,param_2,param_3);
      }
      else {
        if (cVar3 != '=') {
          uVar8 = 0;
          goto LAB_00ead854;
        }
        param_3 = (__bracket_expression *)
                  __parse_equivalence_class<char_const*>(this,param_1 + 2,param_2,param_3);
      }
      bVar5 = false;
    }
joined_r0x00eada4c:
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (!bVar5) goto LAB_00eada60;
  }
  param_3 = (__bracket_expression *)param_1;
LAB_00eada60:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return (char *)param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

