
/* cocos2d::Vector<fairygui::GObject*>::~Vector() */

void __thiscall cocos2d::Vector<fairygui::GObject*>::~Vector(Vector<fairygui::GObject*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
                    /* try { // try from 00a6fe54 to 00b6fe67 has its CatchHandler @ 00a6ff18 */
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
                    /* try { // try from 00a6fe68 to 00b6ff9b has its CatchHandler @ 00a6fbac */
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

