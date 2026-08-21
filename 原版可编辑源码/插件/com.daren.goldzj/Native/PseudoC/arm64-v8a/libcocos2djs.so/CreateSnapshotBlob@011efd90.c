
/* v8::internal::Snapshot::CreateSnapshotBlob(v8::internal::SnapshotData const*,
   v8::internal::SnapshotData const*, std::__ndk1::vector<v8::internal::SnapshotData*,
   std::__ndk1::allocator<v8::internal::SnapshotData*> > const&, bool) */

undefined1  [16]
v8::internal::Snapshot::CreateSnapshotBlob
          (SnapshotData *param_1,SnapshotData *param_2,vector *param_3,bool param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  Version *pVVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  size_t sVar20;
  undefined1 auVar21 [16];
  
  plVar10 = *(long **)param_3;
  uVar4 = (long)*(long **)(param_3 + 8) - (long)plVar10;
  uVar14 = (int)(uVar4 >> 1) + 0x57U & 0xfffffff8;
  iVar5 = (int)(uVar4 >> 3);
  uVar15 = *(int *)(param_2 + 0x10) + *(int *)(param_1 + 0x10) + uVar14;
  if (uVar4 != 0) {
    uVar18 = (uVar4 - 8 >> 3) + 1;
    if (1 < uVar18) {
      uVar12 = uVar18 & 0x3ffffffffffffffe;
      iVar11 = 0;
      plVar13 = plVar10 + 1;
      uVar19 = uVar12;
      do {
        plVar1 = plVar13 + -1;
        lVar16 = *plVar13;
        uVar19 = uVar19 - 2;
        plVar13 = plVar13 + 2;
        uVar15 = *(int *)(*plVar1 + 0x10) + uVar15;
        iVar11 = *(int *)(lVar16 + 0x10) + iVar11;
      } while (uVar19 != 0);
      uVar15 = iVar11 + uVar15;
      plVar10 = plVar10 + uVar12;
      if (uVar18 == uVar12) goto LAB_011efe5c;
    }
    do {
      plVar13 = plVar10 + 1;
      uVar15 = *(int *)(*plVar10 + 0x10) + uVar15;
      plVar10 = plVar13;
    } while (*(long **)(param_3 + 8) != plVar13);
  }
LAB_011efe5c:
  ProfileDeserialization(param_2,param_1,param_3);
  auVar21._0_8_ = operator_new__((ulong)uVar15);
  memset(auVar21._0_8_,0,(ulong)uVar14);
  *auVar21._0_8_ = iVar5;
  auVar21._0_8_[1] = (uint)param_4;
  pVVar6 = (Version *)(auVar21._0_8_ + 3);
  auVar21._0_8_[5] = 0;
  auVar21._0_8_[6] = 0;
  *(undefined8 *)pVVar6 = 0;
  auVar21._0_8_[9] = 0;
  auVar21._0_8_[10] = 0;
  auVar21._0_8_[7] = 0;
  auVar21._0_8_[8] = 0;
  auVar21._0_8_[0xd] = 0;
  auVar21._0_8_[0xe] = 0;
  auVar21._0_8_[0xb] = 0;
  auVar21._0_8_[0xc] = 0;
  auVar21._0_8_[0x11] = 0;
  auVar21._0_8_[0x12] = 0;
  auVar21._0_8_[0xf] = 0;
  auVar21._0_8_[0x10] = 0;
  Version::GetString(pVVar6,0x40);
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar18 = (ulong)uVar2;
  if (uVar2 != 0) {
    puVar9 = *(undefined1 **)(param_1 + 8);
    puVar8 = (undefined1 *)((long)auVar21._0_8_ + (ulong)uVar14);
    if (uVar2 < 8) {
      do {
        uVar18 = uVar18 - 1;
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar18 != 0);
    }
    else {
      MemCopy(puVar8,puVar9,uVar18);
    }
  }
  if (FLAG_profile_deserialization != '\0') {
    lVar16 = *(long *)(param_1 + 8);
    uVar3 = *(uint *)(lVar16 + 4);
    if (uVar3 == 0) {
      pvVar17 = (void *)0x0;
      pvVar7 = (void *)0x0;
      sVar20 = 0;
    }
    else {
      sVar20 = (ulong)uVar3 * 4;
      pvVar7 = operator_new(sVar20);
      memset(pvVar7,0,sVar20);
      pvVar17 = (void *)((long)pvVar7 + sVar20);
    }
    memcpy(pvVar7,(void *)(lVar16 + 0xc),sVar20);
    PrintF("Snapshot blob consists of:\n%10d bytes in %d chunks for startup\n",(ulong)uVar2,
           (ulong)((long)pvVar17 - (long)pvVar7) >> 2);
    if (pvVar7 != (void *)0x0) {
      operator_delete(pvVar7);
    }
  }
  uVar2 = uVar2 + uVar14;
  auVar21._0_8_[0x13] = uVar2;
  uVar14 = *(uint *)(param_2 + 0x10);
  uVar18 = (ulong)uVar14;
  if (uVar14 != 0) {
    puVar9 = *(undefined1 **)(param_2 + 8);
    puVar8 = (undefined1 *)((long)auVar21._0_8_ + (ulong)uVar2);
    if (uVar14 < 8) {
      do {
        uVar18 = uVar18 - 1;
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      } while (uVar18 != 0);
    }
    else {
      MemCopy(puVar8,puVar9,uVar18);
    }
  }
  if (FLAG_profile_deserialization != '\0') {
    PrintF("%10d bytes for read-only\n",(ulong)uVar14);
  }
  if (iVar5 != 0) {
    uVar18 = 0;
    uVar14 = uVar14 + uVar2;
    do {
      *(uint *)((long)auVar21._0_8_ + (ulong)((int)uVar18 * 4 + 0x50)) = uVar14;
      lVar16 = *(long *)(*(long *)param_3 + uVar18 * 8);
      uVar2 = *(uint *)(lVar16 + 0x10);
      uVar19 = (ulong)uVar2;
      if (uVar2 != 0) {
        puVar9 = *(undefined1 **)(lVar16 + 8);
        puVar8 = (undefined1 *)((long)auVar21._0_8_ + (ulong)uVar14);
        if (uVar2 < 8) {
          do {
            uVar19 = uVar19 - 1;
            *puVar8 = *puVar9;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          } while (uVar19 != 0);
        }
        else {
          MemCopy(puVar8,puVar9,uVar19);
        }
      }
      if (FLAG_profile_deserialization != '\0') {
        lVar16 = *(long *)(lVar16 + 8);
        uVar3 = *(uint *)(lVar16 + 4);
        if (uVar3 == 0) {
          pvVar7 = (void *)0x0;
          pvVar17 = (void *)0x0;
          sVar20 = 0;
        }
        else {
          sVar20 = (ulong)uVar3 * 4;
          pvVar7 = operator_new(sVar20);
          memset(pvVar7,0,sVar20);
          pvVar17 = (void *)((long)pvVar7 + sVar20);
        }
        memcpy(pvVar7,(void *)(lVar16 + 0xc),sVar20);
        PrintF("%10d bytes in %d chunks for context #%d\n",(ulong)uVar2,
               (ulong)((long)pvVar17 - (long)pvVar7) >> 2,uVar18 & 0xffffffff);
        if (pvVar7 != (void *)0x0) {
          operator_delete(pvVar7);
        }
      }
      uVar18 = uVar18 + 1;
      uVar14 = uVar2 + uVar14;
    } while (uVar18 != (uVar4 >> 3 & 0xffffffff));
  }
  iVar5 = Checksum((internal *)pVVar6,uVar15 - 0xc);
  auVar21._0_8_[2] = iVar5;
  auVar21._8_4_ = uVar15;
  auVar21._12_4_ = 0;
  return auVar21;
}

