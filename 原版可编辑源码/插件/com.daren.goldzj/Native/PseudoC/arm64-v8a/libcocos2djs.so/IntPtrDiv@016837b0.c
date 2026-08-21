
/* v8::internal::compiler::CodeAssembler::IntPtrDiv(v8::internal::TNode<v8::internal::IntPtrT>,
   v8::internal::TNode<v8::internal::IntPtrT>) */

long * __thiscall
v8::internal::compiler::CodeAssembler::IntPtrDiv(CodeAssembler *this,Node *param_2,long *param_3)

{
  ushort uVar1;
  bool bVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  Node **ppNVar7;
  long lVar8;
  Node *pNVar9;
  long lVar10;
  ulong uVar11;
  RawMachineAssembler *pRVar12;
  undefined2 uVar13;
  Node *local_40;
  long *plStack_38;
  
  ppNVar7 = &local_40;
  lVar8 = *(long *)param_2;
  uVar1 = *(ushort *)(lVar8 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar9 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
    }
    lVar8 = **(long **)pNVar9;
    uVar1 = *(ushort *)(lVar8 + 0x10);
  }
  if (uVar1 == 0x18) {
    lVar8 = *(long *)(lVar8 + 0x30);
LAB_01683828:
    bVar2 = true;
  }
  else {
    if (uVar1 == 0x17) {
      lVar8 = (long)*(int *)(lVar8 + 0x2c);
      goto LAB_01683828;
    }
    bVar2 = false;
  }
  lVar10 = *param_3;
  uVar1 = *(ushort *)(lVar10 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    plVar5 = param_3 + 4;
    if ((~*(uint *)((long)param_3 + 0x14) & 0xf000000) == 0) {
      plVar5 = (long *)(*plVar5 + 0x10);
    }
    lVar10 = *(long *)*plVar5;
    uVar1 = *(ushort *)(lVar10 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar11 = *(ulong *)(lVar10 + 0x30);
joined_r0x01683924:
    if (bVar2) {
      lVar10 = 0;
      if (uVar11 != 0) {
        lVar10 = lVar8 / (long)uVar11;
      }
      pRVar12 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar3 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(pRVar12 + 0x48),lVar10);
      iVar6 = 0;
      ppNVar7 = (Node **)0x0;
      goto LAB_0168394c;
    }
    if ((0 < (long)uVar11) &&
       (uVar4 = CONCAT17(POPCOUNT((char)(uVar11 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar11 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar11 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar11 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar11 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar11 >> 0x10
                                                                                     )),
                                                                      CONCAT11(POPCOUNT((char)(
                                                  uVar11 >> 8)),POPCOUNT((char)uVar11)))))))),
       uVar13 = NEON_uaddlv(uVar4,1), (uint)CONCAT62((int6)((ulong)uVar4 >> 0x10),uVar13) < 2)) {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      lVar8 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
      if (lVar8 != 0) {
        pRVar12 = (RawMachineAssembler *)**(undefined8 **)this;
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::Int64Constant
                           ((CommonOperatorBuilder *)(pRVar12 + 0x48),lVar8);
        uVar4 = RawMachineAssembler::AddNode(pRVar12,pOVar3,0,(Node **)0x0);
        plVar5 = (long *)WordSar(this,param_2,uVar4);
        return plVar5;
      }
      return (long *)param_2;
    }
  }
  else if (uVar1 == 0x17) {
    uVar11 = (ulong)*(int *)(lVar10 + 0x2c);
    goto joined_r0x01683924;
  }
  pRVar12 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar3 = (Operator *)MachineOperatorBuilder::Int64Div((MachineOperatorBuilder *)(pRVar12 + 0x20));
  iVar6 = 2;
  local_40 = param_2;
  plStack_38 = param_3;
LAB_0168394c:
  plVar5 = (long *)RawMachineAssembler::AddNode(pRVar12,pOVar3,iVar6,ppNVar7);
  return plVar5;
}

