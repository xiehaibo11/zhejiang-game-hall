
/* v8::internal::GetStackTraceLimit(v8::internal::Isolate*, int*) */

undefined8 v8::internal::GetStackTraceLimit(Isolate *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  uint local_98;
  int local_94;
  undefined8 local_8c;
  ulong local_80;
  Isolate *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 0x35f);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  uVar6 = *(ulong *)(param_1 + 0x9e8);
  local_80 = uVar5 & 0xffffffff00000000;
  local_78 = param_1 + 0x9e8;
  local_98 = 2;
  if (*(short *)((local_80 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x40) {
    local_98 = (*(int *)(uVar6 + 7) << 1 ^ 0xffffffffU) & 2;
  }
  local_8c = 0xc000000000;
  if ((*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) & 0xffe0) == 0x20
     ) {
    local_78 = (Isolate *)StringTable::LookupString();
  }
  uStack_70 = 0;
  uStack_60 = 0;
  local_48 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_68 = puVar3;
  local_58 = puVar3;
  LookupIterator::Start<false>((LookupIterator *)&local_98);
  if (local_94 == 4) {
    uVar5 = *(ulong *)(local_80 + 0xa0);
    if ((uVar5 & 1) == 0) goto LAB_00f4c960;
LAB_00f4c930:
    if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0x42) {
      return 0;
    }
    dVar7 = *(double *)(uVar5 + 3);
  }
  else {
    puVar3 = (ulong *)JSReceiver::GetDataProperty((LookupIterator *)&local_98);
    uVar5 = *puVar3;
    if ((uVar5 & 1) != 0) goto LAB_00f4c930;
LAB_00f4c960:
    dVar7 = (double)((int)uVar5 >> 1);
  }
  if (-2147483648.0 <= dVar7) {
    if (2147483647.0 < dVar7) {
      iVar4 = 0x7fffffff;
      goto LAB_00f4c9ac;
    }
    iVar4 = (int)dVar7;
    if (-1 < iVar4) goto LAB_00f4c9ac;
  }
  iVar4 = 0;
LAB_00f4c9ac:
  *param_2 = iVar4;
  if (iVar4 != FLAG_stack_trace_limit) {
    if (*(int *)(param_1 + 0x89c8) == 0) {
      if (*(code **)(param_1 + 0xc658) != (code *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x95a0);
        lVar2 = *(long *)(param_1 + 0x95a8);
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
        (**(code **)(param_1 + 0xc658))(param_1,0x2d);
        *(undefined8 *)(param_1 + 0x95a0) = uVar1;
        *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
        if (*(long *)(param_1 + 0x95a8) != lVar2) {
          *(long *)(param_1 + 0x95a8) = lVar2;
          HandleScope::DeleteExtensions(param_1);
        }
      }
    }
    else {
      Heap::IncrementDeferredCount((Heap *)(param_1 + 0x8850),0x2d);
    }
  }
  return 1;
}

