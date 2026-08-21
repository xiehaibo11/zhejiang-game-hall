
/* v8::internal::ProfileDeserialization(v8::internal::SnapshotData const*,
   v8::internal::SnapshotData const*, std::__ndk1::vector<v8::internal::SnapshotData*,
   std::__ndk1::allocator<v8::internal::SnapshotData*> > const&) */

void v8::internal::ProfileDeserialization
               (SnapshotData *param_1,SnapshotData *param_2,vector *param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  size_t sVar12;
  ulong uVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  
  if (FLAG_profile_deserialization == '\0') {
    return;
  }
  PrintF("Deserialization will reserve:\n");
  lVar14 = *(long *)(param_1 + 8);
  uVar20 = *(uint *)(lVar14 + 4);
  if (uVar20 == 0) {
    puVar15 = (uint *)0x0;
    puVar5 = (uint *)0x0;
    sVar12 = 0;
  }
  else {
    sVar12 = (ulong)uVar20 * 4;
    puVar5 = operator_new(sVar12);
    memset(puVar5,0,sVar12);
    puVar15 = puVar5 + uVar20;
  }
  memcpy(puVar5,(void *)(lVar14 + 0xc),sVar12);
  if (puVar5 == puVar15) {
    uVar20 = 0;
  }
  else {
    uVar11 = ((ulong)((long)puVar15 + (-4 - (long)puVar5)) >> 2) + 1;
    if (uVar11 < 8) {
      uVar20 = 0;
      puVar7 = puVar5;
    }
    else {
      uVar8 = uVar11 & 0x7ffffffffffffff8;
      puVar10 = (ulong *)(puVar5 + 4);
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      puVar7 = puVar5 + uVar8;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar24 = 0;
      uVar13 = uVar8;
      do {
        puVar1 = puVar10 + -2;
        puVar3 = puVar10 + -1;
        puVar4 = puVar10 + 1;
        uVar9 = *puVar10;
        uVar13 = uVar13 - 8;
        puVar10 = puVar10 + 4;
        iVar16 = (int)(*puVar1 & 0x7fffffff7fffffff) + iVar16;
        iVar17 = (int)((*puVar1 & 0x7fffffff7fffffff) >> 0x20) + iVar17;
        iVar18 = (int)(*puVar3 & 0x7fffffff7fffffff) + iVar18;
        iVar19 = (int)((*puVar3 & 0x7fffffff7fffffff) >> 0x20) + iVar19;
        iVar21 = (int)(uVar9 & 0x7fffffff7fffffff) + iVar21;
        iVar22 = (int)((uVar9 & 0x7fffffff7fffffff) >> 0x20) + iVar22;
        iVar23 = (int)(*puVar4 & 0x7fffffff7fffffff) + iVar23;
        iVar24 = (int)((*puVar4 & 0x7fffffff7fffffff) >> 0x20) + iVar24;
      } while (uVar13 != 0);
      uVar20 = iVar21 + iVar16 + iVar22 + iVar17 + iVar23 + iVar18 + iVar24 + iVar19;
      if (uVar11 == uVar8) goto joined_r0x011efa10;
    }
    do {
      puVar6 = puVar7 + 1;
      uVar20 = (*puVar7 & 0x7fffffff) + uVar20;
      puVar7 = puVar6;
    } while (puVar15 != puVar6);
  }
joined_r0x011efa10:
  if (puVar5 != (uint *)0x0) {
    operator_delete(puVar5);
  }
  lVar14 = *(long *)(param_2 + 8);
  uVar2 = *(uint *)(lVar14 + 4);
  if (uVar2 == 0) {
    puVar5 = (uint *)0x0;
    puVar15 = (uint *)0x0;
    sVar12 = 0;
  }
  else {
    sVar12 = (ulong)uVar2 * 4;
    puVar5 = operator_new(sVar12);
    memset(puVar5,0,sVar12);
    puVar15 = puVar5 + uVar2;
  }
  memcpy(puVar5,(void *)(lVar14 + 0xc),sVar12);
  if (puVar5 != puVar15) {
    uVar11 = ((ulong)((long)puVar15 + (-4 - (long)puVar5)) >> 2) + 1;
    puVar7 = puVar5;
    if (7 < uVar11) {
      uVar8 = uVar11 & 0x7ffffffffffffff8;
      iVar22 = 0;
      iVar23 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      iVar21 = 0;
      puVar10 = (ulong *)(puVar5 + 4);
      uVar13 = uVar8;
      do {
        puVar1 = puVar10 + -2;
        puVar3 = puVar10 + -1;
        puVar4 = puVar10 + 1;
        uVar9 = *puVar10;
        uVar13 = uVar13 - 8;
        puVar10 = puVar10 + 4;
        uVar20 = (int)(*puVar1 & 0x7fffffff7fffffff) + uVar20;
        iVar21 = (int)((*puVar1 & 0x7fffffff7fffffff) >> 0x20) + iVar21;
        iVar22 = (int)(*puVar3 & 0x7fffffff7fffffff) + iVar22;
        iVar23 = (int)((*puVar3 & 0x7fffffff7fffffff) >> 0x20) + iVar23;
        iVar16 = (int)(uVar9 & 0x7fffffff7fffffff) + iVar16;
        iVar17 = (int)((uVar9 & 0x7fffffff7fffffff) >> 0x20) + iVar17;
        iVar18 = (int)(*puVar4 & 0x7fffffff7fffffff) + iVar18;
        iVar19 = (int)((*puVar4 & 0x7fffffff7fffffff) >> 0x20) + iVar19;
      } while (uVar13 != 0);
      uVar20 = iVar16 + uVar20 + iVar17 + iVar21 + iVar18 + iVar22 + iVar19 + iVar23;
      puVar7 = puVar5 + uVar8;
      if (uVar11 == uVar8) goto LAB_011efb5c;
    }
    do {
      puVar6 = puVar7 + 1;
      uVar20 = (*puVar7 & 0x7fffffff) + uVar20;
      puVar7 = puVar6;
    } while (puVar15 != puVar6);
  }
LAB_011efb5c:
  if (puVar5 != (uint *)0x0) {
    operator_delete(puVar5);
  }
  PrintF("%10d bytes per isolate\n",(ulong)uVar20);
  lVar14 = *(long *)param_3;
  if (*(long *)(param_3 + 8) != lVar14) {
    uVar11 = 0;
    do {
      lVar14 = *(long *)(*(long *)(lVar14 + uVar11 * 8) + 8);
      uVar20 = *(uint *)(lVar14 + 4);
      if (uVar20 == 0) {
        puVar5 = (uint *)0x0;
        puVar15 = (uint *)0x0;
        sVar12 = 0;
      }
      else {
        sVar12 = (ulong)uVar20 * 4;
        puVar5 = operator_new(sVar12);
        memset(puVar5,0,sVar12);
        puVar15 = puVar5 + uVar20;
      }
      memcpy(puVar5,(void *)(lVar14 + 0xc),sVar12);
      if (puVar5 == puVar15) {
        uVar13 = 0;
      }
      else {
        uVar8 = ((ulong)((long)puVar15 + (-4 - (long)puVar5)) >> 2) + 1;
        if (uVar8 < 8) {
          uVar13 = 0;
          puVar7 = puVar5;
        }
        else {
          uVar9 = uVar8 & 0x7ffffffffffffff8;
          puVar10 = (ulong *)(puVar5 + 4);
          iVar16 = 0;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          puVar7 = puVar5 + uVar9;
          iVar21 = 0;
          iVar22 = 0;
          iVar23 = 0;
          iVar24 = 0;
          uVar13 = uVar9;
          do {
            puVar1 = puVar10 + -2;
            puVar3 = puVar10 + -1;
            puVar4 = puVar10 + 1;
            uVar25 = *puVar10;
            uVar13 = uVar13 - 8;
            puVar10 = puVar10 + 4;
            iVar16 = (int)(*puVar1 & 0x7fffffff7fffffff) + iVar16;
            iVar17 = (int)((*puVar1 & 0x7fffffff7fffffff) >> 0x20) + iVar17;
            iVar18 = (int)(*puVar3 & 0x7fffffff7fffffff) + iVar18;
            iVar19 = (int)((*puVar3 & 0x7fffffff7fffffff) >> 0x20) + iVar19;
            iVar21 = (int)(uVar25 & 0x7fffffff7fffffff) + iVar21;
            iVar22 = (int)((uVar25 & 0x7fffffff7fffffff) >> 0x20) + iVar22;
            iVar23 = (int)(*puVar4 & 0x7fffffff7fffffff) + iVar23;
            iVar24 = (int)((*puVar4 & 0x7fffffff7fffffff) >> 0x20) + iVar24;
          } while (uVar13 != 0);
          uVar13 = (ulong)(uint)(iVar21 + iVar16 + iVar22 + iVar17 +
                                iVar23 + iVar18 + iVar24 + iVar19);
          if (uVar8 == uVar9) goto joined_r0x011efc38;
        }
        do {
          puVar6 = puVar7 + 1;
          uVar13 = (ulong)((*puVar7 & 0x7fffffff) + (int)uVar13);
          puVar7 = puVar6;
        } while (puVar15 != puVar6);
      }
joined_r0x011efc38:
      if (puVar5 != (uint *)0x0) {
        operator_delete(puVar5);
      }
      PrintF("%10d bytes per context #%zu\n",uVar13,uVar11);
      lVar14 = *(long *)param_3;
      uVar11 = uVar11 + 1;
    } while (uVar11 < (ulong)(*(long *)(param_3 + 8) - lVar14 >> 3));
  }
  return;
}

