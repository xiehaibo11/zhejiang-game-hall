
/* cocos2d::Vec3::transformMat4(cocos2d::Vec3 const&, cocos2d::Mat4 const&) */

void __thiscall cocos2d::Vec3::transformMat4(Vec3 *this,Vec3 *param_1,Mat4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
                    /* catch() { ... } // from try @ 0099cc74 with catch @ 0099cdcc */
                    /* catch() { ... } // from try @ 0099cc68 with catch @ 0099cdd0 */
                    /* catch() { ... } // from try @ 0099cc48 with catch @ 0099cdd4 */
                    /* catch() { ... } // from try @ 0099cc80 with catch @ 0099cde4 */
  fVar4 = *(float *)(param_2 + 0x3c) +
          fVar1 * *(float *)(param_2 + 0xc) + fVar2 * *(float *)(param_2 + 0x1c) +
          fVar3 * *(float *)(param_2 + 0x2c);
  fVar5 = 1.0 / fVar4;
  if (fVar4 == 0.0) {
    fVar5 = 1.0;
  }
  *(float *)this =
       fVar5 * (*(float *)(param_2 + 0x30) +
               fVar1 * *(float *)param_2 + fVar2 * *(float *)(param_2 + 0x10) +
               fVar3 * *(float *)(param_2 + 0x20));
  *(float *)(this + 4) =
       fVar5 * (*(float *)(param_2 + 0x34) +
               fVar1 * *(float *)(param_2 + 4) + fVar2 * *(float *)(param_2 + 0x14) +
               fVar3 * *(float *)(param_2 + 0x24));
                    /* try { // try from 0099ce3c to 00a9ce93 has its CatchHandler @ 0099ce3c
                       catch() { ... } // from try @ 0099ce3c with catch @ 0099ce3c
                       catch() { ... } // from try @ 0099cfa0 with catch @ 0099ce3c */
  *(float *)(this + 8) =
       fVar5 * (*(float *)(param_2 + 0x38) +
               fVar1 * *(float *)(param_2 + 8) + fVar2 * *(float *)(param_2 + 0x18) +
               fVar3 * *(float *)(param_2 + 0x28));
  return;
}

