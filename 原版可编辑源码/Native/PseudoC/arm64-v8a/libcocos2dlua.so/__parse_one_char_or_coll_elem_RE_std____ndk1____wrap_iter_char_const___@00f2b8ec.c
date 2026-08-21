
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_one_char_or_coll_elem_RE<std::__ndk1::__wrap_iter<char
   const*> >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_one_char_or_coll_elem_RE<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  byte *pbVar5;
  
  if (param_2 == param_3) {
LAB_00f2b9d8:
    pbVar5 = (byte *)__parse_bracket_expression<std::__ndk1::__wrap_iter<char_const*>>(this,param_2)
    ;
    return pbVar5;
  }
  pbVar5 = param_2 + 1;
  uVar2 = (uint)*param_2;
  if (((pbVar5 == param_3) && (uVar2 == 0x24)) ||
     ((uVar2 - 0x2e < 0x2f && ((1L << ((ulong)(uVar2 - 0x2e) & 0x3f) & 0x600000000001U) != 0)))) {
    if ((uVar2 == 0x5c) && (pbVar5 != param_3)) {
      uVar2 = (int)(char)*pbVar5 - 0x24;
      if ((uVar2 < 0x3b) && ((1L << ((ulong)uVar2 & 0x3f) & 0x580000000000441U) != 0)) {
        __push_char(this,*pbVar5);
        return param_2 + 2;
      }
    }
    if (*param_2 != 0x2e) goto LAB_00f2b9d8;
    puVar1 = operator_new(0x10);
    lVar3 = *(long *)(this + 0x38);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    *puVar1 = &PTR____owns_one_state_016f53e0;
    puVar1[1] = uVar4;
    *(undefined8 **)(lVar3 + 8) = puVar1;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  }
  else {
    __push_char(this,*param_2);
  }
  return param_2 + 1;
}

