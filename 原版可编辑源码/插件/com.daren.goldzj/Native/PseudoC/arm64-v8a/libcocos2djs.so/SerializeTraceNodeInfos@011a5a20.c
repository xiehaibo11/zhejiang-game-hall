
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011a5c0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::HeapSnapshotJSONSerializer::SerializeTraceNodeInfos() */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeTraceNodeInfos(HeapSnapshotJSONSerializer *this)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  TemplateHashMapEntry *pTVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  char *pcVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  char *local_d8;
  undefined1 auStack_d0 [8];
  char *local_c8;
  undefined8 uStack_c0;
  char local_b8 [72];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar11 = *(long *)(**(long **)this + 0x30);
  if (lVar11 != 0) {
    local_c8 = local_b8;
    uStack_c0 = 0x44;
    plVar15 = *(long **)(lVar11 + 0x148);
    plVar1 = *(long **)(lVar11 + 0x150);
    if (plVar15 != plVar1) {
      iVar16 = 0;
      do {
        puVar10 = (undefined8 *)*plVar15;
        if (iVar16 != 0) {
          *local_c8 = ',';
        }
        iVar12 = 0;
        uVar13 = (uint)(iVar16 != 0);
        uVar21 = (ulong)*(uint *)(puVar10 + 1);
        iVar14 = uVar13 + 9;
        iVar18 = uVar13 + 3;
        iVar3 = uVar13 + 5;
        iVar4 = uVar13 + 7;
        uVar7 = uVar13 | 8;
        uVar17 = uVar13;
        do {
          uVar5 = uVar7;
          iVar6 = iVar4;
          iVar22 = iVar3;
          iVar24 = iVar18;
          iVar26 = iVar14;
          uVar17 = uVar17 + 1;
          uVar20 = (uint)uVar21;
          iVar12 = iVar12 + 1;
          uVar21 = uVar21 / 10;
          iVar14 = iVar26 + 1;
          iVar18 = iVar24 + 1;
          iVar3 = iVar22 + 1;
          iVar4 = iVar6 + 1;
          uVar7 = uVar5 + 1;
        } while (9 < uVar20);
        lVar11 = (long)(int)uVar17;
        uVar21 = (ulong)*(uint *)(puVar10 + 1);
        do {
          lVar11 = lVar11 + -1;
          uVar17 = (uint)uVar21;
          local_c8[lVar11] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
          uVar21 = uVar21 / 10;
        } while (9 < uVar17);
        local_c8[(int)(iVar12 + uVar13)] = ',';
        pcVar23 = (char *)*puVar10;
        local_d8 = pcVar23;
        sVar8 = strlen(pcVar23);
        uVar17 = StringHasher::HashSequentialString<char>(pcVar23,(int)sVar8,0);
        pTVar9 = base::
                 TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
                 ::
                 LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                           (sVar8,&local_d8,uVar17,auStack_d0);
        uVar21 = *(ulong *)(pTVar9 + 8);
        if (uVar21 == 0) {
          uVar21 = (ulong)*(int *)(this + 0x24);
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
          *(ulong *)(pTVar9 + 8) = uVar21;
        }
        iVar14 = 0;
        uVar19 = uVar21 & 0xffffffff;
        do {
          iVar4 = iVar6;
          iVar3 = iVar26;
          uVar17 = uVar5;
          iVar18 = iVar22;
          iVar25 = iVar24;
          uVar7 = (uint)uVar19;
          iVar14 = iVar14 + 1;
          uVar19 = uVar19 / 10;
          iVar24 = iVar25 + 1;
          iVar22 = iVar18 + 1;
          uVar5 = uVar17 + 1;
          iVar26 = iVar3 + 1;
          iVar6 = iVar4 + 1;
        } while (9 < uVar7);
        iVar14 = iVar12 + uVar13 + 1 + iVar14;
        lVar11 = (long)iVar25;
        do {
          lVar11 = lVar11 + -1;
          uVar7 = (uint)uVar21;
          uVar19 = (uVar21 & 0xffffffff) / 10;
          local_c8[lVar11] = (char)uVar21 + (char)uVar19 * -10 | 0x30;
          uVar21 = uVar19;
        } while (9 < uVar7);
        local_c8[iVar14] = ',';
        pcVar23 = (char *)puVar10[2];
        local_d8 = pcVar23;
        sVar8 = strlen(pcVar23);
        uVar7 = StringHasher::HashSequentialString<char>(pcVar23,(int)sVar8,0);
        pTVar9 = base::
                 TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
                 ::
                 LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                           (sVar8,&local_d8,uVar7,auStack_d0);
        uVar21 = *(ulong *)(pTVar9 + 8);
        if (uVar21 == 0) {
          uVar21 = (ulong)*(int *)(this + 0x24);
          *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
          *(ulong *)(pTVar9 + 8) = uVar21;
        }
        iVar12 = 0;
        uVar19 = uVar21 & 0xffffffff;
        do {
          iVar24 = iVar3;
          uVar7 = uVar17;
          iVar26 = iVar4;
          iVar22 = iVar18;
          uVar13 = (uint)uVar19;
          iVar12 = iVar12 + 1;
          uVar19 = uVar19 / 10;
          iVar18 = iVar22 + 1;
          iVar4 = iVar26 + 1;
          uVar17 = uVar7 + 1;
          iVar3 = iVar24 + 1;
        } while (9 < uVar13);
        lVar11 = (long)iVar22;
        do {
          lVar11 = lVar11 + -1;
          uVar17 = (uint)uVar21;
          uVar19 = (uVar21 & 0xffffffff) / 10;
          local_c8[lVar11] = (char)uVar21 + (char)uVar19 * -10 | 0x30;
          uVar21 = uVar19;
        } while (9 < uVar17);
        local_c8[iVar14 + 1 + iVar12] = ',';
        uVar21 = (ulong)*(uint *)(puVar10 + 3);
        do {
          iVar12 = iVar24;
          uVar17 = uVar7;
          iVar14 = iVar26;
          uVar13 = (uint)uVar21;
          uVar21 = uVar21 / 10;
          iVar26 = iVar14 + 1;
          uVar7 = uVar17 + 1;
          iVar24 = iVar12 + 1;
        } while (9 < uVar13);
        lVar11 = (long)iVar14;
        uVar21 = (ulong)*(uint *)(puVar10 + 3);
        do {
          lVar11 = lVar11 + -1;
          uVar7 = (uint)uVar21;
          local_c8[lVar11] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
          uVar21 = uVar21 / 10;
        } while (9 < uVar7);
        local_c8[iVar14] = ',';
        if (*(int *)((long)puVar10 + 0x1c) == -1) {
          uVar17 = iVar14 + 2;
          local_c8[iVar14 + 1] = '0';
        }
        else {
          uVar21 = (ulong)(*(int *)((long)puVar10 + 0x1c) + 1);
          uVar19 = uVar21;
          do {
            iVar14 = iVar12;
            uVar7 = (uint)uVar19;
            uVar19 = uVar19 / 10;
            uVar17 = uVar17 + 1;
            iVar12 = iVar14 + 1;
          } while (9 < uVar7);
          lVar11 = (long)iVar14;
          do {
            lVar11 = lVar11 + -1;
            uVar7 = (uint)uVar21;
            local_c8[lVar11] = (char)uVar21 + (char)(uVar21 / 10) * -10 | 0x30;
            uVar21 = uVar21 / 10;
          } while (9 < uVar7);
        }
        local_c8[(int)uVar17] = ',';
        if (*(int *)(puVar10 + 4) == -1) {
          iVar12 = uVar17 + 2;
          local_c8[(long)(int)uVar17 + 1] = '0';
        }
        else {
          uVar19 = (ulong)(*(int *)(puVar10 + 4) + 1);
          iVar12 = uVar17 + 1;
          uVar21 = uVar19;
          iVar14 = uVar17 + 2;
          do {
            iVar18 = iVar14;
            uVar17 = (uint)uVar21;
            uVar21 = uVar21 / 10;
            iVar12 = iVar12 + 1;
            iVar14 = iVar18 + 1;
          } while (9 < uVar17);
          lVar11 = (long)iVar18;
          do {
            lVar11 = lVar11 + -1;
            uVar17 = (uint)uVar19;
            local_c8[lVar11] = (char)uVar19 + (char)(uVar19 / 10) * -10 | 0x30;
            uVar19 = uVar19 / 10;
          } while (9 < uVar17);
        }
        local_c8[iVar12] = '\n';
        local_c8[(long)iVar12 + 1] = '\0';
        OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),local_c8);
        plVar15 = plVar15 + 1;
        iVar16 = iVar16 + 1;
      } while (plVar15 != plVar1);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

