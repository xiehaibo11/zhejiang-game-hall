
/* fairygui::GTextInput::setPrompt(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::GTextInput::setPrompt(GTextInput *this,basic_string *param_1)

{
  ulong uVar1;
  byte bVar2;
  basic_string bVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  basic_string *pbVar9;
  Color4B *pCVar10;
  EditBox *pEVar11;
  uint local_60 [4];
  char *local_50;
  long local_48;
  
                    /* try { // try from 00a8d138 to 00b8d18f has its CatchHandler @ 00a8d09c */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  bVar3 = *param_1;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
                    /* catch() { ... } // from try @ 00a8d130 with catch @ 00a8d174 */
  if (uVar1 == 0) {
    pbVar9 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar3 & 1) == 0) {
      pbVar9 = param_1 + 1;
    }
    cocos2d::ui::EditBox::setPlaceHolder(*(EditBox **)(this + 0x208),(char *)pbVar9);
    goto LAB_00a8d278;
  }
  pcVar6 = (char *)UBBParser::getInstance();
  cVar8 = (char)*(undefined8 *)(param_1 + 0x10);
  pEVar11 = *(EditBox **)(this + 0x208);
  if (((byte)*param_1 & 1) == 0) {
    cVar8 = (char)param_1 + '\x01';
  }
  UBBParser::parse(pcVar6,(bool)cVar8);
  pcVar7 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pcVar7 = local_50;
  }
  cocos2d::ui::EditBox::setPlaceHolder(pEVar11,pcVar7);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  bVar2 = pcVar6[0x10];
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) {
LAB_00a8d1e4:
      pCVar10 = *(Color4B **)(this + 0x208);
      if ((bVar2 & 1) == 0) {
        pcVar7 = pcVar6 + 0x11;
      }
      else {
        pcVar7 = *(char **)(pcVar6 + 0x20);
      }
      local_60[0] = ToolSet::hexToColor(pcVar7);
      cocos2d::ui::EditBox::setPlaceholderFontColor(pCVar10);
    }
  }
  else if (*(long *)(pcVar6 + 0x18) != 0) goto LAB_00a8d1e4;
  bVar3 = *(basic_string *)(pcVar6 + 0x28);
  if (((byte)bVar3 & 1) == 0) {
    if ((byte)bVar3 >> 1 == 0) goto LAB_00a8d278;
  }
  else if (*(long *)(pcVar6 + 0x30) == 0) goto LAB_00a8d278;
  pEVar11 = *(EditBox **)(this + 0x208);
  cocos2d::Value::Value((Value *)local_60,(basic_string *)(pcVar6 + 0x28));
  iVar5 = cocos2d::Value::asInt((Value *)local_60);
  cocos2d::ui::EditBox::setPlaceholderFontSize(pEVar11,iVar5);
  cocos2d::Value::~Value((Value *)local_60);
LAB_00a8d278:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

