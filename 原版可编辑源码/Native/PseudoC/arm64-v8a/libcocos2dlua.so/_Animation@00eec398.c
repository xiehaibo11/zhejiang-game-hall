
/* cocos2d::Animation::~Animation() */

void __thiscall cocos2d::Animation::~Animation(Animation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Animation_016fa430;
  *(undefined ***)(this + 0x28) = &PTR_clone_016fa458;
  puVar1 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  if (puVar1 != puVar2) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x40);
  }
                    /* try { // try from 00eec3f0 to 00fec46b has its CatchHandler @ 00eec620 */
  *(undefined8 **)(this + 0x48) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x48) = puVar1;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)this);
  return;
}

