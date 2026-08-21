
/* cocosbuilder::CCBAnimationManager::addDocumentOutletName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >) */

void __thiscall
cocosbuilder::CCBAnimationManager::addDocumentOutletName
          (CCBAnimationManager *this,basic_string *param_2)

{
  Value *this_00;
  long lVar1;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Value::Value(aVStack_48,param_2);
  this_00 = *(Value **)(this + 0xf0);
  if (this_00 < *(Value **)(this + 0xf8)) {
    cocos2d::Value::Value(this_00,aVStack_48);
    *(Value **)(this + 0xf0) = this_00 + 0x10;
  }
  else {
    std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
    __push_back_slow_path<cocos2d::Value>
              ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)(this + 0xe8),
               aVStack_48);
  }
  cocos2d::Value::~Value(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

