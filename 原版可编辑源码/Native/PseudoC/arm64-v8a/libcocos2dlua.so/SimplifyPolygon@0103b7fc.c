
/* ClipperLib::SimplifyPolygon(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, ClipperLib::PolyFillType) */

void ClipperLib::SimplifyPolygon(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined1 local_7c;
  undefined1 local_7a;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_120 = &PTR__Clipper_01727ae8;
  local_78 = &PTR__Clipper_01727b30;
  local_b0 = &local_a8;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
                    /* try { // try from 0103b858 to 0113b85f has its CatchHandler @ 0103b900 */
  local_70 = 0;
  uStack_68 = 0;
                    /* try { // try from 0103b860 to 0113b88f has its CatchHandler @ 0103b6b4 */
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_110 = 0;
  local_118 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_60 = 0;
  local_7c = 0;
                    /* try { // try from 0103b890 to 0113b897 has its CatchHandler @ 0103b90c */
  local_40 = 0;
  local_7a = 1;
  ClipperBase::AddPath((ClipperBase *)&local_78,param_1,0,1);
                    /* try { // try from 0103b8a8 to 0113b8b7 has its CatchHandler @ 0103b93c */
                    /* try { // try from 0103b8b8 to 0113b8fb has its CatchHandler @ 0103b6b4 */
  Clipper::Execute((Clipper *)&local_120,1,param_2,param_3,param_3);
  Clipper::~Clipper((Clipper *)&local_120);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

