
/* WARNING: Removing unreachable block (ram,0x01018104) */
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::PagedSpace::VerifyLiveBytes() */

void __thiscall v8::internal::PagedSpace::VerifyLiveBytes(PagedSpace *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  ulong local_68;
  ulong local_48;
  
  lVar8 = *(long *)(this + 0x20);
joined_r0x010180ac:
  if (lVar8 == 0) {
    return;
  }
  if (*(long *)(lVar8 + 0xa8) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","page->SweepingDone()");
  }
  lVar9 = *(long *)(lVar8 + 0xe0);
  MarkCompactCollector::EnsureSweepingCompleted
            (*(MarkCompactCollector **)(*(long *)(this + 0x40) + 0x800));
  lVar10 = lVar8;
LAB_01018178:
  if (lVar9 != lVar10) goto code_r0x01018180;
  iVar12 = 0;
LAB_010180b8:
  local_68 = 0;
  goto LAB_010180bc;
code_r0x01018180:
  lVar6 = *(long *)(lVar10 + 0xe0);
  puVar11 = *(uint **)(lVar10 + 0x28);
  puVar1 = *(uint **)(lVar10 + 0x20);
  do {
    do {
      puVar2 = puVar1;
      lVar10 = lVar6;
      if (puVar2 == puVar11) goto LAB_01018178;
    } while ((puVar2 == *(uint **)(this + 0x68)) &&
            (puVar1 = *(uint **)(this + 0x70), puVar2 != *(uint **)(this + 0x70)));
    local_48 = (long)puVar2 + 1;
    iVar5 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_48,local_48 & 0xffffffff00000000 | (ulong)*puVar2);
    puVar1 = (uint *)((long)puVar2 + (long)iVar5);
  } while ((*(ushort *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) | 1)
           == 0xa1);
  iVar5 = (int)local_48;
  if (iVar5 == 0) goto LAB_01018178;
  iVar12 = 0;
  uVar7 = local_48;
joined_r0x010181a0:
  local_68 = uVar7;
  local_48 = local_68;
  if (iVar5 != 0) {
    uVar7 = local_68 - (local_68 & 0xfffffffffffc0000);
    puVar2 = (uint *)(*(long *)((local_68 & 0xfffffffffffc0000) + 0x10) +
                     (uVar7 >> 7 & 0x1ffffff) * 4);
    uVar3 = 1 << (ulong)((uint)(uVar7 >> 2) & 0x1f);
    if ((*puVar2 & uVar3) != 0) {
      uVar3 = uVar3 << 1;
      bVar4 = uVar3 == 0;
      if (bVar4) {
        uVar3 = 1;
      }
      if ((puVar2[bVar4] & uVar3) != 0) {
        iVar5 = HeapObject::SizeFromMap
                          ((HeapObject *)&local_68,
                           local_68 & 0xffffffff00000000 | (ulong)*(uint *)(local_68 - 1));
        iVar12 = iVar5 + iVar12;
      }
    }
joined_r0x0101821c:
    puVar2 = puVar1;
    if (puVar2 != puVar11) goto LAB_01018270;
    goto LAB_01018294;
  }
LAB_010180bc:
  if (*(long *)(lVar8 + 0x68) < (long)iVar12) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","black_size <= marking_state->live_bytes(page)");
  }
  lVar8 = *(long *)(lVar8 + 0xe0);
  goto joined_r0x010180ac;
LAB_01018270:
  if ((puVar2 != *(uint **)(this + 0x68)) ||
     (puVar1 = *(uint **)(this + 0x70), puVar2 == *(uint **)(this + 0x70))) {
    local_48 = (long)puVar2 + 1;
    iVar5 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_48,local_48 & 0xffffffff00000000 | (ulong)*puVar2);
    puVar1 = (uint *)((long)puVar2 + (long)iVar5);
    if ((*(ushort *)((local_48 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) | 1) ==
        0xa1) goto joined_r0x0101821c;
    iVar5 = (int)local_48;
    uVar7 = local_48;
    if (iVar5 == 0) {
LAB_01018294:
      if (lVar9 == lVar6) goto LAB_010180b8;
      puVar11 = *(uint **)(lVar6 + 0x28);
      puVar1 = *(uint **)(lVar6 + 0x20);
      lVar6 = *(long *)(lVar6 + 0xe0);
      goto joined_r0x0101821c;
    }
    goto joined_r0x010181a0;
  }
  goto joined_r0x0101821c;
}

