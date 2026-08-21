
/* spine::AnimationState::apply(spine::Skeleton&) */

undefined4 __thiscall spine::AnimationState::apply(AnimationState *this,Skeleton *param_1)

{
  int iVar1;
  long *plVar2;
  RTTI *this_00;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  TrackEntry *pTVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  
  if (this[0xb0] != (AnimationState)0x0) {
    animationsChanged(this);
  }
  lVar6 = *(long *)(this + 0x58);
  if (lVar6 == 0) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    lVar10 = 0;
    do {
      pTVar11 = *(TrackEntry **)(*(long *)(this + 0x68) + lVar10 * 8);
      if ((pTVar11 != (TrackEntry *)0x0) && (*(float *)(pTVar11 + 100) <= 0.0)) {
        if (lVar10 == 0) {
          iVar12 = 1;
        }
        else {
          iVar12 = *(int *)(pTVar11 + 0x90);
        }
        fVar17 = *(float *)(pTVar11 + 0x7c);
        if (*(long *)(pTVar11 + 0x30) == 0) {
          fVar15 = fVar17;
          if ((*(float *)(pTVar11 + 0x74) <= *(float *)(pTVar11 + 0x68)) &&
             (fVar15 = 0.0, *(long *)(pTVar11 + 0x28) != 0)) {
            fVar15 = fVar17;
          }
        }
        else {
          fVar15 = (float)applyMixingFrom(this,pTVar11,param_1,iVar12);
          fVar15 = fVar17 * fVar15;
        }
        uVar18 = *(undefined4 *)(pTVar11 + 0x5c);
        if (pTVar11[0x44] == (TrackEntry)0x0) {
          fVar17 = *(float *)(pTVar11 + 0x68) + *(float *)(pTVar11 + 0x54);
          if (*(float *)(pTVar11 + 0x58) <= *(float *)(pTVar11 + 0x68) + *(float *)(pTVar11 + 0x54))
          {
            fVar17 = *(float *)(pTVar11 + 0x58);
          }
        }
        else {
          fVar16 = *(float *)(pTVar11 + 0x58) - *(float *)(pTVar11 + 0x54);
          fVar17 = *(float *)(pTVar11 + 0x54);
          if (fVar16 != 0.0) {
            fVar17 = (float)MathUtil::fmod(*(float *)(pTVar11 + 0x68),fVar16);
            fVar17 = fVar17 + *(float *)(pTVar11 + 0x54);
          }
        }
        lVar7 = *(long *)(pTVar11 + 0x20);
        lVar8 = *(long *)(lVar7 + 0x10);
        if ((iVar12 == 3) || (lVar10 == 0 && fVar15 == 1.0)) {
          if (lVar8 != 0) {
            lVar4 = 0;
            do {
              plVar2 = *(long **)(*(long *)(lVar7 + 0x20) + lVar4 * 8);
              (**(code **)(*plVar2 + 0x18))
                        (uVar18,fVar17,fVar15,plVar2,param_1,this + 0x70,iVar12,0);
              lVar4 = lVar4 + 1;
            } while (lVar8 != lVar4);
          }
        }
        else {
          lVar4 = *(long *)(pTVar11 + 0xe0);
          if (lVar4 == 0) {
            uVar5 = lVar8 << 1;
            *(ulong *)(pTVar11 + 0xe0) = uVar5;
            if (*(ulong *)(pTVar11 + 0xe8) < uVar5) {
              uVar3 = (uint)((float)uVar5 * 1.75);
              uVar9 = *(undefined8 *)(pTVar11 + 0xf0);
              if (uVar3 < 9) {
                uVar3 = 8;
              }
              *(long *)(pTVar11 + 0xe8) = (long)(int)uVar3;
              plVar2 = (long *)SpineExtension::getInstance();
              uVar9 = (**(code **)(*plVar2 + 0x20))
                                (plVar2,uVar9,
                                 -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2,
                                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                                 ,0x52);
              uVar5 = *(ulong *)(pTVar11 + 0xe0);
              *(undefined8 *)(pTVar11 + 0xf0) = uVar9;
            }
            if (uVar5 != 0) {
              memset(*(void **)(pTVar11 + 0xf0),0,uVar5 << 2);
            }
          }
          if (lVar8 != 0) {
            lVar13 = 0;
            lVar14 = 0;
            do {
              plVar2 = *(long **)(*(long *)(lVar7 + 0x20) + lVar14 * 8);
              iVar1 = iVar12;
              if ((*(uint *)(*(long *)(pTVar11 + 0xb0) + lVar14 * 4) & 3) != 0) {
                iVar1 = 0;
              }
              this_00 = (RTTI *)(**(code **)(*plVar2 + 0x10))(plVar2);
              uVar5 = RTTI::isExactly(this_00,(RTTI *)RotateTimeline::rtti);
              if ((plVar2 == (long *)0x0) || ((uVar5 & 1) == 0)) {
                (**(code **)(*plVar2 + 0x18))
                          (uVar18,fVar17,fVar15,plVar2,param_1,this + 0x70,iVar1,0);
              }
              else {
                applyRotateTimeline(fVar17,fVar15,plVar2,param_1,iVar1,pTVar11 + 0xd8,lVar13,
                                    lVar4 == 0);
              }
              lVar14 = lVar14 + 1;
              lVar13 = lVar13 + 2;
            } while (lVar8 != lVar14);
          }
        }
        queueEvents(this,pTVar11,fVar17);
        *(undefined8 *)(this + 0x78) = 0;
        uVar18 = 1;
        *(float *)(pTVar11 + 0x60) = fVar17;
        *(undefined4 *)(pTVar11 + 0x70) = *(undefined4 *)(pTVar11 + 0x68);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar6);
  }
  EventQueue::drain(*(EventQueue **)(this + 0x90));
  return uVar18;
}

