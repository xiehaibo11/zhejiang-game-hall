
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
  AnimationConfig *pAVar8;
  long lVar9;
  AnimationState *pAVar10;
  AnimationState *pAVar11;
  undefined8 *puVar12;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 1:
    puVar3 = *(undefined8 **)(this + 0x40);
    for (puVar12 = *(undefined8 **)(this + 0x38); puVar12 != puVar3; puVar12 = puVar12 + 1) {
      if (*(int *)((AnimationState *)*puVar12 + 0x18) == *(int *)(param_1 + 0x2c)) {
        AnimationState::fadeOut
                  ((AnimationState *)*puVar12,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
      }
    }
    break;
  case 2:
    puVar12 = *(undefined8 **)(this + 0x38);
    puVar3 = *(undefined8 **)(this + 0x40);
    if (puVar12 != puVar3) {
      do {
        pAVar11 = (AnimationState *)*puVar12;
        AVar4 = pAVar11[0x48];
        AVar5 = param_1[0x78];
        sVar1 = (ulong)((byte)AVar4 >> 1);
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
          pAVar7 = param_1 + 0x79;
          if (((byte)AVar5 & 1) != 0) {
            pAVar7 = *(AnimationConfig **)(param_1 + 0x88);
          }
          if (((byte)AVar4 & 1) == 0) {
            if (sVar1 != 0) {
              pAVar8 = (AnimationConfig *)(pAVar11 + 0x49);
              lVar9 = -(ulong)((byte)AVar4 >> 1);
              do {
                if (*pAVar8 != *pAVar7) goto LAB_00d1c2bc;
                pAVar8 = pAVar8 + 1;
                lVar9 = lVar9 + 1;
                pAVar7 = pAVar7 + 1;
              } while (lVar9 != 0);
            }
          }
          else if ((sVar1 != 0) && (iVar6 = memcmp(pAVar10,pAVar7,sVar1), iVar6 != 0))
          goto LAB_00d1c2bc;
          AnimationState::fadeOut(pAVar11,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
        }
LAB_00d1c2bc:
        puVar12 = puVar12 + 1;
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
          sVar1 = (ulong)((byte)AVar4 >> 1);
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
            pAVar7 = param_1 + 0x79;
            if (((byte)AVar5 & 1) != 0) {
              pAVar7 = *(AnimationConfig **)(param_1 + 0x88);
            }
            if (((byte)AVar4 & 1) == 0) {
              if (sVar1 != 0) {
                pAVar8 = (AnimationConfig *)(pAVar11 + 0x49);
                lVar9 = -(ulong)((byte)AVar4 >> 1);
                do {
                  if (*pAVar8 != *pAVar7) goto LAB_00d1c38c;
                  pAVar8 = pAVar8 + 1;
                  lVar9 = lVar9 + 1;
                  pAVar7 = pAVar7 + 1;
                } while (lVar9 != 0);
              }
            }
            else if ((sVar1 != 0) && (iVar6 = memcmp(pAVar10,pAVar7,sVar1), iVar6 != 0))
            goto LAB_00d1c38c;
            AnimationState::fadeOut(pAVar11,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
          }
        }
LAB_00d1c38c:
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar3);
    }
    break;
  case 4:
    puVar3 = *(undefined8 **)(this + 0x40);
    for (puVar12 = *(undefined8 **)(this + 0x38); puVar12 != puVar3; puVar12 = puVar12 + 1) {
      AnimationState::fadeOut
                ((AnimationState *)*puVar12,*(float *)(param_1 + 0x18),(bool)param_1[0xd]);
    }
  }
  return;
}

