
void FUN_00fffcc8(float param_1,float param_2,float param_3,float param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 00fffcec to 010ffcf7 has its CatchHandler @ 00fffe44 */
  cpBodyUpdateVelocity(0,0);
  iVar1 = cpBodyGetType(param_5);
  if (iVar1 == 1) {
                    /* try { // try from 00fffd14 to 010ffd1b has its CatchHandler @ 00fffe14 */
    return;
  }
  plVar3 = *(long **)(param_5 + 0x68);
  fVar5 = *(float *)(param_5 + 0x38) * *(float *)(param_5 + 0x14);
  fVar4 = *(float *)(param_5 + 0x3c) * *(float *)(param_5 + 0x14);
  if (*(char *)((long)plVar3 + 0x92) == '\0') {
    lVar2 = *plVar3;
  }
  else {
    lVar2 = *plVar3;
    fVar5 = param_1 + fVar5;
    fVar4 = param_2 + fVar4;
  }
  fVar6 = *(float *)(param_5 + 0x30) * param_3 + fVar5 * param_4;
  fVar7 = *(float *)(param_5 + 0x34) * param_3 + fVar4 * param_4;
  fVar4 = (float)(**(code **)(lVar2 + 0xc0))(plVar3);
                    /* try { // try from 00fffd80 to 010ffd8b has its CatchHandler @ 00fffe0c */
  fVar5 = fVar6 * fVar6 + fVar7 * fVar7;
  if (fVar4 * fVar4 < fVar5) {
                    /* try { // try from 00fffd98 to 010ffdf3 has its CatchHandler @ 00fffe10 */
    fVar5 = 1.0 / (SQRT(fVar5) + 1.1754944e-38);
    fVar6 = fVar6 * fVar5 * fVar4;
    fVar7 = fVar7 * fVar5 * fVar4;
  }
  *(float *)(param_5 + 0x30) = fVar6;
  *(float *)(param_5 + 0x34) = fVar7;
  fVar5 = (float)(**(code **)(*plVar3 + 0xd0))(plVar3);
  *(undefined8 *)(param_5 + 0x38) = 0;
  fVar4 = *(float *)(param_5 + 0x44) * param_3 +
          *(float *)(param_5 + 0x48) * *(float *)(param_5 + 0x1c) * param_4;
                    /* try { // try from 00fffdf4 to 010ffe5f has its CatchHandler @ 00fffc88 */
  if (fVar4 <= -fVar5) {
    fVar4 = -fVar5;
  }
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  *(float *)(param_5 + 0x44) = fVar4;
                    /* catch() { ... } // from try @ 00fffd80 with catch @ 00fffe0c */
                    /* catch() { ... } // from try @ 00fffd98 with catch @ 00fffe10 */
                    /* catch() { ... } // from try @ 00fffd14 with catch @ 00fffe14 */
  cpBodySetTorque(0,param_5);
  return;
}

