
/* spine::SkeletonBounds::intersectsSegment(float, float, float, float) */

undefined8 __thiscall
spine::SkeletonBounds::intersectsSegment
          (SkeletonBounds *this,float param_1,float param_2,float param_3,float param_4)

{
  SkeletonBounds *this_00;
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(this + 0x50);
  if (uVar1 != 0) {
    lVar2 = *(long *)(this + 0x60);
    uVar3 = 0;
    this_00 = this;
    do {
      this_00 = (SkeletonBounds *)
                intersectsSegment(this_00,*(Polygon **)(lVar2 + uVar3 * 8),param_1,param_2,param_3,
                                  param_4);
      if (((ulong)this_00 & 1) != 0) {
        return *(undefined8 *)(*(long *)(this + 0x40) + uVar3 * 8);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

