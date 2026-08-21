
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse<char
   const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  __shared_weak_count *p_Var1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  long lVar9;
  __shared_weak_count *this_00;
  
  puVar5 = operator_new(8);
  *puVar5 = &PTR_FUN_016f4d38;
  puVar6 = operator_new(0x10);
  *puVar6 = &PTR____owns_one_state_016f4de0;
  puVar6[1] = puVar5;
  puVar5 = operator_new(0x20);
  puVar5[2] = 0;
  puVar5[3] = puVar6;
  *puVar5 = &PTR____shared_weak_count_016f4d90;
  puVar5[1] = 0;
  this_00 = *(__shared_weak_count **)(this + 0x30);
  *(undefined8 **)(this + 0x28) = puVar6;
  *(undefined8 **)(this + 0x30) = puVar5;
  if (this_00 != (__shared_weak_count *)0x0) {
    p_Var1 = this_00 + 8;
    do {
      lVar9 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      __shared_weak_count::__release_weak(this_00);
    }
  }
  uVar2 = *(uint *)(this + 0x18) & 0x1f0;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x28);
  if (uVar2 < 0x40) {
    if (uVar2 == 0) {
      pcVar7 = __parse_ecma_exp<char_const*>(this,param_1,param_2);
      return pcVar7;
    }
    if (uVar2 == 0x10) {
      pcVar7 = __parse_basic_reg_exp<char_const*>(this,param_1,param_2);
      return pcVar7;
    }
    if (uVar2 != 0x20) {
LAB_00ea8830:
      uVar8 = FUN_00ea9100();
      *puVar6 = &PTR____owns_one_state_016f4e58;
      operator_delete(this_00);
      operator_delete(puVar6);
      (**(code **)(*(long *)this_00 + 8))(this_00);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar8);
    }
  }
  else if (uVar2 != 0x40) {
    if (uVar2 == 0x80) {
      pcVar7 = __parse_grep<char_const*>(this,param_1,param_2);
      return pcVar7;
    }
    if (uVar2 == 0x100) {
      pcVar7 = __parse_egrep<char_const*>(this,param_1,param_2);
      return pcVar7;
    }
    goto LAB_00ea8830;
  }
  pcVar7 = __parse_extended_reg_exp<char_const*>(this,param_1,param_2);
  return pcVar7;
}

