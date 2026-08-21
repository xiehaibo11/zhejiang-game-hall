
/* cocosbuilder::NodeLoader::parsePropTypeDegrees(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*, char const*) */

undefined1  [16] __thiscall
cocosbuilder::NodeLoader::parsePropTypeDegrees
          (NodeLoader *this,Node *param_1,Node *param_2,CCBReader *param_3,char *param_4)

{
  long lVar1;
  __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  long lVar2;
  long lVar3;
  CCBAnimationManager *this_01;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [16];
  void *local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  auVar4 = CCBReader::readFloat(param_3);
  uVar5 = auVar4._8_8_;
  this_00 = (__tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
             *)CCBReader::getAnimatedProperties(param_3);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,param_4);
  lVar2 = std::__ndk1::
          __tree<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    (this_00,(basic_string *)local_80);
  lVar3 = CCBReader::getAnimatedProperties(param_3);
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (lVar3 + 8 != lVar2) {
    this_01 = (CCBAnimationManager *)CCBReader::getAnimationManager(param_3);
    cocos2d::Value::Value(aVStack_68,auVar4._0_4_);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_80,param_4);
    CCBAnimationManager::setBaseValue(this_01,aVStack_68,param_1,(basic_string *)local_80);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    cocos2d::Value::~Value(aVStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    auVar4._8_8_ = uVar5;
    return auVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

