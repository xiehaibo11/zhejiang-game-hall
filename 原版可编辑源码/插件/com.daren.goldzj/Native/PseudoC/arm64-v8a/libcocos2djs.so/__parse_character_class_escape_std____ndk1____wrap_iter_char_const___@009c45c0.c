
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
  
                    /* try { // try from 009c45c0 to 00ac45cb has its CatchHandler @ 009c4760 */
                    /* try { // try from 009c45cc to 00ac46eb has its CatchHandler @ 009c4778 */
  if (param_2 == param_3) {
    return param_2;
  }
  switch(*param_2) {
  case 0x44:
    pvVar1 = operator_new(0xa8);
    FUN_0086649c(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    break;
  default:
    goto switchD_009c4604_caseD_45;
  case 0x53:
    pvVar1 = operator_new(0xa8);
    FUN_0086649c(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    goto LAB_009c475c;
  case 0x57:
    pvVar1 = operator_new(0xa8);
    FUN_0086649c(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),1,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    goto LAB_009c4708;
  case 100:
    pvVar1 = operator_new(0xa8);
    FUN_0086649c(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
    break;
  case 0x73:
    pvVar1 = operator_new(0xa8);
    FUN_0086649c(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
LAB_009c475c:
                    /* catch() { ... } // from try @ 009c45c0 with catch @ 009c4760 */
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
                    /* catch() { ... } // from try @ 009c45b4 with catch @ 009c4764 */
    *(void **)(this + 0x38) = pvVar1;
                    /* catch() { ... } // from try @ 009c4594 with catch @ 009c4768 */
    uVar2 = *(ushort *)((long)pvVar1 + 0xa0) | 1;
    goto LAB_009c4770;
  case 0x77:
    pvVar1 = operator_new(0xa8);
                    /* try { // try from 009c46ec to 00ac47cf has its CatchHandler @ 009c4540 */
    FUN_0086649c(pvVar1,this,*(undefined8 *)(*(long *)(this + 0x38) + 8),0,
                 *(uint *)(this + 0x18) & 1,*(uint *)(this + 0x18) >> 3 & 1);
LAB_009c4708:
    *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
    *(void **)(this + 0x38) = pvVar1;
    *(ushort *)((long)pvVar1 + 0xa0) = *(ushort *)((long)pvVar1 + 0xa0) | 0x60;
    FUN_008662f0(pvVar1,0x5f);
    goto LAB_009c4774;
  }
  *(void **)(*(long *)(this + 0x38) + 8) = pvVar1;
  *(void **)(this + 0x38) = pvVar1;
  uVar2 = *(ushort *)((long)pvVar1 + 0xa0) | 0x40;
LAB_009c4770:
  *(ushort *)((long)pvVar1 + 0xa0) = uVar2;
LAB_009c4774:
  param_2 = param_2 + 1;
switchD_009c4604_caseD_45:
                    /* catch() { ... } // from try @ 009c45cc with catch @ 009c4778 */
  return param_2;
}

