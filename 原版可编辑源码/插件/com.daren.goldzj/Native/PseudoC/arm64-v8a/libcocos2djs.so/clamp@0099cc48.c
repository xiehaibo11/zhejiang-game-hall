
/* cocos2d::Vec3::clamp(cocos2d::Vec3 const&, cocos2d::Vec3 const&, cocos2d::Vec3 const&,
   cocos2d::Vec3*) */

void cocos2d::Vec3::clamp(Vec3 *param_1,Vec3 *param_2,Vec3 *param_3,Vec3 *param_4)

{
  float fVar1;
  float fVar2;
  
                    /* try { // try from 0099cc48 to 00a9cc5f has its CatchHandler @ 0099cdd4 */
  fVar1 = *(float *)param_1;
  *(float *)param_4 = fVar1;
  fVar2 = *(float *)param_2;
  if (fVar1 < fVar2) {
    *(float *)param_4 = fVar2;
    fVar1 = fVar2;
  }
                    /* try { // try from 0099cc68 to 00a9cc73 has its CatchHandler @ 0099cdd0 */
  if (*(float *)param_3 < fVar1) {
    *(float *)param_4 = *(float *)param_3;
  }
                    /* try { // try from 0099cc74 to 00a9cc7f has its CatchHandler @ 0099cdcc */
  fVar1 = *(float *)(param_1 + 4);
  *(float *)(param_4 + 4) = fVar1;
  fVar2 = *(float *)(param_2 + 4);
                    /* try { // try from 0099cc80 to 00a9cd57 has its CatchHandler @ 0099cde4 */
  if (fVar1 < fVar2) {
    *(float *)(param_4 + 4) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_3 + 4) < fVar1) {
    *(float *)(param_4 + 4) = *(float *)(param_3 + 4);
  }
  fVar1 = *(float *)(param_1 + 8);
  *(float *)(param_4 + 8) = fVar1;
  fVar2 = *(float *)(param_2 + 8);
  if (fVar1 < fVar2) {
    *(float *)(param_4 + 8) = fVar2;
    fVar1 = fVar2;
  }
  if (*(float *)(param_3 + 8) < fVar1) {
    *(float *)(param_4 + 8) = *(float *)(param_3 + 8);
  }
  return;
}

