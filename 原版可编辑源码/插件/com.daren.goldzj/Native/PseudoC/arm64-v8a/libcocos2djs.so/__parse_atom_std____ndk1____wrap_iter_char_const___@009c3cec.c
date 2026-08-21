
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_atom<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_atom<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_2,char *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_2 != param_3) {
    cVar1 = *param_2;
    switch((int)cVar1) {
    case 0x28:
      pcVar4 = param_2 + 1;
      if (pcVar4 == param_3) goto LAB_009c3f84;
      if (((param_2 + 2 != param_3) && (*pcVar4 == '?')) && (param_2[2] == ':')) {
        *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
        pcVar4 = (char *)__parse_ecma_exp<std::__ndk1::__wrap_iter<char_const*>>
                                   (this,param_2 + 3,param_3);
        if ((pcVar4 != param_3) && (*pcVar4 == ')')) {
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
          return pcVar4 + 1;
        }
        goto LAB_009c3f84;
      }
      if (((byte)this[0x18] >> 1 & 1) == 0) {
        puVar2 = operator_new(0x18);
        lVar5 = *(long *)(this + 0x38);
        iVar7 = *(int *)(this + 0x1c) + 1;
        *(int *)(this + 0x1c) = iVar7;
        uVar6 = *(undefined8 *)(lVar5 + 8);
        *(int *)(puVar2 + 2) = iVar7;
        *puVar2 = &PTR____owns_one_state_01c66998;
        puVar2[1] = uVar6;
        *(undefined8 **)(lVar5 + 8) = puVar2;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      else {
        iVar7 = *(int *)(this + 0x1c);
      }
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      param_2 = (char *)__parse_ecma_exp<std::__ndk1::__wrap_iter<char_const*>>(this,pcVar4,param_3)
      ;
      if ((param_2 == param_3) || (*param_2 != ')')) goto LAB_009c3f84;
      if (((byte)this[0x18] >> 1 & 1) == 0) {
        puVar2 = operator_new(0x18);
        lVar5 = *(long *)(this + 0x38);
        uVar6 = *(undefined8 *)(lVar5 + 8);
        *(int *)(puVar2 + 2) = iVar7;
        *puVar2 = &PTR____owns_one_state_01c669e0;
        puVar2[1] = uVar6;
        *(undefined8 **)(lVar5 + 8) = puVar2;
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      }
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
      break;
    case 0x29:
    case 0x2c:
    case 0x2d:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
switchD_009c3d38_caseD_29:
      pcVar4 = (char *)__parse_pattern_character<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,param_2,param_3);
      return pcVar4;
    case 0x2e:
      puVar2 = operator_new(0x10);
      lVar5 = *(long *)(this + 0x38);
      uVar6 = *(undefined8 *)(lVar5 + 8);
      *puVar2 = &PTR____owns_one_state_01c66758;
      puVar2[1] = uVar6;
      *(undefined8 **)(lVar5 + 8) = puVar2;
      *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
      break;
    case 0x5b:
      pcVar4 = (char *)__parse_bracket_expression<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,param_2,param_3);
      return pcVar4;
    case 0x5c:
      if (cVar1 != '\\') {
        return param_2;
      }
      pcVar4 = param_2 + 1;
      if (pcVar4 == param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_008653b8();
      }
      pcVar3 = (char *)__parse_decimal_escape<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pcVar4,param_3);
      if (pcVar4 != pcVar3) {
        return pcVar3;
      }
      pcVar3 = (char *)__parse_character_class_escape<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pcVar4,param_3);
      if (pcVar4 != pcVar3) {
        return pcVar3;
      }
      pcVar3 = (char *)__parse_character_escape<std::__ndk1::__wrap_iter<char_const*>>
                                 (this,pcVar4,param_3,0);
      if (pcVar4 == pcVar3) {
        return param_2;
      }
      return pcVar3;
    default:
      if (cVar1 != 0x7b) goto switchD_009c3d38_caseD_29;
    case 0x2a:
    case 0x2b:
    case 0x3f:
      FUN_00865308();
LAB_009c3f84:
                    /* WARNING: Subroutine does not return */
      FUN_008640f8();
    }
    param_2 = param_2 + 1;
  }
  return param_2;
}

