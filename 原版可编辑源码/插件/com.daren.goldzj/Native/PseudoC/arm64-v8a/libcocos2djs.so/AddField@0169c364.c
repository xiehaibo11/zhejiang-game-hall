
/* v8::internal::compiler::CsaLoadElimination::AbstractState::AddField(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::CsaLoadElimination::FieldInfo,
   v8::internal::Zone*) const */

undefined8 *
v8::internal::compiler::CsaLoadElimination::AbstractState::AddField
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,Zone *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_6 + 0x10);
  if ((ulong)(*(long *)(param_6 + 0x18) - (long)puVar1) < 0x20) {
    puVar1 = (undefined8 *)Zone::NewExpand(param_6,0x20);
  }
  else {
    *(undefined8 **)(param_6 + 0x10) = puVar1 + 4;
  }
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  ::Set(puVar1,param_2,param_3,param_4,param_5);
  return puVar1;
}

