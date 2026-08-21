
void spAnimationState_update(float param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = *(uint *)(param_2 + 8);
                    /* try { // try from 00d5af2c to 00e5af2f has its CatchHandler @ 00d5af3c */
                    /* try { // try from 00d5af30 to 00e5af4f has its CatchHandler @ 00d5aed8 */
  if (0 < (int)uVar1) {
    uVar4 = 0;
                    /* catch() { ... } // from try @ 00d5af2c with catch @ 00d5af3c */
    param_1 = *(float *)(param_2 + 0x20) * param_1;
    do {
      lVar3 = *(long *)(param_2 + 0x10);
      lVar5 = *(long *)(lVar3 + uVar4 * 8);
      if (lVar5 != 0) {
        fVar7 = *(float *)(lVar5 + 0x50);
        fVar8 = param_1 * *(float *)(lVar5 + 0x58);
        *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(lVar5 + 0x40);
        *(float *)(lVar5 + 0x4c) = fVar7;
                    /* try { // try from 00d5af88 to 00e5afab has its CatchHandler @ 00d5afbc */
        if (0.0 < *(float *)(lVar5 + 0x44)) {
          fVar8 = *(float *)(lVar5 + 0x44) - fVar8;
          *(float *)(lVar5 + 0x44) = fVar8;
          if (0.0 < fVar8) goto LAB_00d5af50;
          fVar8 = -fVar8;
          *(undefined4 *)(lVar5 + 0x44) = 0;
        }
        lVar6 = *(long *)(lVar5 + 8);
                    /* try { // try from 00d5afac to 00e5afcf has its CatchHandler @ 00d5af50 */
        if (lVar6 == 0) {
          if ((fVar7 < *(float *)(lVar5 + 0x54)) || (*(long *)(lVar5 + 0x10) != 0))
          goto LAB_00d5b030;
          *(undefined8 *)(lVar3 + uVar4 * 8) = 0;
          _spEventQueue_end(*(undefined8 *)(param_2 + 0x48),lVar5);
          for (lVar3 = *(long *)(lVar5 + 8); lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
            _spEventQueue_dispose(*(undefined8 *)(param_2 + 0x48),lVar3);
          }
          *(undefined8 *)(lVar5 + 8) = 0;
        }
        else {
          fVar7 = fVar7 - *(float *)(lVar6 + 0x44);
                    /* catch() { ... } // from try @ 00d5af88 with catch @ 00d5afbc */
          if (fVar7 < 0.0) {
LAB_00d5b030:
            if ((*(long *)(lVar5 + 0x10) != 0) &&
               (iVar2 = _spAnimationState_updateMixingFrom(param_1,param_2,lVar5), iVar2 != 0)) {
                    /* try { // try from 00d5b04c to 00e5b04f has its CatchHandler @ 00d5b06c */
              lVar3 = *(long *)(lVar5 + 0x10);
              *(undefined8 *)(lVar5 + 0x10) = 0;
              for (; lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
                _spEventQueue_end(*(undefined8 *)(param_2 + 0x48),lVar3);
              }
            }
            *(float *)(lVar5 + 0x48) = fVar8 + *(float *)(lVar5 + 0x48);
          }
          else {
            *(undefined4 *)(lVar6 + 0x44) = 0;
            *(float *)(lVar6 + 0x48) = fVar7 + param_1 * *(float *)(lVar6 + 0x58);
            *(float *)(lVar5 + 0x48) = fVar8 + *(float *)(lVar5 + 0x48);
            _spAnimationState_setCurrent(param_2,uVar4 & 0xffffffff,lVar6,1);
                    /* try { // try from 00d5aff8 to 00e5affb has its CatchHandler @ 00d5b010 */
            for (lVar3 = *(long *)(lVar6 + 0x10); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
              *(float *)(lVar6 + 0x60) = fVar8 + *(float *)(lVar6 + 0x60);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00d5aff8 with catch @ 00d5b010
                        */
              lVar6 = lVar3;
            }
          }
        }
      }
LAB_00d5af50:
                    /* try { // try from 00d5af50 to 00e5af87 has its CatchHandler @ 00d5af50
                       catch() { ... } // from try @ 00d5af50 with catch @ 00d5af50
                       catch() { ... } // from try @ 00d5afac with catch @ 00d5af50 */
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar1);
  }
  _spEventQueue_drain(*(undefined8 *)(param_2 + 0x48));
  return;
}

