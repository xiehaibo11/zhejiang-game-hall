
/* dragonBones::Animation::_fadeOut(dragonBones::AnimationConfig*) */

void __thiscall dragonBones::Animation::_fadeOut(Animation *this,AnimationConfig *param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  AnimationState AVar4;
  AnimationConfig AVar5;
  int iVar6;
  AnimationConfig *pAVar7;
  ulong uVar8;
  AnimationConfig *pAVar9;
  AnimationState *pAVar10;
  AnimationState *pAVar11;
  undefined8 *puVar12;
  
                    /* try { // try from 00d71288 to 00e7128f has its CatchHandler @ 00d71418 */
                    /* try { // try from 00d71290 to 00e7129b has its CatchHandler @ 00d71414 */
                    /* try { // try from 00d712ac to 00e712c3 has its CatchHandler @ 00d714c0 */
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    puVar3 = *(undefined8 **)(this + 0x40);
    for (puVar12 = *(undefined8 **)(this + 0x38); puVar12 != puVar3; puVar12 = puVar12 + 1) {
      if (*(int *)((AnimationState *)*puVar12 + 0x18) == *(int *)(param_1 + 0x2c)) {
                    /* try { // try from 00d712e4 to 00e712fb has its CatchHandler @ 00d71500 */
        AnimationState::fadeOut
                  ((AnimationState *)*puVar12,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
      }
                    /* try { // try from 00d712c8 to 00e712df has its CatchHandler @ 00d714bc */
    }
    break;
  case 2:
    puVar12 = *(undefined8 **)(this + 0x38);
    puVar3 = *(undefined8 **)(this + 0x40);
    if (puVar12 != puVar3) {
                    /* try { // try from 00d71300 to 00e7131b has its CatchHandler @ 00d714b8 */
      do {
        pAVar11 = (AnimationState *)*puVar12;
        AVar4 = pAVar11[0x48];
        AVar5 = param_1[0x78];
        uVar8 = (ulong)((byte)AVar4 >> 1);
                    /* try { // try from 00d71340 to 00e71367 has its CatchHandler @ 00d714f0 */
        sVar1 = uVar8;
        if (((byte)AVar4 & 1) != 0) {
          sVar1 = *(size_t *)(pAVar11 + 0x50);
        }
        sVar2 = (ulong)((byte)AVar5 >> 1);
        if (((byte)AVar5 & 1) != 0) {
          sVar2 = *(size_t *)(param_1 + 0x80);
        }
        if (sVar1 == sVar2) {
          pAVar10 = *(AnimationState **)(pAVar11 + 0x58);
          if (((byte)AVar4 & 1) == 0) {
            pAVar10 = pAVar11 + 0x49;
          }
                    /* try { // try from 00d71368 to 00e71373 has its CatchHandler @ 00d71428 */
          pAVar7 = param_1 + 0x79;
          if (((byte)AVar5 & 1) != 0) {
            pAVar7 = *(AnimationConfig **)(param_1 + 0x88);
          }
          if (((byte)AVar4 & 1) == 0) {
            if (sVar1 != 0) {
              pAVar9 = (AnimationConfig *)(pAVar11 + 0x49);
              do {
                    /* try { // try from 00d71384 to 00e71393 has its CatchHandler @ 00d71500 */
                if (*pAVar9 != *pAVar7) goto LAB_00d71314;
                uVar8 = uVar8 - 1;
                pAVar9 = pAVar9 + 1;
                    /* try { // try from 00d71394 to 00e7153b has its CatchHandler @ 00d70f50 */
                pAVar7 = pAVar7 + 1;
              } while (uVar8 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar6 = memcmp(pAVar10,pAVar7,sVar1), iVar6 != 0))
          goto LAB_00d71314;
          AnimationState::fadeOut(pAVar11,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
        }
LAB_00d71314:
        puVar12 = puVar12 + 1;
                    /* try { // try from 00d7131c to 00e7133f has its CatchHandler @ 00d71500 */
      } while (puVar12 != puVar3);
    }
    break;
  case 3:
    puVar12 = *(undefined8 **)(this + 0x38);
    puVar3 = *(undefined8 **)(this + 0x40);
    if (puVar12 != puVar3) {
      do {
        pAVar11 = (AnimationState *)*puVar12;
        if (*(int *)(pAVar11 + 0x18) == *(int *)(param_1 + 0x2c)) {
          AVar4 = pAVar11[0x48];
          AVar5 = param_1[0x78];
          uVar8 = (ulong)((byte)AVar4 >> 1);
          sVar1 = uVar8;
                    /* catch() { ... } // from try @ 00d71290 with catch @ 00d71414 */
          if (((byte)AVar4 & 1) != 0) {
            sVar1 = *(size_t *)(pAVar11 + 0x50);
          }
                    /* catch() { ... } // from try @ 00d71288 with catch @ 00d71418 */
          sVar2 = (ulong)((byte)AVar5 >> 1);
                    /* catch() { ... } // from try @ 00d71230 with catch @ 00d7141c */
          if (((byte)AVar5 & 1) != 0) {
            sVar2 = *(size_t *)(param_1 + 0x80);
          }
                    /* catch() { ... } // from try @ 00d71214 with catch @ 00d71420 */
                    /* catch() { ... } // from try @ 00d711f8 with catch @ 00d71424 */
          if (sVar1 == sVar2) {
                    /* catch() { ... } // from try @ 00d71368 with catch @ 00d71428 */
            pAVar10 = *(AnimationState **)(pAVar11 + 0x58);
            if (((byte)AVar4 & 1) == 0) {
              pAVar10 = pAVar11 + 0x49;
            }
            pAVar7 = param_1 + 0x79;
            if (((byte)AVar5 & 1) != 0) {
              pAVar7 = *(AnimationConfig **)(param_1 + 0x88);
            }
            if (((byte)AVar4 & 1) == 0) {
              if (sVar1 != 0) {
                    /* catch() { ... } // from try @ 00d71268 with catch @ 00d71448 */
                pAVar9 = (AnimationConfig *)(pAVar11 + 0x49);
                do {
                    /* catch() { ... } // from try @ 00d711dc with catch @ 00d7144c */
                    /* catch() { ... } // from try @ 00d711c4 with catch @ 00d71450 */
                    /* catch() { ... } // from try @ 00d711a4 with catch @ 00d71454 */
                    /* catch() { ... } // from try @ 00d71188 with catch @ 00d71458 */
                  if (*pAVar9 != *pAVar7) goto LAB_00d713d4;
                    /* catch() { ... } // from try @ 00d7116c with catch @ 00d7145c */
                  uVar8 = uVar8 - 1;
                    /* catch() { ... } // from try @ 00d71150 with catch @ 00d71460 */
                  pAVar9 = pAVar9 + 1;
                    /* catch() { ... } // from try @ 00d71134 with catch @ 00d71464 */
                  pAVar7 = pAVar7 + 1;
                    /* catch() { ... } // from try @ 00d71120 with catch @ 00d71468 */
                } while (uVar8 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar6 = memcmp(pAVar10,pAVar7,sVar1), iVar6 != 0))
            goto LAB_00d713d4;
            AnimationState::fadeOut(pAVar11,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
          }
        }
LAB_00d713d4:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
    break;
  case 4:
                    /* catch() { ... } // from try @ 00d710f0 with catch @ 00d71480 */
    puVar3 = *(undefined8 **)(this + 0x40);
                    /* catch() { ... } // from try @ 00d710ac with catch @ 00d71484 */
                    /* catch() { ... } // from try @ 00d71084 with catch @ 00d71488 */
    for (puVar12 = *(undefined8 **)(this + 0x38); puVar12 != puVar3; puVar12 = puVar12 + 1) {
      AnimationState::fadeOut
                ((AnimationState *)*puVar12,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
                    /* catch() { ... } // from try @ 00d7107c with catch @ 00d7149c */
                    /* catch() { ... } // from try @ 00d71038 with catch @ 00d714a0 */
    }
  }
                    /* catch() { ... } // from try @ 00d71010 with catch @ 00d714a4 */
  return;
}

