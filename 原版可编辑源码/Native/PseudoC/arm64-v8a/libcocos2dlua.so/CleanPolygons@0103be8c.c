
/* ClipperLib::CleanPolygons(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, double) */

void ClipperLib::CleanPolygons(vector *param_1,double param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      CleanPolygon((vector *)(lVar1 + lVar2),(vector *)(lVar1 + lVar2),param_2);
      lVar1 = *(long *)param_1;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < (ulong)((*(long *)(param_1 + 8) - lVar1 >> 3) * -0x5555555555555555));
  }
  return;
}

