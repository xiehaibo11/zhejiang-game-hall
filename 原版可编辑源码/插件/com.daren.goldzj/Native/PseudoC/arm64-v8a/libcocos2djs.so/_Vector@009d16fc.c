
/* cocos2d::Vector<cocos2d::renderer::IndexBuffer*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::renderer::IndexBuffer*>::~Vector
          (Vector<cocos2d::renderer::IndexBuffer*> *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != *(undefined8 **)(this + 8)) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined8 **)(this + 8));
    puVar1 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar1;
    operator_delete(puVar1);
    return;
  }
  return;
}

