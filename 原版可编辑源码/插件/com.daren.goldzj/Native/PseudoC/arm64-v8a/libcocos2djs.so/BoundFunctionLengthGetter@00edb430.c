
/* v8::internal::Accessors::BoundFunctionLengthGetter(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void v8::internal::Accessors::BoundFunctionLengthGetter(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  Isolate *this;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  this = *(Isolate **)(*param_2 + 0x10);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x72);
  }
  uVar1 = *(undefined8 *)(this + 0x95a0);
  lVar2 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  uVar3 = JSBoundFunction::GetLength(this,*param_2 + 8);
  if ((uVar3 & 0xff) == 0) {
    Isolate::OptionalRescheduleException(this,false);
    goto LAB_00edb4cc;
  }
  uVar3 = ((long)uVar3 >> 0x20) << 1;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(this + 0x95a0);
    if (puVar4 == *(ulong **)(this + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(this);
    }
    *(ulong **)(this + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
    lVar5 = *param_2;
    if (puVar4 == (ulong *)0x0) goto LAB_00edb53c;
LAB_00edb4c4:
    uVar3 = *puVar4;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar3);
    lVar5 = *param_2;
    if (puVar4 != (ulong *)0x0) goto LAB_00edb4c4;
LAB_00edb53c:
    uVar3 = *(ulong *)(lVar5 + 0x18);
  }
  *(ulong *)(lVar5 + 0x20) = uVar3;
LAB_00edb4cc:
  *(undefined8 *)(this + 0x95a0) = uVar1;
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
  if (*(long *)(this + 0x95a8) != lVar2) {
    *(long *)(this + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(this);
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

