
/* ClipperLib::MinkowskiSum(std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > > const&,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, ClipperLib::PolyFillType, bool) */

void ClipperLib::MinkowskiSum
               (vector *param_1,long *param_2,undefined8 param_3,undefined4 param_4,byte param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined **local_158;
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
  undefined8 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined1 local_b4;
  undefined1 local_b2;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  long local_70;
  
                    /* try { // try from 0103c748 to 0113c753 has its CatchHandler @ 0103c920 */
  lVar1 = tpidr_el0;
                    /* try { // try from 0103c758 to 0113c777 has its CatchHandler @ 0103c924 */
  local_70 = *(long *)(lVar1 + 0x28);
  local_158 = &PTR__Clipper_01727ae8;
  local_b0 = &PTR__Clipper_01727b30;
  local_e8 = &local_e0;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
                    /* try { // try from 0103c788 to 0113c78f has its CatchHandler @ 0103c91c */
  local_e0 = 0;
  uStack_d8 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_b4 = 0;
  local_b2 = 0;
  local_78 = 0;
  lVar10 = *param_2;
  lVar9 = param_2[1];
                    /* try { // try from 0103c7bc to 0113c7cb has its CatchHandler @ 0103c8d8 */
                    /* try { // try from 0103c7cc to 0113c80b has its CatchHandler @ 0103c6e8 */
  lVar8 = lVar9;
  if (lVar9 != lVar10) {
    uVar12 = 0;
    do {
                    /* try { // try from 0103c828 to 0113c837 has its CatchHandler @ 0103c8c0 */
      local_168 = (undefined8 *)0x0;
      uStack_160 = 0;
      local_170 = (undefined8 *)0x0;
                    /* try { // try from 0103c838 to 0113c843 has its CatchHandler @ 0103c8a8 */
      Minkowski(param_1,(vector *)(lVar10 + uVar12 * 0x18),(vector *)&local_170,true,
                (bool)(param_5 & 1));
      if (local_168 != local_170) {
        lVar10 = 0;
        uVar11 = 0;
        puVar7 = local_158[-3];
        do {
                    /* try { // try from 0103c86c to 0113c87f has its CatchHandler @ 0103c924 */
          ClipperBase::AddPath
                    ((ClipperBase *)((long)&local_158 + (long)puVar7),(long)local_170 + lVar10,0,1);
                    /* try { // try from 0103c880 to 0113c95f has its CatchHandler @ 0103c6e8 */
          uVar11 = uVar11 + 1;
          lVar10 = lVar10 + 0x18;
        } while (uVar11 < (ulong)(((long)local_168 - (long)local_170 >> 3) * -0x5555555555555555));
      }
      puVar4 = local_170;
      if (local_170 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 0103c838 with catch @ 0103c8a8 */
        if (local_168 != local_170) {
          pvVar6 = (void *)local_168[-3];
          puVar5 = local_168 + -3;
          puVar3 = local_168;
          while( true ) {
            puVar2 = puVar5;
            if (pvVar6 != (void *)0x0) {
              puVar3[-2] = pvVar6;
              operator_delete(pvVar6);
            }
                    /* catch() { ... } // from try @ 0103c828 with catch @ 0103c8c0 */
            if (puVar4 == puVar2) break;
            pvVar6 = (void *)puVar2[-3];
            puVar5 = puVar2 + -3;
            puVar3 = puVar2;
          }
        }
        local_168 = puVar4;
        operator_delete(local_170);
      }
                    /* try { // try from 0103c80c to 0113c80f has its CatchHandler @ 0103c924 */
      lVar10 = *param_2;
      lVar9 = param_2[1];
      uVar12 = uVar12 + 1;
      lVar8 = lVar10;
    } while (uVar12 < (ulong)((lVar9 - lVar10 >> 3) * -0x5555555555555555));
  }
  if (((param_5 & 1) != 0) && (lVar9 != lVar8)) {
    lVar10 = 0;
    puVar7 = local_158[-3];
    uVar12 = 0;
    do {
                    /* catch() { ... } // from try @ 0103c788 with catch @ 0103c91c */
                    /* catch() { ... } // from try @ 0103c748 with catch @ 0103c920 */
                    /* catch() { ... } // from try @ 0103c758 with catch @ 0103c924
                       catch() { ... } // from try @ 0103c80c with catch @ 0103c924
                       catch() { ... } // from try @ 0103c86c with catch @ 0103c924 */
      ClipperBase::AddPath((ClipperBase *)((long)&local_158 + (long)puVar7),lVar8 + lVar10,1,1);
      lVar8 = *param_2;
      uVar12 = uVar12 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar12 < (ulong)((param_2[1] - lVar8 >> 3) * -0x5555555555555555));
  }
  Clipper::Execute((Clipper *)&local_158,1,param_3,param_4,param_4);
  Clipper::~Clipper((Clipper *)&local_158);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

