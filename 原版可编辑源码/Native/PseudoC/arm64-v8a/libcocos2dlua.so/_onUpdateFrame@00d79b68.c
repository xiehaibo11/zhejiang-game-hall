
/* dragonBones::BoneRotateTimelineState::_onUpdateFrame() */

void __thiscall dragonBones::BoneRotateTimelineState::_onUpdateFrame(BoneRotateTimelineState *this)

{
  long lVar1;
  
                    /* catch() { ... } // from try @ 00d78d30 with catch @ 00d79b70 */
                    /* catch() { ... } // from try @ 00d793f4 with catch @ 00d79b74 */
                    /* catch() { ... } // from try @ 00d78ad0 with catch @ 00d79b78 */
  TweenTimelineState::_onUpdateFrame((TweenTimelineState *)this);
                    /* catch() { ... } // from try @ 00d79674 with catch @ 00d79b7c */
  lVar1 = *(long *)(this + 0xc0);
                    /* catch() { ... } // from try @ 00d79190 with catch @ 00d79b80 */
  *(undefined1 *)(*(long *)(this + 0xb8) + 0x90) = 1;
  if (*(int *)(this + 0x1c) != 2) {
    *(undefined4 *)(this + 0x1c) = 0;
  }
                    /* catch() { ... } // from try @ 00d78f38 with catch @ 00d79ba0 */
  *(ulong *)(lVar1 + 0x48) =
       CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20) +
                (float)((ulong)*(undefined8 *)(lVar1 + 0x30) >> 0x20) * *(float *)(this + 0xb0),
                (float)*(undefined8 *)(lVar1 + 0x18) +
                (float)*(undefined8 *)(lVar1 + 0x30) * *(float *)(this + 0xb0));
  return;
}

