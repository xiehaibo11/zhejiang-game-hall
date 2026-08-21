
/* dragonBones::BoneTranslateTimelineState::_onUpdateFrame() */

void __thiscall
dragonBones::BoneTranslateTimelineState::_onUpdateFrame(BoneTranslateTimelineState *this)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00d794f4 with catch @ 00d79a18 */
                    /* catch() { ... } // from try @ 00d79550 with catch @ 00d79a1c */
                    /* catch() { ... } // from try @ 00d78c28 with catch @ 00d79a20 */
                    /* catch() { ... } // from try @ 00d78c14 with catch @ 00d79a24 */
                    /* catch() { ... } // from try @ 00d788b0 with catch @ 00d79a28 */
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
                    /* catch() { ... } // from try @ 00d7871c with catch @ 00d79a2c */
  lVar1 = *(long *)(this + 0xc0);
  *(undefined1 *)(*(long *)(this + 0xb8) + 0x90) = 1;
                    /* catch() { ... } // from try @ 00d7870c with catch @ 00d79a3c */
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
                    /* catch() { ... } // from try @ 00d786fc with catch @ 00d79a4c */
                    /* catch() { ... } // from try @ 00d786ec with catch @ 00d79a5c */
  *(ulong *)(lVar1 + 0x40) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20) * *(float *)(this + 0xb0),
                (float)*(undefined8 *)(lVar1 + 0x10) +
                (float)*(undefined8 *)(lVar1 + 0x28) * *(float *)(this + 0xb0));
  return;
}

