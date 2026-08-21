
undefined8 FUN_014ab580(Isolate *param_1,Arguments *param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  
  if (*(int *)(*(long *)(param_1 + 0xeb0) + 0xb) != 2) {
    return 0;
  }
  uVar4 = *(int *)param_2 - 4;
  if ((int)uVar4 < 1) {
    uVar12 = 0;
  }
  else {
    uVar14 = 0;
    uVar12 = 0;
    pIVar1 = param_1 + 0x95a0;
    do {
      uVar13 = *(ulong *)(*(long *)(param_2 + 8) - (ulong)(uint)((int)uVar14 << 3));
      if ((uVar13 & 1) == 0) {
        return 0;
      }
      uVar16 = uVar13 & 0xffffffff00000000;
      if (*(short *)((uVar16 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x423) {
        return 0;
      }
      puVar15 = (uint *)(uVar13 - 1);
      if (*(ushort *)((uVar16 | *puVar15) + 7) < 0x412) {
        return 0;
      }
      plVar5 = *(long **)(v8::internal::ElementsAccessor::elements_accessors_ +
                         ((ulong)*(byte *)((uVar16 | 10) + (ulong)*(uint *)(uVar13 - 1)) & 0xf8));
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5,uVar13);
      if ((uVar6 & 1) != 0) {
        return 0;
      }
      uVar2 = *(uint *)((uVar16 | *puVar15) + 0xf);
      if (uVar2 != *(uint *)(param_1 + 0xb0)) {
        uVar6 = uVar16 | uVar2;
        do {
          uVar11 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 - 1);
          if (*(ushort *)(uVar11 + 7) < 0x412) {
            return 0;
          }
          if ((*(int *)(uVar6 + 7) != *(int *)(param_1 + 0x168)) &&
             (*(int *)(uVar6 + 7) != *(int *)(param_1 + 1000))) {
            return 0;
          }
          uVar2 = *(uint *)(uVar11 + 0xf);
          uVar6 = uVar6 & 0xffffffff00000000 | (ulong)uVar2;
        } while (uVar2 != *(uint *)(param_1 + 0xb0));
      }
      if (0x2f < *(byte *)((uVar16 | 10) + (ulong)*puVar15)) {
        return 0;
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar7 = *(ulong **)pIVar1;
        if (puVar7 == *(ulong **)(param_1 + 0x95a8)) {
          puVar7 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar7 + 1;
        *puVar7 = uVar13;
      }
      else {
        puVar7 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
        uVar16 = *puVar7 & 0xffffffff00000000;
        puVar15 = (uint *)(*puVar7 - 1);
      }
      uVar2 = *puVar15;
      iVar3 = *(int *)((uVar16 | uVar2) + 0xf);
      uVar13 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
      uVar13 = uVar13 | *(uint *)((uVar13 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar8 = *(ulong **)pIVar1;
        if (puVar8 == *(ulong **)(param_1 + 0x95a8)) {
          puVar8 = (ulong *)v8::internal::HandleScope::Extend(param_1);
        }
        *(ulong **)pIVar1 = puVar8 + 1;
        *puVar8 = uVar13;
      }
      else {
        puVar8 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar13);
        uVar13 = *puVar8;
      }
      if (iVar3 != *(int *)(uVar13 + 0xe7)) {
        return 0;
      }
      if ((*(uint *)((uVar16 | uVar2) + 0xb) & 0xffc00) != 0x400) {
        return 0;
      }
      uVar12 = uVar12 + (*(int *)(*puVar7 + 0xb) >> 1);
      if (0x3fffffe < (int)uVar12) {
        puVar10 = (undefined8 *)v8::internal::Factory::NewRangeError((Factory *)param_1,0xbe,0,0,0);
        v8::internal::Isolate::Throw(param_1,*puVar10,0);
        return 0;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar4);
  }
  uVar9 = v8::internal::ElementsAccessor::Concat(param_1,param_2,uVar4,uVar12);
  return uVar9;
}

