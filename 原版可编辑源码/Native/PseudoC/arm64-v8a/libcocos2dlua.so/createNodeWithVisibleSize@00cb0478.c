
/* cocos2d::CSLoader::createNodeWithVisibleSize(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

Node * cocos2d::CSLoader::createNodeWithVisibleSize(basic_string *param_1)

{
  long lVar1;
  Node *pNVar2;
  undefined1 auStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pNVar2 = (Node *)createNode(param_1);
  if (pNVar2 != (Node *)0x0) {
    Director::getInstance();
    Director::getVisibleSize();
    (**(code **)(*(long *)pNVar2 + 0x160))(pNVar2,auStack_30);
    cocos2d::ui::Helper::doLayout(pNVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return pNVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

