
/* cocos2d::Physics3DRigidBody::removeConstraint(cocos2d::Physics3DConstraint*) */

void __thiscall
cocos2d::Physics3DRigidBody::removeConstraint(Physics3DRigidBody *this,Physics3DConstraint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x88);
  puVar2 = *(undefined8 **)(this + 0x90);
                    /* catch() { ... } // from try @ 010165cc with catch @ 0101664c */
                    /* catch() { ... } // from try @ 0101659c with catch @ 0101665c */
  if ((puVar2 != __dest) && ((Physics3DConstraint *)*__dest != param_1)) {
    do {
      if (puVar2 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
                    /* try { // try from 01016680 to 011166af has its CatchHandler @ 01016680
                       catch() { ... } // from try @ 01016680 with catch @ 01016680
                       catch() { ... } // from try @ 010166cc with catch @ 01016680 */
    } while ((Physics3DConstraint *)*puVar1 != param_1);
  }
  if (__dest != puVar2) {
    Ref::release((Ref *)param_1);
    __n = *(long *)(this + 0x90) - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
                    /* try { // try from 010166b0 to 011166cb has its CatchHandler @ 010166f4 */
    *(undefined8 **)(this + 0x90) = __dest + ((long)__n >> 3);
  }
  return;
}

