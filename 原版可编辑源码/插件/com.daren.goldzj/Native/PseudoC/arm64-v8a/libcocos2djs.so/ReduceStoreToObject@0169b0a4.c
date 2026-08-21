
/* v8::internal::compiler::CsaLoadElimination::ReduceStoreToObject(v8::internal::compiler::Node*,
   v8::internal::compiler::ObjectAccess const&) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::ReduceStoreToObject
          (CsaLoadElimination *this,Node *param_1,ObjectAccess *param_2)

{
  ObjectAccess OVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  AbstractState *pAVar6;
  undefined8 *puVar7;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_00;
  PersistentMap *pPVar8;
  Zone *this_01;
  ulong uVar9;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_02;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  AbstractState *local_48;
  
  uVar2 = NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  uVar4 = NodeProperties::GetValueInput(param_1,2);
  lVar5 = NodeProperties::GetEffectInput(param_1,0);
  this_02 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
             *)(this + 0x30);
  uVar9 = (ulong)*(uint *)(lVar5 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x38) - *(long *)this_02 >> 3) <= uVar9) ||
     (pAVar6 = *(AbstractState **)(*(long *)this_02 + uVar9 * 8), pAVar6 == (AbstractState *)0x0)) {
    return (Node *)0x0;
  }
  OVar1 = *param_2;
  puVar7 = (undefined8 *)
           AbstractState::KillField(pAVar6,uVar2,uVar3,OVar1,*(undefined8 *)(this + 0x58));
  this_01 = *(Zone **)(this + 0x58);
  this_00 = *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
              **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)this_00) < 0x20) {
    this_00 = (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
               *)Zone::NewExpand(this_01,0x20);
  }
  else {
    *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      **)(this_01 + 0x10) = this_00 + 0x20;
  }
  uVar11 = *puVar7;
  uVar13 = puVar7[3];
  uVar12 = puVar7[2];
  *(undefined8 *)(this_00 + 8) = puVar7[1];
  *(undefined8 *)this_00 = uVar11;
  *(undefined8 *)(this_00 + 0x18) = uVar13;
  *(undefined8 *)(this_00 + 0x10) = uVar12;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  ::Set(this_00,uVar2,uVar3,uVar4,OVar1);
  lVar5 = *(long *)(this + 0x30);
  uVar10 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar9 = *(long *)(this + 0x38) - lVar5 >> 3;
  if (uVar10 < uVar9) {
    pPVar8 = *(PersistentMap **)(lVar5 + uVar10 * 8);
    if (pPVar8 == (PersistentMap *)this_00) {
      return (Node *)0x0;
    }
  }
  else {
    pPVar8 = (PersistentMap *)0x0;
    if (this_00 ==
        (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
         *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pPVar8 != (PersistentMap *)0x0) {
    uVar9 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
            ::operator==(this_00,pPVar8);
    if ((uVar9 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar5 = *(long *)(this + 0x30);
    uVar10 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar9 = *(long *)(this + 0x38) - lVar5 >> 3;
  }
  if (uVar9 <= uVar10) {
    local_48 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
    ::__append(this_02,(uVar10 - uVar9) + 1,&local_48);
    lVar5 = *(long *)this_02;
  }
  if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
        **)(lVar5 + uVar10 * 8) != this_00) {
    *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      **)(lVar5 + uVar10 * 8) = this_00;
    return param_1;
  }
  return param_1;
}

