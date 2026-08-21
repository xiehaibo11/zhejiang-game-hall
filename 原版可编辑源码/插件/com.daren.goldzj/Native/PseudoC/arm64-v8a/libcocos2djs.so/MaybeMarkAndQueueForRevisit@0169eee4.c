
/* v8::internal::compiler::DecompressionOptimizer::MaybeMarkAndQueueForRevisit(v8::internal::compiler::Node*,
   v8::internal::compiler::DecompressionOptimizer::State) */

void __thiscall
v8::internal::compiler::DecompressionOptimizer::MaybeMarkAndQueueForRevisit
          (DecompressionOptimizer *this,long *param_1,byte param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  Operator *pOVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  Zone *this_00;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  uVar3 = *(uint *)(this + 0x18);
  uVar6 = 0;
  if (uVar3 <= *(uint *)(param_1 + 2)) {
    uVar6 = *(uint *)(param_1 + 2) - uVar3;
  }
  if ((uVar6 & 0xff) != 0) {
    if (param_3 != 2) {
      return;
    }
    if ((uVar6 & 0xff) != 1) {
      return;
    }
  }
  *(uint *)(param_1 + 2) = uVar3 + param_3;
  lVar7 = *(long *)(this + 0x28);
  uVar1 = 0;
  if (*(long *)(this + 0x30) - lVar7 != 0) {
    uVar1 = (*(long *)(this + 0x30) - lVar7) * 0x40 - 1;
  }
  uVar11 = *(long *)(this + 0x58) + *(long *)(this + 0x50);
  if (uVar1 == uVar11) {
    std::__ndk1::
    deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                *)(this + 0x20));
    lVar7 = *(long *)(this + 0x28);
    uVar11 = *(long *)(this + 0x50) + *(long *)(this + 0x58);
  }
  *(long **)(*(long *)(lVar7 + (uVar11 >> 6 & 0x3fffffffffffff8)) + (uVar11 & 0x1ff) * 8) = param_1;
  *(long *)(this + 0x58) = *(long *)(this + 0x58) + 1;
  if (param_3 != 1) {
    return;
  }
  pOVar5 = (Operator *)*param_1;
  uVar6 = (uint)*(ushort *)(pOVar5 + 0x10);
  if (*(ushort *)(pOVar5 + 0x10) < 0x1e7) {
    if (uVar6 - 0x1aa < 2) {
LAB_0169efd4:
      cVar4 = LoadRepresentationOf(pOVar5);
      if ((byte)(cVar4 - 7U) < 2) goto LAB_0169f01c;
      pOVar5 = (Operator *)*param_1;
      uVar6 = (uint)*(ushort *)(pOVar5 + 0x10);
    }
    else if (uVar6 == 0x1e) goto LAB_0169f01c;
  }
  else if ((uVar6 == 0x1ef) || (uVar6 == 0x1e7)) goto LAB_0169efd4;
  if (uVar6 == 0x23) {
    cVar4 = PhiRepresentationOf(pOVar5);
    if ((byte)(cVar4 - 7U) < 2) goto LAB_0169f01c;
    uVar6 = (uint)*(ushort *)(*param_1 + 0x10);
  }
  if (uVar6 != 0x1cf) {
    return;
  }
LAB_0169f01c:
  puVar9 = *(undefined8 **)(this + 0x78);
  if (puVar9 == *(undefined8 **)(this + 0x80)) {
    lVar7 = (long)puVar9 - *(long *)(this + 0x70) >> 3;
    uVar1 = lVar7 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar8 = (long)*(undefined8 **)(this + 0x80) - *(long *)(this + 0x70);
    uVar11 = lVar8 >> 2;
    if (uVar1 <= uVar11) {
      uVar1 = uVar11;
    }
    if (0x7fffffe < (ulong)(lVar8 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar8 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x88);
      uVar11 = uVar1 * 8;
      lVar8 = *(long *)(this_00 + 0x10);
      if (uVar11 < (ulong)(*(long *)(this_00 + 0x18) - lVar8) ||
          uVar11 - (*(long *)(this_00 + 0x18) - lVar8) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar8 + uVar11;
      }
      else {
        lVar8 = Zone::NewExpand(this_00,uVar11);
      }
    }
    puVar9 = (undefined8 *)(lVar8 + lVar7 * 8);
    puVar10 = puVar9 + 1;
    *puVar9 = param_1;
    puVar2 = *(undefined8 **)(this + 0x70);
    puVar12 = *(undefined8 **)(this + 0x78);
    while (puVar12 != puVar2) {
      puVar12 = puVar12 + -1;
      puVar9 = puVar9 + -1;
      *puVar9 = *puVar12;
    }
    *(undefined8 **)(this + 0x70) = puVar9;
    *(undefined8 **)(this + 0x78) = puVar10;
    *(ulong *)(this + 0x80) = lVar8 + uVar1 * 8;
  }
  else {
    *puVar9 = param_1;
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 8;
  }
  return;
}

