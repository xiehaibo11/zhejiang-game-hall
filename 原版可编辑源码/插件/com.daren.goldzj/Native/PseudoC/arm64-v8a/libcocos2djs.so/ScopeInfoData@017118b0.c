
/* v8::internal::compiler::ScopeInfoData::ScopeInfoData(v8::internal::compiler::JSHeapBroker*,
   v8::internal::compiler::ObjectData**, v8::internal::Handle<v8::internal::ScopeInfo>) */

void __thiscall
v8::internal::compiler::ScopeInfoData::ScopeInfoData
          (ScopeInfoData *this,undefined8 param_2,undefined8 param_3,long *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  long local_28;
  
  HeapObjectData::HeapObjectData();
  local_28 = *param_4;
  uVar2 = ScopeInfo::ContextLength((ScopeInfo *)&local_28);
  *(undefined4 *)(this + 0x18) = uVar2;
  local_28 = *param_4;
  bVar1 = ScopeInfo::HasOuterScopeInfo((ScopeInfo *)&local_28);
  this[0x1c] = (ScopeInfoData)(bVar1 & 1);
  if (*(int *)(*param_4 + 3) < 2) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*param_4 + 7) >> 1;
  }
  *(int *)(this + 0x20) = iVar3;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

