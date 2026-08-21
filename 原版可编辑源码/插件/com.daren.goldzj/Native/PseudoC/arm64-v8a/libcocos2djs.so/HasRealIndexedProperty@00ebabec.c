
/* v8::Object::HasRealIndexedProperty(v8::Local<v8::Context>, unsigned int) */

ushort __thiscall v8::Object::HasRealIndexedProperty(Object *this,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  Isolate *pIVar8;
  Logger *this_00;
  Isolate *pIVar9;
  long lVar10;
  undefined8 uVar11;
  Isolate *pIVar12;
  RuntimeCallStats *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  Isolate *local_b0;
  long local_a8;
  char local_a0;
  Isolate local_9e;
  undefined **local_98;
  StackGuard *local_90;
  int local_78;
  long local_68;
  
  pIVar8 = (Isolate *)((ulong)*(uint *)(param_2 + 4) << 0x20);
  if ((*(int *)(pIVar8 + 0x2c20) == *(int *)(pIVar8 + 0xa8)) ||
     (*(int *)(pIVar8 + 0x2c20) != *(int *)(pIVar8 + 0x188))) {
    uVar11 = *(undefined8 *)(pIVar8 + 0x95a0);
    pIVar9 = pIVar8 + 0x95a8;
    lVar10 = *(long *)pIVar9;
    pIVar12 = pIVar8 + 0x95b0;
    *(int *)pIVar12 = *(int *)pIVar12 + 1;
    FUN_00eaadd8(&local_b0,pIVar8,param_2);
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (RuntimeCallStats *)0x0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_e0 = (RuntimeCallStats *)(*(long *)(pIVar8 + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_e0,(ulong)&local_e0 | 8,0x3a2);
    }
    this_00 = *(Logger **)(pIVar8 + 0x9558);
    uVar4 = internal::Logger::is_logging(this_00);
    if ((uVar4 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_00,"v8::Object::HasRealIndexedProperty");
    }
    uVar1 = *(undefined4 *)(pIVar8 + 0x2c60);
    *(undefined4 *)(pIVar8 + 0x2c60) = 5;
    if (*(ushort *)
         ((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1)) < 0xaa)
    {
      uVar3 = 1;
    }
    else {
      uVar3 = internal::JSObject::HasRealElementProperty(this,param_3);
      if ((uVar3 & 0xff) == 0) {
        local_a0 = '\x01';
        *(long *)(local_b0 + 0x2c08) = local_68;
        if (local_68 == 0) {
          bVar2 = *(long *)(local_b0 + 0x2bb8) == 0;
        }
        else {
          bVar2 = false;
        }
        internal::Isolate::OptionalRescheduleException(local_b0,bVar2);
        uVar3 = 0;
      }
    }
    *(undefined4 *)(pIVar8 + 0x2c60) = uVar1;
    if (local_e0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_e0,(RuntimeCallTimer *)((ulong)&local_e0 | 8));
    }
    if (local_a8 != 0) {
      lVar5 = *(long *)(local_b0 + 0x95c0);
      lVar6 = *(long *)(lVar5 + 0x60) + -1;
      uVar7 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + lVar6 * 8);
      *(long *)(lVar5 + 0x60) = lVar6;
      *(undefined8 *)(local_b0 + 0x2bc8) = uVar7;
    }
    if (local_a0 == '\0') {
      *(long *)(local_b0 + 0x2c08) = local_68;
    }
    local_b0[0xb828] = local_9e;
    local_98 = &PTR__InterruptsScope_01c984b0;
    if (local_78 != 2) {
      internal::StackGuard::PopInterruptsScope(local_90);
    }
    *(undefined8 *)(pIVar8 + 0x95a0) = uVar11;
    *(int *)pIVar12 = *(int *)pIVar12 + -1;
    if (*(long *)pIVar9 != lVar10) {
      *(long *)pIVar9 = lVar10;
      internal::HandleScope::DeleteExtensions(pIVar8);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

