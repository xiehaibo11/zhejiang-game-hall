
/* cocos2d::ActionManager::pauseAllRunningActions() */

void cocos2d::ActionManager::pauseAllRunningActions(void)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long in_x0;
  vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *in_x8;
  long lVar4;
  Ref *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00ee6530 to 00fe6537 has its CatchHandler @ 00ee670c */
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  lVar4 = *(long *)(in_x0 + 0x28);
  if (lVar4 != 0) {
    cVar2 = *(char *)(lVar4 + 0x21);
    while( true ) {
      if (cVar2 == '\0') {
        *(undefined1 *)(lVar4 + 0x21) = 1;
        puVar1 = *(undefined8 **)(in_x8 + 8);
        local_40 = *(Ref **)(lVar4 + 8);
        if (puVar1 == *(undefined8 **)(in_x8 + 0x10)) {
          std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
          __push_back_slow_path<cocos2d::Node*const&>(in_x8,(Node **)&local_40);
        }
        else {
          *puVar1 = local_40;
                    /* try { // try from 00ee6554 to 00fe65af has its CatchHandler @ 00ee671c */
          *(undefined8 **)(in_x8 + 8) = puVar1 + 1;
        }
        Ref::retain(local_40);
      }
      lVar4 = *(long *)(lVar4 + 0x38);
      if (lVar4 == 0) break;
      cVar2 = *(char *)(lVar4 + 0x21);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

