
float spBone_localToWorldRotation(float param_1,long param_2)

{
  float fVar1;
  float local_18;
  float local_14;
  
  sincosf(param_1 * 0.017453292,&local_14,&local_18);
                    /* try { // try from 00d6e35c to 00e6e363 has its CatchHandler @ 00d6e514 */
  fVar1 = atan2f(local_18 * *(float *)(param_2 + 0x70) + local_14 * *(float *)(param_2 + 0x74),
                 local_18 * *(float *)(param_2 + 100) + local_14 * *(float *)(param_2 + 0x68));
                    /* try { // try from 00d6e368 to 00e6e373 has its CatchHandler @ 00d6e4c0 */
  return fVar1 * 57.295776;
}

