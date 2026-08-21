
/* cocos2d::AutoPolygon::expand(std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> > const&, cocos2d::Rect const&, float) */

void cocos2d::AutoPolygon::expand(vector *param_1,Rect *param_2,float param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  long lVar4;
  PolyNode *pPVar5;
  ulong uVar6;
  vector *pvVar7;
  long in_x2;
  vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *in_x8;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  undefined8 local_358;
  long local_350;
  undefined8 *puStack_348;
  undefined8 *local_340;
  long *local_338;
  long *local_330;
  long *local_328;
  long local_320;
  long lStack_318;
  PolyNode aPStack_228 [72];
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  PolyNode aPStack_1c8 [72];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long *local_168;
  long *local_160;
  long *local_158;
  long local_150 [20];
  undefined1 local_aa;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((ulong)(*(long *)(param_2 + 8) - *(long *)param_2 >> 3) < 3) {
    if (((byte)param_1[0x10] & 1) == 0) {
      pvVar7 = param_1 + 0x11;
    }
    else {
      pvVar7 = *(vector **)(param_1 + 0x20);
    }
    auVar9._0_8_ = (double)param_3;
    auVar9._8_8_ = 0;
    log("AUTOPOLYGON: cannot expand points for %s with less than 3 points, e: %f",auVar9,pvVar7);
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
  }
  else {
    local_158 = (long *)0x0;
    local_168 = (long *)0x0;
    local_160 = (long *)0x0;
    ClipperLib::PolyNode::PolyNode(aPStack_1c8);
    local_178 = 0;
    uStack_170 = 0;
    local_180 = 0;
    ClipperLib::PolyNode::PolyNode(aPStack_228);
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e0 = 0;
    puVar8 = *(undefined8 **)param_2;
    puVar2 = *(undefined8 **)(param_2 + 8);
    if (puVar8 != puVar2) {
      uVar11 = NEON_fmov(0x41200000,4);
      do {
        local_320 = (long)((float)*puVar8 * (float)uVar11);
        lStack_318 = (long)((float)((ulong)*puVar8 >> 0x20) * (float)((ulong)uVar11 >> 0x20));
        if (local_160 == local_158) {
          std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
          __push_back_slow_path<ClipperLib::IntPoint_const&>
                    ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                     &local_168,(IntPoint *)&local_320);
        }
        else {
          local_160[1] = lStack_318;
          *local_160 = local_320;
          local_160 = local_160 + 2;
        }
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
    }
    ClipperLib::ClipperOffset::ClipperOffset((ClipperOffset *)&local_320,2.0,0.25);
    ClipperLib::ClipperOffset::AddPath((ClipperOffset *)&local_320,&local_168,2,0);
    ClipperLib::ClipperOffset::Execute
              ((ClipperOffset *)&local_320,(PolyTree *)aPStack_1c8,(double)(param_3 * 10.0));
    pPVar5 = (PolyNode *)ClipperLib::PolyTree::GetFirst((PolyTree *)aPStack_1c8);
    if (pPVar5 == (PolyNode *)0x0) {
      log("AUTOPOLYGON: Clipper failed to expand the points");
      std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::vector
                (in_x8,(vector *)param_2);
    }
    else {
      while (uVar6 = ClipperLib::PolyNode::IsHole(pPVar5), (uVar6 & 1) != 0) {
                    /* catch() { ... } // from try @ 00f63a64 with catch @ 00f6432c */
        pPVar5 = (PolyNode *)ClipperLib::PolyNode::GetNext(pPVar5);
      }
      ClipperLib::Clipper::Clipper((Clipper *)local_150,0);
      local_aa = 1;
      ClipperLib::ClipperBase::AddPath
                ((ClipperBase *)((long)local_150 + *(long *)(local_150[0] + -0x18)),pPVar5,0,1);
      local_330 = (long *)0x0;
      local_328 = (long *)0x0;
      local_338 = (long *)0x0;
      local_350 = 0;
      puStack_348 = (undefined8 *)0x0;
      std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
      __push_back_slow_path<ClipperLib::IntPoint>
                ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                 &local_338,(IntPoint *)&local_350);
      local_350 = (long)((*(float *)(in_x2 + 8) / *(float *)(param_1 + 0x30)) * 10.0);
      puStack_348 = (undefined8 *)0x0;
      if (local_330 < local_328) {
        local_330[1] = 0;
        *local_330 = local_350;
        local_330 = local_330 + 2;
      }
      else {
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        __push_back_slow_path<ClipperLib::IntPoint>
                  ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                   &local_338,(IntPoint *)&local_350);
      }
      uVar11 = NEON_fmov(0x41200000,4);
      fVar10 = (float)((ulong)uVar11 >> 0x20);
      local_350 = (long)(((float)*(undefined8 *)(in_x2 + 8) / *(float *)(param_1 + 0x30)) *
                        (float)uVar11);
      puStack_348 = (undefined8 *)
                    (long)(((float)((ulong)*(undefined8 *)(in_x2 + 8) >> 0x20) /
                           *(float *)(param_1 + 0x30)) * fVar10);
                    /* catch() { ... } // from try @ 00f6445c with catch @ 00f64430 */
      if (local_330 < local_328) {
        local_330[1] = (long)puStack_348;
        *local_330 = local_350;
        local_330 = local_330 + 2;
      }
      else {
                    /* try { // try from 00f64454 to 0106445b has its CatchHandler @ 00f64490 */
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        __push_back_slow_path<ClipperLib::IntPoint>
                  ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                   &local_338,(IntPoint *)&local_350);
                    /* try { // try from 00f6445c to 010644ab has its CatchHandler @ 00f64430 */
      }
      puStack_348 = (undefined8 *)
                    (long)((*(float *)(in_x2 + 0xc) / *(float *)(param_1 + 0x30)) * 10.0);
      local_350 = 0;
      if (local_330 < local_328) {
        local_330[1] = (long)puStack_348;
        *local_330 = 0;
        local_330 = local_330 + 2;
                    /* catch() { ... } // from try @ 00f64454 with catch @ 00f64490 */
      }
      else {
        std::__ndk1::vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>>::
        __push_back_slow_path<ClipperLib::IntPoint>
                  ((vector<ClipperLib::IntPoint,std::__ndk1::allocator<ClipperLib::IntPoint>> *)
                   &local_338,(IntPoint *)&local_350);
      }
      ClipperLib::ClipperBase::AddPath
                ((ClipperBase *)((long)local_150 + *(long *)(local_150[0] + -0x18)),&local_338,1,1);
      ClipperLib::Clipper::Execute((Clipper *)local_150,0,aPStack_228,0,0);
      puStack_348 = (undefined8 *)0x0;
      local_340 = (undefined8 *)0x0;
      local_350 = 0;
      pPVar5 = (PolyNode *)ClipperLib::PolyTree::GetFirst((PolyTree *)aPStack_228);
      while (uVar6 = ClipperLib::PolyNode::IsHole(pPVar5), (uVar6 & 1) != 0) {
        pPVar5 = (PolyNode *)ClipperLib::PolyNode::GetNext(pPVar5);
      }
      pauVar3 = *(undefined1 (**) [16])(pPVar5 + 8);
      for (pauVar1 = *(undefined1 (**) [16])pPVar5; pauVar1 != pauVar3; pauVar1 = pauVar1 + 1) {
        auVar9 = NEON_scvtf(*pauVar1,8);
        local_358 = CONCAT44((float)auVar9._8_8_ / fVar10,(float)auVar9._0_8_ / (float)uVar11);
        if (puStack_348 < local_340) {
          *puStack_348 = local_358;
          puStack_348 = puStack_348 + 1;
        }
        else {
          std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
          __push_back_slow_path<cocos2d::Vec2>
                    ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)&local_350,
                     (Vec2 *)&local_358);
        }
                    /* try { // try from 00f6452c to 01064717 has its CatchHandler @ 00f6452c
                       catch() { ... } // from try @ 00f6452c with catch @ 00f6452c
                       catch() { ... } // from try @ 00f649b4 with catch @ 00f6452c */
      }
      *(undefined8 **)(in_x8 + 8) = puStack_348;
      *(long *)in_x8 = local_350;
      *(undefined8 **)(in_x8 + 0x10) = local_340;
      if (local_338 != (long *)0x0) {
        local_330 = local_338;
        operator_delete(local_338);
      }
      ClipperLib::Clipper::~Clipper((Clipper *)local_150);
    }
    ClipperLib::ClipperOffset::~ClipperOffset((ClipperOffset *)&local_320);
    ClipperLib::PolyTree::~PolyTree((PolyTree *)aPStack_228);
    ClipperLib::PolyTree::~PolyTree((PolyTree *)aPStack_1c8);
    if (local_168 != (long *)0x0) {
      local_160 = local_168;
      operator_delete(local_168);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

