
/* cocos2d::ComponentContainer::ComponentContainer(cocos2d::Node*) */

void __thiscall
cocos2d::ComponentContainer::ComponentContainer(ComponentContainer *this,Node *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(Node **)(this + 0x28) = param_1;
  return;
}

