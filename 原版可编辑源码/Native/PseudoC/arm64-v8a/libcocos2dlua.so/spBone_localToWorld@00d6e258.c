
void spBone_localToWorld(float param_1,float param_2,long param_3,float *param_4,float *param_5)

{
                    /* try { // try from 00d6e264 to 00e6e26b has its CatchHandler @ 00d6e564 */
  *param_4 = *(float *)(param_3 + 0x6c) +
             *(float *)(param_3 + 100) * param_1 + *(float *)(param_3 + 0x68) * param_2;
                    /* try { // try from 00d6e274 to 00e6e277 has its CatchHandler @ 00d6e57c */
                    /* try { // try from 00d6e27c to 00e6e287 has its CatchHandler @ 00d6e518 */
                    /* try { // try from 00d6e288 to 00e6e293 has its CatchHandler @ 00d6e51c */
  *param_5 = *(float *)(param_3 + 0x78) +
             *(float *)(param_3 + 0x70) * param_1 + *(float *)(param_3 + 0x74) * param_2;
  return;
}

