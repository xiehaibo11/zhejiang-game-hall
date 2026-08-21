
/* cocos2d::Vector<cocos2d::Layer*>::~Vector() */

void __thiscall cocos2d::Vector<cocos2d::Layer*>::~Vector(Vector<cocos2d::Layer*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
                    /* try { // try from 00f17f88 to 01017f8b has its CatchHandler @ 00f18018 */
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
                    /* try { // try from 00f17fc8 to 01017fcb has its CatchHandler @ 00f18014 */
  return;
}

