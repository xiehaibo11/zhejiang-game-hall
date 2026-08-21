
/* fairygui::UIPackage::setBranch(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void fairygui::UIPackage::setBranch(basic_string *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  
                    /* catch() { ... } // from try @ 00a9f594 with catch @ 00a9f64c */
  plVar3 = _packageList;
  plVar4 = DAT_01782970;
  if (param_1 != (basic_string *)&_branch) {
    uVar1 = *(ulong *)(param_1 + 8);
    pbVar2 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar2 = param_1 + 1;
      uVar1 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           &_branch,(char *)pbVar2,uVar1);
    plVar3 = _packageList;
    plVar4 = DAT_01782970;
  }
  for (; plVar5 = DAT_01782970, plVar3 != DAT_01782970; plVar3 = plVar3 + 1) {
    lVar7 = *plVar3;
    DAT_01782970 = plVar4;
    if (*(long *)(lVar7 + 0x150) != *(long *)(lVar7 + 0x148)) {
      uVar6 = ToolSet::findInStringArray((vector *)(lVar7 + 0x148),param_1);
      *(undefined4 *)(*plVar3 + 0x160) = uVar6;
    }
    plVar4 = DAT_01782970;
    DAT_01782970 = plVar5;
  }
  DAT_01782970 = plVar4;
  return;
}

