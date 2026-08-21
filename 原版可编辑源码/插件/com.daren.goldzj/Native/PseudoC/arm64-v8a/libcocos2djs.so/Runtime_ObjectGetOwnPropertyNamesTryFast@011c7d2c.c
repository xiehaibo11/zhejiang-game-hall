
/* v8::internal::Runtime_ObjectGetOwnPropertyNamesTryFast(int, unsigned long*,
   v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_ObjectGetOwnPropertyNamesTryFast(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  Isolate *pIVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong local_38;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar8 = FUN_011c7ea8(param_1,param_2,param_3);
    return uVar8;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar9 = *param_2;
  if (((uVar9 & 1) == 0) ||
     (*(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)) < 0xa9)) {
    param_2 = (ulong *)Object::ToObjectImpl(param_3,param_2,0);
  }
  if (param_2 != (ulong *)0x0) {
    uVar9 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar9;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar9);
      uVar9 = *puVar6;
    }
    uVar4 = *(uint *)(uVar9 + 0xb) >> 10 & 0x3ff;
    if (uVar4 == 0) {
LAB_011c7e1c:
      uVar8 = 0x10;
    }
    else {
      local_38 = uVar9;
      uVar5 = Map::NumberOfEnumerableProperties((Map *)&local_38);
      if (uVar5 != uVar4) goto LAB_011c7e1c;
      uVar8 = 0x12;
    }
    pIVar7 = (Isolate *)KeyAccumulator::GetKeys(param_2,0,uVar8,0,0,0);
    if (pIVar7 != (Isolate *)0x0) goto LAB_011c7e40;
  }
  pIVar7 = param_3 + 0x180;
LAB_011c7e40:
  uVar8 = *(undefined8 *)pIVar7;
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar8;
}

