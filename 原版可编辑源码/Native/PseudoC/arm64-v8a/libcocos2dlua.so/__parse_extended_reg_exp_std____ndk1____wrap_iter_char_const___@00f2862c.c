
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_extended_reg_exp<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_extended_reg_exp<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(this + 0x38);
  pcVar3 = (char *)__parse_ERE_expression<std::__ndk1::__wrap_iter<char_const*>>();
  if (pcVar3 != param_2) {
    do {
      pcVar7 = pcVar3;
      pcVar3 = (char *)__parse_ERE_expression<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pcVar7,param_3);
    } while (pcVar3 != pcVar7);
    if (pcVar3 != param_2) {
      if (pcVar3 != param_3) {
        cVar2 = *pcVar3;
        while (cVar2 == '|') {
          lVar9 = *(long *)(this + 0x38);
          pcVar1 = pcVar3 + 1;
          pcVar3 = (char *)__parse_ERE_expression<std::__ndk1::__wrap_iter<char_const*>>
                                     (this,pcVar1,param_3);
          if (pcVar1 == pcVar3) goto LAB_00f287a8;
          do {
            pcVar7 = pcVar3;
            pcVar3 = (char *)__parse_ERE_expression<std::__ndk1::__wrap_iter<char_const*>>
                                       (this,pcVar7,param_3);
          } while (pcVar3 != pcVar7);
          if (pcVar1 == pcVar3) goto LAB_00f287a8;
          puVar4 = operator_new(0x18);
          uVar5 = *(undefined8 *)(lVar8 + 8);
          uVar6 = *(undefined8 *)(lVar9 + 8);
          *puVar4 = &PTR____owns_two_states_016f5350;
          puVar4[1] = uVar5;
          puVar4[2] = uVar6;
          *(undefined8 **)(lVar8 + 8) = puVar4;
          *(undefined8 *)(lVar9 + 8) = 0;
          puVar4 = operator_new(0x10);
          uVar5 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
          *puVar4 = &PTR____owns_one_state_016f4de0;
          puVar4[1] = uVar5;
          *(undefined8 **)(lVar9 + 8) = puVar4;
          *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
          puVar4 = operator_new(0x10);
          uVar5 = *(undefined8 *)(lVar9 + 8);
          *puVar4 = &PTR_FUN_016f5398;
          puVar4[1] = uVar5;
          *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar4;
          *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar9 + 8);
          if (pcVar3 == param_3) {
            return pcVar7;
          }
                    /* try { // try from 00f2877c to 01028783 has its CatchHandler @ 00f28ac0 */
          cVar2 = *pcVar3;
                    /* try { // try from 00f28784 to 01028857 has its CatchHandler @ 00f28484 */
        }
      }
      return pcVar7;
    }
  }
LAB_00f287a8:
                    /* WARNING: Subroutine does not return */
  FUN_00eb00f0();
}

