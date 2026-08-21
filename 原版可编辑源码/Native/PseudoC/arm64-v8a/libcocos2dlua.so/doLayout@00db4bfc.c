
/* cocos2d::ui::Helper::doLayout(cocos2d::Node*) */

void cocos2d::ui::Helper::doLayout(Node *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  LayoutComponent *this;
  long lVar5;
  Node *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (DAT_017774c8 != '\0') {
    plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x240))();
    puVar2 = (undefined8 *)plVar4[1];
    for (puVar1 = (undefined8 *)*plVar4; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      this_00 = (Node *)*puVar1;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_60,"__ui_layout");
      this = (LayoutComponent *)Node::getComponent(this_00,(basic_string *)local_60);
      if (((byte)local_60[0] & 1) != 0) {
        operator_delete(local_50);
      }
      lVar5 = (**(code **)(*(long *)*puVar1 + 0x260))();
      if ((this != (LayoutComponent *)0x0) && (lVar5 != 0)) {
        LayoutComponent::refreshLayout(this);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

