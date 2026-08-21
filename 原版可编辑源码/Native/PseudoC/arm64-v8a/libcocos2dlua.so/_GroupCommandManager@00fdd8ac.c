
/* cocos2d::GroupCommandManager::~GroupCommandManager() */

void __thiscall cocos2d::GroupCommandManager::~GroupCommandManager(GroupCommandManager *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(this + 0x50);
  *(undefined ***)this = &PTR__GroupCommandManager_01723fc8;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

