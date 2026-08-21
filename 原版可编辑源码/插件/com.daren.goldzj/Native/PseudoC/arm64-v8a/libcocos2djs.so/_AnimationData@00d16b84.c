
/* spine::SkeletonCache::AnimationData::~AnimationData() */

void __thiscall spine::SkeletonCache::AnimationData::~AnimationData(AnimationData *this)

{
  undefined8 *puVar1;
  long lVar2;
  FrameData *this_00;
  ulong uVar3;
  
  puVar1 = *(undefined8 **)(this + 0x20);
  lVar2 = *(long *)(this + 0x28);
  if (lVar2 - (long)puVar1 != 0) {
    uVar3 = 0;
    this_00 = (FrameData *)*puVar1;
    while( true ) {
      if (this_00 != (FrameData *)0x0) {
        FrameData::~FrameData(this_00);
        operator_delete(this_00);
      }
      uVar3 = uVar3 + 1;
      if ((ulong)(lVar2 - (long)puVar1 >> 3) <= uVar3) break;
      this_00 = *(FrameData **)(*(long *)(this + 0x20) + uVar3 * 8);
    }
    puVar1 = *(undefined8 **)(this + 0x20);
  }
  *(undefined8 **)(this + 0x28) = puVar1;
  this[0x18] = (AnimationData)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x28) = puVar1;
    operator_delete(puVar1);
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}

