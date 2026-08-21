
/* ClipperLib::ClipperOffset::AddPaths(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > > const&, ClipperLib::JoinType,
   ClipperLib::EndType) */

void __thiscall
ClipperLib::ClipperOffset::AddPaths
          (ClipperOffset *this,long *param_1,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *param_1;
  if (param_1[1] != lVar1) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      AddPath(this,lVar1 + lVar2,param_3,param_4);
      lVar1 = *param_1;
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < (ulong)((param_1[1] - lVar1 >> 3) * -0x5555555555555555));
  }
  return;
}

