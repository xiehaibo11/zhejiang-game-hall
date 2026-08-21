
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x011a67d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::HeapSnapshotJSONSerializer::SerializeNode(v8::internal::HeapEntry const*) */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::SerializeNode
          (HeapSnapshotJSONSerializer *this,HeapEntry *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  size_t sVar6;
  TemplateHashMapEntry *pTVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  char *__s;
  char *local_b8;
  undefined1 auStack_b0 [8];
  byte *local_a8;
  undefined8 uStack_a0;
  byte local_98 [80];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_a8 = local_98;
  uStack_a0 = 0x4e;
  uVar5 = *(uint *)param_1;
  if (0xf < uVar5) {
    local_98[0] = 0x2c;
  }
  uVar9 = uVar5 & 0xf;
  uVar13 = (ulong)uVar9;
  uVar5 = (uint)(0xf < uVar5);
  do {
    uVar8 = uVar5;
    uVar12 = (uint)uVar13;
    uVar13 = uVar13 / 10;
    uVar5 = uVar8 + 1;
  } while (9 < uVar12);
  local_98[(long)(int)uVar5 + -1] = (byte)(uVar9 % 10) | 0x30;
  if (9 < uVar9) {
    lVar15 = (long)(int)uVar5 + -2;
    uVar13 = (ulong)uVar9;
    do {
      uVar9 = (uint)uVar13;
      local_a8[lVar15] = (byte)(uVar13 / 10) | 0x30;
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 / 10;
    } while (99 < uVar9);
  }
  local_a8[(int)uVar5] = 0x2c;
  __s = *(char **)(param_1 + 0x18);
  local_b8 = __s;
  sVar6 = strlen(__s);
  uVar5 = StringHasher::HashSequentialString<char>(__s,(int)sVar6,0);
  pTVar7 = base::
           TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>
           ::
           LookupOrInsert<v8::base::TemplateHashMapImpl<void*,void*,v8::base::HashEqualityThenKeyMatcher<void*,bool(*)(void*,void*)>,v8::base::DefaultAllocationPolicy>::LookupOrInsert(void*const&,unsigned_int,v8::base::DefaultAllocationPolicy)::_lambda()_1_>
                     (sVar6,&local_b8,uVar5,auStack_b0);
  uVar13 = *(ulong *)(pTVar7 + 8);
  if (uVar13 == 0) {
    uVar13 = (ulong)*(int *)(this + 0x24);
    *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
    *(ulong *)(pTVar7 + 8) = uVar13;
  }
  uVar10 = uVar13 & 0xffffffff;
  iVar3 = uVar8 + 2;
  do {
    iVar2 = iVar3;
    uVar5 = (uint)uVar10;
    uVar10 = uVar10 / 10;
    iVar3 = iVar2 + 1;
  } while (9 < uVar5);
  lVar15 = (long)iVar3;
  do {
    lVar15 = lVar15 + -1;
    uVar5 = (uint)uVar13;
    uVar10 = (uVar13 & 0xffffffff) / 10;
    local_a8[lVar15] = (char)uVar13 + (char)uVar10 * -10 | 0x30;
    uVar13 = uVar10;
  } while (9 < uVar5);
  local_a8[iVar3] = 0x2c;
  uVar13 = (ulong)*(uint *)(param_1 + 0x20);
  iVar3 = iVar2 + 2;
  do {
    iVar2 = iVar3;
    uVar5 = (uint)uVar13;
    uVar13 = uVar13 / 10;
    iVar3 = iVar2 + 1;
  } while (9 < uVar5);
  uVar13 = (ulong)*(uint *)(param_1 + 0x20);
  lVar15 = (long)iVar3;
  do {
    lVar15 = lVar15 + -1;
    uVar5 = (uint)uVar13;
    local_a8[lVar15] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
    uVar13 = uVar13 / 10;
  } while (9 < uVar5);
  local_a8[iVar3] = 0x2c;
  uVar13 = *(ulong *)(param_1 + 8);
  iVar3 = iVar2 + 2;
  do {
    iVar2 = iVar3;
    iVar3 = iVar2 + 1;
    bVar1 = 9 < uVar13;
    uVar13 = uVar13 / 10;
  } while (bVar1);
  uVar13 = *(ulong *)(param_1 + 8);
  lVar15 = (long)iVar3;
  do {
    lVar15 = lVar15 + -1;
    local_a8[lVar15] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
    bVar1 = 9 < uVar13;
    uVar13 = uVar13 / 10;
  } while (bVar1);
  local_a8[iVar3] = 0x2c;
  lVar11 = *(long *)(param_1 + 0x10);
  lVar14 = *(long *)(lVar11 + 0x130);
  lVar15 = lVar14 + (ulong)*(uint *)(param_1 + 4) * 8;
  if (0xf < *(uint *)param_1) {
    uVar13 = *(long *)(lVar11 + 0xf0) + (long)(int)((*(uint *)param_1 >> 4) - 1);
    lVar14 = *(long *)(*(long *)(lVar11 + 0xd8) + (uVar13 / 0x66) * 8) + (uVar13 % 0x66) * 0x28;
    lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + 0x130) + (ulong)*(uint *)(lVar14 + 4) * 8;
  }
  uVar13 = (ulong)(lVar15 - lVar14) >> 3;
  uVar10 = uVar13 & 0xffffffff;
  iVar3 = iVar2 + 2;
  do {
    iVar2 = iVar3;
    uVar5 = (uint)uVar10;
    uVar10 = uVar10 / 10;
    iVar3 = iVar2 + 1;
  } while (9 < uVar5);
  lVar15 = (long)iVar3;
  do {
    lVar15 = lVar15 + -1;
    uVar5 = (uint)uVar13;
    uVar10 = (uVar13 & 0xffffffff) / 10;
    local_a8[lVar15] = (char)uVar13 + (char)uVar10 * -10 | 0x30;
    uVar13 = uVar10;
  } while (9 < uVar5);
  local_a8[iVar3] = 0x2c;
  uVar13 = (ulong)*(uint *)(param_1 + 0x24);
  iVar3 = iVar2 + 2;
  do {
    iVar2 = iVar3;
    uVar5 = (uint)uVar13;
    uVar13 = uVar13 / 10;
    iVar3 = iVar2 + 1;
  } while (9 < uVar5);
  uVar13 = (ulong)*(uint *)(param_1 + 0x24);
  lVar15 = (long)iVar3;
  do {
    lVar15 = lVar15 + -1;
    uVar5 = (uint)uVar13;
    local_a8[lVar15] = (char)uVar13 + (char)(uVar13 / 10) * -10 | 0x30;
    uVar13 = uVar13 / 10;
  } while (9 < uVar5);
  local_a8[iVar3] = 10;
  local_a8[iVar2 + 2] = 0;
  OutputStreamWriter::AddString(*(OutputStreamWriter **)(this + 0x28),(char *)local_a8);
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

