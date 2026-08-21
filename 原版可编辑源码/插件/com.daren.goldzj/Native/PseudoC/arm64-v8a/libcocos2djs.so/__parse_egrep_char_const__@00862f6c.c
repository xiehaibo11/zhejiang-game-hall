
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char> >::__parse_egrep<char
   const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_egrep<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(this + 0x38);
  pcVar4 = param_1;
  if (param_1 != param_2) {
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 == '\n') break;
      pcVar4 = pcVar4 + 1;
      pcVar5 = param_2;
    } while (param_2 != pcVar4);
    if (pcVar5 != param_1) {
      __parse_extended_reg_exp<char_const*>(this,param_1,pcVar5);
      param_1 = pcVar5;
      goto LAB_0086300c;
    }
  }
  puVar1 = operator_new(0x10);
  uVar2 = *(undefined8 *)(lVar6 + 8);
  *puVar1 = &PTR____owns_one_state_01c66590;
  puVar1[1] = uVar2;
  *(undefined8 **)(lVar6 + 8) = puVar1;
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
LAB_0086300c:
  if (param_1 != param_2) {
    param_1 = param_1 + 1;
  }
  do {
    pcVar4 = param_1;
    if (param_1 == param_2) {
      return param_2;
    }
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 == '\n') break;
      pcVar4 = pcVar4 + 1;
      pcVar5 = param_2;
    } while (param_2 != pcVar4);
    lVar7 = *(long *)(this + 0x38);
    if (pcVar5 == param_1) {
      puVar1 = operator_new(0x10);
      uVar2 = *(undefined8 *)(lVar7 + 8);
      *puVar1 = &PTR____owns_one_state_01c66590;
      puVar1[1] = uVar2;
      *(undefined8 **)(lVar7 + 8) = puVar1;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    }
    else {
      __parse_extended_reg_exp<char_const*>(this,param_1,pcVar5);
    }
    puVar1 = operator_new(0x18);
    uVar2 = *(undefined8 *)(lVar6 + 8);
    uVar3 = *(undefined8 *)(lVar7 + 8);
    *puVar1 = &PTR____owns_two_states_01c66b00;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    *(undefined8 **)(lVar6 + 8) = puVar1;
    *(undefined8 *)(lVar7 + 8) = 0;
    puVar1 = operator_new(0x10);
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    *puVar1 = &PTR____owns_one_state_01c66590;
    puVar1[1] = uVar2;
    *(undefined8 **)(lVar7 + 8) = puVar1;
    *(undefined8 *)(*(long *)(this + 0x38) + 8) = 0;
    puVar1 = operator_new(0x10);
    uVar2 = *(undefined8 *)(lVar7 + 8);
    if (pcVar5 != param_2) {
      pcVar5 = pcVar5 + 1;
    }
    *puVar1 = &PTR_FUN_01c66b48;
    puVar1[1] = uVar2;
    *(undefined8 **)(*(long *)(this + 0x38) + 8) = puVar1;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(lVar7 + 8);
    param_1 = pcVar5;
  } while( true );
}

