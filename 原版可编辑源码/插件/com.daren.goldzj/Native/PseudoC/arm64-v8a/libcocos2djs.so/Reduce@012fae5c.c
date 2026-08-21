
/* v8::internal::compiler::AddTypeAssertionsReducer::Reduce(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::AddTypeAssertionsReducer::Reduce
          (AddTypeAssertionsReducer *this,Node *param_1)

{
  vector<bool,v8::internal::ZoneAllocator<bool>> *this_00;
  Use *pUVar1;
  uint uVar2;
  Use *pUVar3;
  Operator *pOVar4;
  Node *this_01;
  Node *this_02;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  Graph *this_03;
  ulong uVar8;
  int *piVar9;
  Use *pUVar10;
  Use *pUVar11;
  Node *local_48;
  
  if (((*(short *)(*(long *)param_1 + 0x10) != 0x23) &&
      (*(short *)(*(long *)param_1 + 0x10) != 0x121)) && (*(long *)(param_1 + 8) != 0)) {
    uVar5 = (ulong)*(uint *)(param_1 + 0x14);
    this_00 = (vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0x18);
    uVar8 = uVar5 & 0xffffff;
    if (uVar8 < *(ulong *)(this + 0x20)) {
      lVar6 = *(long *)this_00;
      uVar7 = 1L << (uVar5 & 0x3f);
      uVar5 = *(ulong *)(lVar6 + (uVar8 >> 6) * 8);
      if ((uVar5 & uVar7) != 0) {
        return 0;
      }
    }
    else {
      std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::resize(this_00,uVar8 + 1,false);
      lVar6 = *(long *)this_00;
      uVar7 = 1L << (uVar5 & 0x3f);
      uVar5 = *(ulong *)(lVar6 + (uVar8 >> 6) * 8);
    }
    if ((uVar5 & uVar7) == 0) {
      *(ulong *)(lVar6 + (uVar8 >> 6) * 8) = uVar5 | uVar7;
    }
    piVar9 = *(int **)(param_1 + 8);
    if ((((ulong)piVar9 & 1) == 0) && (*piVar9 == 4)) {
      this_03 = (Graph *)**(undefined8 **)(this + 0x10);
      pOVar4 = (Operator *)
               SimplifiedOperatorBuilder::AssertType
                         ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],piVar9)
      ;
      local_48 = param_1;
      this_01 = (Node *)Graph::NewNode(this_03,pOVar4,1,&local_48,false);
      *(int **)(this_01 + 8) = piVar9;
      pUVar11 = *(Use **)(param_1 + 0x18);
      while (pUVar3 = pUVar11, pUVar3 != (Use *)0x0) {
        uVar2 = *(uint *)(pUVar3 + 0x10);
        pUVar11 = *(Use **)pUVar3;
        pUVar10 = pUVar3 + (ulong)(uVar2 >> 1) * 0x18 + 0x18;
        lVar6 = 0x10;
        if ((uVar2 & 1) != 0) {
          lVar6 = 0x20;
        }
        pUVar1 = pUVar10 + (ulong)(uVar2 >> 1) * 8 + lVar6;
        if ((uVar2 & 1) == 0) {
          pUVar10 = *(Use **)pUVar10;
        }
        uVar5 = NodeProperties::IsValueEdge(pUVar3,pUVar1);
        if ((pUVar10 != (Use *)this_01) && ((uVar5 & 1) != 0)) {
          this_02 = *(Node **)pUVar1;
          if (this_02 != this_01) {
            if (this_02 != (Node *)0x0) {
              Node::RemoveUse(this_02,pUVar3);
            }
            *(Node **)pUVar1 = this_01;
            if (this_01 != (Node *)0x0) {
              Node::AppendUse(this_01,pUVar3);
            }
          }
          (**(code **)(**(long **)(this + 8) + 0x18))(*(long **)(this + 8),pUVar10);
        }
      }
    }
  }
  return 0;
}

