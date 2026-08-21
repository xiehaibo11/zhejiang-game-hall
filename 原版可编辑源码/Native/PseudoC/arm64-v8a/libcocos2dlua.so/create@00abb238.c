
/* fairygui::HtmlObject::create(fairygui::FUIRichText*, fairygui::HtmlElement*) */

void __thiscall
fairygui::HtmlObject::create(HtmlObject *this,FUIRichText *param_1,HtmlElement *param_2)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_68 [16];
  void *local_58;
  byte local_50 [8];
  ulong local_48;
  char *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 00abb198 with catch @ 00abb244
                       catch() { ... } // from try @ 00abb1f8 with catch @ 00abb244 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(HtmlElement **)(this + 8) = param_2;
  *(FUIRichText **)(this + 0x10) = param_1;
  switch(*(undefined4 *)(param_2 + 8)) {
  case 1:
    createImage(this);
    break;
  case 3:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_68,"type");
    HtmlElement::getString((basic_string *)param_2,(basic_string *)local_68);
    if (((byte)local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
    uVar4 = (ulong)local_50[0];
    if ((local_50[0] & 1) == 0) {
      pcVar5 = (char *)((ulong)local_50 | 1);
      pcVar7 = pcVar5 + (local_50[0] >> 1);
      if (pcVar5 != pcVar7) {
LAB_00abb318:
        do {
          iVar3 = tolower((int)*pcVar5);
          pcVar6 = pcVar5 + 1;
          *pcVar5 = (char)iVar3;
          pcVar5 = pcVar6;
        } while (pcVar7 != pcVar6);
        uVar4 = (ulong)local_50[0];
      }
    }
    else {
      pcVar7 = local_40 + local_48;
      pcVar5 = local_40;
      if (local_40 != pcVar7) goto LAB_00abb318;
    }
    uVar1 = uVar4 >> 1;
    if ((uVar4 & 1) != 0) {
      uVar1 = local_48;
    }
    if (uVar1 == 6) {
      pcVar7 = (char *)((ulong)local_50 | 1);
      if ((uVar4 & 1) != 0) {
        pcVar7 = local_40;
      }
      iVar3 = memcmp(pcVar7,"button",6);
      if ((iVar3 != 0) && (iVar3 = memcmp(pcVar7,"submit",6), iVar3 != 0)) goto LAB_00abb390;
      createButton(this);
    }
    else {
LAB_00abb390:
      createInput(this);
    }
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    break;
  case 4:
    createSelect(this);
    break;
  case 5:
    createCommon(this);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

