
/* cocosbuilder::CCBAnimationManager::addDocumentCallbackNode(cocos2d::Node*) */

void __thiscall
cocosbuilder::CCBAnimationManager::addDocumentCallbackNode(CCBAnimationManager *this,Node *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  Node *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0x138);
  local_30 = param_1;
  if (puVar1 == *(undefined8 **)(this + 0x140)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>
              ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)(this + 0x130),
               &local_30);
  }
  else {
    *puVar1 = param_1;
    *(undefined8 **)(this + 0x138) = puVar1 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

