
/* cocostudio::ActionObject::~ActionObject() */

void __thiscall cocostudio::ActionObject::~ActionObject(ActionObject *this)

{
  ActionObject *pAVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this[0x58] = (ActionObject)0x0;
  *(undefined ***)this = &PTR__ActionObject_016c7cc8;
  cocos2d::Scheduler::unscheduleAllForTarget(*(Scheduler **)(this + 0x68),this);
  pAVar1 = this + 0x28;
  puVar2 = *(undefined8 **)pAVar1;
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar2 != puVar3) {
    do {
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined8 **)pAVar1;
  }
  *(undefined8 **)(this + 0x30) = puVar2;
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x68));
  }
  if (*(Ref **)(this + 0x70) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x70));
  }
  if (((byte)this[0x40] & 1) != 0) {
    operator_delete(*(void **)(this + 0x50));
  }
  puVar2 = *(undefined8 **)(this + 0x28);
  puVar3 = *(undefined8 **)(this + 0x30);
  if (puVar2 != puVar3) {
    do {
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined8 **)pAVar1;
  }
  *(undefined8 **)(this + 0x30) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x30) = puVar2;
    operator_delete(puVar2);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

