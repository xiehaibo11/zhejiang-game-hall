
void spRegionAttachment_computeWorldVertices
               (long param_1,long param_2,long param_3,int param_4,int param_5)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *(float *)(param_2 + 0x6c);
  fVar7 = *(float *)(param_1 + 0x90);
  fVar8 = *(float *)(param_1 + 0x94);
  pfVar1 = (float *)(param_3 + (long)param_4 * 4);
                    /* try { // try from 00d5eff8 to 00e5f007 has its CatchHandler @ 00d5f5f8 */
  fVar6 = *(float *)(param_2 + 0x78);
                    /* try { // try from 00d5f008 to 00e5f01b has its CatchHandler @ 00d5f5f4 */
  *pfVar1 = fVar5 + fVar7 * *(float *)(param_2 + 100) + fVar8 * *(float *)(param_2 + 0x68);
  lVar4 = (long)param_5;
                    /* try { // try from 00d5f01c to 00e5f027 has its CatchHandler @ 00d5f5f0 */
  pfVar1[1] = fVar6 + fVar7 * *(float *)(param_2 + 0x70) + fVar8 * *(float *)(param_2 + 0x74);
  fVar7 = *(float *)(param_1 + 0x78);
  fVar8 = *(float *)(param_1 + 0x7c);
  pfVar1 = (float *)(param_3 + (lVar4 + param_4) * 4);
  lVar2 = lVar4 + (int)(lVar4 + param_4);
                    /* try { // try from 00d5f040 to 00e5f04f has its CatchHandler @ 00d5f5e8 */
                    /* try { // try from 00d5f050 to 00e5f063 has its CatchHandler @ 00d5f5e4 */
  *pfVar1 = fVar5 + fVar7 * *(float *)(param_2 + 100) + fVar8 * *(float *)(param_2 + 0x68);
                    /* try { // try from 00d5f064 to 00e5f06f has its CatchHandler @ 00d5f5e0 */
  pfVar1[1] = fVar6 + fVar7 * *(float *)(param_2 + 0x70) + fVar8 * *(float *)(param_2 + 0x74);
  fVar7 = *(float *)(param_1 + 0x80);
  fVar8 = *(float *)(param_1 + 0x84);
  pfVar1 = (float *)(param_3 + lVar2 * 4);
  pfVar3 = (float *)(param_3 + (lVar4 + (int)lVar2) * 4);
                    /* try { // try from 00d5f088 to 00e5f097 has its CatchHandler @ 00d5f5d8 */
  *pfVar1 = fVar5 + fVar7 * *(float *)(param_2 + 100) + fVar8 * *(float *)(param_2 + 0x68);
                    /* try { // try from 00d5f098 to 00e5f0ab has its CatchHandler @ 00d5f5d4 */
  pfVar1[1] = fVar6 + fVar7 * *(float *)(param_2 + 0x70) + fVar8 * *(float *)(param_2 + 0x74);
                    /* try { // try from 00d5f0ac to 00e5f0b7 has its CatchHandler @ 00d5f5d0 */
  fVar7 = *(float *)(param_1 + 0x88);
  fVar8 = *(float *)(param_1 + 0x8c);
  *pfVar3 = fVar5 + fVar7 * *(float *)(param_2 + 100) + fVar8 * *(float *)(param_2 + 0x68);
                    /* try { // try from 00d5f0d0 to 00e5f0df has its CatchHandler @ 00d5f5c8 */
  pfVar3[1] = fVar6 + fVar7 * *(float *)(param_2 + 0x70) + fVar8 * *(float *)(param_2 + 0x74);
                    /* try { // try from 00d5f0e0 to 00e5f0f3 has its CatchHandler @ 00d5f5c4 */
  return;
}

