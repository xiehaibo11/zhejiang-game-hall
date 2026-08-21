
undefined8 FUN_00fcac98(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *this;
  Node *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = (Node *)*param_2;
  this = *(vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> **)(param_1 + 8);
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar1 == *(undefined8 **)(this + 0x10)) {
    std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
    __push_back_slow_path<cocos2d::Node*const&>(this,&local_30);
  }
  else {
    *puVar1 = local_30;
    *(undefined8 **)(this + 8) = puVar1 + 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

