
/* fairygui::HtmlParser::endElement(void*, char const*) */

void __thiscall fairygui::HtmlParser::endElement(HtmlParser *this,void *param_1,char *param_2)

{
  basic_string *pbVar1;
  Value *this_00;
  HtmlParser HVar2;
  long lVar3;
  int iVar4;
  vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *this_01;
  HtmlElement *this_02;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_02 = *(HtmlElement **)(this + 0x40);
  if ((this_02 != (HtmlElement *)0x0) && (iVar4 = strcasecmp(param_2,"option"), iVar4 == 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_70,"items");
    this_01 = (vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)
              HtmlElement::getArray(this_02,(basic_string *)local_70);
    pbVar1 = (basic_string *)(this + 0xb0);
    cocos2d::Value::Value(aVStack_58,pbVar1);
    this_00 = *(Value **)(this_01 + 8);
    if (this_00 < *(Value **)(this_01 + 0x10)) {
      cocos2d::Value::Value(this_00,aVStack_58);
      *(Value **)(this_01 + 8) = this_00 + 0x10;
    }
    else {
      std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
      __push_back_slow_path<cocos2d::Value>(this_01,aVStack_58);
    }
    cocos2d::Value::~Value(aVStack_58);
    if (((byte)local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    if (((byte)*pbVar1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00abdee8 with catch @ 00abdf80 */
      *(undefined2 *)pbVar1 = 0;
                    /* catch() { ... } // from try @ 00abdf00 with catch @ 00abdf84 */
    }
    else {
      **(undefined1 **)(this + 0xc0) = 0;
      *(undefined8 *)(this + 0xb8) = 0;
    }
    goto LAB_00abdfe8;
  }
  if (*(int *)(this + 0xa8) == 0) {
    finishTextBlock(this);
  }
  else {
    HVar2 = this[0xb0];
    if (((byte)HVar2 & 1) == 0) {
      if ((byte)HVar2 >> 1 != 0) {
LAB_00abddb8:
        if (((byte)HVar2 & 1) == 0) {
          *(undefined2 *)(this + 0xb0) = 0;
        }
        else {
          **(undefined1 **)(this + 0xc0) = 0;
          *(undefined8 *)(this + 0xb8) = 0;
        }
      }
    }
    else if (*(long *)(this + 0xb8) != 0) goto LAB_00abddb8;
  }
  iVar4 = strcasecmp(param_2,"b");
  if ((((iVar4 == 0) || (iVar4 = strcasecmp(param_2,"i"), iVar4 == 0)) ||
      (iVar4 = strcasecmp(param_2,"u"), iVar4 == 0)) ||
     (iVar4 = strcasecmp(param_2,"font"), iVar4 == 0)) {
    if (*(long *)(this + 0xa0) != 0) {
                    /* try { // try from 00abdf34 to 00bbdfcf has its CatchHandler @ 00abdcac */
      TextFormat::operator=
                ((TextFormat *)(this + 0x48),
                 (TextFormat *)(*(long *)(this + 0x10) + *(long *)(this + 0xa0) * 0x58 + -0x58));
      *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + -1;
    }
  }
  else {
    iVar4 = strcasecmp(param_2,"a");
    if (iVar4 == 0) {
      if (*(long *)(this + 0xa0) != 0) {
                    /* catch() { ... } // from try @ 00abdeb4 with catch @ 00abdfb4 */
        TextFormat::operator=
                  ((TextFormat *)(this + 0x48),
                   (TextFormat *)(*(long *)(this + 0x10) + *(long *)(this + 0xa0) * 0x58 + -0x58));
        *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + -1;
      }
      if (*(long *)(this + 0x28) != *(long *)(this + 0x30)) {
        *(long *)(this + 0x30) = *(long *)(this + 0x30) + -8;
      }
    }
    else {
      iVar4 = strcasecmp(param_2,"head");
                    /* try { // try from 00abdeb4 to 00bbdee7 has its CatchHandler @ 00abdfb4 */
                    /* try { // try from 00abdee8 to 00bbdefb has its CatchHandler @ 00abdf80 */
                    /* try { // try from 00abdf00 to 00bbdf33 has its CatchHandler @ 00abdf84 */
      if (((iVar4 == 0) || (iVar4 = strcasecmp(param_2,"style"), iVar4 == 0)) ||
         ((iVar4 = strcasecmp(param_2,"script"), iVar4 == 0 ||
          ((iVar4 = strcasecmp(param_2,"form"), iVar4 == 0 ||
           (iVar4 = strcasecmp(param_2,"object"), iVar4 == 0)))))) {
        iVar4 = *(int *)(this + 0xa8);
      }
      else {
        iVar4 = strcasecmp(param_2,"select");
        if (iVar4 != 0) goto LAB_00abdfe8;
        iVar4 = *(int *)(this + 0xa8);
        *(undefined8 *)(this + 0x40) = 0;
      }
      *(int *)(this + 0xa8) = iVar4 + -1;
    }
  }
LAB_00abdfe8:
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

