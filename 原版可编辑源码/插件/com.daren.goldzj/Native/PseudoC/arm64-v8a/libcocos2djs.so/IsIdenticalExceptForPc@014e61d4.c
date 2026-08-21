
/* v8::internal::SafepointTableBuilder::IsIdenticalExceptForPc(v8::internal::SafepointTableBuilder::DeoptimizationInfo
   const&, v8::internal::SafepointTableBuilder::DeoptimizationInfo const&) const */

undefined8 __thiscall
v8::internal::SafepointTableBuilder::IsIdenticalExceptForPc
          (SafepointTableBuilder *this,DeoptimizationInfo *param_1,DeoptimizationInfo *param_2)

{
  long lVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar1 + 8) != *(long *)(*(long *)(param_2 + 0x10) + 8)) {
    return 0;
  }
  puVar2 = *(uint **)(lVar1 + 0x10);
  puVar3 = *(uint **)(lVar1 + 0x18);
  if (puVar3 == (uint *)0x0) {
    uVar4 = 0;
    puVar3 = puVar2;
  }
  else {
    uVar4 = (ulong)puVar3[1];
    if (puVar3[1] == *puVar3) {
      puVar3 = *(uint **)(puVar3 + 2);
      uVar4 = 0;
    }
    if (uVar4 != 0) goto LAB_014e6234;
  }
  if (puVar3 == puVar2) {
    return 1;
  }
LAB_014e6234:
  puVar5 = *(uint **)(*(long *)(param_2 + 0x10) + 0x10);
  uVar6 = 0;
  uVar7 = 0;
  do {
    if (puVar2[uVar6 + 6] != puVar5[uVar7 + 6]) {
      return 0;
    }
    uVar6 = uVar6 + 1;
    if (*puVar2 <= uVar6) {
      puVar2 = *(uint **)(puVar2 + 2);
      uVar6 = 0;
    }
    uVar7 = uVar7 + 1;
    if (*puVar5 <= uVar7) {
      puVar5 = *(uint **)(puVar5 + 2);
      uVar7 = 0;
    }
  } while ((puVar3 != puVar2) || (uVar4 != uVar6));
  return 1;
}

