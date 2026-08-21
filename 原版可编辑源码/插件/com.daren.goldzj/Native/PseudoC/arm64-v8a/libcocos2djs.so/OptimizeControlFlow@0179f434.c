
/* v8::internal::compiler::RawMachineAssembler::OptimizeControlFlow(v8::internal::compiler::Schedule*,
   v8::internal::compiler::Graph*, v8::internal::compiler::CommonOperatorBuilder*) */

void v8::internal::compiler::RawMachineAssembler::OptimizeControlFlow
               (Schedule *param_1,Graph *param_2,CommonOperatorBuilder *param_3)

{
  void *pvVar1;
  undefined8 *puVar2;
  BasicBlock *pBVar3;
  size_t sVar4;
  long lVar5;
  int iVar6;
  Node *pNVar7;
  Node *pNVar8;
  BasicBlock *this;
  BasicBlock *this_00;
  Operator *pOVar9;
  undefined8 *puVar10;
  long lVar11;
  BasicBlock *pBVar12;
  bool bVar13;
  BasicBlock *this_01;
  Node *pNVar14;
  ulong uVar15;
  Node *this_02;
  ulong uVar16;
  BasicBlock *pBVar17;
  Node *local_68;
  
  puVar10 = *(undefined8 **)(param_1 + 8);
  if (*(undefined8 **)(param_1 + 0x10) == puVar10) {
    return;
  }
LAB_0179f478:
  bVar13 = false;
  uVar15 = 0;
  this_01 = (BasicBlock *)*puVar10;
  do {
    if (this_01 != (BasicBlock *)0x0) {
      if (*(int *)(this_01 + 0x34) == 3) {
        if ((*(long *)(this_01 + 0x48) - (long)*(undefined8 **)(this_01 + 0x40) == 8) &&
           (pNVar14 = (Node *)**(undefined8 **)(this_01 + 0x40),
           *(short *)(*(long *)pNVar14 + 0x10) == 0x23)) {
          this_02 = *(Node **)(this_01 + 0x38);
          pNVar7 = (Node *)NodeProperties::GetValueInput(this_02,0);
          if ((pNVar7 == pNVar14) && (iVar6 = Node::UseCount(pNVar14), iVar6 == 1)) {
            pBVar12 = (BasicBlock *)**(undefined8 **)(this_01 + 0x60);
            pBVar3 = (BasicBlock *)(*(undefined8 **)(this_01 + 0x60))[1];
            Node::Kill((Node *)**(undefined8 **)(pBVar12 + 0x40));
            pvVar1 = *(void **)(pBVar12 + 0x40);
            sVar4 = *(long *)(pBVar12 + 0x48) - ((long)pvVar1 + 8);
            if (sVar4 != 0) {
              memmove(pvVar1,(void *)((long)pvVar1 + 8),sVar4);
            }
            *(void **)(pBVar12 + 0x48) = (void *)((long)pvVar1 + ((long)sVar4 >> 3) * 8);
            Node::Kill((Node *)**(undefined8 **)(pBVar3 + 0x40));
            pvVar1 = *(void **)(pBVar3 + 0x40);
            sVar4 = *(long *)(pBVar3 + 0x48) - ((long)pvVar1 + 8);
            if (sVar4 != 0) {
              memmove(pvVar1,(void *)((long)pvVar1 + 8),sVar4);
            }
            *(void **)(pBVar3 + 0x48) = (void *)((long)pvVar1 + ((long)sVar4 >> 3) * 8);
            *(undefined8 *)(pBVar12 + 0x88) = *(undefined8 *)(pBVar12 + 0x80);
            *(undefined8 *)(pBVar3 + 0x88) = *(undefined8 *)(pBVar3 + 0x80);
            lVar11 = *(long *)(this_01 + 0x80);
            lVar5 = *(long *)(this_01 + 0x88) - lVar11;
            if (lVar5 != 0) {
              uVar16 = 0;
              while( true ) {
                pBVar17 = *(BasicBlock **)(lVar11 + uVar16 * 8);
                *(undefined8 *)(pBVar17 + 0x68) = *(undefined8 *)(pBVar17 + 0x60);
                if (this_01[8] != (BasicBlock)0x0) {
                  pBVar17[8] = (BasicBlock)0x1;
                }
                pNVar7 = (Node *)Graph::CloneNode(param_2,this_02);
                pNVar8 = (Node *)NodeProperties::GetValueInput(pNVar14,(int)uVar16);
                NodeProperties::ReplaceValueInput(pNVar7,pNVar8,0);
                this = (BasicBlock *)Schedule::NewBasicBlock(param_1);
                this_00 = (BasicBlock *)Schedule::NewBasicBlock(param_1);
                pOVar9 = (Operator *)CommonOperatorBuilder::IfTrue(param_3);
                local_68 = pNVar7;
                pNVar8 = (Node *)Graph::NewNode(param_2,pOVar9,1,&local_68,false);
                BasicBlock::AddNode(this,pNVar8);
                pOVar9 = (Operator *)CommonOperatorBuilder::IfFalse(param_3);
                local_68 = pNVar7;
                pNVar8 = (Node *)Graph::NewNode(param_2,pOVar9,1,&local_68,false);
                BasicBlock::AddNode(this_00,pNVar8);
                Schedule::AddGoto(param_1,this,pBVar12);
                Schedule::AddGoto(param_1,this_00,pBVar3);
                BasicBlock::set_control(pBVar17,0);
                Schedule::AddBranch(param_1,pBVar17,pNVar7,this,this_00);
                uVar16 = uVar16 + 1;
                if ((ulong)(lVar5 >> 3) <= uVar16) break;
                lVar11 = *(long *)(this_01 + 0x80);
              }
            }
            Node::Kill(this_02);
            Schedule::ClearBlockById(param_1,*(undefined8 *)(this_01 + 0xa0));
            goto LAB_0179f4b4;
          }
        }
      }
      else if ((*(int *)(this_01 + 0x34) == 1) &&
              (pBVar12 = (BasicBlock *)**(undefined8 **)(this_01 + 0x60),
              *(long *)(pBVar12 + 0x88) - *(long *)(pBVar12 + 0x80) == 8)) {
        puVar2 = *(undefined8 **)(pBVar12 + 0x48);
        for (puVar10 = *(undefined8 **)(pBVar12 + 0x40); puVar10 != puVar2; puVar10 = puVar10 + 1) {
          pNVar14 = (Node *)*puVar10;
          Schedule::SetBlockForNode(param_1,(BasicBlock *)0x0,pNVar14);
          Schedule::AddNode(param_1,this_01,pNVar14);
        }
        BasicBlock::set_control(this_01,*(undefined4 *)(pBVar12 + 0x34));
        pNVar14 = *(Node **)(pBVar12 + 0x38);
        BasicBlock::set_control_input(this_01,pNVar14);
        if (pNVar14 != (Node *)0x0) {
          Schedule::SetBlockForNode(param_1,this_01,pNVar14);
        }
        if (pBVar12[8] != (BasicBlock)0x0) {
          this_01[8] = (BasicBlock)0x1;
        }
        *(undefined8 *)(this_01 + 0x68) = *(undefined8 *)(this_01 + 0x60);
        Schedule::MoveSuccessors(param_1,pBVar12,this_01);
        Schedule::ClearBlockById(param_1,*(undefined8 *)(pBVar12 + 0xa0));
        uVar15 = uVar15 - 1;
LAB_0179f4b4:
        bVar13 = true;
      }
    }
    puVar10 = *(undefined8 **)(param_1 + 8);
    uVar15 = uVar15 + 1;
    if ((ulong)((long)*(undefined8 **)(param_1 + 0x10) - (long)puVar10 >> 3) <= uVar15) break;
    this_01 = (BasicBlock *)puVar10[uVar15];
  } while( true );
  if (!bVar13) {
    return;
  }
  if (*(undefined8 **)(param_1 + 0x10) == puVar10) {
    return;
  }
  goto LAB_0179f478;
}

