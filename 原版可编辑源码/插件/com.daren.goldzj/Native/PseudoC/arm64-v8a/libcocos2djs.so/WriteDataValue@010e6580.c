
/* v8::internal::LookupIterator::WriteDataValue(v8::internal::Handle<v8::internal::Object>, bool) */

void v8::internal::LookupIterator::WriteDataValue(long param_1,ulong *param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_38;
  
  local_38 = **(ulong **)(param_1 + 0x38);
  if ((*(ulong *)(param_1 + 0x48) < 0xffffffff) ||
     ((*(ulong *)(param_1 + 0x48) != 0xffffffffffffffff &&
      ((byte)((*(byte *)((local_38 & 0xffffffff00000000 | (ulong)*(uint *)(local_38 - 1)) + 10) >> 3
              ) - 0x11) < 0xb)))) {
    plVar4 = *(long **)(ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((*(ulong *)(param_1 + 0x18) | 10) +
                                        (ulong)*(uint *)(local_38 - 1)) & 0xf8));
                    /* WARNING: Could not recover jumptable at 0x010e6634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x80))
              (plVar4,*(ulong **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),*param_2);
    return;
  }
  uVar3 = *(ulong *)(param_1 + 0x18);
  if ((*(uint *)((uVar3 | 0xb) + (ulong)*(uint *)(local_38 - 1)) >> 0x15 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) >> 1 & 1) != 0) {
      return;
    }
    JSObject::WriteToField
              ((JSObject *)&local_38,*(undefined8 *)(param_1 + 0x50),*(uint *)(param_1 + 0x10),
               *param_2);
    return;
  }
  uVar6 = *(uint *)(local_38 + 3) + uVar3;
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(local_38 - 1)) == 0xaa) {
    uVar5 = *param_2;
    uVar6 = *(uint *)(uVar6 + (long)(*(int *)(param_1 + 0x50) * 4 + 0x14) + 7) + uVar3;
    *(int *)(uVar6 + 0xb) = (int)uVar5;
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar1 = uVar6 + 0xb;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar3 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar6 & 0xfffffffffffc0000) + 8);
  }
  else {
    if ((uVar6 & 1) == 0) {
      uVar6 = *(ulong *)(uVar3 + 0x410);
    }
    uVar5 = *param_2;
    lVar1 = uVar6 + (*(long *)(param_1 + 0x50) * 0xc00000000 + 0x1800000000 >> 0x20);
    *(int *)(lVar1 + 7) = (int)uVar5;
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar3 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar6 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar2 & 0x18) != 0) {
    return;
  }
  Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
  return;
}

