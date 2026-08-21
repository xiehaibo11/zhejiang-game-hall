
void spBone_worldToLocal(float param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_3 + 100);
  fVar3 = *(float *)(param_3 + 0x70);
                    /* try { // try from 00d6e204 to 00e6e20b has its CatchHandler @ 00d6e514 */
  param_1 = param_1 - *(float *)(param_3 + 0x6c);
                    /* try { // try from 00d6e210 to 00e6e21b has its CatchHandler @ 00d6e4c4 */
  param_2 = param_2 - *(float *)(param_3 + 0x78);
  fVar2 = 1.0 / (fVar1 * *(float *)(param_3 + 0x74) - *(float *)(param_3 + 0x68) * fVar3);
                    /* try { // try from 00d6e23c to 00e6e23f has its CatchHandler @ 00d6e57c */
                    /* try { // try from 00d6e24c to 00e6e253 has its CatchHandler @ 00d6e56c */
  *param_4 = *(float *)(param_3 + 0x74) * param_1 * fVar2 -
             fVar2 * *(float *)(param_3 + 0x68) * param_2;
  *param_5 = fVar2 * fVar1 * param_2 - fVar3 * param_1 * fVar2;
                    /* try { // try from 00d6e254 to 00e6e25f has its CatchHandler @ 00d6e568 */
  return;
}

