
/* v8::internal::compiler::Peeling::Insert(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::Peeling::Insert(Peeling *this,Node *param_1,Node *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  *(int *)(param_1 + 0x10) =
       *(int *)this + (int)((ulong)((*(long **)(this + 8))[1] - **(long **)(this + 8)) >> 3) + 1;
  plVar8 = *(long **)(this + 8);
  puVar5 = (undefined8 *)plVar8[1];
  if (puVar5 == (undefined8 *)plVar8[2]) {
    lVar7 = (long)puVar5 - *plVar8 >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1c != 0) goto LAB_01774264;
    lVar3 = plVar8[2] - *plVar8;
    uVar9 = lVar3 >> 2;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      pZVar4 = (Zone *)plVar8[3];
      uVar9 = uVar1 * 8;
      lVar3 = *(long *)(pZVar4 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar3) ||
          uVar9 - (*(long *)(pZVar4 + 0x18) - lVar3) == 0) {
        *(ulong *)(pZVar4 + 0x10) = lVar3 + uVar9;
      }
      else {
        lVar3 = Zone::NewExpand(pZVar4,uVar9);
      }
    }
    puVar5 = (undefined8 *)(lVar3 + lVar7 * 8);
    puVar6 = puVar5 + 1;
    *puVar5 = param_1;
    puVar2 = (undefined8 *)*plVar8;
    puVar10 = (undefined8 *)plVar8[1];
    while (puVar10 != puVar2) {
      puVar10 = puVar10 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar10;
    }
    *plVar8 = (long)puVar5;
    plVar8[1] = (long)puVar6;
    plVar8[2] = lVar3 + uVar1 * 8;
  }
  else {
    *puVar5 = param_1;
    plVar8[1] = plVar8[1] + 8;
  }
  plVar8 = *(long **)(this + 8);
  puVar5 = (undefined8 *)plVar8[1];
  if (puVar5 == (undefined8 *)plVar8[2]) {
    lVar7 = (long)puVar5 - *plVar8 >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1c != 0) {
LAB_01774264:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = plVar8[2] - *plVar8;
    uVar9 = lVar3 >> 2;
    if (uVar1 <= uVar9) {
      uVar1 = uVar9;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      pZVar4 = (Zone *)plVar8[3];
      uVar9 = uVar1 * 8;
      lVar3 = *(long *)(pZVar4 + 0x10);
      if (uVar9 < (ulong)(*(long *)(pZVar4 + 0x18) - lVar3) ||
          uVar9 - (*(long *)(pZVar4 + 0x18) - lVar3) == 0) {
        *(ulong *)(pZVar4 + 0x10) = lVar3 + uVar9;
      }
      else {
        lVar3 = Zone::NewExpand(pZVar4,uVar9);
      }
    }
    puVar5 = (undefined8 *)(lVar3 + lVar7 * 8);
    puVar6 = puVar5 + 1;
    *puVar5 = param_2;
    puVar2 = (undefined8 *)*plVar8;
    puVar10 = (undefined8 *)plVar8[1];
    while (puVar10 != puVar2) {
      puVar10 = puVar10 + -1;
      puVar5 = puVar5 + -1;
      *puVar5 = *puVar10;
    }
    *plVar8 = (long)puVar5;
    plVar8[1] = (long)puVar6;
    plVar8[2] = lVar3 + uVar1 * 8;
  }
  else {
    *puVar5 = param_2;
    plVar8[1] = plVar8[1] + 8;
  }
  return;
}

