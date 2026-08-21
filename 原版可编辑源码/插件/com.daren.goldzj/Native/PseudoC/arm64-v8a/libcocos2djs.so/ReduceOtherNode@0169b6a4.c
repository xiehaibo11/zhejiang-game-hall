
/* v8::internal::compiler::CsaLoadElimination::ReduceOtherNode(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::ReduceOtherNode(CsaLoadElimination *this,Node *param_1)

{
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_00;
  long lVar1;
  PersistentMap *pPVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *pPVar6;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_01;
  AbstractState *local_28;
  
  if ((*(int *)(*(long *)param_1 + 0x18) == 1) && (*(char *)(*(long *)param_1 + 0x24) == '\x01')) {
    lVar1 = NodeProperties::GetEffectInput(param_1,0);
    this_01 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
               *)(this + 0x30);
    lVar3 = *(long *)this_01;
    uVar5 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
    uVar4 = *(long *)(this + 0x38) - lVar3 >> 3;
    if ((uVar5 < uVar4) &&
       (pPVar6 = *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                   **)(lVar3 + uVar5 * 8),
       pPVar6 != (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                  *)0x0)) {
      uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      this_00 = (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                 *)(this + 0x10);
      if ((*(byte *)(*(long *)param_1 + 0x12) & 0x10) != 0) {
        this_00 = pPVar6;
      }
      if (uVar5 < uVar4) {
        pPVar2 = *(PersistentMap **)(lVar3 + uVar5 * 8);
        if (pPVar2 == (PersistentMap *)this_00) {
          return (Node *)0x0;
        }
      }
      else {
        pPVar2 = (PersistentMap *)0x0;
        if (this_00 ==
            (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
             *)0x0) {
          return (Node *)0x0;
        }
      }
      if (pPVar2 != (PersistentMap *)0x0) {
        uVar4 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                ::operator==(this_00,pPVar2);
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
        ::__append(this_01,(uVar5 - uVar4) + 1,&local_28);
        lVar3 = *(long *)this_01;
      }
      if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
            **)(lVar3 + uVar5 * 8) != this_00) {
        *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
          **)(lVar3 + uVar5 * 8) = this_00;
        return param_1;
      }
      return param_1;
    }
  }
  return (Node *)0x0;
}

