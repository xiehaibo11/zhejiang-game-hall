
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011a64d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::HeapSnapshotJSONSerializer::SerializeEdge(v8::internal::HeapGraphEdge*, bool) */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeEdge
          (HeapSnapshotJSONSerializer *this,HeapGraphEdge *param_1,bool param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  TemplateHashMapEntry *pTVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  char *__s;
  char *local_90;
  undefined1 auStack_88 [8];
  char *local_80;
  undefined8 uStack_78;
  char local_70 [40];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_80 = local_70;
  uStack_78 = 0x23;
  if (((*(uint *)param_1 & 7) == 4) || ((*(uint *)param_1 & 7) == 1)) {
    uVar8 = (ulong)*(uint *)(param_1 + 0x10);
  }
  else {
    __s = *(char **)(param_1 + 0x10);
    local_90 = __s;
    sVar6 = strlen(__s);
    uVar5 = StringHasher::HashSequentialString<char>(__s,(int)sVar6,0);
    pTVar7 = base::
             TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
             ::
             LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                       (sVar6,&local_90,uVar5,auStack_88);
    uVar8 = *(ulong *)(pTVar7 + 8);
    if (uVar8 == 0) {
      uVar8 = (ulong)*(int *)(this + 0x24);
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      *(ulong *)(pTVar7 + 8) = uVar8;
    }
  }
  if (!param_2) {
    *local_80 = ',';
  }
  uVar10 = *(uint *)param_1 & 7;
  uVar5 = (uint)!param_2;
  do {
    uVar9 = uVar5;
    uVar5 = uVar9 + 1;
    bVar1 = 9 < uVar10;
    uVar10 = 0;
  } while (bVar1);
  lVar12 = (long)(int)uVar5;
  uVar10 = *(uint *)param_1 & 7;
  do {
    lVar12 = lVar12 + -1;
    local_80[lVar12] = (byte)uVar10 | 0x30;
    bVar1 = 9 < uVar10;
    uVar10 = 0;
  } while (bVar1);
  local_80[(int)uVar5] = ',';
  uVar11 = uVar8 & 0xffffffff;
  iVar3 = uVar9 + 2;
  do {
    iVar2 = iVar3;
    uVar5 = (uint)uVar11;
    uVar11 = uVar11 / 10;
    iVar3 = iVar2 + 1;
  } while (9 < uVar5);
  lVar12 = (long)iVar3;
  do {
    lVar12 = lVar12 + -1;
    uVar5 = (uint)uVar8;
    uVar11 = (uVar8 & 0xffffffff) / 10;
    local_80[lVar12] = (char)uVar8 + (char)uVar11 * -10 | 0x30;
    uVar8 = uVar11;
  } while (9 < uVar5);
  local_80[iVar3] = ',';
  uVar8 = (ulong)((**(uint **)(param_1 + 8) >> 4) * 6);
  uVar11 = uVar8;
  iVar3 = iVar2 + 2;
  do {
    iVar2 = iVar3;
    uVar5 = (uint)uVar11;
    uVar11 = uVar11 / 10;
    iVar3 = iVar2 + 1;
  } while (9 < uVar5);
  lVar12 = (long)iVar3;
  do {
    lVar12 = lVar12 + -1;
    uVar5 = (uint)uVar8;
    local_80[lVar12] = (char)uVar8 + (char)(uVar8 / 10) * -10 | 0x30;
    uVar8 = uVar8 / 10;
  } while (9 < uVar5);
  local_80[iVar3] = '\n';
  local_80[iVar2 + 2] = '\0';
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),local_80);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

