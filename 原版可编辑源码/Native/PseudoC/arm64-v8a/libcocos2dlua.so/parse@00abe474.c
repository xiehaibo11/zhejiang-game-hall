
/* fairygui::HtmlParser::parse(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, fairygui::TextFormat const&,
   std::__ndk1::vector<fairygui::HtmlElement*, std::__ndk1::allocator<fairygui::HtmlElement*> >&,
   fairygui::HtmlParseOptions const&) */

void __thiscall
fairygui::HtmlParser::parse
          (HtmlParser *this,basic_string *param_1,TextFormat *param_2,vector *param_3,
          HtmlParseOptions *param_4)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  ulong *puVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [16];
  void *local_68;
  ulong local_60;
  ulong uStack_58;
  char *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  TextFormat::operator=((TextFormat *)(this + 0x48),param_2);
  *(vector **)(this + 8) = param_3;
  *(undefined4 *)(this + 200) = *(undefined4 *)param_4;
  this[0xac] = (HtmlParser)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  std::__ndk1::operator+((__ndk1 *)"<dummy>",(char *)param_1,(basic_string *)param_2);
  puVar4 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(local_78,"</dummy>",8);
  local_50 = (char *)puVar4[2];
  uStack_58 = puVar4[1];
  local_60 = *puVar4;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  cocos2d::SAXParser::SAXParser((SAXParser *)local_78);
  cocos2d::SAXParser::setDelegator((SAXParser *)local_78,(SAXDelegator *)this);
  uVar1 = local_60 >> 1 & 0x7f;
  pcVar3 = (char *)((ulong)&local_60 | 1);
  if ((local_60 & 1) != 0) {
    uVar1 = uStack_58;
    pcVar3 = local_50;
  }
  cocos2d::SAXParser::parseIntrusive((SAXParser *)local_78,pcVar3,uVar1);
  cocos2d::SAXParser::~SAXParser((SAXParser *)local_78);
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

