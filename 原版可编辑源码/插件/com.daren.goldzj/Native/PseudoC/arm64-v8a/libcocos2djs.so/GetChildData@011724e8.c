
/* v8::internal::OnHeapConsumedPreparseData::GetChildData(v8::internal::Zone*, int) */

void __thiscall
v8::internal::OnHeapConsumedPreparseData::GetChildData
          (OnHeapConsumedPreparseData *this,Zone *param_1,int param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  pIVar1 = *(Isolate **)(this + 0x18);
  uVar4 = **(ulong **)(this + 0x20);
  uVar4 = uVar4 & 0xffffffff00000000 |
          (ulong)*(uint *)(uVar4 + (long)(int)((*(int *)(uVar4 + 3) + 0xfU & 0xfffffffc) +
                                              param_2 * 4) + -1);
  if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(pIVar1 + 0x95a0);
    if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend(pIVar1);
    }
    *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < 0x10) {
    puVar3 = (undefined8 *)Zone::NewExpand(param_1,0x10);
  }
  else {
    *(undefined8 **)(param_1 + 0x10) = puVar3 + 2;
  }
  *puVar3 = &PTR_Serialize_01cb5470;
  puVar3[1] = puVar2;
  return;
}

