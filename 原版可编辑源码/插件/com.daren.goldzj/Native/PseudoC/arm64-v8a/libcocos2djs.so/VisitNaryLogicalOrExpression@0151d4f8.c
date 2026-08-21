
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::interpreter::BytecodeGenerator::VisitNaryLogicalOrExpression(v8::internal::NaryOperation*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNaryLogicalOrExpression
          (BytecodeGenerator *this,NaryOperation *param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  BlockCoverageBuilder *this_00;
  BytecodeLabel *pBVar5;
  long *plVar6;
  long *******ppppppplVar7;
  ulong uVar8;
  AstNode *pAVar9;
  Expression *this_01;
  long lVar10;
  ulong uVar11;
  BytecodeGenerator *local_b0;
  int *local_a8;
  int *local_a0;
  int *piStack_98;
  long *******local_90;
  long *******local_88;
  long local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  this_01 = *(Expression **)(param_1 + 8);
  local_a8 = (int *)0x0;
  local_a0 = (int *)0x0;
  piStack_98 = (int *)0x0;
  this_00 = *(BlockCoverageBuilder **)(this + 0x208);
  local_b0 = this;
  if ((this_00 != (BlockCoverageBuilder *)0x0) &&
     (*(long *)(param_1 + 0x18) != *(long *)(param_1 + 0x10))) {
    uVar11 = 1;
    if (this_00 == (BlockCoverageBuilder *)0x0) goto LAB_0151d564;
    do {
      iVar4 = BlockCoverageBuilder::AllocateNaryBlockCoverageSlot(this_00,param_1,uVar11 - 1);
      while( true ) {
        local_90 = (long *******)CONCAT44(local_90._4_4_,iVar4);
        if (local_a0 < piStack_98) {
          *local_a0 = iVar4;
          local_a0 = local_a0 + 1;
        }
        else {
          std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int>
                    ((vector<int,std::__ndk1::allocator<int>> *)&local_a8,(int *)&local_90);
        }
        if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 4) <= uVar11)
        goto LAB_0151d5bc;
        uVar11 = uVar11 + 1;
        this_00 = *(BlockCoverageBuilder **)(local_b0 + 0x208);
        if (this_00 != (BlockCoverageBuilder *)0x0) break;
LAB_0151d564:
        iVar4 = -1;
      }
    } while( true );
  }
LAB_0151d5bc:
  lVar10 = *(long *)(this + 0x300);
  if (*(int *)(lVar10 + 0x18) == 3) {
    uVar11 = Expression::ToBooleanIsTrue(this_01);
    if ((uVar11 & 1) == 0) {
      VisitNaryLogicalTest(this,0x20,param_1,&local_b0);
    }
    else {
      pBVar5 = (BytecodeLabel *)BytecodeLabels::New(*(BytecodeLabels **)(lVar10 + 0x28));
      BytecodeArrayBuilder::Jump((BytecodeArrayBuilder *)(this + 0x18),pBVar5);
    }
    *(undefined1 *)(lVar10 + 0x20) = 1;
  }
  else {
    uStack_78 = *(undefined8 *)(this + 0x10);
    local_90 = (long *******)&local_90;
    local_80 = 0;
    local_70 = 0;
    if (*(long *)(local_b0 + 0x208) == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = *local_a8;
    }
    local_88 = local_90;
    uVar11 = VisitLogicalOrSubExpression(this,this_01,(BytecodeLabels *)&local_90,iVar4);
    if ((uVar11 & 1) == 0) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        lVar2 = *(long *)(param_1 + 0x10);
        uVar8 = (*(long *)(param_1 + 0x18) - lVar2 >> 4) - 1;
        if (uVar8 <= uVar11) {
          local_68 = *(undefined8 *)(this + 0x300);
          pAVar9 = *(AstNode **)(lVar2 + uVar8 * 0x10);
          local_58 = *(int *)(this + 0x118);
          local_50 = 2;
          *(undefined8 **)(this + 0x300) = &local_68;
          pBStack_60 = this;
          if (this[8] == (BytecodeGenerator)0x0) {
            uVar11 = GetCurrentStackPosition();
            if (uVar11 < *(ulong *)this) {
              this[8] = (BytecodeGenerator)0x1;
            }
            else {
              VisitNoStackOverflowCheck(this,pAVar9);
            }
          }
          *(undefined8 *)(pBStack_60 + 0x300) = local_68;
          plVar6 = *(long **)(pBStack_60 + 0x120);
          iVar4 = *(int *)(pBStack_60 + 0x118);
          *(int *)(pBStack_60 + 0x118) = local_58;
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar4 - local_58,local_58));
          }
          BytecodeLabels::Bind((BytecodeLabels *)&local_90,(BytecodeArrayBuilder *)(this + 0x18));
          bVar1 = local_80 != 0;
          local_80 = 0;
          if (bVar1) {
            (*local_88)[1] = (long *****)local_90[1];
            *local_90[1] = (long *****)*local_88;
            local_80 = 0;
            if ((long ********)local_88 != &local_90) {
              ppppppplVar7 = local_88;
              do {
                ppppppplVar7 = (long *******)ppppppplVar7[1];
              } while ((long ********)ppppppplVar7 != &local_90);
            }
          }
          goto joined_r0x0151d7e8;
        }
        if (*(long *)(local_b0 + 0x208) == 0) {
          iVar4 = -1;
        }
        else {
          iVar4 = local_a8[uVar11 + 1];
        }
        uVar8 = VisitLogicalOrSubExpression
                          (this,*(Expression **)(lVar2 + lVar10),(BytecodeLabels *)&local_90,iVar4);
        lVar10 = lVar10 + 0x10;
        uVar11 = uVar11 + 1;
      } while ((uVar8 & 1) == 0);
    }
    bVar1 = local_80 != 0;
    local_80 = 0;
    if (bVar1) {
      (*local_88)[1] = (long *****)local_90[1];
      *local_90[1] = (long *****)*local_88;
      local_80 = 0;
      for (ppppppplVar7 = local_88; (long ********)ppppppplVar7 != &local_90;
          ppppppplVar7 = (long *******)ppppppplVar7[1]) {
      }
    }
  }
joined_r0x0151d7e8:
  if (local_a8 != (int *)0x0) {
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

