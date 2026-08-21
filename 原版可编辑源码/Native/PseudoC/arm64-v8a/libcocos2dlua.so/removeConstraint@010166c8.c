
/* cocos2d::Physics3DRigidBody::removeConstraint(unsigned int) */

void __thiscall cocos2d::Physics3DRigidBody::removeConstraint(Physics3DRigidBody *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  Ref *this_00;
  undefined8 *__dest;
  
                    /* try { // try from 010166cc to 01116727 has its CatchHandler @ 01016680 */
  __dest = *(undefined8 **)(this + 0x88);
  puVar2 = *(undefined8 **)(this + 0x90);
  this_00 = (Ref *)__dest[param_1];
                    /* catch() { ... } // from try @ 010166b0 with catch @ 010166f4 */
  if ((puVar2 != __dest) && ((Ref *)*__dest != this_00)) {
    do {
      if (puVar2 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
    } while ((Ref *)*puVar1 != this_00);
  }
  if (__dest != puVar2) {
    Ref::release(this_00);
    __n = *(long *)(this + 0x90) - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(undefined8 **)(this + 0x90) = __dest + ((long)__n >> 3);
  }
  return;
}

