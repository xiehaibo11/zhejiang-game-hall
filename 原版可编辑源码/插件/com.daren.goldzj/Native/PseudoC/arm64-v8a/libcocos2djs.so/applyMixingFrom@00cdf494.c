
/* spine::AnimationState::applyMixingFrom(spine::TrackEntry*, spine::Skeleton&, spine::MixBlend) */

float __thiscall
spine::AnimationState::applyMixingFrom
          (AnimationState *this,long param_1,undefined8 param_2,int param_4)

{
  AnimationState *pAVar1;
  byte bVar2;
  long *plVar3;
  RTTI *pRVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  TrackEntry *pTVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  int local_b8;
  
  pTVar8 = *(TrackEntry **)(param_1 + 0x30);
  if (*(long *)(pTVar8 + 0x30) != 0) {
    applyMixingFrom(this,pTVar8,param_2,param_4);
  }
  if (*(float *)(param_1 + 0x84) == 0.0) {
    local_b8 = 0;
    if (param_4 != 1) {
      local_b8 = param_4;
    }
    fVar16 = 1.0;
  }
  else {
    fVar16 = *(float *)(param_1 + 0x80) / *(float *)(param_1 + 0x84);
    if (1.0 < fVar16) {
      fVar16 = 1.0;
    }
    if (param_4 == 1) {
      local_b8 = 1;
    }
    else {
      local_b8 = *(int *)(pTVar8 + 0x90);
    }
  }
  fVar22 = *(float *)(pTVar8 + 0x4c);
  fVar19 = *(float *)(pTVar8 + 0x50);
  uVar21 = *(undefined4 *)(pTVar8 + 0x5c);
  pAVar1 = this + 0x70;
  if (*(float *)(pTVar8 + 0x48) <= fVar16) {
    pAVar1 = (AnimationState *)0x0;
  }
  if (pTVar8[0x44] == (TrackEntry)0x0) {
    fVar17 = *(float *)(pTVar8 + 0x68) + *(float *)(pTVar8 + 0x54);
    if (*(float *)(pTVar8 + 0x58) <= *(float *)(pTVar8 + 0x68) + *(float *)(pTVar8 + 0x54)) {
      fVar17 = *(float *)(pTVar8 + 0x58);
    }
  }
  else {
    fVar20 = *(float *)(pTVar8 + 0x58) - *(float *)(pTVar8 + 0x54);
    fVar17 = *(float *)(pTVar8 + 0x54);
    if (fVar20 != 0.0) {
      fVar17 = (float)MathUtil::fmod(*(float *)(pTVar8 + 0x68),fVar20);
      fVar17 = fVar17 + *(float *)(pTVar8 + 0x54);
    }
  }
  lVar10 = *(long *)(pTVar8 + 0x20);
  lVar9 = *(long *)(lVar10 + 0x10);
  fVar23 = *(float *)(pTVar8 + 0x7c) * *(float *)(param_1 + 0x88);
  fVar20 = (1.0 - fVar16) * fVar23;
  if (local_b8 == 3) {
    if (lVar9 != 0) {
      lVar11 = 0;
      do {
        plVar3 = *(long **)(*(long *)(lVar10 + 0x20) + lVar11 * 8);
        (**(code **)(*plVar3 + 0x18))(uVar21,fVar17,fVar20,plVar3,param_2,pAVar1,3,1);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
    }
  }
  else {
    lVar11 = *(long *)(pTVar8 + 0xe0);
    if (lVar11 == 0) {
      uVar5 = lVar9 << 1;
      *(ulong *)(pTVar8 + 0xe0) = uVar5;
      if (*(ulong *)(pTVar8 + 0xe8) < uVar5) {
        uVar7 = (uint)((float)uVar5 * 1.75);
        uVar12 = *(undefined8 *)(pTVar8 + 0xf0);
        if (uVar7 < 9) {
          uVar7 = 8;
        }
        *(long *)(pTVar8 + 0xe8) = (long)(int)uVar7;
        plVar3 = (long *)SpineExtension::getInstance();
        uVar12 = (**(code **)(*plVar3 + 0x20))
                           (plVar3,uVar12,
                            -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2,
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                            ,0x52);
        uVar5 = *(ulong *)(pTVar8 + 0xe0);
        *(undefined8 *)(pTVar8 + 0xf0) = uVar12;
      }
      if (uVar5 != 0) {
        memset(*(void **)(pTVar8 + 0xf0),0,uVar5 << 2);
      }
    }
    *(undefined4 *)(pTVar8 + 0x8c) = 0;
    if (lVar9 != 0) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        plVar3 = *(long **)(*(long *)(lVar10 + 0x20) + lVar14 * 8);
        uVar7 = *(uint *)(*(long *)(pTVar8 + 0xb0) + lVar14 * 4) & 3;
        if (uVar7 == 2) {
          iVar15 = 0;
          fVar18 = fVar23;
LAB_00cdf770:
          *(float *)(pTVar8 + 0x8c) = fVar18 + *(float *)(pTVar8 + 0x8c);
          pRVar4 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
          uVar5 = RTTI::isExactly(pRVar4,(RTTI *)RotateTimeline::rtti);
          if ((uVar5 & 1) == 0) {
            if (iVar15 == 0) {
              pRVar4 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
              uVar5 = RTTI::isExactly(pRVar4,(RTTI *)AttachmentTimeline::rtti);
              if ((uVar5 & 1) == 0) {
                pRVar4 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
                bVar2 = RTTI::isExactly(pRVar4,(RTTI *)DrawOrderTimeline::rtti);
                bVar2 = fVar19 <= fVar16 | (bVar2 ^ 0xff) & 1;
              }
              else if ((fVar16 < fVar22) ||
                      ((*(uint *)(*(long *)(pTVar8 + 0xb0) + lVar14 * 4) >> 2 & 1) != 0)) {
                bVar2 = 0;
              }
              else {
                bVar2 = 1;
              }
            }
            else {
              bVar2 = 1;
            }
            (**(code **)(*plVar3 + 0x18))(uVar21,fVar17,fVar18,plVar3,param_2,pAVar1,iVar15,bVar2);
          }
          else {
            applyRotateTimeline(fVar17,fVar18,plVar3,param_2,iVar15,pTVar8 + 0xd8,lVar13,lVar11 == 0
                               );
          }
        }
        else {
          fVar18 = fVar20;
          if (uVar7 == 1) {
            iVar15 = 0;
            goto LAB_00cdf770;
          }
          if (uVar7 != 0) {
            iVar15 = 0;
            lVar6 = *(long *)(*(long *)(pTVar8 + 0xd0) + lVar14 * 8);
            fVar18 = 1.0 - *(float *)(lVar6 + 0x80) / *(float *)(lVar6 + 0x84);
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
            fVar18 = fVar23 * fVar18;
            goto LAB_00cdf770;
          }
          iVar15 = local_b8;
          if (fVar16 < fVar22) {
LAB_00cdf720:
            if (fVar19 <= fVar16) {
              pRVar4 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
              uVar5 = RTTI::isExactly(pRVar4,(RTTI *)DrawOrderTimeline::rtti);
              if ((uVar5 & 1) != 0) goto LAB_00cdf89c;
            }
            goto LAB_00cdf770;
          }
          pRVar4 = (RTTI *)(**(code **)(*plVar3 + 0x10))(plVar3);
          uVar5 = RTTI::isExactly(pRVar4,(RTTI *)AttachmentTimeline::rtti);
          if ((uVar5 & 1) == 0) goto LAB_00cdf720;
          if ((*(uint *)(*(long *)(pTVar8 + 0xb0) + lVar14 * 4) >> 2 & 1) == 0) {
            iVar15 = 0;
            goto LAB_00cdf720;
          }
        }
LAB_00cdf89c:
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 2;
      } while (lVar9 != lVar14);
    }
  }
  if (0.0 < *(float *)(param_1 + 0x84)) {
    queueEvents(this,pTVar8,fVar17);
  }
  *(undefined8 *)(this + 0x78) = 0;
  *(float *)(pTVar8 + 0x60) = fVar17;
  *(undefined4 *)(pTVar8 + 0x70) = *(undefined4 *)(pTVar8 + 0x68);
  return fVar16;
}

