
/* spine::AnimationState::addAnimation(unsigned long, spine::Animation*, bool, float) */

TrackEntry * __thiscall
spine::AnimationState::addAnimation
          (AnimationState *this,ulong param_1,Animation *param_2,bool param_3,float param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  TrackEntry *pTVar5;
  TrackEntry *pTVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  
  uVar4 = *(ulong *)(this + 0x58);
  if (param_1 < uVar4) {
    pTVar5 = *(TrackEntry **)(*(long *)(this + 0x68) + param_1 * 8);
    if (pTVar5 != (TrackEntry *)0x0) {
      do {
        pTVar6 = pTVar5;
        pTVar5 = *(TrackEntry **)(pTVar6 + 0x28);
      } while (*(TrackEntry **)(pTVar6 + 0x28) != (TrackEntry *)0x0);
      pTVar5 = (TrackEntry *)newTrackEntry(this,param_1,param_2,param_3,pTVar6);
      *(TrackEntry **)(pTVar6 + 0x28) = pTVar5;
      if (param_4 <= 0.0) {
        fVar10 = *(float *)(pTVar6 + 0x58) - *(float *)(pTVar6 + 0x54);
        if (fVar10 == 0.0) {
          param_4 = *(float *)(pTVar6 + 0x68);
        }
        else {
          fVar11 = *(float *)(pTVar6 + 0x68);
          if (pTVar6[0x44] == (TrackEntry)0x0) {
            if (fVar10 <= fVar11) {
              fVar10 = fVar11;
            }
          }
          else {
            fVar10 = fVar10 * (float)((int)(fVar11 / fVar10) + 1);
          }
          fVar11 = (float)AnimationStateData::getMix
                                    (*(AnimationStateData **)(this + 0x20),
                                     *(Animation **)(pTVar6 + 0x20),param_2);
          param_4 = (fVar10 + param_4) - fVar11;
        }
      }
      goto LAB_00ce04f4;
    }
  }
  else {
    do {
      if (uVar4 == *(ulong *)(this + 0x60)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar9 = *(undefined8 *)(this + 0x68);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this + 0x60) = (long)(int)uVar3;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar2 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar9,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar7 = *(long *)(this + 0x58);
        *(long *)(this + 0x68) = lVar2;
        uVar4 = lVar7 + 1;
        *(ulong *)(this + 0x58) = uVar4;
        puVar8 = (undefined8 *)(lVar2 + lVar7 * 8);
      }
      else {
        puVar8 = (undefined8 *)(*(long *)(this + 0x68) + uVar4 * 8);
        uVar4 = uVar4 + 1;
        *(ulong *)(this + 0x58) = uVar4;
      }
      *puVar8 = 0;
    } while (uVar4 <= param_1);
  }
  pTVar5 = (TrackEntry *)newTrackEntry(this,param_1,param_2,param_3,(TrackEntry *)0x0);
  setCurrent(this,param_1,pTVar5,true);
  EventQueue::drain(*(EventQueue **)(this + 0x90));
LAB_00ce04f4:
  *(float *)(pTVar5 + 100) = param_4;
  return pTVar5;
}

