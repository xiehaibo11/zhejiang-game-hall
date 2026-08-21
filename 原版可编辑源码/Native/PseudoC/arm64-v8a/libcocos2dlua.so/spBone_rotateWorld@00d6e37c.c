
void spBone_rotateWorld(float param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float local_18;
  float fStack_14;
  
  uVar2 = *(undefined8 *)(param_2 + 100);
                    /* try { // try from 00d6e394 to 00e6e39b has its CatchHandler @ 00d6e528 */
  uVar5 = *(undefined8 *)(param_2 + 0x70);
                    /* try { // try from 00d6e39c to 00e6e3a7 has its CatchHandler @ 00d6e524 */
                    /* try { // try from 00d6e3a8 to 00e6e3af has its CatchHandler @ 00d6e520 */
  sincosf(param_1 * 0.017453292,&fStack_14,&local_18);
  *(undefined4 *)(param_2 + 0x60) = 0;
  fVar1 = (float)uVar2;
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  fVar4 = (float)uVar5;
                    /* try { // try from 00d6e3c0 to 00e6e3c7 has its CatchHandler @ 00d6e4d0 */
  fVar6 = (float)((ulong)uVar5 >> 0x20);
                    /* try { // try from 00d6e3c8 to 00e6e3d3 has its CatchHandler @ 00d6e4cc */
  *(ulong *)(param_2 + 100) =
       CONCAT44(fVar3 * local_18 - fVar6 * fStack_14,fVar1 * local_18 - fVar4 * fStack_14);
  *(ulong *)(param_2 + 0x70) =
       CONCAT44(fVar3 * fStack_14 + fVar6 * local_18,fVar1 * fStack_14 + fVar4 * local_18);
                    /* try { // try from 00d6e3e8 to 00e6e3f3 has its CatchHandler @ 00d6e4d4 */
  return;
}

