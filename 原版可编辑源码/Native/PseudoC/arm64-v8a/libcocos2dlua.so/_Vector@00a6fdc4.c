
/* cocos2d::Vector<fairygui::GController*>::~Vector() */

void __thiscall
cocos2d::Vector<fairygui::GController*>::~Vector(Vector<fairygui::GController*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
                    /* try { // try from 00a6fddc to 00b6fe03 has its CatchHandler @ 00a6ff0c */
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00a6fe04 to 00b6fe3b has its CatchHandler @ 00a6fbac */
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

