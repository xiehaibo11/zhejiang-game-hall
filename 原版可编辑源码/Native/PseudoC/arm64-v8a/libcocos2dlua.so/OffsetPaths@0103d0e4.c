
/* ClipperLib::OffsetPaths(std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, double, ClipperLib::JoinType,
   ClipperLib::EndType_, double) */

void ClipperLib::OffsetPaths
               (double param_3,undefined8 param_2_00,long *param_1,vector *param_2,
               undefined4 param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined5 uStack_78;
  long local_68;
  
                    /* try { // try from 0103d0ec to 0113d0f7 has its CatchHandler @ 0103d1ec */
                    /* try { // try from 0103d0f8 to 0113d117 has its CatchHandler @ 0103cdf0 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0103d118 to 0113d123 has its CatchHandler @ 0103d1e8 */
                    /* try { // try from 0103d124 to 0113d22f has its CatchHandler @ 0103cdf0 */
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_7b = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  local_c0 = 0xffffffffffffffff;
  lVar2 = *param_1;
  local_160 = param_2_00;
  uStack_158 = param_2_00;
  if (param_1[1] != lVar2) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      ClipperOffset::AddPath((ClipperOffset *)&local_160,lVar2 + lVar3,param_5,param_6);
      lVar2 = *param_1;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < (ulong)((param_1[1] - lVar2 >> 3) * -0x5555555555555555));
  }
  ClipperOffset::Execute((ClipperOffset *)&local_160,param_2,param_3);
  ClipperOffset::~ClipperOffset((ClipperOffset *)&local_160);
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* catch() { ... } // from try @ 0103d118 with catch @ 0103d1e8 */
                    /* catch() { ... } // from try @ 0103d0ec with catch @ 0103d1ec */
                    /* catch() { ... } // from try @ 0103d0e0 with catch @ 0103d1f0 */
                    /* catch() { ... } // from try @ 0103d0d4 with catch @ 0103d1f4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

