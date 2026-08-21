
/* v8::Message::GetLineNumber(v8::Local<v8::Context>) const */

ulong v8::Message::GetLineNumber(undefined8 *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  Isolate *pIVar5;
  undefined8 uVar6;
  Isolate *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 *local_48;
  undefined8 local_28;
  
  uVar4 = (ulong)*(uint *)((long)param_1 + 4);
  pIVar5 = (Isolate *)(uVar4 << 0x20);
  plVar1 = (long *)(uVar4 << 0x20 | 0x95a0);
  uVar2 = *(undefined4 *)(pIVar5 + 0x2c60);
  *(undefined4 *)(pIVar5 + 0x2c60) = 5;
  local_48 = (undefined8 *)*plVar1;
  uVar6 = *(undefined8 *)(pIVar5 + 0xa8);
  if (local_48 == *(undefined8 **)(uVar4 << 0x20 | 0x95a8)) {
    local_48 = (undefined8 *)internal::HandleScope::Extend(pIVar5);
  }
  *plVar1 = (long)(local_48 + 1);
  *local_48 = uVar6;
  HandleScope::Initialize((HandleScope *)&local_60,(Isolate *)pIVar5);
  internal::JSMessageObject::EnsureSourcePositionsAvailable(pIVar5,param_1);
  local_28 = *param_1;
  lVar3 = internal::JSMessageObject::GetLineNumber((JSMessageObject *)&local_28);
  *(undefined8 *)(local_60 + 0x95a0) = uStack_58;
  *(int *)(local_60 + 0x95b0) = *(int *)(local_60 + 0x95b0) + -1;
  if (*(long *)(local_60 + 0x95a8) != local_50) {
    *(long *)(local_60 + 0x95a8) = local_50;
    internal::HandleScope::DeleteExtensions(local_60);
  }
  *(undefined4 *)(pIVar5 + 0x2c60) = uVar2;
  return lVar3 << 0x20 | 1;
}

