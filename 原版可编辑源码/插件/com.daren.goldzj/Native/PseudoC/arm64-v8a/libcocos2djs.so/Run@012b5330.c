
/* v8::internal::compiler::CFGBuilder::Run(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::CFGBuilder::Run(CFGBuilder *this,BasicBlock *param_1,Node *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  Node *pNVar6;
  undefined8 *puVar7;
  Node *pNVar8;
  vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
  *this_00;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  Queue(this,param_2);
  *(undefined8 *)(this + 0x90) = 0;
  *(BasicBlock **)(this + 0x98) = param_1;
  uVar2 = Schedule::block(*(Schedule **)(this + 0x10),param_2);
  *(undefined8 *)(this + 0xa0) = uVar2;
  ControlEquivalence::Run(*(ControlEquivalence **)(*(long *)(this + 8) + 0xe0),param_2);
  lVar3 = *(long *)(this + 0x58);
  while (lVar3 != 0) {
    TickCounter::DoTick(*(TickCounter **)(*(long *)(this + 8) + 0xe8));
    uVar9 = *(ulong *)(this + 0x50);
    puVar4 = *(undefined8 **)(this + 0x28);
    uVar11 = uVar9 + 1;
    pNVar8 = *(Node **)(*(long *)((long)puVar4 + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                       (uVar9 & 0x1ff) * 8);
    *(long *)(this + 0x58) = *(long *)(this + 0x58) + -1;
    *(ulong *)(this + 0x50) = uVar11;
    if (0x3ff < uVar11) {
      puVar7 = (undefined8 *)*puVar4;
      if ((*(long *)(this + 0x68) == 0) || (*(ulong *)(*(long *)(this + 0x68) + 8) < 0x201)) {
        puVar7[1] = 0x200;
        *puVar7 = *(undefined8 *)(this + 0x68);
        puVar4 = *(undefined8 **)(this + 0x28);
        uVar11 = *(ulong *)(this + 0x50);
        *(undefined8 **)(this + 0x68) = puVar7;
      }
      *(undefined8 **)(this + 0x28) = puVar4 + 1;
      *(ulong *)(this + 0x50) = uVar11 - 0x200;
    }
    lVar5 = *(long *)(*(long *)(this + 8) + 0xe0);
    uVar9 = (ulong)*(uint *)(pNVar8 + 0x14) & 0xffffff;
    this_00 = (vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
               *)(lVar5 + 0x18);
    lVar3 = *(long *)this_00;
    uVar11 = *(long *)(lVar5 + 0x20) - lVar3 >> 3;
    lVar10 = lVar3;
    if (uVar11 <= uVar9) {
      std::__ndk1::
      vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
      ::__append(this_00,(uVar9 - uVar11) + 1);
      lVar5 = *(long *)(*(long *)(this + 8) + 0xe0);
      lVar3 = *(long *)(lVar5 + 0x18);
      uVar11 = *(long *)(lVar5 + 0x20) - lVar3 >> 3;
      lVar10 = *(long *)this_00;
    }
    lVar10 = **(long **)(lVar10 + uVar9 * 8);
    uVar9 = (ulong)*(uint *)(param_2 + 0x14) & 0xffffff;
    if (uVar11 <= uVar9) {
      std::__ndk1::
      vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
      ::__append((vector<v8::internal::compiler::ControlEquivalence::NodeData*,v8::internal::ZoneAllocator<v8::internal::compiler::ControlEquivalence::NodeData*>>
                  *)(lVar5 + 0x18),(uVar9 - uVar11) + 1);
      lVar3 = *(long *)(lVar5 + 0x18);
    }
    if ((pNVar8 == param_2) || (lVar10 != **(long **)(lVar3 + uVar9 * 8))) {
      iVar1 = NodeProperties::PastControlIndex(pNVar8);
      uVar11 = NodeProperties::PastEffectIndex(pNVar8);
      if ((int)uVar11 < iVar1) {
        uVar9 = -(uVar11 >> 0x1f & 1) & 0xfffffff800000000 | (uVar11 & 0xffffffff) << 3;
        iVar1 = iVar1 - (int)uVar11;
        do {
          pNVar6 = pNVar8 + 0x20;
          if ((~*(uint *)(pNVar8 + 0x14) & 0xf000000) == 0) {
            pNVar6 = (Node *)(*(long *)(pNVar8 + 0x20) + 0x10);
          }
          Queue(this,*(Node **)(pNVar6 + uVar9));
          iVar1 = iVar1 + -1;
          uVar9 = uVar9 + 8;
        } while (iVar1 != 0);
      }
    }
    else {
      if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("Found SESE at #%d:%s\n",(ulong)(*(uint *)(pNVar8 + 0x14) & 0xffffff),
               *(undefined8 *)(*(long *)pNVar8 + 8));
      }
      *(Node **)(this + 0x90) = pNVar8;
    }
    lVar3 = *(long *)(this + 0x58);
  }
  for (puVar4 = *(undefined8 **)(this + 0x70); puVar4 != *(undefined8 **)(this + 0x78);
      puVar4 = puVar4 + 1) {
    ConnectBlocks(this,(Node *)*puVar4);
  }
  return;
}

