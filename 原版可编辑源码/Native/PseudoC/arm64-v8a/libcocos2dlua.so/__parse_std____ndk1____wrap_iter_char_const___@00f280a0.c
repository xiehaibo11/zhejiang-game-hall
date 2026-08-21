
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

void __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,undefined8 param_2,
          undefined8 param_3)

{
  __shared_weak_count *p_Var1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
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
      lVar8 = *(long *)p_Var1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar4) {
        *(long *)p_Var1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      __shared_weak_count::__release_weak(this_00);
    }
  }
  uVar2 = *(uint *)(this + 0x18) & 0x1f0;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x28);
  if (uVar2 < 0x40) {
    if (uVar2 == 0) {
      __parse_ecma_exp<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,param_3);
      return;
    }
    if (uVar2 == 0x10) {
      __parse_basic_reg_exp<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,param_3);
      return;
    }
    if (uVar2 != 0x20) {
LAB_00f28234:
      uVar7 = FUN_00ea9100();
      *puVar6 = &PTR____owns_one_state_016f4e58;
      operator_delete(this_00);
      operator_delete(puVar6);
      (**(code **)(*(long *)this_00 + 8))(this_00);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume(uVar7);
    }
  }
  else if (uVar2 != 0x40) {
    if (uVar2 == 0x80) {
      __parse_grep<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,param_3);
      return;
    }
    if (uVar2 == 0x100) {
      __parse_egrep<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,param_3);
      return;
    }
    goto LAB_00f28234;
  }
  __parse_extended_reg_exp<std::__ndk1::__wrap_iter<char_const*>>(this,param_2,param_3);
  return;
}

