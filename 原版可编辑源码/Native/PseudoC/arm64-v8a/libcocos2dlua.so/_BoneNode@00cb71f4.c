
/* cocostudio::timeline::BoneNode::~BoneNode() */

void __thiscall cocostudio::timeline::BoneNode::~BoneNode(BoneNode *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x390);
  puVar2 = *(undefined8 **)(this + 0x398);
  *(undefined ***)this = &PTR__BoneNode_016cce88;
  *(undefined ***)(this + 0x2f8) = &PTR__BoneNode_016cd4c0;
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x390);
  }
  *(undefined8 **)(this + 0x398) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x398) = puVar1;
    operator_delete(puVar1);
  }
  puVar1 = *(undefined8 **)(this + 0x378);
  puVar2 = *(undefined8 **)(this + 0x380);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x378);
  }
  *(undefined8 **)(this + 0x380) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x380) = puVar1;
    operator_delete(puVar1);
  }
  cocos2d::CustomCommand::~CustomCommand((CustomCommand *)(this + 0x300));
  cocos2d::Node::~Node((Node *)this);
  return;
}

