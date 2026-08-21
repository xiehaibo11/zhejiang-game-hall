
float spBone_worldToLocalRotation(float param_1,long param_2)

{
  float fVar1;
  float local_18;
  float local_14;
  
  sincosf(param_1 * 0.017453292,&local_14,&local_18);
                    /* try { // try from 00d6e2cc to 00e6e303 has its CatchHandler @ 00d6e57c */
  fVar1 = atan2f(local_14 * *(float *)(param_2 + 100) - local_18 * *(float *)(param_2 + 0x70),
                 local_18 * *(float *)(param_2 + 0x74) - local_14 * *(float *)(param_2 + 0x68));
  return fVar1 * 57.295776;
}

