
/* v8::internal::compiler::CsaLoadElimination::ReduceLoadFromObject(v8::internal::compiler::Node*,
   v8::internal::compiler::ObjectAccess const&) */

Node * __thiscall
v8::internal::compiler::CsaLoadElimination::ReduceLoadFromObject
          (CsaLoadElimination *this,Node *param_1,ObjectAccess *param_2)

{
  ObjectAccess OVar1;
  AbstractState *pAVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  Zone *this_00;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_01;
  PersistentMap *pPVar6;
  AbstractState *pAVar7;
  Node *pNVar8;
  uint uVar9;
  ulong uVar10;
  vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
  *this_02;
  ulong uVar11;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  *this_03;
  Node *pNVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  AbstractState *local_70;
  undefined8 uStack_68;
  
  pAVar2 = (AbstractState *)NodeProperties::GetValueInput(param_1,0);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  lVar4 = NodeProperties::GetEffectInput(param_1,0);
  this_02 = (vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
             *)(this + 0x30);
  uVar10 = (ulong)*(uint *)(lVar4 + 0x14) & 0xffffff;
  if (((ulong)(*(long *)(this + 0x38) - *(long *)this_02 >> 3) <= uVar10) ||
     (this_03 = *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                  **)(*(long *)this_02 + uVar10 * 8),
     this_03 ==
     (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      *)0x0)) {
    return (Node *)0x0;
  }
  OVar1 = *param_2;
  uVar9 = (byte)pAVar2[0x17] & 0xf;
  pAVar7 = pAVar2 + 0x20;
  if (uVar9 == 0xf) {
    uVar9 = *(uint *)(*(long *)pAVar7 + 8);
    pAVar7 = (AbstractState *)(*(long *)pAVar7 + 0x10);
  }
  if (((int)uVar9 < 1) || (*(long *)pAVar7 != 0)) {
    local_70 = pAVar2;
    uStack_68 = uVar3;
    plVar5 = (long *)PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
                     ::Get(this_03,(pair *)&local_70);
    pNVar12 = (Node *)*plVar5;
    if (pNVar12 != (Node *)0x0) {
      if (((uint)(byte)OVar1 == ((uint)plVar5[1] & 0xff)) ||
         ((((byte)OVar1 - 6 & 0xff) < 3 && (((uint)plVar5[1] - 6 & 0xff) < 3)))) {
        uVar9 = (byte)pNVar12[0x17] & 0xf;
        pNVar8 = pNVar12 + 0x20;
        if (uVar9 == 0xf) {
          uVar9 = *(uint *)(*(long *)pNVar8 + 8);
          pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
        }
        if (((int)uVar9 < 1) || (*(long *)pNVar8 != 0)) {
          (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar12,lVar4,0);
          return pNVar12;
        }
      }
    }
  }
  this_00 = *(Zone **)(this + 0x58);
  this_01 = *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
              **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x20) {
    this_01 = (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
               *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      **)(this_00 + 0x10) = this_01 + 0x20;
  }
  uVar13 = *(undefined8 *)this_03;
  uVar15 = *(undefined8 *)(this_03 + 0x18);
  uVar14 = *(undefined8 *)(this_03 + 0x10);
  *(undefined8 *)(this_01 + 8) = *(undefined8 *)(this_03 + 8);
  *(undefined8 *)this_01 = uVar13;
  *(undefined8 *)(this_01 + 0x18) = uVar15;
  *(undefined8 *)(this_01 + 0x10) = uVar14;
  PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
  ::Set(this_01,pAVar2,uVar3,param_1,OVar1);
  lVar4 = *(long *)(this + 0x30);
  uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar10 = *(long *)(this + 0x38) - lVar4 >> 3;
  if (uVar11 < uVar10) {
    pPVar6 = *(PersistentMap **)(lVar4 + uVar11 * 8);
    if (pPVar6 == (PersistentMap *)this_01) {
      return (Node *)0x0;
    }
  }
  else {
    pPVar6 = (PersistentMap *)0x0;
    if (this_01 ==
        (PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
         *)0x0) {
      return (Node *)0x0;
    }
  }
  if (pPVar6 != (PersistentMap *)0x0) {
    uVar10 = PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
             ::operator==(this_01,pPVar6);
    if ((uVar10 & 1) != 0) {
      return (Node *)0x0;
    }
    lVar4 = *(long *)(this + 0x30);
    uVar11 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar10 = *(long *)(this + 0x38) - lVar4 >> 3;
  }
  if (uVar10 <= uVar11) {
    local_70 = (AbstractState *)0x0;
    std::__ndk1::
    vector<v8::internal::compiler::CsaLoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::CsaLoadElimination::AbstractState_const*>>
    ::__append(this_02,(uVar11 - uVar10) + 1,&local_70);
    lVar4 = *(long *)this_02;
  }
  if (*(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
        **)(lVar4 + uVar11 * 8) != this_01) {
    *(PersistentMap<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>,v8::internal::compiler::CsaLoadElimination::FieldInfo,v8::base::hash<std::__ndk1::pair<v8::internal::compiler::Node*,v8::internal::compiler::Node*>>>
      **)(lVar4 + uVar11 * 8) = this_01;
    return param_1;
  }
  return param_1;
}

