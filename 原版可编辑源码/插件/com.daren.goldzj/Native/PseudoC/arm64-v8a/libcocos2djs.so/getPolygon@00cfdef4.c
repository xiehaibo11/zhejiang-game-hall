
/* spine::SkeletonBounds::getPolygon(spine::BoundingBoxAttachment*) */

undefined8 __thiscall
spine::SkeletonBounds::getPolygon(SkeletonBounds *this,BoundingBoxAttachment *param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(ulong *)(this + 0x30) == 0) {
    return 0;
  }
  lVar1 = 0;
  uVar2 = 0;
  do {
    if (*(BoundingBoxAttachment **)(*(long *)(this + 0x40) + uVar2 * 8) == param_1) {
      if ((int)uVar2 != -1) {
        return *(undefined8 *)(*(long *)(this + 0x60) + (lVar1 >> 0x1d));
      }
      return 0;
    }
    uVar2 = uVar2 + 1;
    lVar1 = lVar1 + 0x100000000;
  } while (uVar2 < *(ulong *)(this + 0x30));
  return 0;
}

