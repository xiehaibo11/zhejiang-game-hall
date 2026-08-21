
/* v8::internal::ScopeInfo::CreateForWithScope(v8::internal::Isolate*,
   v8::internal::MaybeHandle<v8::internal::ScopeInfo>) */

ulong * v8::internal::ScopeInfo::CreateForWithScope(Factory *param_1,ulong *param_2)

{
  undefined4 uVar1;
  ulong *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = 3;
  if (param_2 != (ulong *)0x0) {
    uVar3 = 4;
  }
  uVar1 = 0x802000e;
  if (param_2 != (ulong *)0x0) {
    uVar1 = 0x882000e;
  }
  puVar2 = (ulong *)Factory::NewScopeInfo(param_1,uVar3,1);
  *(undefined4 *)(*puVar2 + 7) = uVar1;
  *(undefined4 *)(*puVar2 + 0xb) = 0;
  *(undefined4 *)(*puVar2 + 0xf) = 0;
  if (param_2 != (ulong *)0x0) {
    uVar6 = *puVar2;
    uVar5 = *param_2;
    *(int *)(uVar6 + 0x13) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x13,uVar5);
        uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x13,uVar5);
      }
    }
  }
  return puVar2;
}

