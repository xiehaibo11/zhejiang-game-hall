
/* cocos2d::PUParticleSystem3D::forceStopParticleSystem() */

void __thiscall cocos2d::PUParticleSystem3D::forceStopParticleSystem(PUParticleSystem3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* catch() { ... } // from try @ 00e1ca70 with catch @ 00e1ced0 */
                    /* catch() { ... } // from try @ 00e1ca4c with catch @ 00e1ced8 */
  if (*(long **)(this + 0x328) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00e1ca34 with catch @ 00e1cef4 */
    (**(code **)(**(long **)(this + 0x328) + 0x20))();
  }
                    /* catch() { ... } // from try @ 00e1ca18 with catch @ 00e1cef8 */
                    /* catch() { ... } // from try @ 00e1c9e4 with catch @ 00e1cefc */
  puVar2 = *(undefined8 **)(this + 0x3a0);
                    /* catch() { ... } // from try @ 00e1cc68 with catch @ 00e1cf00 */
  for (puVar1 = *(undefined8 **)(this + 0x398); puVar1 != puVar2; puVar1 = puVar1 + 1) {
                    /* catch() { ... } // from try @ 00e1cc88 with catch @ 00e1cf0c */
    (**(code **)(*(long *)*puVar1 + 0x28))();
  }
                    /* catch() { ... } // from try @ 00e1ca84 with catch @ 00e1cf24 */
  puVar2 = *(undefined8 **)(this + 0x388);
                    /* catch() { ... } // from try @ 00e1c8d8 with catch @ 00e1cf28 */
                    /* catch() { ... } // from try @ 00e1c8a4 with catch @ 00e1cf2c
                       catch() { ... } // from try @ 00e1c928 with catch @ 00e1cf2c */
  for (puVar1 = *(undefined8 **)(this + 0x380); puVar1 != puVar2; puVar1 = puVar1 + 1) {
                    /* catch() { ... } // from try @ 00e1cc50 with catch @ 00e1cf30 */
                    /* catch() { ... } // from try @ 00e1cbb0 with catch @ 00e1cf34 */
                    /* catch() { ... } // from try @ 00e1c710 with catch @ 00e1cf38 */
                    /* catch() { ... } // from try @ 00e1c7c0 with catch @ 00e1cf3c */
    (**(code **)(*(long *)*puVar1 + 0x28))();
  }
  puVar2 = *(undefined8 **)(this + 0x318);
                    /* catch() { ... } // from try @ 00e1cd4c with catch @ 00e1cf50 */
                    /* catch() { ... } // from try @ 00e1c700 with catch @ 00e1cf54 */
  for (puVar1 = *(undefined8 **)(this + 0x310); puVar1 != puVar2; puVar1 = puVar1 + 1) {
                    /* catch() { ... } // from try @ 00e1c81c with catch @ 00e1cf58 */
                    /* catch() { ... } // from try @ 00e1c860 with catch @ 00e1cf64 */
    (**(code **)(*(long *)*puVar1 + 0x20))();
  }
  Node::unscheduleUpdate((Node *)this);
                    /* catch() { ... } // from try @ 00e1cb8c with catch @ 00e1cf7c */
  unPrepared(this);
  return;
}

