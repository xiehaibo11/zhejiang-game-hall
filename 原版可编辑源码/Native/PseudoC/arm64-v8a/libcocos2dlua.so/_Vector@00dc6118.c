
/* cocos2d::Vector<cocos2d::ui::RadioButton*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::ui::RadioButton*>::~Vector(Vector<cocos2d::ui::RadioButton*> *this)

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
                    /* try { // try from 00dc6150 to 00ec615f has its CatchHandler @ 00dc666c */
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
                    /* try { // try from 00dc6174 to 00ec617f has its CatchHandler @ 00dc668c */
  return;
}

