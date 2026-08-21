
/* v8::internal::JSReceiver::CreateDataProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

undefined2
v8::internal::JSReceiver::CreateDataProperty(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar4 = *(ulong **)(param_1 + 0x30);
  uVar3 = *puVar4;
  uVar5 = uVar3 & 0xffffffff00000000;
  if (*(ushort *)((uVar5 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xaa) {
    local_40 = 0;
    uStack_38 = 0;
    uStack_48 = 0;
    local_58[0] = 0xff;
    lVar2 = *(long *)(param_1 + 0x20);
    local_50 = param_2;
    if (lVar2 == 0) {
      lVar2 = Factory::SizeToString(*(Factory **)(param_1 + 0x18),*(ulong *)(param_1 + 0x48),true);
      *(long *)(param_1 + 0x20) = lVar2;
    }
    uVar1 = DefineOwnProperty(uVar5,puVar4,lVar2,local_58,param_3);
  }
  else {
    uVar1 = JSObject::CreateDataProperty(param_1,param_2,param_3);
  }
  return uVar1;
}

