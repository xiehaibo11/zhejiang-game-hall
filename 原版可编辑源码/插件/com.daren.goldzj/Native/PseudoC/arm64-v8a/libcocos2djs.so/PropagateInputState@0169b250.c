
/* v8::internal::compiler::CsaLoadElimination::PropagateInputState(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::PropagateInputState
          (CsaLoadElimination *this,Node *param_1)

{
  long lVar1;
  PersistentMap *pPVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_00;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_01;
  AbstractState *local_28;
  
  lVar1 = NodeProperties::GetEffectInput(param_1,0);
  this_00 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
             *)(this + 0x30);
  lVar3 = *(long *)this_00;
  uVar5 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
  uVar4 = *(long *)(this + 0x38) - lVar3 >> 3;
  if ((uVar4 <= uVar5) ||
     (this_01 = *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                  **)(lVar3 + uVar5 * 8),
     this_01 ==
     (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      *)0x0)) {
    return (Node *)0x0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  if (uVar5 < uVar4) {
    pPVar2 = *(PersistentMap **)(lVar3 + uVar5 * 8);
    if (pPVar2 == (PersistentMap *)this_01) {
      return (Node *)0x0;
    }
  }
  else {
    pPVar2 = (PersistentMap *)0x0;
    if (this_01 ==
        (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
         *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pPVar2 != (PersistentMap *)0x0) {
    uVar4 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
            ::operator==(this_01,pPVar2);
    if ((uVar4 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar3 = *(long *)(this + 0x30);
    uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar4 = *(long *)(this + 0x38) - lVar3 >> 3;
  }
  if (uVar4 <= uVar5) {
    local_28 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar5 - uVar4) + 1,&local_28);
    lVar3 = *(long *)this_00;
  }
  if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
        **)(lVar3 + uVar5 * 8) != this_01) {
    *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      **)(lVar3 + uVar5 * 8) = this_01;
    return param_1;
  }
  return param_1;
}

