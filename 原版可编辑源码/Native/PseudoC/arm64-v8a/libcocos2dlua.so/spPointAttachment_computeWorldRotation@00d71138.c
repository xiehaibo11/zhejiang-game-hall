
float spPointAttachment_computeWorldRotation(long param_1,long param_2)

{
  float fVar1;
  float local_18;
  float local_14;
  
                    /* try { // try from 00d71150 to 00e71167 has its CatchHandler @ 00d71460 */
  sincosf(*(float *)(param_1 + 0x50) * 0.017453292,&local_14,&local_18);
                    /* try { // try from 00d7116c to 00e71183 has its CatchHandler @ 00d7145c */
                    /* try { // try from 00d71188 to 00e7119f has its CatchHandler @ 00d71458 */
  fVar1 = atan2f(local_18 * *(float *)(param_2 + 0x70) + local_14 * *(float *)(param_2 + 0x74),
                 *(float *)(param_2 + 100) * local_18 + local_14 * *(float *)(param_2 + 0x68));
                    /* try { // try from 00d711a4 to 00e711c3 has its CatchHandler @ 00d71454 */
  return fVar1 * 57.295776;
}

