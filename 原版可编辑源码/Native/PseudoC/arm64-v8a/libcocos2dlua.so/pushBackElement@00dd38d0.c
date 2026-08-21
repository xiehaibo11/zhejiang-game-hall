
/* MyXMLVisitor::pushBackElement(cocos2d::ui::RichElement*) */

void __thiscall MyXMLVisitor::pushBackElement(MyXMLVisitor *this,RichElement *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  RichElement *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(this + 0x20);
  puVar2 = *(undefined8 **)(lVar3 + 0x500);
  local_30 = param_1;
  if (puVar2 == *(undefined8 **)(lVar3 + 0x508)) {
    std::__ndk1::vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>
    ::__push_back_slow_path<cocos2d::ui::RichElement*const&>
              ((vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>
                *)(lVar3 + 0x4f8),&local_30);
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(lVar3 + 0x500) = puVar2 + 1;
  }
  cocos2d::Ref::retain((Ref *)local_30);
  *(undefined1 *)(lVar3 + 0x4f0) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

