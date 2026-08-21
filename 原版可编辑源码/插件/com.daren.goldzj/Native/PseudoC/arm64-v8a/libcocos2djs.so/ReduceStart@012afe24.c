
/* v8::internal::compiler::RedundancyElimination::ReduceStart(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::RedundancyElimination::ReduceStart
          (RedundancyElimination *this,Node *param_1)

{
  Zone *this_00;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
  *this_01;
  ulong uVar6;
  EffectPathChecks *local_38;
  
  this_00 = *(Zone **)(this + 0x30);
  plVar1 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar1) < 0x10) {
    plVar1 = (long *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar1 + 2;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  this_01 = (vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
             *)(this + 0x10);
  lVar2 = *(long *)this_01;
  uVar6 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
  plVar4 = (long *)0x0;
  if (uVar6 < uVar3) {
    plVar4 = *(long **)(lVar2 + uVar6 * 8);
  }
  if (plVar4 != plVar1) {
    if ((plVar4 == (long *)0x0) || (plVar1[1] != plVar4[1])) {
LAB_012afedc:
      if (uVar3 <= uVar6) {
        local_38 = (EffectPathChecks *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*,v8::internal::ZoneAllocator<v8::internal::compiler::RedundancyElimination::EffectPathChecks_const*>>
        ::__append(this_01,(uVar6 - uVar3) + 1,&local_38);
        lVar2 = *(long *)this_01;
      }
      *(long **)(lVar2 + uVar6 * 8) = plVar1;
      return param_1;
    }
    plVar4 = (long *)*plVar4;
    plVar5 = (long *)*plVar1;
    if (plVar5 != plVar4) {
      do {
        if (*plVar5 != *plVar4) goto LAB_012afedc;
        plVar4 = (long *)plVar4[1];
        plVar5 = (long *)plVar5[1];
      } while (plVar5 != plVar4);
    }
  }
  return (Node *)0x0;
}

