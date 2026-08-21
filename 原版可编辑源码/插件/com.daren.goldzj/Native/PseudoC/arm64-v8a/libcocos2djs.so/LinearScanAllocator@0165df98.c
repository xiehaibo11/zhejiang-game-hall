
/* v8::internal::compiler::LinearScanAllocator::LinearScanAllocator(v8::internal::compiler::RegisterAllocationData*,
   v8::internal::compiler::RegisterKind, v8::internal::Zone*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::LinearScanAllocator
          (LinearScanAllocator *this,long param_1,int param_3,Zone *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  Zone *this_00;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  __tree_node **local_40;
  __tree_node *local_38;
  Zone *local_30;
  undefined8 uStack_28;
  
  *(long *)this = param_1;
  *(int *)(this + 8) = param_3;
  bVar4 = param_3 != 1;
  lVar8 = 0x10;
  if (bVar4) {
    lVar8 = 8;
  }
  iVar3 = *(int *)(*(long *)(param_1 + 0x20) + lVar8);
  uVar12 = (ulong)iVar3;
  lVar8 = 0x20;
  if (bVar4) {
    lVar8 = 0x18;
  }
  *(int *)(this + 0xc) = iVar3;
  local_40 = &local_38;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar8);
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0xc0);
  if (bVar4) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  }
  uVar7 = *puVar1;
  *(undefined8 *)(this + 0x30) = 0;
  this[0x20] = (LinearScanAllocator)0x0;
  *(Zone **)(this + 0x38) = param_4;
  *(undefined8 *)(this + 0x40) = 0;
  *(LinearScanAllocator **)(this + 0x28) = this + 0x30;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Zone **)(this + 0x60) = param_4;
  *(undefined8 *)(this + 0x18) = uVar7;
  uStack_28 = 0;
  local_38 = (__tree_node *)0x0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(Zone **)(this + 0x80) = param_4;
  local_30 = param_4;
  if (iVar3 != 0) {
    if ((uVar12 >> 0x1a & 0x3f) != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = *(long *)(param_4 + 0x10);
    uVar6 = uVar12 * 0x20;
    if (uVar6 < (ulong)(*(long *)(param_4 + 0x18) - lVar8) ||
        uVar6 - (*(long *)(param_4 + 0x18) - lVar8) == 0) {
      *(ulong *)(param_4 + 0x10) = lVar8 + uVar6;
    }
    else {
      lVar8 = Zone::NewExpand(param_4,uVar6);
    }
    *(long *)(this + 0x68) = lVar8;
    *(long *)(this + 0x70) = lVar8;
    *(ulong *)(this + 0x78) = lVar8 + uVar12 * 0x20;
    do {
      FUN_01667e2c(lVar8,&local_40);
      uVar12 = uVar12 - 1;
      lVar8 = *(long *)(this + 0x70) + 0x20;
      *(long *)(this + 0x70) = lVar8;
    } while (uVar12 != 0);
  }
  std::__ndk1::
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  ::destroy((__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             *)&local_40,local_38);
  lVar8 = *(long *)(this + 0x48);
  *(undefined8 *)(this + 0x88) = 0xffffffffffffffff;
  if ((ulong)(*(long *)(this + 0x58) - lVar8 >> 3) < 8) {
    this_00 = *(Zone **)(this + 0x60);
    lVar9 = *(long *)(this + 0x50);
    lVar5 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar5) < 0x40) {
      lVar5 = Zone::NewExpand(this_00,0x40);
    }
    else {
      *(long *)(this_00 + 0x10) = lVar5 + 0x40;
    }
    puVar2 = *(undefined8 **)(this + 0x48);
    puVar11 = *(undefined8 **)(this + 0x50);
    puVar1 = (undefined8 *)(lVar5 + (lVar9 - lVar8 >> 3) * 8);
    puVar10 = puVar1;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar11;
    }
    *(undefined8 **)(this + 0x48) = puVar10;
    *(undefined8 **)(this + 0x50) = puVar1;
    *(long *)(this + 0x58) = lVar5 + 0x40;
  }
  return;
}

