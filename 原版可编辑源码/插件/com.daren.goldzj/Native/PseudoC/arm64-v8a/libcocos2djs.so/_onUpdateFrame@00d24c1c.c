
/* dragonBones::BoneAllTimelineState::_onUpdateFrame() */

void __thiscall dragonBones::BoneAllTimelineState::_onUpdateFrame(BoneAllTimelineState *this)

{
  long lVar1;
  float fVar2;
  
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
  lVar1 = *(long *)(this + 0xc0);
  *(undefined1 *)(*(long *)(this + 0xb8) + 0x90) = 1;
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
  fVar2 = *(float *)(this + 0xb0);
  *(ulong *)(lVar1 + 0x48) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) * fVar2,
                (float)*(undefined8 *)(lVar1 + 0x18) + (float)*(undefined8 *)(lVar1 + 0x30) * fVar2)
  ;
  *(ulong *)(lVar1 + 0x40) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20) * fVar2,
                (float)*(undefined8 *)(lVar1 + 0x10) + (float)*(undefined8 *)(lVar1 + 0x28) * fVar2)
  ;
  *(float *)(lVar1 + 0x50) = *(float *)(lVar1 + 0x20) + fVar2 * *(float *)(lVar1 + 0x38);
  *(float *)(lVar1 + 0x54) = *(float *)(lVar1 + 0x24) + fVar2 * *(float *)(lVar1 + 0x3c);
  return;
}

