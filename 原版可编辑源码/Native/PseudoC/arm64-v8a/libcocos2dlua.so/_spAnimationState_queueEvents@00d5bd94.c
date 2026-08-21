
void _spAnimationState_queueEvents(float param_1,long param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
                    /* try { // try from 00d5bd98 to 00e5bda3 has its CatchHandler @ 00d5c17c */
                    /* try { // try from 00d5bdac to 00e5bdb7 has its CatchHandler @ 00d5c16c */
  fVar8 = *(float *)(param_3 + 0x34);
  fVar9 = *(float *)(param_3 + 0x38);
                    /* try { // try from 00d5bdc0 to 00e5bdc7 has its CatchHandler @ 00d5c168 */
  fVar7 = fVar9 - fVar8;
                    /* try { // try from 00d5bdcc to 00e5bddb has its CatchHandler @ 00d5c164 */
  fVar5 = fmodf(*(float *)(param_3 + 0x4c),fVar7);
  uVar1 = *(uint *)(param_2 + 0x38);
  lVar2 = *(long *)(param_2 + 0x40);
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      fVar6 = *(float *)(*(long *)(lVar2 + uVar4 * 8) + 8);
      if (fVar6 < fVar5) break;
      if (fVar6 <= fVar9) {
        _spEventQueue_event(*(undefined8 *)(param_2 + 0x48),param_3);
                    /* try { // try from 00d5be20 to 00e5be37 has its CatchHandler @ 00d5c244 */
      }
      uVar4 = uVar4 + 1;
    } while (uVar1 != uVar4);
  }
  if (*(int *)(param_3 + 0x24) == 0) {
    if ((param_1 < fVar9) || (fVar9 <= *(float *)(param_3 + 0x3c))) goto LAB_00d5be68;
  }
  else {
    fVar7 = fmodf(*(float *)(param_3 + 0x48),fVar7);
    if (fVar5 <= fVar7) goto LAB_00d5be68;
  }
  _spEventQueue_complete(*(undefined8 *)(param_2 + 0x48),param_3);
LAB_00d5be68:
  if ((int)uVar4 < (int)uVar1) {
    plVar3 = (long *)(lVar2 + (uVar4 & 0xffffffff) * 8);
    lVar2 = (ulong)uVar1 - (uVar4 & 0xffffffff);
    do {
                    /* try { // try from 00d5be90 to 00e5be97 has its CatchHandler @ 00d5c188 */
      if (fVar8 <= *(float *)(*plVar3 + 8)) {
                    /* try { // try from 00d5be9c to 00e5beb7 has its CatchHandler @ 00d5c1b4 */
        _spEventQueue_event(*(undefined8 *)(param_2 + 0x48),param_3);
      }
      lVar2 = lVar2 + -1;
      plVar3 = plVar3 + 1;
    } while (lVar2 != 0);
  }
                    /* try { // try from 00d5bebc to 00e5bec7 has its CatchHandler @ 00d5c178 */
  return;
}

