
/* ClipperLib::Orientation(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&) */

bool ClipperLib::Orientation(vector *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  double dVar7;
  
  lVar3 = *(long *)param_1;
  uVar4 = (ulong)(*(long *)(param_1 + 8) - lVar3) >> 4;
  if ((int)uVar4 < 3) {
    return true;
  }
  plVar5 = (long *)(lVar3 + 8);
  dVar7 = 0.0;
  uVar1 = 0;
  uVar4 = uVar4 - 1;
  do {
    uVar6 = uVar1;
    plVar2 = (long *)(lVar3 + ((long)(uVar4 << 0x20) >> 0x1c));
    uVar1 = uVar6 + 1;
    dVar7 = dVar7 + ((double)*plVar2 + (double)plVar5[-1]) * ((double)plVar2[1] - (double)*plVar5);
    plVar5 = plVar5 + 2;
    uVar4 = uVar6;
  } while (((ulong)(*(long *)(param_1 + 8) - lVar3) >> 4 & 0xffffffff) != uVar1);
  return 0.0 <= dVar7 * -0.5;
}

