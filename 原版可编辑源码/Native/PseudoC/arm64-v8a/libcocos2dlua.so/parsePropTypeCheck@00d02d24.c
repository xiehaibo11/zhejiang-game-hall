
/* cocosbuilder::NodeLoader::parsePropTypeCheck(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*, char const*) */

byte __thiscall
cocosbuilder::NodeLoader::parsePropTypeCheck
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3,char *param_4)

{
  long lVar1;
  byte bVar2;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  long lVar3;
  long lVar4;
  CCBAnimationManager *this_01;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  bVar2 = CCBReader::readBool(param_3);
  this_00 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)CCBReader::getAnimatedProperties(param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,param_4);
  lVar3 = std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this_00,(basic_string *)local_80);
  lVar4 = CCBReader::getAnimatedProperties(param_3);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (lVar4 + 8 != lVar3) {
    this_01 = (CCBAnimationManager *)CCBReader::getAnimationManager(param_3);
    cocos2d::Value::Value(aVStack_68,(bool)(bVar2 & 1));
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,param_4);
    CCBAnimationManager::setBaseValue(this_01,aVStack_68,param_1,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    cocos2d::Value::~Value(aVStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return bVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

