
/* cocos2d::PUForceFieldAffector::setMovement(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUForceFieldAffector::setMovement(PUForceFieldAffector *this,Vec3 *param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00e25d6c to 00f25d73 has its CatchHandler @ 00e25d90 */
  uVar1 = *(undefined8 *)param_1;
                    /* try { // try from 00e25d74 to 00f25d7b has its CatchHandler @ 00e25d8c */
                    /* try { // try from 00e25d7c to 00f25d83 has its CatchHandler @ 00e25d88 */
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 8);
                    /* try { // try from 00e25d84 to 00f25eb7 has its CatchHandler @ 00e2573c */
  *(undefined8 *)(this + 0x14c) = uVar1;
                    /* catch() { ... } // from try @ 00e25d7c with catch @ 00e25d88 */
                    /* catch() { ... } // from try @ 00e25d74 with catch @ 00e25d8c */
                    /* catch() { ... } // from try @ 00e25d6c with catch @ 00e25d90 */
                    /* catch() { ... } // from try @ 00e25cbc with catch @ 00e25d94 */
                    /* catch() { ... } // from try @ 00e25c88 with catch @ 00e25da4 */
  if ((*(float *)param_1 == 0.0) && (*(float *)(param_1 + 4) == 0.0)) {
                    /* catch() { ... } // from try @ 00e25b84 with catch @ 00e25db8 */
    this[0x158] = (PUForceFieldAffector)(*(float *)(param_1 + 8) != 0.0);
    return;
  }
  this[0x158] = (PUForceFieldAffector)0x1;
  return;
}

