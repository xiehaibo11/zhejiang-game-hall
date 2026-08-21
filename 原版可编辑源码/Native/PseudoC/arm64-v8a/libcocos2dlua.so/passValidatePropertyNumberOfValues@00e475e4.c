
/* cocos2d::PUScriptTranslator::passValidatePropertyNumberOfValues(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned short) */

bool __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyNumberOfValues
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2,
          basic_string *param_3,ushort param_4)

{
  return *(ulong *)(param_2 + 0x68) <= (ulong)param_4;
}

