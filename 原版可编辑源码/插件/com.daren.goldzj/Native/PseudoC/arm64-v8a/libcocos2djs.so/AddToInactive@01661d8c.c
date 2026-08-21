
/* v8::internal::compiler::LinearScanAllocator::AddToInactive(v8::internal::compiler::LiveRange*) */

void __thiscall
v8::internal::compiler::LinearScanAllocator::AddToInactive
          (LinearScanAllocator *this,LiveRange *param_1)

{
  long *plVar1;
  LinearScanAllocator *pLVar2;
  int iVar3;
  undefined8 *puVar4;
  Zone *this_00;
  __tree_node_base *p_Var5;
  LiveRange *pLVar6;
  int *piVar7;
  undefined8 *puVar9;
  undefined8 *puVar10;
  LiveRange *pLVar11;
  long lVar12;
  ulong uVar13;
  int local_34;
  LiveRange *pLVar8;
  
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Add live range %d:%d to inactive\n",(ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x5c),
           (ulong)*(uint *)param_1);
  }
  pLVar6 = param_1 + 0x10;
  iVar3 = **(int **)pLVar6;
  pLVar11 = param_1 + 0x30;
  pLVar8 = pLVar6;
  if ((*(int **)pLVar11 != (int *)0x0) && (pLVar8 = pLVar11, iVar3 < **(int **)pLVar11)) {
    *(undefined8 *)pLVar11 = 0;
    pLVar8 = pLVar6;
  }
  do {
    piVar7 = *(int **)pLVar8;
    pLVar8 = (LiveRange *)(piVar7 + 2);
    local_34 = *piVar7;
  } while (local_34 < iVar3);
  *(int *)(param_1 + 0x58) = local_34;
  pLVar2 = (LinearScanAllocator *)&local_34;
  if (*(int *)(this + 0x8c) <= local_34) {
    pLVar2 = this + 0x8c;
  }
  *(int *)(this + 0x8c) = *(int *)pLVar2;
  lVar12 = *(long *)(this + 0x68);
  uVar13 = (ulong)(*(uint *)(param_1 + 4) >> 7) & 0x3f;
  plVar1 = (long *)(lVar12 + uVar13 * 0x20);
  this_00 = (Zone *)plVar1[2];
  p_Var5 = *(__tree_node_base **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var5) < 0x28) {
    p_Var5 = (__tree_node_base *)Zone::NewExpand(this_00,0x28);
  }
  else {
    *(__tree_node_base **)(this_00 + 0x10) = p_Var5 + 0x28;
  }
  *(LiveRange **)(p_Var5 + 0x20) = param_1;
  puVar9 = (undefined8 *)(lVar12 + uVar13 * 0x20 + 8);
  puVar10 = puVar9;
  if ((undefined8 *)*puVar9 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*puVar9;
    do {
      while (puVar9 = puVar4, *(int *)(param_1 + 0x58) < *(int *)(puVar9[4] + 0x58)) {
        puVar4 = (undefined8 *)*puVar9;
        puVar10 = puVar9;
        if ((undefined8 *)*puVar9 == (undefined8 *)0x0) goto LAB_01661eac;
      }
      puVar4 = (undefined8 *)puVar9[1];
    } while ((undefined8 *)puVar9[1] != (undefined8 *)0x0);
    puVar10 = puVar9 + 1;
  }
LAB_01661eac:
  *(undefined8 *)p_Var5 = 0;
  *(undefined8 *)(p_Var5 + 8) = 0;
  *(undefined8 **)(p_Var5 + 0x10) = puVar9;
  *puVar10 = p_Var5;
  if (*(long *)*plVar1 != 0) {
    *plVar1 = *(long *)*plVar1;
    p_Var5 = (__tree_node_base *)*puVar10;
  }
  lVar12 = lVar12 + uVar13 * 0x20;
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(lVar12 + 8),p_Var5);
  *(long *)(lVar12 + 0x18) = *(long *)(lVar12 + 0x18) + 1;
  return;
}

