
/* v8::internal::compiler::LinearScanAllocator::AddToActive(v8::internal::compiler::LiveRange*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::AddToActive
          (LinearScanAllocator *this,LiveRange *param_1)

{
  LinearScanAllocator *pLVar1;
  LinearScanAllocator *pLVar2;
  undefined8 *puVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  Zone *this_00;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  LiveRange *pLVar11;
  ulong uVar12;
  undefined8 *puVar13;
  LiveRange *pLVar14;
  LiveRange *pLVar15;
  int local_24;
  
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    uVar6 = (ulong)(*(uint *)(param_1 + 4) >> 7) & 0x3f;
    if ((int)uVar6 == 0x20) {
      pcVar5 = "unassigned";
    }
    else {
      puVar8 = &RegisterName(v8::internal::Register)::Names;
      if (*(int *)(this + 8) != 0) {
        puVar8 = &RegisterName(v8::internal::VRegister)::Names;
      }
      pcVar5 = (char *)puVar8[uVar6];
    }
    PrintF("Add live range %d:%d in %s to active\n",
           (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),(ulong)*(uint *)param_1,pcVar5);
  }
  puVar8 = *(undefined8 **)(this + 0x50);
  if (puVar8 == *(undefined8 **)(this + 0x58)) {
    lVar9 = (long)puVar8 - *(long *)(this + 0x48) >> 3;
    uVar6 = lVar9 + 1;
    if (uVar6 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar7 = (long)*(undefined8 **)(this + 0x58) - *(long *)(this + 0x48);
    uVar12 = lVar7 >> 2;
    if (uVar6 <= uVar12) {
      uVar6 = uVar12;
    }
    if (0x7fffffe < (ulong)(lVar7 >> 3)) {
      uVar6 = 0xfffffff;
    }
    if (uVar6 == 0) {
      lVar7 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x60);
      uVar12 = uVar6 * 8;
      lVar7 = *(long *)(this_00 + 0x10);
      if (uVar12 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
          uVar12 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar7 + uVar12;
      }
      else {
        lVar7 = Zone::NewExpand(this_00,uVar12);
      }
    }
    puVar8 = (undefined8 *)(lVar7 + lVar9 * 8);
    puVar10 = puVar8 + 1;
    *puVar8 = param_1;
    puVar3 = *(undefined8 **)(this + 0x48);
    puVar13 = *(undefined8 **)(this + 0x50);
    while (puVar13 != puVar3) {
      puVar13 = puVar13 + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *puVar13;
    }
    *(undefined8 **)(this + 0x48) = puVar8;
    *(undefined8 **)(this + 0x50) = puVar10;
    *(ulong *)(this + 0x58) = lVar7 + uVar6 * 8;
  }
  else {
    *puVar8 = param_1;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
  }
  pLVar14 = param_1 + 0x10;
  iVar4 = **(int **)pLVar14;
  pLVar11 = param_1 + 0x30;
  pLVar1 = this + 0x88;
  pLVar15 = pLVar14;
  if ((*(int **)pLVar11 != (int *)0x0) && (pLVar15 = pLVar11, iVar4 < **(int **)pLVar11)) {
    *(undefined8 *)pLVar11 = 0;
    pLVar15 = pLVar14;
  }
  do {
    local_24 = *(int *)(*(long *)pLVar15 + 4);
    pLVar15 = (LiveRange *)(*(long *)pLVar15 + 8);
  } while (local_24 < iVar4);
  pLVar2 = (LinearScanAllocator *)&local_24;
  if (*(int *)pLVar1 <= local_24) {
    pLVar2 = pLVar1;
  }
  *(int *)pLVar1 = *(int *)pLVar2;
  return;
}

