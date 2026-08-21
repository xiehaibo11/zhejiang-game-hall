
/* v8::internal::RegExpUnparser::VisitAssertion(v8::internal::RegExpAssertion*, void*) */

undefined8 v8::internal::RegExpUnparser::VisitAssertion(RegExpAssertion *param_1,void *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  switch(*(undefined4 *)((long)param_2 + 8)) {
  case 0:
    pbVar1 = *(basic_ostream **)(param_1 + 8);
    pcVar2 = "@^l";
    uVar3 = 3;
    break;
  case 1:
    pbVar1 = *(basic_ostream **)(param_1 + 8);
    pcVar2 = "@^i";
    uVar3 = 3;
    break;
  case 2:
    pbVar1 = *(basic_ostream **)(param_1 + 8);
    pcVar2 = "@$l";
    uVar3 = 3;
    break;
  case 3:
    pbVar1 = *(basic_ostream **)(param_1 + 8);
    pcVar2 = "@$i";
    uVar3 = 3;
    break;
  case 4:
    pbVar1 = *(basic_ostream **)(param_1 + 8);
    pcVar2 = "@b";
    goto LAB_0152d984;
  case 5:
    pbVar1 = *(basic_ostream **)(param_1 + 8);
    pcVar2 = "@B";
LAB_0152d984:
    uVar3 = 2;
    break;
  default:
    goto switchD_0152d914_default;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar2,uVar3);
switchD_0152d914_default:
  return 0;
}

