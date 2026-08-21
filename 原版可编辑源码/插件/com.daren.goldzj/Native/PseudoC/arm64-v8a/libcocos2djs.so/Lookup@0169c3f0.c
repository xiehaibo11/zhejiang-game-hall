
/* v8::internal::compiler::CsaLoadElimination::AbstractState::Lookup(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) const */

undefined1  [16] __thiscall
v8::internal::compiler::CsaLoadElimination::AbstractState::Lookup
          (AbstractState *this,Node *param_1,Node *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Node *pNVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  Node *local_20;
  Node *pNStack_18;
  
  uVar5 = (byte)param_1[0x17] & 0xf;
  pNVar4 = param_1 + 0x20;
  if (uVar5 == 0xf) {
    uVar5 = *(uint *)(*(long *)pNVar4 + 8);
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  if (((int)uVar5 < 1) || (*(long *)pNVar4 != 0)) {
    local_20 = param_1;
    pNStack_18 = param_2;
    puVar1 = (undefined8 *)
             PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
             ::Get((PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                    *)this,(pair *)&local_20);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}

