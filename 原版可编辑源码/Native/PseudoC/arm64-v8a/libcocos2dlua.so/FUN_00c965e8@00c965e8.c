
/* WARNING: Type propagation algorithm not settling */

void FUN_00c965e8(DictionaryHelper *param_1)

{
  char *pcVar1;
  GenericValue *unaff_x19;
  TextAtlas *unaff_x20;
  WidgetReader *unaff_x21;
  int unaff_w22;
  int unaff_w23;
  long unaff_x27;
  long unaff_x29;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> in_stack_00000008;
  void *in_stack_00000018;
  basic_string in_stack_00000020;
  void *in_stack_00000030;
  basic_string in_stack_00000038;
  void *in_stack_00000048;
  byte in_stack_00000050;
  void *in_stack_00000060;
  byte in_stack_00000070;
  void *in_stack_00000080;
  
  pcVar1 = (char *)cocostudio::DictionaryHelper::getStringValue_json
                             (param_1,unaff_x19,"startCharMap",(char *)0x0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&stack0x00000008,pcVar1);
  cocos2d::ui::TextAtlas::setProperty
            (unaff_x20,&stack0x00000038,&stack0x00000020,unaff_w22,unaff_w23,
             (basic_string *)&stack0x00000008);
  if (((byte)in_stack_00000008 & 1) != 0) {
    operator_delete(in_stack_00000018);
  }
  if (((byte)in_stack_00000020 & 1) != 0) {
    operator_delete(in_stack_00000030);
  }
  if (((byte)in_stack_00000038 & 1) != 0) {
    operator_delete(in_stack_00000048);
  }
  if ((in_stack_00000050 & 1) != 0) {
    operator_delete(in_stack_00000060);
  }
  cocostudio::WidgetReader::setColorPropsFromJsonDictionary(unaff_x21,(Widget *)unaff_x20,unaff_x19)
  ;
  if ((in_stack_00000070 & 1) != 0) {
    operator_delete(in_stack_00000080);
  }
  if (*(long *)(unaff_x27 + 0x28) != *(long *)(unaff_x29 + -0x58)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

