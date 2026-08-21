
/* fairygui::FUIContainer::~FUIContainer() */

void __thiscall fairygui::FUIContainer::~FUIContainer(FUIContainer *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = *(void **)(this + 0x300);
  *(undefined ***)this = &PTR__FUIContainer_016a7ac8;
  if (pvVar1 != (void *)0x0) {
    cocos2d::CustomCommand::~CustomCommand((CustomCommand *)((long)pvVar1 + 0x90));
    cocos2d::CustomCommand::~CustomCommand((CustomCommand *)((long)pvVar1 + 0x40));
    operator_delete(pvVar1);
  }
  puVar2 = *(undefined8 **)(this + 0x308);
  *(undefined8 *)(this + 0x300) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    if ((Node *)*puVar2 != (Node *)0x0) {
      cocos2d::Node::stopAllActions((Node *)*puVar2);
      cocos2d::Ref::release((Ref *)**(undefined8 **)(this + 0x308));
      puVar2 = *(undefined8 **)(this + 0x308);
    }
    if ((void *)puVar2[1] != (void *)0x0) {
      operator_delete((void *)puVar2[1]);
      puVar2 = *(undefined8 **)(this + 0x308);
    }
    puVar2[1] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(puVar2 + 0x1c));
      cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(puVar2 + 0x12));
      cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(puVar2 + 8));
      cocos2d::GroupCommand::~GroupCommand((GroupCommand *)(puVar2 + 2));
      operator_delete(puVar2);
    }
  }
  cocos2d::Node::~Node((Node *)this);
  return;
}

