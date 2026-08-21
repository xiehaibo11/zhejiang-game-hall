
/* cocos2d::AutoreleasePool::clear() */

void __thiscall cocos2d::AutoreleasePool::clear(AutoreleasePool *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  for (puVar1 = puVar2; puVar1 != puVar3; puVar1 = puVar1 + 1) {
    Ref::release((Ref *)*puVar1);
  }
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2);
    return;
  }
  return;
}

