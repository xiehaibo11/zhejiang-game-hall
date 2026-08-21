
/* v8::internal::compiler::CodeAssembler::IntPtrMul(v8::internal::SloppyTNode<v8::internal::WordT>,
   v8::internal::SloppyTNode<v8::internal::WordT>) */

ulong * __thiscall
v8::internal::compiler::CodeAssembler::IntPtrMul(CodeAssembler *this,Node *param_2,Node *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  Node **ppNVar9;
  ulong uVar10;
  Node *pNVar11;
  ulong uVar12;
  RawMachineAssembler *pRVar13;
  undefined2 uVar14;
  Node *local_40;
  Node *pNStack_38;
  
  ppNVar9 = &local_40;
  uVar10 = *(ulong *)param_2;
  uVar1 = *(ushort *)(uVar10 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar11 = param_2 + 0x20;
    if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
      pNVar11 = (Node *)(*(ulong *)pNVar11 + 0x10);
    }
    uVar10 = **(ulong **)pNVar11;
    uVar1 = *(ushort *)(uVar10 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar10 = *(ulong *)(uVar10 + 0x30);
LAB_01683b58:
    bVar3 = true;
  }
  else {
    if (uVar1 == 0x17) {
      uVar10 = (ulong)*(int *)(uVar10 + 0x2c);
      goto LAB_01683b58;
    }
    bVar3 = false;
  }
  uVar12 = *(ulong *)param_3;
  uVar1 = *(ushort *)(uVar12 + 0x10);
  if ((uVar1 & 0xfffe) == 0x1b8) {
    pNVar11 = param_3 + 0x20;
    if ((~*(uint *)(param_3 + 0x14) & 0xf000000) == 0) {
      pNVar11 = (Node *)(*(ulong *)pNVar11 + 0x10);
    }
    uVar12 = **(ulong **)pNVar11;
    uVar1 = *(ushort *)(uVar12 + 0x10);
  }
  if (uVar1 == 0x18) {
    uVar12 = *(ulong *)(uVar12 + 0x30);
    bVar2 = true;
joined_r0x01683bc8:
    if (!bVar3) goto LAB_01683bcc;
LAB_01683c38:
    if (bVar2) {
      pRVar13 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int64Constant
                         ((CommonOperatorBuilder *)(pRVar13 + 0x48),uVar12 * uVar10);
      iVar8 = 0;
      ppNVar9 = (Node **)0x0;
      goto LAB_01683cf8;
    }
    if ((0 < (long)uVar10) &&
       (uVar5 = CONCAT17(POPCOUNT((char)(uVar10 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar10 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar10 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar10 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar10 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar10 >> 0x10
                                                                                     )),
                                                                      CONCAT11(POPCOUNT((char)(
                                                  uVar10 >> 8)),POPCOUNT((char)uVar10)))))))),
       uVar14 = NEON_uaddlv(uVar5,1), (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar14) < 2)) {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      lVar7 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      if (lVar7 == 0) {
        return (ulong *)param_3;
      }
      pRVar13 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(pRVar13 + 0x48),lVar7)
      ;
      uVar5 = RawMachineAssembler::AddNode(pRVar13,pOVar4,0,(Node **)0x0);
      param_2 = param_3;
      goto LAB_01683cc0;
    }
  }
  else {
    if (uVar1 != 0x17) {
      bVar2 = false;
      goto joined_r0x01683bc8;
    }
    uVar12 = (ulong)*(int *)(uVar12 + 0x2c);
    bVar2 = true;
    if (bVar3) goto LAB_01683c38;
LAB_01683bcc:
    if (((bVar2) && (0 < (long)uVar12)) &&
       (uVar5 = CONCAT17(POPCOUNT((char)(uVar12 >> 0x38)),
                         CONCAT16(POPCOUNT((char)(uVar12 >> 0x30)),
                                  CONCAT15(POPCOUNT((char)(uVar12 >> 0x28)),
                                           CONCAT14(POPCOUNT((char)(uVar12 >> 0x20)),
                                                    CONCAT13(POPCOUNT((char)(uVar12 >> 0x18)),
                                                             CONCAT12(POPCOUNT((char)(uVar12 >> 0x10
                                                                                     )),
                                                                      CONCAT11(POPCOUNT((char)(
                                                  uVar12 >> 8)),POPCOUNT((char)uVar12)))))))),
       uVar14 = NEON_uaddlv(uVar5,1), (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar14) < 2)) {
      uVar10 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      lVar7 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20);
      if (lVar7 == 0) {
        return (ulong *)param_2;
      }
      pRVar13 = (RawMachineAssembler *)**(undefined8 **)this;
      pOVar4 = (Operator *)
               CommonOperatorBuilder::Int64Constant((CommonOperatorBuilder *)(pRVar13 + 0x48),lVar7)
      ;
      uVar5 = RawMachineAssembler::AddNode(pRVar13,pOVar4,0,(Node **)0x0);
LAB_01683cc0:
      puVar6 = (ulong *)WordShl(this,param_2,uVar5);
      return puVar6;
    }
  }
  pRVar13 = (RawMachineAssembler *)**(undefined8 **)this;
  pOVar4 = (Operator *)MachineOperatorBuilder::Int64Mul((MachineOperatorBuilder *)(pRVar13 + 0x20));
  iVar8 = 2;
  local_40 = param_2;
  pNStack_38 = param_3;
LAB_01683cf8:
  puVar6 = (ulong *)RawMachineAssembler::AddNode(pRVar13,pOVar4,iVar8,ppNVar9);
  return puVar6;
}

