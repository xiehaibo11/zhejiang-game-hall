
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_character_class_escape<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_character_class_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  switch(*param_1) {
  case 'D':
    pvVar1 = operator_new(0xa8);
    uVar4 = *(uint *)(this + 0x18);
    uVar3 = 1;
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    break;
  default:
    goto switchD_008654c4_caseD_45;
  case 'S':
    pvVar1 = operator_new(0xa8);
    uVar4 = *(uint *)(this + 0x18);
    uVar3 = 1;
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    goto LAB_008655bc;
  case 'W':
    pvVar1 = operator_new(0xa8);
    uVar4 = *(uint *)(this + 0x18);
    uVar3 = 1;
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    goto LAB_00865604;
  case 'd':
    pvVar1 = operator_new(0xa8);
    uVar4 = *(uint *)(this + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    uVar3 = 0;
    break;
  case 's':
    pvVar1 = operator_new(0xa8);
    uVar4 = *(uint *)(this + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    uVar3 = 0;
LAB_008655bc:
    FUN_0086649c(pvVar1,this,uVar2,uVar3,uVar4 & 1,uVar4 >> 3 & 1);
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    *(ushort *)((long)pvVar1 + 0xa0) = *(ushort *)((long)pvVar1 + 0xa0) | 1;
    goto LAB_0086562c;
  case 'w':
    pvVar1 = operator_new(0xa8);
    uVar4 = *(uint *)(this + 0x18);
    uVar2 = *(undefined8 *)(*(long *)(this + 0x38) + 8);
    uVar3 = 0;
LAB_00865604:
    FUN_0086649c(pvVar1,this,uVar2,uVar3,uVar4 & 1,uVar4 >> 3 & 1);
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    *(ushort *)((long)pvVar1 + 0xa0) = *(ushort *)((long)pvVar1 + 0xa0) | 0x60;
    FUN_008662f0(pvVar1,0x5f);
    goto LAB_0086562c;
  }
  FUN_0086649c(pvVar1,this,uVar2,uVar3,uVar4 & 1,uVar4 >> 3 & 1);
  *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
  *(void **)(this + 0x38) = pvVar1;
  *(ushort *)((long)pvVar1 + 0xa0) = *(ushort *)((long)pvVar1 + 0xa0) | 0x40;
LAB_0086562c:
  param_1 = param_1 + 1;
switchD_008654c4_caseD_45:
  return param_1;
}

