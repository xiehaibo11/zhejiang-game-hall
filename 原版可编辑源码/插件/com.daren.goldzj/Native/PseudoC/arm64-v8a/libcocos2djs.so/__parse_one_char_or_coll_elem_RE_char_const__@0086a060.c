
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_one_char_or_coll_elem_RE<char const*>(char const*, char const*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_one_char_or_coll_elem_RE<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  if (param_1 == param_2) {
LAB_0086a14c:
    pcVar5 = __parse_bracket_expression<char_const*>(this,param_1,param_2);
    return pcVar5;
  }
  pcVar5 = param_1 + 1;
  uVar2 = (uint)(byte)*param_1;
  if (((pcVar5 == param_2) && (uVar2 == 0x24)) ||
     ((uVar2 - 0x2e < 0x2f && ((1L << ((ulong)(uVar2 - 0x2e) & 0x3f) & 0x600000000001U) != 0)))) {
    if ((uVar2 == 0x5c) && (pcVar5 != param_2)) {
      uVar2 = (int)*pcVar5 - 0x24;
      if ((uVar2 < 0x3b) && ((1L << ((ulong)uVar2 & 0x3f) & 0x580000000000441U) != 0)) {
        __push_char(this,*pcVar5);
        return param_1 + 2;
      }
    }
    if (*param_1 != '.') goto LAB_0086a14c;
    puVar1 = operator_new(0x10);
    lVar3 = *(long *)(this + 0x38);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    *puVar1 = &PTR____owns_one_state_01c66b90;
    puVar1[1] = uVar4;
    *(undefined8 **)(lVar3 + 8) = puVar1;
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(*(long *)(this + 0x38) + 8);
  }
  else {
    __push_char(this,*param_1);
  }
  return param_1 + 1;
}

