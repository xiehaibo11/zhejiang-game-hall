
/* cocos2d::Terrain::calculateNormal() */

void __thiscall cocos2d::Terrain::calculateNormal(Terrain *this)

{
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this_00;
  Terrain *pTVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  int iVar13;
  uint *puVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  long local_68;
  
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  this_00 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(this + 0x80510);
  lVar10 = *(long *)this_00;
  *(long *)(this + 0x80518) = lVar10;
  iVar13 = *(int *)(this + 0x8052c);
  pTVar1 = this + 0x804f8;
  lVar15 = lVar10;
  if (1 < iVar13) {
    iVar18 = *(int *)(this + 0x80528);
    iVar16 = 0;
    do {
      if (1 < iVar18) {
        iVar13 = 0;
        do {
          uVar8 = iVar13 + iVar16 * iVar18;
          puVar11 = *(uint **)(this + 0x80518);
          puVar14 = *(uint **)(this + 0x80520);
          if (puVar11 < puVar14) {
            puVar12 = puVar11 + 1;
            *puVar11 = uVar8;
            *(uint **)(this + 0x80518) = puVar12;
          }
          else {
            local_78._0_4_ = uVar8;
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int>(this_00,(uint *)&local_78);
            puVar12 = *(uint **)(this + 0x80518);
            puVar14 = *(uint **)(this + 0x80520);
          }
          local_78._0_4_ = iVar13 + *(int *)(this + 0x80528) + iVar16 * iVar18;
          if (puVar12 < puVar14) {
            puVar11 = puVar12 + 1;
            *puVar12 = (uint)local_78;
            *(uint **)(this + 0x80518) = puVar11;
          }
          else {
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int>(this_00,(uint *)&local_78);
            puVar11 = *(uint **)(this + 0x80518);
            puVar14 = *(uint **)(this + 0x80520);
          }
          uVar8 = uVar8 + 1;
          if (puVar11 < puVar14) {
            puVar12 = puVar11 + 1;
                    /* catch() { ... } // from try @ 00d446e0 with catch @ 00d446b4 */
            *puVar11 = uVar8;
            *(uint **)(this + 0x80518) = puVar12;
          }
          else {
            local_78._0_4_ = uVar8;
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int>(this_00,(uint *)&local_78);
            puVar12 = *(uint **)(this + 0x80518);
            puVar14 = *(uint **)(this + 0x80520);
          }
                    /* try { // try from 00d446d8 to 00e446df has its CatchHandler @ 00d44724 */
          if (puVar12 < puVar14) {
            puVar11 = puVar12 + 1;
            *puVar12 = uVar8;
                    /* try { // try from 00d446e0 to 00e4473f has its CatchHandler @ 00d446b4 */
            *(uint **)(this + 0x80518) = puVar11;
          }
          else {
            local_78._0_4_ = uVar8;
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int>(this_00,(uint *)&local_78);
            puVar11 = *(uint **)(this + 0x80518);
            puVar14 = *(uint **)(this + 0x80520);
          }
          local_78._0_4_ = iVar13 + *(int *)(this + 0x80528) + iVar16 * iVar18;
          if (puVar11 < puVar14) {
            puVar12 = puVar11 + 1;
            *puVar11 = (uint)local_78;
            *(uint **)(this + 0x80518) = puVar12;
          }
          else {
                    /* catch() { ... } // from try @ 00d446d8 with catch @ 00d44724 */
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int>(this_00,(uint *)&local_78);
            puVar12 = *(uint **)(this + 0x80518);
            puVar14 = *(uint **)(this + 0x80520);
          }
          uVar8 = iVar13 + *(int *)(this + 0x80528) + iVar16 * iVar18 + 1;
                    /* catch() { ... } // from try @ 00d44770 with catch @ 00d44740 */
          local_78 = CONCAT44(local_78._4_4_,uVar8);
          if (puVar12 < puVar14) {
            *puVar12 = uVar8;
            *(uint **)(this + 0x80518) = puVar12 + 1;
          }
          else {
            std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::
            __push_back_slow_path<unsigned_int>(this_00,(uint *)&local_78);
          }
          iVar18 = *(int *)(this + 0x80528);
          iVar13 = iVar13 + 1;
        } while (iVar13 < iVar18 + -1);
        iVar13 = *(int *)(this + 0x8052c);
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar13 + -1);
    lVar10 = *(long *)(this + 0x80510);
    lVar15 = *(long *)(this + 0x80518);
  }
  lVar15 = lVar15 - lVar10;
  if (lVar15 == 0) {
    lVar17 = *(long *)pTVar1;
  }
  else {
    lVar17 = *(long *)pTVar1;
    uVar19 = 0;
                    /* try { // try from 00d44768 to 00e4476f has its CatchHandler @ 00d447b8 */
    while( true ) {
      puVar11 = (uint *)(lVar10 + uVar19 * 4);
                    /* try { // try from 00d44770 to 00e447d3 has its CatchHandler @ 00d44740 */
      uVar8 = *puVar11;
      uVar6 = puVar11[1];
      uVar7 = puVar11[2];
      puVar2 = (undefined8 *)(lVar17 + (ulong)uVar6 * 0x20);
      uVar21 = *puVar2;
      puVar3 = (undefined8 *)(lVar17 + (ulong)uVar8 * 0x20);
      puVar4 = (undefined8 *)(lVar17 + (ulong)uVar7 * 0x20);
      local_78 = CONCAT44((float)((ulong)uVar21 >> 0x20) - (float)((ulong)*puVar3 >> 0x20),
                          (float)uVar21 - (float)*puVar3);
      local_70 = *(float *)(puVar2 + 1) - *(float *)(puVar3 + 1);
      uVar21 = *puVar4;
                    /* catch() { ... } // from try @ 00d44768 with catch @ 00d447b8 */
      local_88 = CONCAT44((float)((ulong)uVar21 >> 0x20) - (float)((ulong)*puVar3 >> 0x20),
                          (float)uVar21 - (float)*puVar3);
      local_80 = *(float *)(puVar4 + 1) - *(float *)(puVar3 + 1);
                    /* catch() { ... } // from try @ 00d44804 with catch @ 00d447d4 */
      Vec3::Vec3((Vec3 *)&local_98);
      Vec3::cross((Vec3 *)&local_78,(Vec3 *)&local_88,(Vec3 *)&local_98);
      Vec3::normalize((Vec3 *)&local_98);
      lVar17 = *(long *)pTVar1;
      uVar19 = uVar19 + 3;
                    /* try { // try from 00d447fc to 00e44803 has its CatchHandler @ 00d4484c */
      lVar10 = lVar17 + (ulong)uVar8 * 0x20;
                    /* try { // try from 00d44804 to 00e44867 has its CatchHandler @ 00d447d4 */
      lVar5 = lVar17 + (ulong)uVar6 * 0x20;
      fVar20 = (float)local_98;
      fVar22 = (float)((ulong)local_98 >> 0x20);
      *(ulong *)(lVar10 + 0x14) =
           CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20),
                    fVar20 + (float)*(undefined8 *)(lVar10 + 0x14));
      *(float *)(lVar10 + 0x1c) = local_90 + *(float *)(lVar10 + 0x1c);
      lVar10 = lVar17 + (ulong)uVar7 * 0x20;
      *(ulong *)(lVar5 + 0x14) =
           CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(lVar5 + 0x14) >> 0x20),
                    fVar20 + (float)*(undefined8 *)(lVar5 + 0x14));
      *(float *)(lVar5 + 0x1c) = local_90 + *(float *)(lVar5 + 0x1c);
                    /* catch() { ... } // from try @ 00d447fc with catch @ 00d4484c */
      *(ulong *)(lVar10 + 0x14) =
           CONCAT44(fVar22 + (float)((ulong)*(undefined8 *)(lVar10 + 0x14) >> 0x20),
                    fVar20 + (float)*(undefined8 *)(lVar10 + 0x14));
      *(float *)(lVar10 + 0x1c) = local_90 + *(float *)(lVar10 + 0x1c);
                    /* try { // try from 00d44868 to 00e4489b has its CatchHandler @ 00d44868
                       catch() { ... } // from try @ 00d44868 with catch @ 00d44868
                       catch() { ... } // from try @ 00d448d8 with catch @ 00d44868 */
      if ((ulong)(lVar15 >> 2) <= uVar19) break;
      lVar10 = *(long *)this_00;
    }
  }
  lVar10 = *(long *)(this + 0x80500);
  for (; lVar17 != lVar10; lVar17 = lVar17 + 0x20) {
    Vec3::normalize((Vec3 *)(lVar17 + 0x14));
  }
                    /* try { // try from 00d4489c to 00e448a3 has its CatchHandler @ 00d44938 */
  *(undefined8 *)(this + 0x80518) = *(undefined8 *)(this + 0x80510);
  if (*(long *)(lVar9 + 0x28) == local_68) {
                    /* try { // try from 00d448b4 to 00e448bb has its CatchHandler @ 00d44928 */
                    /* try { // try from 00d448c0 to 00e448cf has its CatchHandler @ 00d44918 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

