
/* cocos2d::Vec3::getNormalized() const */

void cocos2d::Vec3::getNormalized(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_x0;
  float *in_x8;
  float fVar4;
  
  fVar1 = *in_x0;
  fVar2 = in_x0[1];
  *in_x8 = fVar1;
  in_x8[1] = fVar2;
                    /* catch() { ... } // from try @ 0099cec0 with catch @ 0099d018 */
  fVar3 = in_x0[2];
                    /* catch() { ... } // from try @ 0099ceb4 with catch @ 0099d01c */
                    /* catch() { ... } // from try @ 0099ce94 with catch @ 0099d020 */
                    /* catch() { ... } // from try @ 0099cecc with catch @ 0099d030 */
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  in_x8[2] = fVar3;
  if ((fVar4 != 1.0) && (fVar4 = SQRT(fVar4), 2e-37 <= fVar4)) {
    fVar4 = 1.0 / fVar4;
    *in_x8 = fVar4 * fVar1;
    in_x8[1] = fVar4 * fVar2;
    in_x8[2] = fVar4 * fVar3;
  }
  return;
}

