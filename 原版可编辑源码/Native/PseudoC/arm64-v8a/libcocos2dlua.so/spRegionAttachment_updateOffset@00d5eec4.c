
void spRegionAttachment_updateOffset(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_18;
  float fStack_14;
  
                    /* try { // try from 00d5eed8 to 00e5eee7 has its CatchHandler @ 00d5f638 */
                    /* try { // try from 00d5eee8 to 00e5eefb has its CatchHandler @ 00d5f634 */
                    /* try { // try from 00d5eefc to 00e5ef07 has its CatchHandler @ 00d5f630 */
  fVar1 = *(float *)(param_1 + 0x30) *
          (*(float *)(param_1 + 0x3c) / (float)*(int *)(param_1 + 0x70));
  fVar2 = *(float *)(param_1 + 0x34) *
          (*(float *)(param_1 + 0x40) / (float)*(int *)(param_1 + 0x74));
                    /* try { // try from 00d5ef20 to 00e5ef2f has its CatchHandler @ 00d5f628 */
                    /* try { // try from 00d5ef30 to 00e5ef43 has its CatchHandler @ 00d5f624 */
  fVar6 = *(float *)(param_1 + 0x3c) * -0.5 * *(float *)(param_1 + 0x30) +
          fVar1 * (float)*(int *)(param_1 + 0x60);
                    /* try { // try from 00d5ef44 to 00e5ef4f has its CatchHandler @ 00d5f620 */
  fVar7 = *(float *)(param_1 + 0x40) * -0.5 * *(float *)(param_1 + 0x34) +
          fVar2 * (float)*(int *)(param_1 + 100);
  fVar1 = fVar6 + fVar1 * (float)*(int *)(param_1 + 0x68);
  fVar8 = fVar7 + fVar2 * (float)*(int *)(param_1 + 0x6c);
                    /* try { // try from 00d5ef68 to 00e5ef77 has its CatchHandler @ 00d5f618 */
  sincosf(*(float *)(param_1 + 0x38) * 0.017453292,&fStack_14,&local_18);
                    /* try { // try from 00d5ef78 to 00e5ef8b has its CatchHandler @ 00d5f614 */
                    /* try { // try from 00d5ef8c to 00e5ef97 has its CatchHandler @ 00d5f610 */
  fVar9 = fVar1 * fStack_14;
  fVar2 = fVar8 * fStack_14;
  fVar4 = *(float *)(param_1 + 0x28) + fVar6 * local_18;
  fVar5 = *(float *)(param_1 + 0x2c) + fVar7 * local_18;
  fVar3 = *(float *)(param_1 + 0x28) + fVar1 * local_18;
  fVar1 = *(float *)(param_1 + 0x2c) + fVar8 * local_18;
                    /* try { // try from 00d5efb0 to 00e5efbf has its CatchHandler @ 00d5f608 */
                    /* try { // try from 00d5efc0 to 00e5efd3 has its CatchHandler @ 00d5f604 */
  *(float *)(param_1 + 0x78) = fVar4 - fVar7 * fStack_14;
  *(float *)(param_1 + 0x7c) = fVar6 * fStack_14 + fVar5;
  *(float *)(param_1 + 0x80) = fVar4 - fVar2;
  *(float *)(param_1 + 0x84) = fVar6 * fStack_14 + fVar1;
  *(float *)(param_1 + 0x88) = fVar3 - fVar2;
  *(float *)(param_1 + 0x8c) = fVar9 + fVar1;
  *(float *)(param_1 + 0x90) = fVar3 - fVar7 * fStack_14;
  *(float *)(param_1 + 0x94) = fVar9 + fVar5;
                    /* try { // try from 00d5efd4 to 00e5efdf has its CatchHandler @ 00d5f600 */
  return;
}

