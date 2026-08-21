
/* v8::internal::Heap::MarkCompactPrologue() */

void __thiscall v8::internal::Heap::MarkCompactPrologue(Heap *this)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  byte **local_a0;
  byte *local_98;
  undefined8 local_90;
  undefined8 local_88;
  Scope aSStack_80 [64];
  long *local_40;
  long *local_38;
  
  GCTracer::Scope::Scope(aSStack_80,*(undefined8 *)(this + 0x7f8),0x16);
  if (DAT_01d3f0b0 == (byte *)0x0) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f0b0 = (byte *)(**(code **)(*plVar4 + 0x10))(plVar4,"disabled-by-default-v8.gc");
  }
  pbVar3 = DAT_01d3f0b0;
  local_a0 = (byte **)0x0;
  if ((*DAT_01d3f0b0 & 5) != 0) {
    uVar5 = GCTracer::Scope::Name(0x16);
    local_40 = (long *)0x0;
    local_38 = (long *)0x0;
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4,0x58,pbVar3,uVar5,0,0,0,0,0,0,0,&local_40,0);
    plVar4 = local_38;
    local_38 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    plVar4 = local_40;
    local_40 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    local_90 = GCTracer::Scope::Name(0x16);
    local_a0 = &local_98;
    local_98 = pbVar3;
    local_88 = uVar5;
  }
  DescriptorLookupCache::Clear(*(DescriptorLookupCache **)(*(long *)(this + 0x30) + 0x9598));
  RegExpResultsCache::Clear(*(undefined8 *)(this + -0x7930));
  RegExpResultsCache::Clear(*(undefined8 *)(this + -0x7928));
  CompilationCache::MarkCompactPrologue(*(CompilationCache **)(*(long *)(this + 0x30) + 0x9518));
  uVar7 = *(ulong *)(this + -31000);
  uVar2 = *(uint *)(uVar7 + 3);
  if ((1 < (int)uVar2) &&
     (*(undefined4 *)(uVar7 + 7) = *(undefined4 *)((uVar7 & 0xffffffff00000000) + 0xa0), 3 < uVar2))
  {
    iVar6 = 4;
    uVar7 = 1;
    do {
      uVar7 = uVar7 + 1;
      lVar1 = (long)iVar6;
      iVar6 = iVar6 + 4;
      *(undefined4 *)(*(ulong *)(this + -31000) + lVar1 + 7) =
           *(undefined4 *)((*(ulong *)(this + -31000) & 0xffffffff00000000) + 0xa0);
    } while (uVar7 < uVar2 >> 1);
  }
  if ((local_a0 != (byte **)0x0) && (*local_98 != 0)) {
    plVar4 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar4 + 0x28))(plVar4,local_98,local_90,local_88);
  }
  GCTracer::Scope::~Scope(aSStack_80);
  return;
}

