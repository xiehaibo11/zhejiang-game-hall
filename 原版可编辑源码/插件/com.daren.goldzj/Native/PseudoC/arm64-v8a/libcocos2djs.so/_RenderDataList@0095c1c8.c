
/* cocos2d::renderer::RenderDataList::~RenderDataList() */

void __thiscall cocos2d::renderer::RenderDataList::~RenderDataList(RenderDataList *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x10);
  *(undefined ***)this = &PTR__RenderDataList_01c69758;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(this + 0x18);
    puVar1 = puVar3;
    if (puVar2 != puVar3) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
      } while (puVar3 != puVar2);
      puVar1 = *(undefined8 **)(this + 0x10);
    }
    *(undefined8 **)(this + 0x18) = puVar3;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

