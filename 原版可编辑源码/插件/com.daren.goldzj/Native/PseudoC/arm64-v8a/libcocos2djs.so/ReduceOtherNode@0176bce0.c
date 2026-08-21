
/* v8::internal::compiler::LoadElimination::ReduceOtherNode(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::LoadElimination::ReduceOtherNode(LoadElimination *this,Node *param_1)

{
  long lVar1;
  Zone *this_00;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
  *this_01;
  AbstractState *pAVar5;
  undefined1 *this_02;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  AbstractState *local_28;
  
  if ((*(int *)(*(long *)param_1 + 0x18) == 1) && (*(char *)(*(long *)param_1 + 0x24) == '\x01')) {
    lVar1 = NodeProperties::GetEffectInput(param_1,0);
    this_01 = (vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
               *)(this + 0x10);
    lVar2 = *(long *)this_01;
    uVar4 = (ulong)*(uint *)(lVar1 + 0x14) & 0xffffff;
    uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
    if ((uVar4 < uVar3) &&
       (pAVar5 = *(AbstractState **)(lVar2 + uVar4 * 8), pAVar5 != (AbstractState *)0x0)) {
      this_02 = pAVar5;
      if ((*(byte *)(*(long *)param_1 + 0x12) >> 4 & 1) == 0) {
        this_00 = *(Zone **)(this + 0x28);
        this_02 = AbstractState::empty_state_;
        lVar1 = 0;
        do {
          if (*(long *)(pAVar5 + 0x108 + lVar1) != 0) {
            this_02 = *(undefined1 **)(this_00 + 0x10);
            if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_02) < 0x210) {
              this_02 = (undefined1 *)Zone::NewExpand(this_00,0x210);
            }
            else {
              *(AbstractState **)(this_00 + 0x10) = (AbstractState *)(this_02 + 0x210);
            }
            memset(this_02,0,0x210);
            uVar6 = *(undefined8 *)(pAVar5 + 0x128);
            uVar8 = *(undefined8 *)(pAVar5 + 0x140);
            uVar7 = *(undefined8 *)(pAVar5 + 0x138);
            uVar10 = *(undefined8 *)(pAVar5 + 0x110);
            uVar9 = *(undefined8 *)(pAVar5 + 0x108);
            uVar12 = *(undefined8 *)(pAVar5 + 0x120);
            uVar11 = *(undefined8 *)(pAVar5 + 0x118);
            *(undefined8 *)(this_02 + 0x130) = *(undefined8 *)(pAVar5 + 0x130);
            *(undefined8 *)(this_02 + 0x128) = uVar6;
            *(undefined8 *)(this_02 + 0x140) = uVar8;
            *(undefined8 *)(this_02 + 0x138) = uVar7;
            *(undefined8 *)(this_02 + 0x110) = uVar10;
            *(undefined8 *)(this_02 + 0x108) = uVar9;
            *(undefined8 *)(this_02 + 0x120) = uVar12;
            *(undefined8 *)(this_02 + 0x118) = uVar11;
            uVar6 = *(undefined8 *)(pAVar5 + 0x168);
            uVar8 = *(undefined8 *)(pAVar5 + 0x180);
            uVar7 = *(undefined8 *)(pAVar5 + 0x178);
            uVar10 = *(undefined8 *)(pAVar5 + 0x150);
            uVar9 = *(undefined8 *)(pAVar5 + 0x148);
            uVar12 = *(undefined8 *)(pAVar5 + 0x160);
            uVar11 = *(undefined8 *)(pAVar5 + 0x158);
            *(undefined8 *)(this_02 + 0x170) = *(undefined8 *)(pAVar5 + 0x170);
            *(undefined8 *)(this_02 + 0x168) = uVar6;
            *(undefined8 *)(this_02 + 0x180) = uVar8;
            *(undefined8 *)(this_02 + 0x178) = uVar7;
            *(undefined8 *)(this_02 + 0x150) = uVar10;
            *(undefined8 *)(this_02 + 0x148) = uVar9;
            *(undefined8 *)(this_02 + 0x160) = uVar12;
            *(undefined8 *)(this_02 + 0x158) = uVar11;
            uVar6 = *(undefined8 *)(pAVar5 + 0x1a8);
            uVar8 = *(undefined8 *)(pAVar5 + 0x1c0);
            uVar7 = *(undefined8 *)(pAVar5 + 0x1b8);
            uVar10 = *(undefined8 *)(pAVar5 + 400);
            uVar9 = *(undefined8 *)(pAVar5 + 0x188);
            uVar12 = *(undefined8 *)(pAVar5 + 0x1a0);
            uVar11 = *(undefined8 *)(pAVar5 + 0x198);
            *(undefined8 *)(this_02 + 0x1b0) = *(undefined8 *)(pAVar5 + 0x1b0);
            *(undefined8 *)(this_02 + 0x1a8) = uVar6;
            *(undefined8 *)(this_02 + 0x1c0) = uVar8;
            *(undefined8 *)(this_02 + 0x1b8) = uVar7;
            *(undefined8 *)(this_02 + 400) = uVar10;
            *(undefined8 *)(this_02 + 0x188) = uVar9;
            *(undefined8 *)(this_02 + 0x1a0) = uVar12;
            *(undefined8 *)(this_02 + 0x198) = uVar11;
            uVar6 = *(undefined8 *)(pAVar5 + 0x1e8);
            uVar8 = *(undefined8 *)(pAVar5 + 0x200);
            uVar7 = *(undefined8 *)(pAVar5 + 0x1f8);
            uVar10 = *(undefined8 *)(pAVar5 + 0x1d0);
            uVar9 = *(undefined8 *)(pAVar5 + 0x1c8);
            uVar12 = *(undefined8 *)(pAVar5 + 0x1e0);
            uVar11 = *(undefined8 *)(pAVar5 + 0x1d8);
            *(undefined8 *)(this_02 + 0x1f0) = *(undefined8 *)(pAVar5 + 0x1f0);
            *(undefined8 *)(this_02 + 0x1e8) = uVar6;
            *(undefined8 *)(this_02 + 0x200) = uVar8;
            *(undefined8 *)(this_02 + 0x1f8) = uVar7;
            *(undefined8 *)(this_02 + 0x1d0) = uVar10;
            *(undefined8 *)(this_02 + 0x1c8) = uVar9;
            *(undefined8 *)(this_02 + 0x1e0) = uVar12;
            *(undefined8 *)(this_02 + 0x1d8) = uVar11;
            lVar2 = *(long *)(this + 0x10);
            uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
            break;
          }
          lVar1 = lVar1 + 8;
        } while (lVar1 != 0x100);
      }
      uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
      if (uVar4 < uVar3) {
        pAVar5 = *(AbstractState **)(lVar2 + uVar4 * 8);
        if (pAVar5 == (AbstractState *)this_02) {
          return (Node *)0x0;
        }
      }
      else {
        pAVar5 = (AbstractState *)0x0;
        if ((AbstractState *)this_02 == (AbstractState *)0x0) {
          return (Node *)0x0;
        }
      }
      if (pAVar5 != (AbstractState *)0x0) {
        uVar3 = AbstractState::Equals((AbstractState *)this_02,pAVar5);
        if ((uVar3 & 1) != 0) {
          return (Node *)0x0;
        }
        lVar2 = *(long *)(this + 0x10);
        uVar4 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
        uVar3 = *(long *)(this + 0x18) - lVar2 >> 3;
      }
      if (uVar3 <= uVar4) {
        local_28 = (AbstractState *)0x0;
        std::__ndk1::
        vector<v8::internal::compiler::LoadElimination::AbstractState_const*,v8::internal::ZoneAllocator<v8::internal::compiler::LoadElimination::AbstractState_const*>>
        ::__append(this_01,(uVar4 - uVar3) + 1,&local_28);
        lVar2 = *(long *)this_01;
      }
      *(undefined1 **)(lVar2 + uVar4 * 8) = this_02;
      return param_1;
    }
  }
  return (Node *)0x0;
}

