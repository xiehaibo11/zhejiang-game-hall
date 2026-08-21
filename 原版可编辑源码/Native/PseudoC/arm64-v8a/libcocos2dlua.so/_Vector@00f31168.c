
/* cocos2d::Vector<cocos2d::ParticleSystem*>::~Vector() */

void __thiscall
cocos2d::Vector<cocos2d::ParticleSystem*>::~Vector(Vector<cocos2d::ParticleSystem*> *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  puVar1 = *(undefined8 **)(this + 8);
                    /* catch() { ... } // from try @ 00f31118 with catch @ 00f31180 */
                    /* catch() { ... } // from try @ 00f310a4 with catch @ 00f31184 */
  if (puVar2 != puVar1) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar1 != puVar2);
    puVar2 = *(undefined8 **)this;
  }
                    /* try { // try from 00f311a0 to 010312f3 has its CatchHandler @ 00f311a0
                       catch() { ... } // from try @ 00f311a0 with catch @ 00f311a0
                       catch() { ... } // from try @ 00f31348 with catch @ 00f311a0 */
  *(undefined8 **)(this + 8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 8) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

