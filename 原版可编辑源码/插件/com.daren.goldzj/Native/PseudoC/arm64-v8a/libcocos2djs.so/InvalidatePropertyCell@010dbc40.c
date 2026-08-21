
/* v8::internal::JSGlobalObject::InvalidatePropertyCell(v8::internal::Handle<v8::internal::JSGlobalObject>,
   v8::internal::Handle<v8::internal::Name>) */

void v8::internal::JSGlobalObject::InvalidatePropertyCell(ulong *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long local_28;
  
  uVar9 = *param_1 & 0xffffffff00000000;
  uVar8 = uVar9 | *(uint *)(*param_1 - 1);
  if (FLAG_trace_prototype_users != '\0') {
    PrintF("Invalidating prototype map %p \'s cell\n",uVar8);
  }
  uVar3 = *(uint *)(uVar8 + 0x1f);
  if (((uVar3 & 1) != 0) &&
     (uVar8 = uVar9 | uVar3, *(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x99)) {
    *(undefined4 *)(uVar8 + 3) = 2;
  }
  pIVar4 = (Isolate *)(*param_1 & 0xffffffff00000000);
  uVar8 = (ulong)pIVar4 | (ulong)*(uint *)(*param_1 + 3);
  if (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar8;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)((ulong)pIVar4 | 0x95b8),uVar8);
  }
  uVar1 = *(uint *)((long)param_1 + 4);
  uVar8 = *puVar5;
  uVar3 = *(uint *)(*param_2 + 3);
  if ((uVar3 & 1) == 0) {
    uVar3 = uVar3 >> 3;
  }
  else {
    local_28 = *param_2;
    uVar3 = String::ComputeAndSetHash((String *)&local_28);
  }
  uVar1 = *(uint *)(((ulong)uVar1 << 0x20) + 0xa0);
  uVar2 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
  uVar3 = uVar2 & uVar3;
  uVar7 = *(uint *)(uVar8 + 7 + (long)(int)(uVar3 * 4 + 0x14));
  if (uVar7 != uVar1) {
    iVar6 = 1;
    do {
      if (*(int *)((uVar8 & 0xffffffff00000000 | (ulong)uVar7) + 3) == (int)*param_2) {
        PropertyCell::InvalidateEntry((ulong)*(uint *)((long)param_1 + 4) << 0x20,puVar5,uVar3);
        return;
      }
      uVar3 = uVar3 + iVar6 & uVar2;
      uVar7 = *(uint *)(uVar8 + 7 + (long)(int)(uVar3 * 4 + 0x14));
      iVar6 = iVar6 + 1;
    } while (uVar7 != uVar1);
  }
  return;
}

