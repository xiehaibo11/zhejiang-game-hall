
/* ClipperLib::SimplifyPolygons(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, ClipperLib::PolyFillType) */

void ClipperLib::SimplifyPolygons(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined **local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined1 local_ac;
  undefined1 local_aa;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long local_68;
  
                    /* catch() { ... } // from try @ 0103b858 with catch @ 0103b900
                       catch() { ... } // from try @ 0103b8fc with catch @ 0103b900
                       try { // try from 0103b900 to 0113b957 has its CatchHandler @ 0103b6b4 */
                    /* catch() { ... } // from try @ 0103b890 with catch @ 0103b90c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0103b79c with catch @ 0103b928 */
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 0103b7dc with catch @ 0103b93c
                       catch() { ... } // from try @ 0103b8a8 with catch @ 0103b93c */
  local_150 = &PTR__Clipper_01727ae8;
  local_a8 = &PTR__Clipper_01727b30;
  uStack_a0 = 0;
  local_e0 = &local_d8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_98 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_140 = 0;
  local_148 = 0;
  uStack_130 = 0;
  local_138 = 0;
  uStack_120 = 0;
  local_128 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_ac = 0;
  local_70 = 0;
  local_aa = 1;
  lVar2 = *param_1;
  if (param_1[1] != lVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      ClipperBase::AddPath((ClipperBase *)&local_a8,lVar2 + lVar3,0,1);
      lVar2 = *param_1;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < (ulong)((param_1[1] - lVar2 >> 3) * -0x5555555555555555));
  }
                    /* catch() { ... } // from try @ 0103ba6c with catch @ 0103ba0c */
  Clipper::Execute((Clipper *)&local_150,1,param_2,param_3,param_3);
  Clipper::~Clipper((Clipper *)&local_150);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

