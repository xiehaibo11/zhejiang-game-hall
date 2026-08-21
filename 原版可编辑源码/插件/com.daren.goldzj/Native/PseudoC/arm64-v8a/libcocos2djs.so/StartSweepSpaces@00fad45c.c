
/* v8::internal::MarkCompactCollector::StartSweepSpaces() */

void __thiscall v8::internal::MarkCompactCollector::StartSweepSpaces(MarkCompactCollector *this)

{
  byte *pbVar1;
  long *plVar2;
  undefined8 uVar3;
  long *local_d0;
  long *local_c8;
  byte **local_90;
  byte *local_88;
  undefined8 local_80;
  undefined8 local_78;
  Scope aSStack_70 [64];
  
  GCTracer::Scope::Scope(aSStack_70,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x17);
  if (DAT_01d3f2a0 == (byte *)0x0) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f2a0 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,"disabled-by-default-v8.gc");
  }
  pbVar1 = DAT_01d3f2a0;
  local_90 = (byte **)0x0;
  if ((*DAT_01d3f2a0 & 5) != 0) {
    uVar3 = GCTracer::Scope::Name(0x17);
    local_d0 = (long *)0x0;
    local_c8 = (long *)0x0;
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,0x58,pbVar1,uVar3,0,0,0,0,0,0,0,&local_d0,0);
    plVar2 = local_c8;
    local_c8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = local_d0;
    local_d0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    local_80 = GCTracer::Scope::Name(0x17);
    local_90 = &local_88;
    local_88 = pbVar1;
    local_78 = uVar3;
  }
  GCTracer::Scope::Scope((Scope *)&local_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x3e);
  StartSweepSpace(this,*(PagedSpace **)(*(long *)(this + 8) + 0xf0));
  GCTracer::Scope::~Scope((Scope *)&local_d0);
  GCTracer::Scope::Scope((Scope *)&local_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x3c);
  StartSweepSpace(this,*(PagedSpace **)(*(long *)(this + 8) + 0xf8));
  GCTracer::Scope::~Scope((Scope *)&local_d0);
  GCTracer::Scope::Scope((Scope *)&local_d0,*(undefined8 *)(*(long *)(this + 8) + 0x7f8),0x3d);
  StartSweepSpace(this,*(PagedSpace **)(*(long *)(this + 8) + 0x100));
  GCTracer::Scope::~Scope((Scope *)&local_d0);
  Sweeper::StartSweeping(*(Sweeper **)(this + 0x26f8));
  if ((local_90 != (byte **)0x0) && (*local_88 != 0)) {
    plVar2 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar2 + 0x28))(plVar2,local_88,local_80,local_78);
  }
  GCTracer::Scope::~Scope(aSStack_70);
  return;
}

