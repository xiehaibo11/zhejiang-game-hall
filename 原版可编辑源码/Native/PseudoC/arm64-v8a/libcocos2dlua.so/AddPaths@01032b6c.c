
/* ClipperLib::ClipperBase::AddPaths(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > > const&, ClipperLib::PolyType, bool) */

uint __thiscall
ClipperLib::ClipperBase::AddPaths(ClipperBase *this,long *param_1,undefined4 param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar2 = *param_1;
  if (param_1[1] == lVar2) {
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
    do {
      uVar1 = AddPath(this,lVar2 + lVar4,param_3,param_4 & 1);
      lVar2 = *param_1;
      uVar5 = uVar5 + 1;
      uVar3 = uVar3 | uVar1;
      lVar4 = lVar4 + 0x18;
    } while (uVar5 < (ulong)((param_1[1] - lVar2 >> 3) * -0x5555555555555555));
  }
  return uVar3 & 1;
}

