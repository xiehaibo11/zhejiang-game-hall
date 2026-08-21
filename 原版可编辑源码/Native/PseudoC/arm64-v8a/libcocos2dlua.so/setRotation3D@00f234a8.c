
/* cocos2d::Node::setRotation3D(cocos2d::Vec3 const&) */

void __thiscall cocos2d::Node::setRotation3D(Node *this,Vec3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  fVar2 = *(float *)param_1;
  if (*(float *)(this + 0x24) == fVar2) {
    fVar3 = *(float *)(param_1 + 4);
    if ((*(float *)(this + 0x28) == fVar3) && (*(float *)(this + 0x2c) == *(float *)(param_1 + 8)))
    {
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 4);
  }
  *(float *)(this + 0x24) = fVar2;
  *(float *)(this + 0x28) = fVar3;
  this[0x150] = (Node)0x1;
  this[0x10c] = (Node)0x1;
  this[0x161] = (Node)0x1;
  fVar1 = *(float *)(param_1 + 8);
                    /* try { // try from 00f2352c to 01023537 has its CatchHandler @ 00f23594 */
                    /* try { // try from 00f2354c to 01023557 has its CatchHandler @ 00f23598 */
  __x = fVar1 * 0.5 * -0.017453292;
  *(float *)(this + 0x2c) = fVar1;
  *(float *)(this + 0x30) = fVar1;
  if (NAN(fVar1)) {
    __x = 0.0;
  }
  sincosf(fVar2 * 0.5 * 0.017453292,&fStack_44,&local_48);
                    /* try { // try from 00f2356c to 01023577 has its CatchHandler @ 00f23594 */
                    /* try { // try from 00f23578 to 010235b3 has its CatchHandler @ 00f22f58 */
  sincosf(fVar3 * 0.5 * 0.017453292,&fStack_4c,&local_50);
  sincosf(__x,&fStack_54,&local_58);
                    /* catch() { ... } // from try @ 00f23330 with catch @ 00f23594
                       catch() { ... } // from try @ 00f2352c with catch @ 00f23594
                       catch() { ... } // from try @ 00f2356c with catch @ 00f23594 */
                    /* catch() { ... } // from try @ 00f23254 with catch @ 00f23598
                       catch() { ... } // from try @ 00f23454 with catch @ 00f23598
                       catch() { ... } // from try @ 00f2354c with catch @ 00f23598 */
  *(float *)(this + 0x34) = fStack_44 * local_50 * local_58 - local_48 * fStack_4c * fStack_54;
  *(float *)(this + 0x38) = local_48 * fStack_4c * local_58 + fStack_44 * local_50 * fStack_54;
  *(float *)(this + 0x3c) = local_48 * local_50 * fStack_54 - fStack_44 * fStack_4c * local_58;
  *(float *)(this + 0x40) = local_48 * local_50 * local_58 + fStack_44 * fStack_4c * fStack_54;
                    /* try { // try from 00f235e0 to 01023623 has its CatchHandler @ 00f235e0
                       catch() { ... } // from try @ 00f235e0 with catch @ 00f235e0
                       catch() { ... } // from try @ 00f23630 with catch @ 00f235e0 */
  return;
}

