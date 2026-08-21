
/* spine::AnimationState::update(float) */

void __thiscall spine::AnimationState::update(AnimationState *this,float param_1)

{
  AnimationState *pAVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  TrackEntry *pTVar6;
  TrackEntry *pTVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar8 = *(ulong *)(this + 0x58);
  if (uVar8 != 0) {
    uVar5 = 0;
    pAVar1 = this + 0x90;
    fVar12 = *(float *)(this + 200) * param_1;
    do {
      lVar4 = *(long *)(this + 0x68);
      pTVar6 = *(TrackEntry **)(lVar4 + uVar5 * 8);
      if (pTVar6 != (TrackEntry *)0x0) {
        fVar9 = *(float *)(pTVar6 + 0x78);
        fVar2 = *(float *)(pTVar6 + 0x70);
        fVar13 = fVar12 * fVar9;
        *(undefined4 *)(pTVar6 + 0x5c) = *(undefined4 *)(pTVar6 + 0x60);
        *(float *)(pTVar6 + 0x6c) = fVar2;
        if (0.0 < *(float *)(pTVar6 + 100)) {
          fVar13 = *(float *)(pTVar6 + 100) - fVar13;
          *(float *)(pTVar6 + 100) = fVar13;
          if (0.0 < fVar13) goto LAB_00cded94;
          fVar13 = -fVar13;
          *(undefined4 *)(pTVar6 + 100) = 0;
        }
        pTVar7 = *(TrackEntry **)(pTVar6 + 0x28);
        if (pTVar7 == (TrackEntry *)0x0) {
          if ((fVar2 < *(float *)(pTVar6 + 0x74)) || (*(long *)(pTVar6 + 0x30) != 0))
          goto LAB_00cded48;
          *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
          EventQueue::end(*(EventQueue **)pAVar1,pTVar6);
          for (pTVar7 = *(TrackEntry **)(pTVar6 + 0x28); pTVar7 != (TrackEntry *)0x0;
              pTVar7 = *(TrackEntry **)(pTVar7 + 0x28)) {
            EventQueue::dispose(*(EventQueue **)pAVar1,pTVar7);
          }
          *(undefined8 *)(pTVar6 + 0x28) = 0;
        }
        else {
          fVar10 = *(float *)(pTVar7 + 100);
          if (fVar2 - fVar10 < 0.0) {
LAB_00cded48:
            if ((*(long *)(pTVar6 + 0x30) != 0) &&
               (uVar3 = updateMixingFrom(this,pTVar6,fVar12), (uVar3 & 1) != 0)) {
              pTVar7 = *(TrackEntry **)(pTVar6 + 0x30);
              *(undefined8 *)(pTVar6 + 0x30) = 0;
              if (pTVar7 != (TrackEntry *)0x0) {
                *(undefined8 *)(pTVar7 + 0x38) = 0;
                do {
                  EventQueue::end(*(EventQueue **)pAVar1,pTVar7);
                  pTVar7 = *(TrackEntry **)(pTVar7 + 0x30);
                } while (pTVar7 != (TrackEntry *)0x0);
              }
            }
            *(float *)(pTVar6 + 0x68) = fVar13 + *(float *)(pTVar6 + 0x68);
          }
          else {
            fVar11 = 0.0;
            *(undefined4 *)(pTVar7 + 100) = 0;
            if (fVar9 != 0.0) {
              fVar11 = (fVar12 + (fVar2 - fVar10) / fVar9) * *(float *)(pTVar7 + 0x78);
            }
            *(float *)(pTVar7 + 0x68) = fVar11 + *(float *)(pTVar7 + 0x68);
            *(float *)(pTVar6 + 0x68) = fVar13 + *(float *)(pTVar6 + 0x68);
            setCurrent(this,uVar5,pTVar7,true);
            for (pTVar6 = *(TrackEntry **)(pTVar7 + 0x30); pTVar6 != (TrackEntry *)0x0;
                pTVar6 = *(TrackEntry **)(pTVar6 + 0x30)) {
              *(float *)(pTVar7 + 0x80) = fVar12 + *(float *)(pTVar7 + 0x80);
              pTVar7 = pTVar6;
            }
          }
        }
      }
LAB_00cded94:
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar8);
  }
  EventQueue::drain(*(EventQueue **)(this + 0x90));
  return;
}

