
/* v8::internal::compiler::LinearScanAllocator::InactiveToActive(std::__ndk1::__tree_const_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>,
   v8::internal::compiler::LifetimePosition) */

long * __thiscall
v8::internal::compiler::LinearScanAllocator::InactiveToActive
          (LinearScanAllocator *this,__tree_node_base *param_2,int param_3)

{
  LinearScanAllocator *pLVar1;
  undefined8 *puVar2;
  long *plVar3;
  Zone *this_00;
  undefined8 *puVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  __tree_node_base *p_Var9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  int local_34;
  
  puVar4 = *(undefined8 **)(this + 0x50);
  puVar14 = *(uint **)(param_2 + 0x20);
  if (puVar4 == *(undefined8 **)(this + 0x58)) {
    lVar6 = (long)puVar4 - *(long *)(this + 0x48) >> 3;
    uVar8 = lVar6 + 1;
    if (uVar8 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar12 = (long)*(undefined8 **)(this + 0x58) - *(long *)(this + 0x48);
    uVar10 = lVar12 >> 2;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (0x7fffffe < (ulong)(lVar12 >> 3)) {
      uVar8 = 0xfffffff;
    }
    if (uVar8 == 0) {
      lVar12 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x60);
      uVar10 = uVar8 * 8;
      lVar12 = *(long *)(this_00 + 0x10);
      if (uVar10 < (ulong)(*(long *)(this_00 + 0x18) - lVar12) ||
          uVar10 - (*(long *)(this_00 + 0x18) - lVar12) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar12 + uVar10;
      }
      else {
        lVar12 = Zone::NewExpand(this_00,uVar10);
      }
    }
    puVar4 = (undefined8 *)(lVar12 + lVar6 * 8);
    puVar7 = puVar4 + 1;
    *puVar4 = puVar14;
    puVar2 = *(undefined8 **)(this + 0x48);
    puVar11 = *(undefined8 **)(this + 0x50);
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar4 = puVar4 + -1;
      *puVar4 = *puVar11;
    }
    *(undefined8 **)(this + 0x48) = puVar4;
    *(undefined8 **)(this + 0x50) = puVar7;
    *(ulong *)(this + 0x58) = lVar12 + uVar8 * 8;
  }
  else {
    *puVar4 = puVar14;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
  }
  if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
    PrintF("Moving live range %d:%d from inactive to active\n",
           (ulong)*(uint *)(*(long *)(puVar14 + 8) + 0x5c),(ulong)*puVar14);
  }
  puVar5 = puVar14 + 0xc;
  if (*(int **)puVar5 != (int *)0x0) {
    if (**(int **)puVar5 <= param_3) goto LAB_01662dc0;
    puVar14[0xc] = 0;
    puVar14[0xd] = 0;
  }
  puVar5 = puVar14 + 4;
LAB_01662dc0:
  do {
    local_34 = *(int *)(*(long *)puVar5 + 4);
    puVar5 = (uint *)(*(long *)puVar5 + 8);
  } while (local_34 < param_3);
  pLVar1 = (LinearScanAllocator *)&local_34;
  if (*(int *)(this + 0x88) <= local_34) {
    pLVar1 = this + 0x88;
  }
  *(int *)(this + 0x88) = *(int *)pLVar1;
  lVar6 = *(long *)(this + 0x68);
  uVar8 = (ulong)(puVar14[1] >> 7) & 0x3f;
  puVar4 = (undefined8 *)(lVar6 + uVar8 * 0x20);
  plVar3 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 8) == (long *)0x0) {
    p_Var9 = param_2 + 0x10;
    plVar13 = *(long **)p_Var9;
    if ((__tree_node_base *)*plVar13 != param_2) {
      do {
        lVar12 = *(long *)p_Var9;
        p_Var9 = (__tree_node_base *)(lVar12 + 0x10);
        plVar13 = *(long **)p_Var9;
      } while (*plVar13 != lVar12);
    }
  }
  else {
    do {
      plVar13 = plVar3;
      plVar3 = (long *)*plVar13;
    } while ((long *)*plVar13 != (long *)0x0);
  }
  if ((__tree_node_base *)*puVar4 == param_2) {
    *puVar4 = plVar13;
  }
  lVar6 = lVar6 + uVar8 * 0x20;
  *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + -1;
  std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
            (*(__tree_node_base **)(lVar6 + 8),param_2);
  return plVar13;
}

