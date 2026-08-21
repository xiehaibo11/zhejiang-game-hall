
/* cocos2d::PUScriptTranslator::passValidatePropertyNumberOfValuesRange(cocos2d::PUScriptCompiler*,
   cocos2d::PUPropertyAbstractNode*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned short, unsigned short) */

bool __thiscall
cocos2d::PUScriptTranslator::passValidatePropertyNumberOfValuesRange
          (PUScriptTranslator *this,PUScriptCompiler *param_1,PUPropertyAbstractNode *param_2,
          basic_string *param_3,ushort param_4,ushort param_5)

{
  if (*(ulong *)(param_2 + 0x68) < (ulong)param_4) {
    return false;
  }
  return *(ulong *)(param_2 + 0x68) <= (ulong)param_5;
}

