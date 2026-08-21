
/* v8::internal::compiler::CsaLoadElimination::ReduceStart(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::ReduceStart(CsaLoadElimination *this,Node *param_1)

{
  PersistentMap *pPVar1;
  long lVar2;
  ulong uVar3;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_00;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_01;
  ulong uVar4;
  AbstractState *local_28;
  
  this_00 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
             *)(this + 0x30);
  lVar2 = *(long *)this_00;
  uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  this_01 = (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
             *)(this + 0x10);
  uVar3 = *(long *)(this + 0x38) - lVar2 >> 3;
  if (uVar4 < uVar3) {
    pPVar1 = *(PersistentMap **)(lVar2 + uVar4 * 8);
    if (pPVar1 == (PersistentMap *)this_01) {
      return (Node *)0x0;
    }
    if (pPVar1 != (PersistentMap *)0x0) {
      uVar3 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
              ::operator==(this_01,pPVar1);
      if ((uVar3 & 1) != 0) {
        return (Node *)0x0;
      }
      lVar2 = *(long *)(this + 0x30);
      uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      uVar3 = *(long *)(this + 0x38) - lVar2 >> 3;
    }
  }
  if (uVar3 <= uVar4) {
    local_28 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
    ::__append(this_00,(uVar4 - uVar3) + 1,&local_28);
    lVar2 = *(long *)this_00;
  }
  if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
        **)(lVar2 + uVar4 * 8) != this_01) {
    *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      **)(lVar2 + uVar4 * 8) = this_01;
  }
  return param_1;
}

