
/* spine::AnimationState::setAnimation(unsigned long, spine::Animation*, bool) */

TrackEntry * __thiscall
spine::AnimationState::setAnimation
          (AnimationState *this,ulong param_1,Animation *param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  TrackEntry *pTVar7;
  bool bVar8;
  TrackEntry *pTVar9;
  undefined8 uVar10;
  
  uVar4 = *(ulong *)(this + 0x58);
  if (param_1 < uVar4) {
    pTVar7 = *(TrackEntry **)(*(long *)(this + 0x68) + param_1 * 8);
    if (pTVar7 != (TrackEntry *)0x0) {
      if (*(float *)(pTVar7 + 0x70) == -1.0) {
        *(undefined8 *)(*(long *)(this + 0x68) + param_1 * 8) = *(undefined8 *)(pTVar7 + 0x30);
        EventQueue::interrupt(*(EventQueue **)(this + 0x90),pTVar7);
        EventQueue::end(*(EventQueue **)(this + 0x90),pTVar7);
        for (pTVar9 = *(TrackEntry **)(pTVar7 + 0x28); pTVar9 != (TrackEntry *)0x0;
            pTVar9 = *(TrackEntry **)(pTVar9 + 0x28)) {
          EventQueue::dispose(*(EventQueue **)(this + 0x90),pTVar9);
        }
        *(undefined8 *)(pTVar7 + 0x28) = 0;
        pTVar7 = *(TrackEntry **)(pTVar7 + 0x30);
        bVar8 = false;
        goto LAB_00ce0074;
      }
      for (pTVar9 = *(TrackEntry **)(pTVar7 + 0x28); pTVar9 != (TrackEntry *)0x0;
          pTVar9 = *(TrackEntry **)(pTVar9 + 0x28)) {
        EventQueue::dispose(*(EventQueue **)(this + 0x90),pTVar9);
      }
      *(undefined8 *)(pTVar7 + 0x28) = 0;
    }
  }
  else {
    do {
      if (uVar4 == *(ulong *)(this + 0x60)) {
        uVar3 = (uint)((float)uVar4 * 1.75);
        uVar10 = *(undefined8 *)(this + 0x68);
        if (uVar3 < 9) {
          uVar3 = 8;
        }
        *(long *)(this + 0x60) = (long)(int)uVar3;
        plVar1 = (long *)SpineExtension::getInstance();
        lVar2 = (**(code **)(*plVar1 + 0x20))
                          (plVar1,uVar10,
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
    pTVar7 = (TrackEntry *)0x0;
  }
  bVar8 = true;
LAB_00ce0074:
  pTVar7 = (TrackEntry *)newTrackEntry(this,param_1,param_2,param_3,pTVar7);
  setCurrent(this,param_1,pTVar7,bVar8);
  EventQueue::drain(*(EventQueue **)(this + 0x90));
  return pTVar7;
}

