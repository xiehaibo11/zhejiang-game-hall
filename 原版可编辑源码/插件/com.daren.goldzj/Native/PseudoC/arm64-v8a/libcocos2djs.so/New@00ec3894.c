
/* v8::BooleanObject::New(v8::Isolate*, bool) */

ulong * v8::BooleanObject::New(Isolate *param_1,bool param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  Logger *this;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x363);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar3 = internal::Logger::is_logging(this);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::BooleanObject::New");
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  lVar1 = 0xb8;
  if (!param_2) {
    lVar1 = 0xc0;
  }
  uVar3 = *(ulong *)(param_1 + lVar1);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(param_1 + 0x95a0);
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar4 + 1;
    *puVar4 = uVar3;
  }
  else {
    puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
    uVar3 = *puVar4;
  }
  if (((uVar3 & 1) == 0) ||
     (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9)) {
    puVar4 = (ulong *)internal::Object::ToObjectImpl(param_1,puVar4,0);
  }
  if (puVar4 != (ulong *)0x0) {
    *(undefined4 *)(param_1 + 0x2c60) = uVar2;
    if (local_70 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
    }
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

