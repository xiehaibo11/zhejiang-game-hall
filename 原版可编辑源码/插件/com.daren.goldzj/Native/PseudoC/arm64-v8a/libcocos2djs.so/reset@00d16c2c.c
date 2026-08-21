
/* spine::SkeletonCache::AnimationData::reset() */

void __thiscall spine::SkeletonCache::AnimationData::reset(AnimationData *this)

{
  long lVar1;
  undefined8 *puVar2;
  FrameData *this_00;
  ulong uVar3;
  
  puVar2 = *(undefined8 **)(this + 0x20);
  lVar1 = *(long *)(this + 0x28);
  if (lVar1 - (long)puVar2 != 0) {
    uVar3 = 0;
    this_00 = (FrameData *)*puVar2;
    while( true ) {
      if (this_00 != (FrameData *)0x0) {
        FrameData::~FrameData(this_00);
        operator_delete(this_00);
      }
      uVar3 = uVar3 + 1;
      if ((ulong)(lVar1 - (long)puVar2 >> 3) <= uVar3) break;
      this_00 = *(FrameData **)(*(long *)(this + 0x20) + uVar3 * 8);
    }
    puVar2 = *(undefined8 **)(this + 0x20);
  }
  *(undefined8 **)(this + 0x28) = puVar2;
  this[0x18] = (AnimationData)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  return;
}

