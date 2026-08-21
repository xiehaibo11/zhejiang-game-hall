
/* v8::internal::JSMessageObject::EnsureSourcePositionsAvailable(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSMessageObject>) */

void v8::internal::JSMessageObject::EnsureSourcePositionsAvailable(Isolate *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_48;
  ulong local_28;
  
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar1 = *(uint *)(*param_2 + 0x1b);
  if (uVar1 != *(uint *)(uVar4 + 0xa0)) {
    uVar4 = uVar4 | uVar1;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(param_1 + 0x95a0);
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
    SharedFunctionInfo::EnsureSourcePositionsAvailable(param_1,puVar3);
    local_48 = *puVar3;
    if ((((*(uint *)(local_48 + 3) & 1) == 0) ||
        (*(short *)((local_48 & 0xffffffff00000000 | 7) +
                   (ulong)*(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 3))
                                   - 1)) != 0x86)) &&
       (((*(uint *)(local_48 + 3) & 1) == 0 ||
        (*(short *)((local_48 & 0xffffffff00000000 | 7) +
                   (ulong)*(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 3))
                                   - 1)) != 0x61)))) {
      local_28 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_48);
    }
    else {
      uVar4 = local_48 & 0xffffffff00000000;
      uVar6 = uVar4 | *(uint *)(local_48 + 0xf);
      uVar5 = uVar4 | 7;
      if ((*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x5b) &&
         (*(short *)(uVar5 + *(uint *)((uVar4 | *(uint *)(uVar6 + 0x13)) - 1)) == 0x86)) {
        local_28 = (ulong)*(uint *)(uVar6 + 0xf);
      }
      else if (((*(uint *)(local_48 + 3) & 1) == 0) ||
              (*(short *)(uVar5 + *(uint *)((uVar4 | *(uint *)(local_48 + 3)) - 1)) != 0x86)) {
        local_28 = (ulong)*(uint *)((local_48 & 0xffffffff00000000 | (ulong)*(uint *)(local_48 + 3))
                                   + 3);
      }
      else {
        local_28 = (ulong)*(uint *)(local_48 + 3);
      }
      local_28 = local_48 & 0xffffffff00000000 | local_28;
    }
    iVar2 = AbstractCode::SourcePosition((AbstractCode *)&local_28,*(int *)(*param_2 + 0x1f) >> 1);
    *(int *)(*param_2 + 0x23) = iVar2 * 2;
    *(int *)(*param_2 + 0x27) = iVar2 * 2 + 2;
    uVar5 = *param_2;
    uVar4 = *(ulong *)(param_1 + 0xa0);
    *(int *)(uVar5 + 0x1b) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar6 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar5,uVar5 + 0x1b,uVar4);
        uVar6 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0x1b,uVar4);
      }
    }
    return;
  }
  return;
}

