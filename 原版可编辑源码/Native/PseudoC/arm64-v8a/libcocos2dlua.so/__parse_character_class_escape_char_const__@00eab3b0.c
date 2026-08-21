
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_character_class_escape<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_character_class_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  void *pvVar1;
  ushort uVar2;
  
  if (param_1 == param_2) {
    return param_1;
  }
  switch(*param_1) {
  case 'D':
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    break;
  default:
    goto switchD_00eab3f4_caseD_45;
  case 'S':
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    goto LAB_00eab54c;
  case 'W':
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    goto LAB_00eab4f8;
  case 'd':
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    break;
  case 's':
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
LAB_00eab54c:
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    uVar2 = *(ushort *)((long)pvVar1 + 0xa0) | 1;
    goto LAB_00eab560;
  case 'w':
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
LAB_00eab4f8:
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    *(ushort *)((long)pvVar1 + 0xa0) = *(ushort *)((long)pvVar1 + 0xa0) | 0x60;
    FUN_00eac2e0(pvVar1,0x5f);
    goto LAB_00eab564;
  }
  *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
  *(void **)(this + 0x38) = pvVar1;
  uVar2 = *(ushort *)((long)pvVar1 + 0xa0) | 0x40;
LAB_00eab560:
  *(ushort *)((long)pvVar1 + 0xa0) = uVar2;
LAB_00eab564:
  param_1 = param_1 + 1;
switchD_00eab3f4_caseD_45:
  return param_1;
}

