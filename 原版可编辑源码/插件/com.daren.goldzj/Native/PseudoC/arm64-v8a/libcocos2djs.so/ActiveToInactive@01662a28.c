
/* v8::internal::compiler::LinearScanAllocator::ActiveToInactive(std::__ndk1::__wrap_iter<v8::internal::compiler::LiveRange**>,
   v8::internal::compiler::LifetimePosition) */

undefined8 * __thiscall
v8::internal::compiler::LinearScanAllocator::ActiveToInactive
          (LinearScanAllocator *this,undefined8 *param_2,int param_3)

{
  long *plVar1;
  LinearScanAllocator *pLVar2;
  size_t __n;
  undefined8 *puVar3;
  Zone *this_00;
  __tree_node_base *p_Var4;
  uint *puVar5;
  LinearScanAllocator *pLVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint local_44;
  uint *puVar6;
  
  puVar11 = (uint *)*param_2;
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Moving live range %d:%d from active to inactive\n",
           (ulong)*(uint *)(*(long *)(puVar11 + 8) + 0x5c),(ulong)*puVar11);
  }
  puVar6 = puVar11 + 0xc;
  if (*(int **)puVar6 != (int *)0x0) {
    if (**(int **)puVar6 <= param_3) goto LAB_01662a94;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
  }
  puVar6 = puVar11 + 4;
LAB_01662a94:
  do {
    puVar5 = *(uint **)puVar6;
    puVar6 = puVar5 + 2;
    local_44 = *puVar5;
  } while ((int)local_44 < param_3);
  puVar11[0x16] = local_44;
  pLVar7 = this + 0x8c;
  pLVar2 = (LinearScanAllocator *)&local_44;
  if ((int)*(uint *)pLVar7 <= (int)local_44) {
    pLVar2 = pLVar7;
  }
  lVar10 = *(long *)(this + 0x68);
  *(uint *)pLVar7 = *(uint *)pLVar2;
  uVar12 = (ulong)(puVar11[1] >> 7) & 0x3f;
  plVar1 = (long *)(lVar10 + uVar12 * 0x20);
  this_00 = (Zone *)plVar1[2];
  p_Var4 = *(__tree_node_base **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)p_Var4) < 0x28) {
    p_Var4 = (__tree_node_base *)Zone::NewExpand(this_00,0x28);
  }
  else {
    *(__tree_node_base **)(this_00 + 0x10) = p_Var4 + 0x28;
  }
  *(uint **)(p_Var4 + 0x20) = puVar11;
  puVar8 = (undefined8 *)(lVar10 + uVar12 * 0x20 + 8);
  puVar9 = puVar8;
  if ((undefined8 *)*puVar8 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar8;
    do {
      while (puVar8 = puVar3, (int)puVar11[0x16] < *(int *)(puVar8[4] + 0x58)) {
        puVar3 = (undefined8 *)*puVar8;
        puVar9 = puVar8;
        if ((undefined8 *)*puVar8 == (undefined8 *)0x0) goto LAB_01662b44;
      }
      puVar3 = (undefined8 *)puVar8[1];
    } while ((undefined8 *)puVar8[1] != (undefined8 *)0x0);
    puVar9 = puVar8 + 1;
  }
LAB_01662b44:
  *(undefined8 *)p_Var4 = 0;
  *(undefined8 *)(p_Var4 + 8) = 0;
  *(undefined8 **)(p_Var4 + 0x10) = puVar8;
  *puVar9 = p_Var4;
  if (*(long *)*plVar1 != 0) {
    *plVar1 = *(long *)*plVar1;
    p_Var4 = (__tree_node_base *)*puVar9;
  }
  lVar10 = lVar10 + uVar12 * 0x20;
  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(lVar10 + 8),p_Var4);
  *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
  __n = *(long *)(this + 0x50) - (long)(param_2 + 1);
  if (__n != 0) {
    memmove(param_2,param_2 + 1,__n);
  }
  *(undefined8 **)(this + 0x50) = param_2 + ((long)__n >> 3);
  return param_2;
}

