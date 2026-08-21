
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_expression_term<char const*>(char const*, char const*,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_expression_term<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          __bracket_expression *param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  __bracket_expression *p_Var7;
  __bracket_expression _Var8;
  uint uVar9;
  __bracket_expression *p_Var10;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  __bracket_expression *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 local_70;
  ulong uStack_68;
  __bracket_expression *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((param_1 != param_2) && (*param_1 != ']')) {
    uVar9 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = (__bracket_expression *)0x0;
    if ((param_1 + 1 == param_2) || (*param_1 != '[')) {
LAB_0086766c:
      uVar2 = (ulong)(uVar9 >> 1);
      if ((uVar9 & 1) != 0) {
        uVar2 = uStack_68;
      }
      uVar1 = *(uint *)(this + 0x18) & 0x1f0;
      if (uVar2 == 0) {
        _Var8 = (__bracket_expression)*param_1;
        if (((uVar1 | 0x40) != 0x40) || (_Var8 != (__bracket_expression)0x5c)) {
          if ((uVar9 & 1) == 0) {
            local_70 = CONCAT71(local_70._1_7_,2);
            p_Var10 = (__bracket_expression *)((ulong)&local_70 | 1);
          }
          else {
            uStack_68 = 1;
            p_Var10 = local_60;
          }
          param_1 = param_1 + 1;
          *p_Var10 = _Var8;
          p_Var10[1] = (__bracket_expression)0x0;
          goto joined_r0x008676fc;
        }
        if (uVar1 == 0) {
          param_1 = __parse_class_escape<char_const*>
                              (this,param_1 + 1,param_2,(basic_string *)&local_70,param_3);
        }
        else {
          param_1 = __parse_awk_escape<char_const*>
                              (this,(char *)(param_1 + 1),param_2,(basic_string *)&local_70);
        }
        if (param_1 != param_2) goto LAB_00867718;
LAB_00867724:
        uVar6 = local_70;
        uVar2 = (ulong)((byte)local_70._0_1_ >> 1);
        if ((local_70 & 1) != 0) {
          uVar2 = uStack_68;
        }
      }
      else {
joined_r0x008676fc:
        if (param_1 == param_2) goto LAB_00867724;
LAB_00867718:
        if ((__bracket_expression)*param_1 == (__bracket_expression)0x5d) goto LAB_00867724;
        p_Var10 = (__bracket_expression *)(param_1 + 1);
        if (((p_Var10 != (__bracket_expression *)param_2) &&
            ((__bracket_expression)*param_1 == (__bracket_expression)0x2d)) &&
           (*p_Var10 != (__bracket_expression)0x5d)) {
          p_Var7 = (__bracket_expression *)(param_1 + 2);
          local_88 = 0;
          uStack_80 = 0;
          local_78 = (void *)0x0;
          if (((p_Var7 == (__bracket_expression *)param_2) ||
              (*p_Var10 != (__bracket_expression)0x5b)) || (*p_Var7 != (__bracket_expression)0x2e))
          {
            if (((uVar1 | 0x40) == 0x40) && (*p_Var10 == (__bracket_expression)0x5c)) {
              if (uVar1 == 0) {
                p_Var7 = (__bracket_expression *)
                         __parse_class_escape<char_const*>
                                   (this,(char *)p_Var7,param_2,(basic_string *)&local_88,param_3);
              }
              else {
                p_Var7 = (__bracket_expression *)
                         __parse_awk_escape<char_const*>
                                   (this,(char *)p_Var7,param_2,(basic_string *)&local_88);
              }
            }
            else {
              local_88 = (ulong)CONCAT11(*p_Var10,2);
            }
          }
          else {
            p_Var7 = (__bracket_expression *)
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
          FUN_00868248(param_3,&local_a0,&local_c0);
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
          param_1 = (char *)p_Var7;
          goto joined_r0x008677cc;
        }
        uVar6 = local_70;
        uVar2 = (ulong)((byte)local_70._0_1_ >> 1);
        if ((local_70 & 1) != 0) {
          uVar2 = uStack_68;
        }
      }
      local_70 = uVar6;
      if (uVar2 != 0) {
        if ((uVar6 & 1) == 0) {
          local_70._1_1_ = SUB81(uVar6 >> 8,0);
          _Var8 = local_70._1_1_;
          if (((byte)local_70._0_1_ & 0xfe) == 2) {
LAB_008677a8:
            FUN_008662f0(param_3,_Var8);
            goto LAB_008677c0;
          }
          p_Var10 = (__bracket_expression *)((ulong)&local_70 | 1);
        }
        else {
          _Var8 = *local_60;
          p_Var10 = local_60;
          if (uStack_68 == 1) goto LAB_008677a8;
        }
        FUN_00868720(param_3,_Var8,p_Var10[1]);
      }
LAB_008677c0:
      bVar5 = true;
    }
    else {
      cVar3 = param_1[1];
      if (cVar3 == '.') {
        param_1 = __parse_collating_symbol<char_const*>
                            (this,param_1 + 2,param_2,(basic_string *)&local_70);
        uVar9 = (uint)(byte)local_70._0_1_;
        goto LAB_0086766c;
      }
      if (cVar3 == ':') {
        param_3 = (__bracket_expression *)
                  __parse_character_class<char_const*>(this,param_1 + 2,param_2,param_3);
      }
      else {
        if (cVar3 != '=') {
          uVar9 = 0;
          goto LAB_0086766c;
        }
        param_3 = (__bracket_expression *)
                  __parse_equivalence_class<char_const*>(this,param_1 + 2,param_2,param_3);
      }
      bVar5 = false;
    }
joined_r0x008677cc:
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    if (!bVar5) goto LAB_008677e0;
  }
  param_3 = (__bracket_expression *)param_1;
LAB_008677e0:
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (char *)param_3;
}

