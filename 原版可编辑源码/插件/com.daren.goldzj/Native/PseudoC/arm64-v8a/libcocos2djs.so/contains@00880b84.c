
/* cocos2d::AutoreleasePool::contains(cocos2d::Ref*) const */

undefined8 __thiscall cocos2d::AutoreleasePool::contains(AutoreleasePool *this,Ref *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)this;
  if (*(undefined8 **)this == *(undefined8 **)(this + 8)) {
    return 0;
  }
  do {
    puVar2 = puVar1 + 1;
    if ((Ref *)*puVar1 == param_1) {
      return 1;
    }
    puVar1 = puVar2;
  } while (*(undefined8 **)(this + 8) != puVar2);
  return 0;
}

