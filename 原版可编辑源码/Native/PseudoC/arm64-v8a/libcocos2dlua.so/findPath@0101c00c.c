
/* WARNING: Removing unreachable block (ram,0x0101c4bc) */
/* WARNING: Removing unreachable block (ram,0x0101c14c) */
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::NavMesh::findPath(cocos2d::Vec3 const&, cocos2d::Vec3 const&,
   std::__ndk1::vector<cocos2d::Vec3, std::__ndk1::allocator<cocos2d::Vec3> >&) */

void __thiscall
cocos2d::NavMesh::findPath(NavMesh *this,Vec3 *param_1,Vec3 *param_2,vector *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar20;
  undefined8 uVar19;
  float fVar22;
  undefined8 uVar21;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_668 [3];
  float local_65c;
  int local_658;
  uint local_654;
  byte local_650 [4];
  uint local_64c;
  uint local_648;
  uint local_644;
  undefined8 local_640;
  float local_638;
  float local_630;
  float fStack_62c;
  float local_628;
  Vec3 aVStack_620 [68];
  float local_5dc;
  float local_5d8;
  float local_5d4;
  undefined8 local_5d0;
  float local_5c8;
  float local_5c0 [2];
  float local_5b8;
  float local_5b4;
  float fStack_5b0;
  float local_5ac;
  undefined8 local_5a8;
  float local_5a0;
  uint uStack_59c;
  uint local_598 [2];
  undefined8 auStack_590 [127];
  dtQueryFilter adStack_198 [264];
  float local_90 [4];
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  local_90[0] = 2.0;
  local_90[1] = 4.0;
                    /* catch() { ... } // from try @ 0101c110 with catch @ 0101c050 */
  local_90[2] = 2.0;
  dtQueryFilter::dtQueryFilter(adStack_198);
  local_64c = 0;
  dtNavMeshQuery::findNearestPoly
            (*(dtNavMeshQuery **)(this + 0x30),(float *)param_1,local_90,adStack_198,&local_644,
             (float *)0x0);
                    /* try { // try from 0101c09c to 0111c0a3 has its CatchHandler @ 0101c19c */
  dtNavMeshQuery::findNearestPoly
            (*(dtNavMeshQuery **)(this + 0x30),(float *)param_2,local_90,adStack_198,&local_648,
             (float *)0x0);
                    /* try { // try from 0101c0b0 to 0111c0bb has its CatchHandler @ 0101c180 */
                    /* try { // try from 0101c0c8 to 0111c0d3 has its CatchHandler @ 0101c178 */
  dtNavMeshQuery::findPath
            (*(dtNavMeshQuery **)(this + 0x30),local_644,local_648,(float *)param_1,(float *)param_2
             ,adStack_198,local_598,(int *)&local_64c,0x100);
  if (local_64c != 0) {
    dtNavMeshQuery::closestPointOnPoly
              (*(dtNavMeshQuery **)(this + 0x30),local_644,(float *)param_1,(float *)&local_5a8,
               (bool *)0x0);
                    /* try { // try from 0101c104 to 0111c10f has its CatchHandler @ 0101c174 */
    dtNavMeshQuery::closestPointOnPoly
              (*(dtNavMeshQuery **)(this + 0x30),(&uStack_59c)[(int)local_64c],(float *)param_2,
               &local_5b4,(bool *)0x0);
                    /* try { // try from 0101c110 to 0111c1e3 has its CatchHandler @ 0101c050 */
    Vec3::Vec3(aVStack_620,(float)local_5a8,local_5a8._4_4_,local_5a0);
    FUN_00ac091c(param_3,aVStack_620);
    uVar16 = 1;
    do {
                    /* catch() { ... } // from try @ 0101c104 with catch @ 0101c174 */
                    /* catch() { ... } // from try @ 0101c0c8 with catch @ 0101c178 */
                    /* catch() { ... } // from try @ 0101c0b0 with catch @ 0101c180 */
      if ((local_64c == 0) ||
         (uVar5 = getSteerTarget(*(dtNavMeshQuery **)(this + 0x30),(float *)&local_5a8,&local_5b4,
                                 0.01,local_598,local_64c,local_5c0,local_650,&local_654,
                                 (float *)0x0,(int *)0x0), bVar3 = local_650[0], (uVar5 & 1) == 0))
      break;
                    /* catch() { ... } // from try @ 0101c09c with catch @ 0101c19c */
      fVar18 = local_5c0[0] - (float)local_5a8;
      fVar22 = (float)((ulong)local_5a8 >> 0x20);
      fVar20 = local_5c0[1] - fVar22;
      fVar24 = local_5b8 - local_5a0;
      fVar25 = SQRT(fVar18 * fVar18 + fVar20 * fVar20 + fVar24 * fVar24);
      fVar26 = 1.0;
      if (0.5 <= fVar25 || (local_650[0] & 6) == 0) {
        fVar26 = 0.5 / fVar25;
      }
      local_5d0 = CONCAT44(fVar22 + fVar20 * fVar26,(float)local_5a8 + fVar18 * fVar26);
                    /* catch() { ... } // from try @ 0101c444 with catch @ 0101c1e4 */
      local_5c8 = local_5a0 + fVar24 * fVar26;
      local_658 = 0;
      dtNavMeshQuery::moveAlongSurface
                (*(dtNavMeshQuery **)(this + 0x30),local_598[0],(float *)&local_5a8,
                 (float *)&local_5d0,adStack_198,&local_5dc,(uint *)aVStack_620,&local_658,0x10);
      local_64c = fixupCorridor(local_598,local_64c,0x100,(uint *)aVStack_620,local_658);
      local_64c = fixupShortcuts(local_598,local_64c,*(dtNavMeshQuery **)(this + 0x30));
      local_65c = 0.0;
      dtNavMeshQuery::getPolyHeight
                (*(dtNavMeshQuery **)(this + 0x30),local_598[0],&local_5dc,&local_65c);
      local_5d8 = local_65c;
      local_5a8 = CONCAT44(local_65c,local_5dc);
      local_5a0 = local_5d4;
                    /* try { // try from 0101c28c to 0111c28f has its CatchHandler @ 0101c4e0 */
      if (((bVar3 >> 1 & 1) == 0) ||
         (uVar5 = inRange((float *)&local_5a8,local_5c0,0.01,1.0), (uVar5 & 1) == 0)) {
        if (((bVar3 >> 2 & 1) == 0) ||
           (uVar5 = inRange((float *)&local_5a8,local_5c0,0.01,1.0), (uVar5 & 1) == 0)) {
LAB_0101c484:
          Vec3::Vec3((Vec3 *)&local_630,(float)local_5a8,local_5a8._4_4_,local_5a0);
          iVar17 = 0;
          goto LAB_0101c49c;
        }
        uVar6 = 0;
        uVar5 = (ulong)local_64c;
        uVar4 = local_598[0];
        if (((int)local_64c < 1) || (local_598[0] == local_654)) {
          uVar7 = 0;
          if (0 < (int)local_64c) goto LAB_0101c364;
        }
        else if ((int)local_64c < 2) {
          uVar7 = 1;
          uVar6 = local_598[0];
          if (1 < (int)local_64c) {
LAB_0101c364:
            uVar8 = uVar7 & 0xffffffff;
            uVar9 = uVar5 - uVar8;
            uVar11 = uVar8;
            if ((7 < uVar9) &&
               (((undefined8 *)((long)local_598 + uVar5 * 4) <= local_598 ||
                ((long)local_598 + uVar9 * 4 <= (long)local_598 + uVar8 * 4)))) {
              uVar13 = uVar9 & 0xfffffffffffffff8;
              uVar11 = uVar13 + uVar8;
              puVar14 = (undefined8 *)local_598;
              uVar15 = uVar13;
              do {
                puVar1 = (undefined8 *)((long)puVar14 + uVar8 * 4);
                uVar19 = *puVar1;
                uVar23 = puVar1[3];
                uVar21 = puVar1[2];
                uVar15 = uVar15 - 8;
                    /* try { // try from 0101c3b8 to 0111c3bb has its CatchHandler @ 0101c4dc */
                puVar14[1] = puVar1[1];
                *puVar14 = uVar19;
                puVar14[3] = uVar23;
                puVar14[2] = uVar21;
                puVar14 = puVar14 + 4;
              } while (uVar15 != 0);
              if (uVar9 == uVar13) goto LAB_0101c3e8;
            }
            puVar10 = (undefined4 *)((long)local_598 + uVar11 * 4);
            lVar12 = uVar5 - uVar11;
            do {
                    /* try { // try from 0101c3d8 to 0111c443 has its CatchHandler @ 0101c4e8 */
              lVar12 = lVar12 + -1;
              puVar10[-uVar8] = *puVar10;
              puVar10 = puVar10 + 1;
            } while (lVar12 != 0);
          }
        }
        else {
          uVar7 = 1;
          do {
            uVar6 = uVar4;
            uVar4 = *(uint *)((long)local_598 + uVar7 * 4);
            uVar7 = uVar7 + 1;
            if ((long)(int)local_64c <= (long)uVar7) break;
                    /* try { // try from 0101c34c to 0111c35f has its CatchHandler @ 0101c4d8 */
          } while (uVar4 != local_654);
          if ((int)uVar7 < (int)local_64c) goto LAB_0101c364;
        }
LAB_0101c3e8:
        local_64c = local_64c - (int)uVar7;
        uVar4 = dtNavMesh::getOffMeshConnectionPolyEndPoints
                          (*(dtNavMesh **)(this + 0x28),uVar6,uVar4,&local_630,(float *)&local_640);
        if ((uVar4 >> 0x1e & 1) != 0) {
          Vec3::Vec3((Vec3 *)local_668,local_630,fStack_62c,local_628);
          FUN_00ac091c(param_3,local_668);
          uVar4 = uVar16 + 1;
          if ((uVar16 + 1 & 1) != 0) {
            Vec3::Vec3((Vec3 *)local_668,local_630,fStack_62c,local_628);
            FUN_00ac091c(param_3,local_668);
                    /* try { // try from 0101c444 to 0111c523 has its CatchHandler @ 0101c1e4 */
            uVar4 = uVar16 + 2;
          }
          uVar16 = uVar4;
          local_668[0] = 0.0;
          local_5a8 = local_640;
          local_5a0 = local_638;
          dtNavMeshQuery::getPolyHeight
                    (*(dtNavMeshQuery **)(this + 0x30),local_598[0],(float *)&local_5a8,local_668);
          local_5a8 = CONCAT44(local_668[0],(float)local_5a8);
        }
        if ((int)uVar16 < 0x800) goto LAB_0101c484;
      }
      else {
                    /* try { // try from 0101c2a0 to 0111c337 has its CatchHandler @ 0101c4e4 */
        local_5a8 = CONCAT44(fStack_5b0,local_5b4);
        local_5a0 = local_5ac;
        Vec3::Vec3((Vec3 *)&local_630,local_5b4,fStack_5b0,local_5ac);
        iVar17 = 3;
LAB_0101c49c:
        FUN_00ac091c(param_3,&local_630);
        uVar16 = uVar16 + 1;
        if (iVar17 != 0) break;
      }
    } while ((int)uVar16 < 0x800);
  }
                    /* catch() { ... } // from try @ 0101c34c with catch @ 0101c4d8 */
                    /* catch() { ... } // from try @ 0101c3b8 with catch @ 0101c4dc */
  if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0101c28c with catch @ 0101c4e0 */
                    /* catch() { ... } // from try @ 0101c2a0 with catch @ 0101c4e4 */
                    /* catch() { ... } // from try @ 0101c3d8 with catch @ 0101c4e8 */
  return;
}

