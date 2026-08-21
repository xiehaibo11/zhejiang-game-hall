
/* cocos2d::Vector<cocostudio::ColliderBody*>::~Vector() */

void __thiscall
cocos2d::Vector<cocostudio::ColliderBody*>::~Vector(Vector<cocostudio::ColliderBody*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

