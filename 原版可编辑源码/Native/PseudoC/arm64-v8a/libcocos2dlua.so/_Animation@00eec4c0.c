
/* cocos2d::Animation::~Animation() */

void __thiscall cocos2d::Animation::~Animation(Animation *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00eec4cc to 00fec4db has its CatchHandler @ 00eec650 */
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
  *(undefined8 **)(this + 0x48) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x48) = puVar1;
    operator_delete(puVar1);
  }
  Ref::~Ref((Ref *)this);
                    /* try { // try from 00eec53c to 00fec543 has its CatchHandler @ 00eec624 */
                    /* try { // try from 00eec544 to 00fec567 has its CatchHandler @ 00eec25c */
  operator_delete(this);
  return;
}

