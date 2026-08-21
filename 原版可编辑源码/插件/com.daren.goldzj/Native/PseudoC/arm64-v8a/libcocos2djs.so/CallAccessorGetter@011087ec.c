
/* v8::internal::PropertyCallbackArguments::CallAccessorGetter(v8::internal::Handle<v8::internal::AccessorInfo>,
   v8::internal::Handle<v8::internal::Name>) */

undefined8 __thiscall
v8::internal::PropertyCallbackArguments::CallAccessorGetter
          (PropertyCallbackArguments *this,ulong *param_2,undefined8 *param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  Logger *this_00;
  undefined8 uVar5;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  pIVar4 = *(Isolate **)(this + 0x28);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(pIVar4 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x6e);
  }
  this_00 = *(Logger **)(pIVar4 + 0x9558);
  uVar2 = Logger::is_logging(this_00);
  if ((uVar2 & 1) != 0) {
    Logger::ApiNamedPropertyAccess(this_00,"accessor-getter",*(undefined8 *)(this + 0x20),*param_3);
  }
  uVar1 = *(uint *)(*param_2 + 0x13);
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)((*param_2 & 0xffffffff00000000 | (ulong)uVar1) + 3);
  }
  uVar2 = *(ulong *)(this + 0x48);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar2);
  }
  uVar5 = BasicCallNamedGetterCallback(this,uVar5,param_3,param_2,puVar3);
  if (local_80 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return uVar5;
}

