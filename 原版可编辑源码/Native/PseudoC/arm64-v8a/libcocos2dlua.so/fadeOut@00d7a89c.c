
/* dragonBones::DeformTimelineState::fadeOut() */

void __thiscall dragonBones::DeformTimelineState::fadeOut(DeformTimelineState *this)

{
  *(undefined4 *)(this + 0x1c) = 0;
                    /* try { // try from 00d7a8a0 to 00e7a8e3 has its CatchHandler @ 00d7ba0c */
  this[0xc4] = (DeformTimelineState)0x0;
  return;
}

