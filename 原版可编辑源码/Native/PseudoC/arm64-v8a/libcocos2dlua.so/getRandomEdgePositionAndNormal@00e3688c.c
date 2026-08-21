
/* cocos2d::PUTriangle::getRandomEdgePositionAndNormal() */

void cocos2d::PUTriangle::getRandomEdgePositionAndNormal(void)

{
  int iVar1;
  long in_x0;
  Vec3 *in_x8;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 00e36890 to 00f36897 has its CatchHandler @ 00e368cc */
                    /* try { // try from 00e36898 to 00f3689f has its CatchHandler @ 00e368c8 */
                    /* try { // try from 00e368a0 to 00f368a7 has its CatchHandler @ 00e368c4 */
                    /* try { // try from 00e368a8 to 00f368b3 has its CatchHandler @ 00e368c0 */
  iVar1 = rand();
                    /* try { // try from 00e368b4 to 00f368b7 has its CatchHandler @ 00e355f0 */
                    /* try { // try from 00e368b8 to 00f368bf has its CatchHandler @ 00e368f8 */
  fVar3 = (float)iVar1 * 4.656613e-10;
                    /* catch() { ... } // from try @ 00e368a8 with catch @ 00e368c0
                       try { // try from 00e368c0 to 00f36b37 has its CatchHandler @ 00e355f0 */
                    /* catch() { ... } // from try @ 00e368a0 with catch @ 00e368c4 */
  iVar1 = rand();
                    /* catch() { ... } // from try @ 00e36898 with catch @ 00e368c8 */
                    /* catch() { ... } // from try @ 00e36890 with catch @ 00e368cc */
                    /* catch() { ... } // from try @ 00e36878 with catch @ 00e368d0 */
                    /* catch() { ... } // from try @ 00e36470 with catch @ 00e368d4 */
  fVar9 = (float)iVar1 * 4.656613e-10 * 3.0;
  Vec3::Vec3(in_x8);
                    /* catch() { ... } // from try @ 00e363c8 with catch @ 00e368e4 */
  Vec3::Vec3(in_x8 + 0xc);
                    /* catch() { ... } // from try @ 00e36310 with catch @ 00e368f4 */
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
                    /* catch() { ... } // from try @ 00e36620 with catch @ 00e368f8
                       catch() { ... } // from try @ 00e368b8 with catch @ 00e368f8 */
  *(undefined8 *)(in_x8 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00e36078 with catch @ 00e368fc */
  if (1.0 <= fVar9) {
    if (2.0 <= fVar9) {
      uVar4 = *(undefined8 *)(in_x0 + 0x10);
      uVar6 = *(undefined8 *)(in_x0 + 0x28);
      fVar9 = *(float *)(in_x0 + 0x18);
      fVar8 = *(float *)(in_x0 + 0x30);
      puVar2 = (undefined8 *)(in_x0 + 0x70);
    }
    else {
      uVar4 = *(undefined8 *)(in_x0 + 0x28);
      uVar6 = *(undefined8 *)(in_x0 + 0x1c);
      fVar9 = *(float *)(in_x0 + 0x30);
      fVar8 = *(float *)(in_x0 + 0x24);
      puVar2 = (undefined8 *)(in_x0 + 100);
    }
    fVar5 = (float)uVar6 - (float)uVar4;
    fVar7 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar4 >> 0x20);
    fVar8 = fVar8 - fVar9;
  }
  else {
    uVar4 = *(undefined8 *)(in_x0 + 0x1c);
    fVar9 = *(float *)(in_x0 + 0x24);
                    /* catch() { ... } // from try @ 00e36348 with catch @ 00e3690c */
    fVar5 = (float)*(undefined8 *)(in_x0 + 0x10) - (float)uVar4;
    fVar7 = (float)((ulong)*(undefined8 *)(in_x0 + 0x10) >> 0x20) - (float)((ulong)uVar4 >> 0x20);
    puVar2 = (undefined8 *)(in_x0 + 0x58);
                    /* catch() { ... } // from try @ 00e364b0 with catch @ 00e3691c */
    fVar8 = *(float *)(in_x0 + 0x18) - fVar9;
  }
                    /* catch() { ... } // from try @ 00e366a8 with catch @ 00e3697c */
  *(ulong *)in_x8 =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + fVar7 * fVar3,(float)uVar4 + fVar5 * fVar3);
  *(float *)(in_x8 + 8) = fVar9 + fVar3 * fVar8;
                    /* catch() { ... } // from try @ 00e3617c with catch @ 00e36988 */
  uVar4 = *puVar2;
  *(undefined4 *)(in_x8 + 0x14) = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(in_x8 + 0xc) = uVar4;
                    /* catch() { ... } // from try @ 00e35788 with catch @ 00e369a0 */
  return;
}

