
/* v8::internal::compiler::RedundancyElimination::ReduceCheckNode(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::ReduceCheckNode
          (RedundancyElimination *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  long *plVar3;
  long *plVar4;
  Zone *this_00;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_01;
  ulong uVar8;
  EffectPathChecks *this_02;
  EffectPathChecks *local_48;
  
  lVar1 = NodeProperties::GetEffectInput(param_1,0);
  this_01 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  uVar6 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
  if ((uVar6 < (ulong)(*(long *)(this + 0x18) - *(long *)this_01 >> 3)) &&
     (this_02 = *(EffectPathChecks **)(*(long *)this_01 + uVar6 * 8),
     this_02 != (EffectPathChecks *)0x0)) {
    pNVar2 = (Node *)EffectPathChecks::LookupCheck(this_02,param_1);
    if (pNVar2 != (Node *)0x0) {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar2,0,0);
      return pNVar2;
    }
    this_00 = *(Zone **)(this + 0x30);
    plVar3 = *(long **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar3) < 0x10) {
      plVar3 = (long *)Zone::NewExpand(this_00,0x10);
    }
    else {
      *(long **)(this_00 + 0x10) = plVar3 + 2;
    }
    lVar1 = *(long *)this_02;
    *plVar3 = (long)param_1;
    plVar3[1] = lVar1;
    plVar4 = *(long **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar4) < 0x10) {
      plVar4 = (long *)Zone::NewExpand(this_00,0x10);
    }
    else {
      *(long **)(this_00 + 0x10) = plVar4 + 2;
    }
    lVar5 = *(long *)(this_02 + 8);
    *plVar4 = (long)plVar3;
    plVar4[1] = lVar5 + 1;
    lVar1 = *(long *)(this + 0x10);
    uVar8 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    uVar6 = *(long *)(this + 0x18) - lVar1 >> 3;
    if (uVar8 < uVar6) {
      plVar7 = *(long **)(lVar1 + uVar8 * 8);
      if (plVar7 == plVar4) {
        return (Node *)0x0;
      }
    }
    else {
      plVar7 = (long *)0x0;
      if (plVar4 == (long *)0x0) {
        return (Node *)0x0;
      }
    }
    if ((plVar7 != (long *)0x0) && (lVar5 + 1 == plVar7[1])) {
      plVar7 = (long *)*plVar7;
      if (plVar7 == plVar3) {
        return (Node *)0x0;
      }
      while (*plVar3 == *plVar7) {
        plVar7 = (long *)plVar7[1];
        plVar3 = (long *)plVar3[1];
        if (plVar3 == plVar7) {
          return (Node *)0x0;
        }
      }
    }
    if (uVar6 <= uVar8) {
      local_48 = (EffectPathChecks *)0x0;
      std::__ndk1::
      vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
      ::__append(this_01,(uVar8 - uVar6) + 1,&local_48);
      lVar1 = *(long *)this_01;
    }
    *(long **)(lVar1 + uVar8 * 8) = plVar4;
    return param_1;
  }
  return (Node *)0x0;
}

