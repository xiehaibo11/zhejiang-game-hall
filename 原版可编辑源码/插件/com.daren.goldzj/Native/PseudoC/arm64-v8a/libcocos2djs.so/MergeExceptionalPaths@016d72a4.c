
/* v8::internal::compiler::JSCallReducerAssembler::MergeExceptionalPaths() */

void v8::internal::compiler::JSCallReducerAssembler::MergeExceptionalPaths(void)

{
  ulong uVar1;
  Graph *pGVar2;
  undefined8 *puVar3;
  long in_x0;
  undefined8 uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *in_x8;
  long lVar8;
  Zone *this;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  
  uVar14 = (ulong)(*(long *)(in_x0 + 0x58) - (long)*(undefined8 **)(in_x0 + 0x50)) >> 3;
  iVar13 = (int)uVar14;
  if (iVar13 == 1) {
    uVar4 = **(undefined8 **)(in_x0 + 0x50);
    uVar6 = uVar4;
    uVar7 = uVar4;
  }
  else {
    pGVar2 = (Graph *)**(undefined8 **)(in_x0 + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Merge
                       ((CommonOperatorBuilder *)(*(undefined8 **)(in_x0 + 0x18))[1],iVar13);
    uVar6 = Graph::NewNode(pGVar2,pOVar5,
                           (int)((ulong)(*(long *)(in_x0 + 0x58) - (long)*(Node ***)(in_x0 + 0x50))
                                >> 3),*(Node ***)(in_x0 + 0x50),false);
    puVar9 = *(undefined8 **)(in_x0 + 0x58);
    if (puVar9 == *(undefined8 **)(in_x0 + 0x60)) {
      lVar15 = (long)puVar9 - *(long *)(in_x0 + 0x50) >> 3;
      uVar1 = lVar15 + 1;
      if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = (long)*(undefined8 **)(in_x0 + 0x60) - *(long *)(in_x0 + 0x50);
      uVar11 = lVar8 >> 2;
      if (uVar1 <= uVar11) {
        uVar1 = uVar11;
      }
      if (0x7fffffe < (ulong)(lVar8 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar8 = 0;
      }
      else {
        this = *(Zone **)(in_x0 + 0x68);
        uVar11 = uVar1 * 8;
        lVar8 = *(long *)(this + 0x10);
        if (uVar11 < (ulong)(*(long *)(this + 0x18) - lVar8) ||
            uVar11 - (*(long *)(this + 0x18) - lVar8) == 0) {
          *(ulong *)(this + 0x10) = lVar8 + uVar11;
        }
        else {
          lVar8 = Zone::NewExpand(this,uVar11);
        }
      }
      puVar9 = (undefined8 *)(lVar8 + lVar15 * 8);
      puVar10 = puVar9 + 1;
      *puVar9 = uVar6;
      puVar3 = *(undefined8 **)(in_x0 + 0x50);
      puVar12 = *(undefined8 **)(in_x0 + 0x58);
      while (puVar12 != puVar3) {
        puVar12 = puVar12 + -1;
        puVar9 = puVar9 + -1;
        *puVar9 = *puVar12;
      }
      *(undefined8 **)(in_x0 + 0x50) = puVar9;
      *(undefined8 **)(in_x0 + 0x58) = puVar10;
      *(ulong *)(in_x0 + 0x60) = lVar8 + uVar1 * 8;
    }
    else {
      *puVar9 = uVar6;
      *(long *)(in_x0 + 0x58) = *(long *)(in_x0 + 0x58) + 8;
    }
    pGVar2 = (Graph *)**(undefined8 **)(in_x0 + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::EffectPhi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(in_x0 + 0x18))[1],iVar13);
    uVar7 = Graph::NewNode(pGVar2,pOVar5,
                           (int)((ulong)(*(long *)(in_x0 + 0x58) - (long)*(Node ***)(in_x0 + 0x50))
                                >> 3),*(Node ***)(in_x0 + 0x50),false);
    pGVar2 = (Graph *)**(undefined8 **)(in_x0 + 0x18);
    pOVar5 = (Operator *)
             CommonOperatorBuilder::Phi
                       ((CommonOperatorBuilder *)(*(undefined8 **)(in_x0 + 0x18))[1],8,
                        uVar14 & 0xffffffff);
    uVar4 = Graph::NewNode(pGVar2,pOVar5,
                           (int)((ulong)(*(long *)(in_x0 + 0x58) - (long)*(Node ***)(in_x0 + 0x50))
                                >> 3),*(Node ***)(in_x0 + 0x50),false);
    *(long *)(in_x0 + 0x58) = *(long *)(in_x0 + 0x58) + -8;
  }
  *in_x8 = uVar4;
  in_x8[1] = uVar7;
  in_x8[2] = uVar6;
  return;
}

