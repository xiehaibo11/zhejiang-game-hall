
/* cocos2d::ui::PageViewIndicator::~PageViewIndicator() */

void __thiscall cocos2d::ui::PageViewIndicator::~PageViewIndicator(PageViewIndicator *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__PageViewIndicator_016dad38;
  if (((byte)this[0x350] & 1) != 0) {
    operator_delete(*(void **)(this + 0x360));
  }
  puVar1 = *(undefined8 **)(this + 0x318);
  puVar2 = *(undefined8 **)(this + 800);
  if (puVar1 != puVar2) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x318);
  }
  *(undefined8 **)(this + 800) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 800) = puVar1;
    operator_delete(puVar1);
  }
  ProtectedNode::~ProtectedNode((ProtectedNode *)this);
  return;
}

