
/* spine::AnimationState::setCurrent(unsigned long, spine::TrackEntry*, bool) */

void __thiscall
spine::AnimationState::setCurrent
          (AnimationState *this,ulong param_1,TrackEntry *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  TrackEntry *pTVar7;
  undefined8 uVar8;
  float fVar9;
  
  uVar4 = *(ulong *)(this + 0x58);
  if (param_1 < uVar4) {
    pTVar7 = *(TrackEntry **)(*(long *)(this + 0x68) + param_1 * 8);
    *(TrackEntry **)(*(long *)(this + 0x68) + param_1 * 8) = param_2;
    if (pTVar7 != (TrackEntry *)0x0) {
      if (param_3) {
        EventQueue::interrupt(*(EventQueue **)(this + 0x90),pTVar7);
      }
      *(TrackEntry **)(param_2 + 0x30) = pTVar7;
      *(TrackEntry **)(pTVar7 + 0x38) = param_2;
      *(undefined4 *)(param_2 + 0x80) = 0;
      if ((*(long *)(pTVar7 + 0x30) != 0) && (0.0 < *(float *)(pTVar7 + 0x84))) {
        fVar9 = *(float *)(pTVar7 + 0x80) / *(float *)(pTVar7 + 0x84);
        if (1.0 < fVar9) {
          fVar9 = 1.0;
        }
        *(float *)(param_2 + 0x88) = *(float *)(param_2 + 0x88) * fVar9;
      }
      *(undefined8 *)(pTVar7 + 0xe0) = 0;
    }
  }
  else {
    do {
      if (uVar4 == *(ulong *)(this + 0x60)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar8 = *(undefined8 *)(this + 0x68);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this + 0x60) = (long)(int)uVar3;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar2 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar8,
                           -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3,
                           "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                           ,0x6a);
        lVar5 = *(long *)(this + 0x58);
        *(long *)(this + 0x68) = lVar2;
        uVar4 = lVar5 + 1;
        *(ulong *)(this + 0x58) = uVar4;
        puVar6 = (undefined8 *)(lVar2 + lVar5 * 8);
      }
      else {
        puVar6 = (undefined8 *)(*(long *)(this + 0x68) + uVar4 * 8);
        uVar4 = uVar4 + 1;
        *(ulong *)(this + 0x58) = uVar4;
      }
      *puVar6 = 0;
    } while (uVar4 <= param_1);
    *(TrackEntry **)(*(long *)(this + 0x68) + param_1 * 8) = param_2;
  }
  EventQueue::start(*(EventQueue **)(this + 0x90),param_2);
  return;
}

