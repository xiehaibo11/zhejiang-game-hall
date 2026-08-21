
/* cocos2d::Vector<fairygui::GTreeNode*>::~Vector() */

void __thiscall cocos2d::Vector<fairygui::GTreeNode*>::~Vector(Vector<fairygui::GTreeNode*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
  if (puVar2 != puVar1) {
    do {
                    /* try { // try from 00a8ef28 to 00b8ef3b has its CatchHandler @ 00a8efc0 */
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
                    /* try { // try from 00a8ef40 to 00b8ef73 has its CatchHandler @ 00a8efc4 */
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

