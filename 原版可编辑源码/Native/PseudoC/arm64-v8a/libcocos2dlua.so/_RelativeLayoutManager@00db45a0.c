
/* cocos2d::ui::RelativeLayoutManager::~RelativeLayoutManager() */

void __thiscall
cocos2d::ui::RelativeLayoutManager::~RelativeLayoutManager(RelativeLayoutManager *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__RelativeLayoutManager_016d9ac8;
  puVar1 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar1 != puVar2) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x30);
  }
  *(undefined8 **)(this + 0x38) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x38) = puVar1;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

