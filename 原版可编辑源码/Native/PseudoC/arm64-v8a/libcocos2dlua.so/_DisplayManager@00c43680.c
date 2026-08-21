
/* cocostudio::DisplayManager::~DisplayManager() */

void __thiscall cocostudio::DisplayManager::~DisplayManager(DisplayManager *this)

{
  int iVar1;
  long *plVar2;
  DisplayManager *pDVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined ***)this = &PTR__DisplayManager_016c9580;
  pDVar3 = this + 0x28;
  puVar4 = *(undefined8 **)pDVar3;
  puVar5 = *(undefined8 **)(this + 0x30);
  if (puVar4 != puVar5) {
    do {
      cocos2d::Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    puVar4 = *(undefined8 **)pDVar3;
  }
  plVar2 = *(long **)(this + 0x40);
  *(undefined8 **)(this + 0x30) = puVar4;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,1);
    iVar1 = cocos2d::Ref::getReferenceCount(*(Ref **)(this + 0x40));
    if ((iVar1 != 0) && (*(Ref **)(this + 0x40) != (Ref *)0x0)) {
      cocos2d::Ref::release(*(Ref **)(this + 0x40));
      *(undefined8 *)(this + 0x40) = 0;
    }
  }
  puVar4 = *(undefined8 **)(this + 0x28);
  puVar5 = *(undefined8 **)(this + 0x30);
  if (puVar4 != puVar5) {
    do {
      cocos2d::Ref::release((Ref *)*puVar4);
      puVar4 = puVar4 + 1;
    } while (puVar5 != puVar4);
    puVar4 = *(undefined8 **)pDVar3;
  }
  *(undefined8 **)(this + 0x30) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x30) = puVar4;
    operator_delete(puVar4);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

