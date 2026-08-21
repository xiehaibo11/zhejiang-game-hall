
/* spine::AnimationState::newTrackEntry(unsigned long, spine::Animation*, bool, spine::TrackEntry*)
    */

undefined8 * __thiscall
spine::AnimationState::newTrackEntry
          (AnimationState *this,ulong param_1,Animation *param_2,bool param_3,TrackEntry *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  if (*(long *)(this + 0x38) == 0) {
    puVar2 = SpineObject::operator_new
                       (0x108,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Pool.h",
                        0x39);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined8 *)((long)puVar2 + 0x3e) = 0;
    *(undefined8 *)((long)puVar2 + 0x84) = 0;
    *(undefined8 *)((long)puVar2 + 0x7c) = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    *(undefined4 *)(puVar2 + 0xf) = 0x3f800000;
    *(undefined8 *)((long)puVar2 + 0x8c) = 0x200000000;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[0xe] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[9] = 0;
    puVar2[0x13] = &PTR__Vector_01c8e510;
    puVar2[0x14] = 0;
    puVar2[0x17] = &PTR__Vector_01c8d010;
    puVar2[0x18] = 0;
    puVar2[0x1b] = &PTR__Vector_01c8d048;
    puVar2[0x1c] = 0;
    puVar2[1] = &PTR__TrackEntry_01c8e3a0;
    *puVar2 = &PTR__TrackEntry_01c8e380;
    puVar2[0x1f] = dummyOnAnimationEventFunc;
    puVar2[0x20] = 0;
  }
  else {
    lVar1 = *(long *)(this + 0x38) + -1;
    puVar2 = *(undefined8 **)(*(long *)(this + 0x48) + lVar1 * 8);
    *(long *)(this + 0x38) = lVar1;
  }
  *(int *)(puVar2 + 8) = (int)param_1;
  puVar2[4] = param_2;
  *(bool *)((long)puVar2 + 0x44) = param_3;
  *(undefined1 *)((long)puVar2 + 0x45) = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  uVar3 = Animation::getDuration(param_2);
  *(undefined4 *)(puVar2 + 0xb) = uVar3;
  *(undefined8 *)((long)puVar2 + 0x7c) = 0x3f800000;
  *(undefined8 *)((long)puVar2 + 100) = 0;
  *(undefined8 *)((long)puVar2 + 0x5c) = 0xbf800000bf800000;
  *(undefined8 *)((long)puVar2 + 0x74) = 0x3f8000007f7fffff;
  *(undefined8 *)((long)puVar2 + 0x6c) = 0xbf800000bf800000;
  *(undefined4 *)(puVar2 + 0x11) = 0x3f800000;
  if (param_4 == (TrackEntry *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = AnimationStateData::getMix
                      (*(AnimationStateData **)(this + 0x20),*(Animation **)(param_4 + 0x20),param_2
                      );
  }
  *(undefined4 *)((long)puVar2 + 0x84) = uVar3;
  return puVar2;
}

