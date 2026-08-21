
/* v8::UnboundScript::GetId() */

int __thiscall v8::UnboundScript::GetId(UnboundScript *this)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  Logger *this_00;
  Isolate *pIVar6;
  ulong *puVar7;
  ulong *puVar8;
  Isolate *pIVar9;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  pIVar4 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
  if (internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(pIVar4 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,1000);
  }
  this_00 = *(Logger **)(pIVar4 + 0x9558);
  uVar2 = internal::Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::UnboundScript::GetId");
  }
  puVar8 = *(ulong **)(pIVar4 + 0x95a0);
  pIVar6 = pIVar4 + 0x95a8;
  puVar7 = *(ulong **)pIVar6;
  pIVar9 = pIVar4 + 0x95b0;
  *(int *)pIVar9 = *(int *)pIVar9 + 1;
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  uVar5 = uVar2 | *(uint *)(*(ulong *)this + 0xf);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x5b) {
    uVar5 = uVar2 | *(uint *)(uVar5 + 0xb);
  }
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = puVar8;
    if (puVar7 == puVar8) {
      puVar3 = (ulong *)internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  iVar1 = *(int *)(uVar5 + 0x1f);
  *(ulong **)(pIVar4 + 0x95a0) = puVar8;
  *(int *)pIVar9 = *(int *)pIVar9 + -1;
  if (*(ulong **)pIVar6 != puVar7) {
    *(ulong **)pIVar6 = puVar7;
    internal::HandleScope::DeleteExtensions(pIVar4);
  }
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return iVar1 >> 1;
}

