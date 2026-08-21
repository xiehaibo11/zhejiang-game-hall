
/* dragonBones::BoneTranslateTimelineState::_onUpdateFrame() */

void __thiscall
dragonBones::BoneTranslateTimelineState::_onUpdateFrame(BoneTranslateTimelineState *this)

{
  long lVar1;
  
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
  lVar1 = *(long *)(this + 0xc0);
  *(undefined1 *)(*(long *)(this + 0xb8) + 0x90) = 1;
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  *(ulong *)(lVar1 + 0x40) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20) * *(float *)(this + 0xb0),
                (float)*(undefined8 *)(lVar1 + 0x10) +
                (float)*(undefined8 *)(lVar1 + 0x28) * *(float *)(this + 0xb0));
  return;
}

