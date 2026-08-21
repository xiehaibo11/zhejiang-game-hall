
/* v8::internal::compiler::DiamondMatcher::DiamondMatcher(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::DiamondMatcher::DiamondMatcher(DiamondMatcher *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar6;
  long *plVar7;
  Node *pNVar8;
  long *plVar9;
  Node *pNVar5;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(Node **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(uint *)(param_1 + 0x14) & 0xf000000;
  if (uVar1 == 0xf000000) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x20) + 8);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x14) >> 0x18 & 0xf;
  }
  if ((uVar2 == 2) && (*(short *)(*(long *)param_1 + 0x10) == 10)) {
    pNVar8 = param_1 + 0x20;
    pNVar5 = pNVar8;
    if (uVar1 == 0xf000000) {
      pNVar5 = (Node *)(*(long *)pNVar8 + 0x10);
    }
    plVar4 = *(long **)pNVar5;
    uVar2 = *(uint *)((long)plVar4 + 0x14) & 0xf000000;
    if (uVar2 == 0xf000000) {
      uVar3 = *(uint *)(plVar4[4] + 8);
    }
    else {
      uVar3 = *(uint *)((long)plVar4 + 0x14) >> 0x18 & 0xf;
    }
    if (uVar3 == 1) {
      if (uVar1 == 0xf000000) {
        pNVar8 = (Node *)(*(long *)pNVar8 + 0x10);
      }
      plVar6 = *(long **)(pNVar8 + 8);
      uVar1 = *(uint *)((long)plVar6 + 0x14) & 0xf000000;
      if (uVar1 == 0xf000000) {
        uVar3 = *(uint *)(plVar6[4] + 8);
      }
      else {
        uVar3 = *(uint *)((long)plVar6 + 0x14) >> 0x18 & 0xf;
      }
      if (uVar3 == 1) {
        plVar7 = plVar4 + 4;
        if (uVar2 == 0xf000000) {
          plVar7 = (long *)(*plVar7 + 0x10);
        }
        plVar7 = (long *)*plVar7;
        plVar9 = plVar6 + 4;
        if (uVar1 == 0xf000000) {
          plVar9 = (long *)(*plVar9 + 0x10);
        }
        if ((plVar7 == (long *)*plVar9) && (*(short *)(*plVar7 + 0x10) == 2)) {
          if (*(short *)(*plVar4 + 0x10) == 5) {
            if (*(short *)(*plVar6 + 0x10) == 4) {
              *(long **)(this + 8) = plVar7;
              *(long **)(this + 0x10) = plVar6;
              *(long **)(this + 0x18) = plVar4;
            }
          }
          else if ((*(short *)(*plVar4 + 0x10) == 4) && (*(short *)(*plVar6 + 0x10) == 5)) {
            *(long **)(this + 8) = plVar7;
            *(long **)(this + 0x10) = plVar4;
            *(long **)(this + 0x18) = plVar6;
            return;
          }
        }
      }
    }
  }
  return;
}

