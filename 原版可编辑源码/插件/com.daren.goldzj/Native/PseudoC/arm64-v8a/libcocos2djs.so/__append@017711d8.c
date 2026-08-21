
/* std::__ndk1::vector<v8::internal::compiler::LoadElimination::AbstractState const*,
   v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState const*>
   >::__append(unsigned long, v8::internal::compiler::LoadElimination::AbstractState const* const&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
::__append(vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
           *this,ulong param_1,AbstractState **param_2)

{
  ulong uVar1;
  AbstractState *pAVar2;
  bool bVar3;
  Zone *this_00;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  puVar4 = *(undefined8 **)(this + 8);
  if (param_1 <= (ulong)(*(long *)(this + 0x10) - (long)puVar4 >> 3)) {
    do {
      param_1 = param_1 - 1;
      *puVar4 = *param_2;
      puVar4 = (undefined8 *)(*(long *)(this + 8) + 8);
      *(undefined8 **)(this + 8) = puVar4;
    } while (param_1 != 0);
    return;
  }
  lVar11 = (long)puVar4 - *(long *)this >> 3;
  uVar1 = lVar11 + param_1;
  if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = lVar5 >> 2;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x7fffffe < (ulong)(lVar5 >> 3)) {
    uVar1 = 0xfffffff;
  }
  if (uVar1 == 0) {
    lVar5 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar1 * 8;
    lVar5 = *(long *)(this_00 + 0x10);
    if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
        uVar8 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar5 + uVar8;
    }
    else {
      lVar5 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
  }
  puVar4 = (undefined8 *)(lVar5 + lVar11 * 8);
  puVar6 = puVar4;
  if ((3 < param_1) &&
     (((undefined8 *)((long)param_2 + 1U) <= puVar4 ||
      ((AbstractState **)(lVar5 + (lVar11 + param_1) * 8) <= param_2)))) {
    pAVar2 = *param_2;
    uVar9 = param_1 & 0xfffffffffffffffc;
    puVar7 = puVar4 + uVar9;
    puVar6 = (undefined8 *)(lVar5 + lVar11 * 8 + 0x10);
    uVar8 = uVar9;
    do {
      puVar6[-1] = pAVar2;
      puVar6[-2] = pAVar2;
      puVar6[1] = pAVar2;
      *puVar6 = pAVar2;
      uVar8 = uVar8 - 4;
      puVar6 = puVar6 + 4;
    } while (uVar8 != 0);
    bVar3 = uVar9 == param_1;
    puVar6 = puVar7;
    param_1 = param_1 - uVar9;
    if (bVar3) goto LAB_017712cc;
  }
  do {
    param_1 = param_1 - 1;
    puVar7 = puVar6 + 1;
    *puVar6 = *param_2;
    puVar6 = puVar7;
  } while (param_1 != 0);
LAB_017712cc:
  puVar6 = *(undefined8 **)this;
  puVar10 = *(undefined8 **)(this + 8);
  while (puVar10 != puVar6) {
    puVar10 = puVar10 + -1;
    puVar4 = puVar4 + -1;
    *puVar4 = *puVar10;
  }
  *(undefined8 **)this = puVar4;
  *(undefined8 **)(this + 8) = puVar7;
  *(ulong *)(this + 0x10) = lVar5 + uVar1 * 8;
  return;
}

