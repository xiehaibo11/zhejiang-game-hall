
/* non-virtual thunk to cocos2d::Animation::~Animation() */

void __thiscall cocos2d::Animation::~Animation(Animation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)(this + -0x28) = &PTR__Animation_016fa430;
  *(undefined ***)this = &PTR_clone_016fa458;
  puVar1 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar1 != puVar2) {
    do {
                    /* try { // try from 00eec46c to 00fec4cb has its CatchHandler @ 00eec25c */
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x18);
  }
  *(undefined8 **)(this + 0x20) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x20) = puVar1;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)(this + -0x28));
  return;
}

