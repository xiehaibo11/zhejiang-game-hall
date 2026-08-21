
/* cocos2d::AutoreleasePool::contains(cocos2d::Ref*) const */

undefined8 __thiscall cocos2d::AutoreleasePool::contains(AutoreleasePool *this,Ref *param_1)

{
  undefined8 *puVar1;
  Ref *pRVar2;
  
  puVar1 = *(undefined8 **)this;
  do {
    if (puVar1 == *(undefined8 **)(this + 8)) {
      return 0;
    }
    pRVar2 = (Ref *)*puVar1;
    puVar1 = puVar1 + 1;
  } while (pRVar2 != param_1);
  return 1;
}

