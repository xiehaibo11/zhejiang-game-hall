
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_character_class_escape<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

undefined1 * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_character_class_escape<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,undefined1 *param_2,
          undefined1 *param_3)

{
  void *pvVar1;
  ushort uVar2;
  
  if (param_2 == param_3) {
    return param_2;
  }
  switch(*param_2) {
  case 0x44:
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    break;
  default:
    goto switchD_00f299c0_caseD_45;
  case 0x53:
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    goto LAB_00f29b18;
  case 0x57:
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    goto LAB_00f29ac4;
  case 100:
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    break;
  case 0x73:
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
LAB_00f29b18:
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    uVar2 = *(ushort *)((long)pvVar1 + 0xa0) | 1;
    goto LAB_00f29b2c;
  case 0x77:
    pvVar1 = operator_new(0xa8);
    FUN_00eac494(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
LAB_00f29ac4:
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    *(ushort *)((long)pvVar1 + 0xa0) = *(ushort *)((long)pvVar1 + 0xa0) | 0x60;
    FUN_00eac2e0(pvVar1,0x5f);
    goto LAB_00f29b30;
  }
  *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
  *(void **)(this + 0x38) = pvVar1;
  uVar2 = *(ushort *)((long)pvVar1 + 0xa0) | 0x40;
LAB_00f29b2c:
  *(ushort *)((long)pvVar1 + 0xa0) = uVar2;
LAB_00f29b30:
  param_2 = param_2 + 1;
switchD_00f299c0_caseD_45:
  return param_2;
}

