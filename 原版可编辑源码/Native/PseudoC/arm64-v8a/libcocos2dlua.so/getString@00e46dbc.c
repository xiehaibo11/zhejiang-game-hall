
/* cocos2d::PUScriptTranslator::getString(cocos2d::PUAbstractNode const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*)
    */

undefined8 cocos2d::PUScriptTranslator::getString(PUAbstractNode *param_1,basic_string *param_2)

{
  ulong uVar1;
  PUAbstractNode *pPVar2;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    if (param_1 + 0x38 != (PUAbstractNode *)param_2) {
      uVar1 = *(ulong *)(param_1 + 0x40);
      pPVar2 = *(PUAbstractNode **)(param_1 + 0x48);
      if (((byte)param_1[0x38] & 1) == 0) {
        pPVar2 = param_1 + 0x39;
        uVar1 = (ulong)((byte)param_1[0x38] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_2,(char *)pPVar2,uVar1);
    }
    return 1;
  }
  return 0;
}

