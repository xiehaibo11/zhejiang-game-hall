
/* v8::internal::compiler::SpecialRPONumberer::ComputeAndInsertSpecialRPO(v8::internal::compiler::BasicBlock*,
   v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::SpecialRPONumberer::ComputeAndInsertSpecialRPO
          (SpecialRPONumberer *this,BasicBlock *param_1,BasicBlock *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  Zone *pZVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  BasicBlock *pBVar15;
  int iVar16;
  vector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>>
  *this_00;
  BasicBlock *pBVar17;
  long lVar18;
  int iVar19;
  BasicBlock *pBVar20;
  BasicBlock *pBVar21;
  uint uVar22;
  int iVar23;
  long *plVar24;
  undefined8 uVar25;
  
  lVar4 = *(long *)(this + 8);
  if (**(int **)(lVar4 + 0x68) != -1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kBlockUnvisited1 == schedule_->start()->loop_number()");
  }
  if ((*(int **)(lVar4 + 0x68))[1] != -1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kBlockUnvisited1 == schedule_->start()->rpo_number()");
  }
  if ((*(long *)(lVar4 + 0x50) - *(long *)(lVar4 + 0x48) & 0x7fffffff8U) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","0 == static_cast<int>(schedule_->rpo_order()->size())");
  }
  pBVar21 = *(BasicBlock **)(param_1 + 0x18);
  this_00 = (vector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>>
             *)(this + 0x60);
  uVar11 = (*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8) >> 3) - *(long *)(this + 0x80);
  uVar13 = *(long *)(this + 0x68) - *(long *)this_00 >> 4;
  if (uVar11 < uVar13 || uVar11 - uVar13 == 0) {
    if (uVar11 < uVar13) {
      *(ulong *)(this + 0x68) = *(long *)this_00 + uVar11 * 0x10;
    }
  }
  else {
    std::__ndk1::
    vector<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame,v8::internal::ZoneAllocator<v8::internal::compiler::SpecialRPONumberer::SpecialRPOStackFrame>>
    ::__append(this_00,uVar11 - uVar13);
    lVar4 = *(long *)(this + 8);
  }
  *(long *)(this + 0x80) = *(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8) >> 3;
  pBVar15 = pBVar21;
  if (*(int *)(param_1 + 4) == -1) {
    **(undefined8 **)(this + 0x60) = param_1;
    *(undefined8 *)(*(long *)(this + 0x60) + 8) = 0;
    BasicBlock::set_rpo_number(param_1,-2);
    uVar11 = 1;
    iVar16 = (int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 4) * -0x55555555;
    do {
      while( true ) {
        iVar23 = (int)uVar11;
        puVar7 = (undefined8 *)(*(long *)this_00 + ((long)iVar23 - 1U) * 0x10);
        pBVar20 = (BasicBlock *)*puVar7;
        if (pBVar20 != param_2) break;
LAB_012b6af8:
        *(BasicBlock **)(pBVar20 + 0x18) = pBVar15;
        BasicBlock::set_rpo_number((BasicBlock *)*puVar7,-3);
        uVar11 = (long)iVar23 - 1U & 0xffffffff;
        pBVar15 = pBVar20;
LAB_012b6b10:
        uVar22 = (uint)uVar11;
joined_r0x012b6bc8:
        iVar19 = iVar16;
        if ((int)uVar22 < 1) goto LAB_012b6cc0;
      }
      uVar13 = puVar7[1];
      if ((ulong)(*(long *)(pBVar20 + 0x68) - *(long *)(pBVar20 + 0x60) >> 3) <= uVar13)
      goto LAB_012b6af8;
      puVar7[1] = uVar13 + 1;
      pBVar17 = *(BasicBlock **)(*(long *)(pBVar20 + 0x60) + uVar13 * 8);
      if (*(int *)(pBVar17 + 4) == -1) {
        *(BasicBlock **)(*(long *)(this + 0x60) + uVar11 * 0x10) = pBVar17;
        *(undefined8 *)(*(long *)(this + 0x60) + uVar11 * 0x10 + 8) = 0;
        BasicBlock::set_rpo_number(pBVar17,-2);
        uVar22 = iVar23 + 1;
        uVar11 = (ulong)uVar22;
        goto joined_r0x012b6bc8;
      }
      if (*(int *)(pBVar17 + 4) != -2) goto LAB_012b6b10;
      puVar7 = *(undefined8 **)(this + 0x48);
      if (puVar7 < *(undefined8 **)(this + 0x50)) {
        *puVar7 = pBVar20;
        puVar7[1] = uVar13;
        *(long *)(this + 0x48) = *(long *)(this + 0x48) + 0x10;
        if (*(int *)pBVar17 < 0) goto LAB_012b6c9c;
        goto LAB_012b6b10;
      }
      lVar4 = (long)puVar7 - *(long *)(this + 0x40) >> 4;
      uVar5 = lVar4 + 1;
      if (uVar5 >> 0x1b != 0) goto LAB_012b7220;
      lVar18 = (long)*(undefined8 **)(this + 0x50) - *(long *)(this + 0x40);
      uVar12 = lVar18 >> 3;
      if (uVar5 <= uVar12) {
        uVar5 = uVar12;
      }
      if (0x3fffffe < (ulong)(lVar18 >> 4)) {
        uVar5 = 0x7ffffff;
      }
      if (uVar5 == 0) {
        lVar18 = 0;
      }
      else {
        pZVar3 = *(Zone **)(this + 0x58);
        uVar12 = uVar5 * 0x10;
        lVar18 = *(long *)(pZVar3 + 0x10);
        if (uVar12 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar18) ||
            uVar12 - (*(long *)(pZVar3 + 0x18) - lVar18) == 0) {
          *(ulong *)(pZVar3 + 0x10) = lVar18 + uVar12;
        }
        else {
          lVar18 = Zone::NewExpand(pZVar3,uVar12);
        }
      }
      puVar7 = (undefined8 *)(lVar18 + lVar4 * 0x10);
      *puVar7 = pBVar20;
      puVar7[1] = uVar13;
      lVar4 = *(long *)(this + 0x40);
      puVar2 = puVar7;
      for (lVar6 = *(long *)(this + 0x48); lVar6 != lVar4; lVar6 = lVar6 + -0x10) {
        uVar25 = *(undefined8 *)(lVar6 + -0x10);
        puVar2[-1] = *(undefined8 *)(lVar6 + -8);
        puVar2[-2] = uVar25;
        puVar2 = puVar2 + -2;
      }
      *(undefined8 **)(this + 0x40) = puVar2;
      *(undefined8 **)(this + 0x48) = puVar7 + 2;
      *(ulong *)(this + 0x50) = lVar18 + uVar5 * 0x10;
      if (-1 < *(int *)pBVar17) goto LAB_012b6b10;
LAB_012b6c9c:
      iVar19 = iVar16 + 1;
      *(int *)pBVar17 = iVar16;
      iVar16 = iVar19;
    } while (0 < iVar23);
LAB_012b6cc0:
    if ((int)((ulong)(*(long *)(this + 0x28) - *(long *)(this + 0x20)) >> 4) * -0x55555555 < iVar19)
    {
      ComputeLoopInfo(this,(ZoneVector *)this_00,(long)iVar19,(ZoneVector *)(this + 0x40));
      if ((int)*(uint *)param_1 < 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(this + 0x20) + (ulong)*(uint *)param_1 * 0x30;
      }
      pBVar15 = pBVar21;
      if (*(int *)(param_1 + 4) == -3) {
        **(undefined8 **)(this + 0x60) = param_1;
        *(undefined8 *)(*(long *)(this + 0x60) + 8) = 0;
        BasicBlock::set_rpo_number(param_1,-2);
        uVar11 = 1;
        do {
          while( true ) {
            lVar18 = *(long *)this_00;
            iVar16 = (int)uVar11;
            uVar13 = (long)iVar16 - 1;
            pBVar20 = *(BasicBlock **)(lVar18 + uVar13 * 0x10);
            if (pBVar20 != param_2) break;
LAB_012b6db0:
            if (-1 < *(int *)pBVar20) {
              if (*(int *)(pBVar20 + 4) == -2) {
                *(BasicBlock **)(pBVar20 + 0x18) = pBVar15;
                pBVar15 = *(BasicBlock **)(lVar4 + 0x20);
                *(BasicBlock **)(lVar4 + 0x28) = pBVar20;
                BasicBlock::set_rpo_number(pBVar20,-4);
                lVar4 = *(long *)(lVar4 + 0x18);
              }
              plVar24 = (long *)(lVar18 + uVar13 * 0x10 + 8);
              lVar18 = *plVar24;
              if ((pBVar20 != param_1) &&
                 (plVar9 = *(long **)(*(long *)(this + 0x20) + (long)*(int *)pBVar20 * 0x30 + 8),
                 plVar9 != (long *)0x0)) {
                uVar5 = lVar18 - (*(long *)(pBVar20 + 0x68) - *(long *)(pBVar20 + 0x60) >> 3);
                if (uVar5 < (ulong)(plVar9[1] - *plVar9 >> 3)) {
                  pBVar17 = *(BasicBlock **)(*plVar9 + uVar5 * 8);
                  *plVar24 = lVar18 + 1;
                  if (pBVar17 != (BasicBlock *)0x0) goto LAB_012b6e38;
                }
              }
            }
LAB_012b6ef8:
            if ((int)*(uint *)pBVar20 < 0) {
              *(BasicBlock **)(pBVar20 + 0x18) = pBVar15;
              BasicBlock::set_rpo_number(pBVar20,-4);
              uVar11 = uVar13 & 0xffffffff;
              pBVar15 = pBVar20;
LAB_012b6d5c:
              iVar16 = (int)uVar11;
            }
            else {
              lVar18 = *(long *)(this + 0x20) + (ulong)*(uint *)pBVar20 * 0x30;
              plVar24 = (long *)(lVar18 + 0x28);
              plVar9 = (long *)(lVar18 + 0x20);
              lVar18 = *plVar24;
              do {
                lVar6 = lVar18;
                lVar18 = *(long *)(lVar6 + 0x18);
              } while (lVar18 != *plVar9);
              *(BasicBlock **)(lVar6 + 0x18) = pBVar15;
              *plVar9 = (long)pBVar15;
              pBVar15 = (BasicBlock *)*plVar24;
              uVar11 = uVar13 & 0xffffffff;
              iVar16 = (int)uVar13;
            }
joined_r0x012b6ef0:
            if (iVar16 < 1) goto LAB_012b7078;
          }
          puVar8 = (ulong *)(lVar18 + uVar13 * 0x10 + 8);
          uVar5 = *puVar8;
          if ((ulong)(*(long *)(pBVar20 + 0x68) - *(long *)(pBVar20 + 0x60) >> 3) <= uVar5)
          goto LAB_012b6db0;
          *puVar8 = uVar5 + 1;
          pBVar17 = *(BasicBlock **)(*(long *)(pBVar20 + 0x60) + uVar5 * 8);
          if (pBVar17 == (BasicBlock *)0x0) goto LAB_012b6ef8;
LAB_012b6e38:
          if ((*(uint *)(pBVar17 + 4) | 2) == 0xfffffffe) goto LAB_012b6d5c;
          if (lVar4 == 0) {
LAB_012b6e9c:
            if (*(uint *)(pBVar17 + 4) == 0xfffffffd) {
              *(BasicBlock **)(*(long *)(this + 0x60) + uVar11 * 0x10) = pBVar17;
              *(undefined8 *)(*(long *)(this + 0x60) + uVar11 * 0x10 + 8) = 0;
              BasicBlock::set_rpo_number(pBVar17,-2);
              uVar11 = (ulong)(iVar16 + 1);
            }
            if ((int)*(uint *)pBVar17 < 0) goto LAB_012b6d5c;
            lVar18 = *(long *)(this + 0x20) + (ulong)*(uint *)pBVar17 * 0x30;
            *(long *)(lVar18 + 0x18) = lVar4;
            *(BasicBlock **)(lVar18 + 0x20) = pBVar15;
            iVar16 = (int)uVar11;
            lVar4 = lVar18;
            goto joined_r0x012b6ef0;
          }
          uVar22 = *(uint *)(pBVar17 + 0xa0);
          puVar8 = (ulong *)(*(long *)(lVar4 + 0x10) + 8);
          if (*(int *)(*(long *)(lVar4 + 0x10) + 4) != 1) {
            uVar1 = uVar22 + 0x3f;
            if (-1 < (int)uVar22) {
              uVar1 = uVar22;
            }
            puVar8 = (ulong *)(*puVar8 + (long)((int)uVar1 >> 6) * 8);
          }
          if ((*puVar8 >> ((ulong)uVar22 & 0x3f) & 1) != 0) goto LAB_012b6e9c;
          plVar24 = *(long **)(lVar4 + 8);
          if (plVar24 == (long *)0x0) {
            pZVar3 = *(Zone **)this;
            plVar24 = *(long **)(pZVar3 + 0x10);
            if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)plVar24) < 0x20) {
              plVar24 = (long *)Zone::NewExpand(pZVar3,0x20);
            }
            else {
              *(long **)(pZVar3 + 0x10) = plVar24 + 4;
            }
            *plVar24 = 0;
            plVar24[1] = 0;
            plVar24[2] = 0;
            plVar24[3] = (long)pZVar3;
            *(long **)(lVar4 + 8) = plVar24;
          }
          puVar7 = (undefined8 *)plVar24[1];
          if (puVar7 == (undefined8 *)plVar24[2]) {
            lVar18 = (long)puVar7 - *plVar24 >> 3;
            uVar13 = lVar18 + 1;
            if (uVar13 >> 0x1c != 0) {
LAB_012b7220:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar6 = plVar24[2] - *plVar24;
            uVar5 = lVar6 >> 2;
            if (uVar13 <= uVar5) {
              uVar13 = uVar5;
            }
            if (0x7fffffe < (ulong)(lVar6 >> 3)) {
              uVar13 = 0xfffffff;
            }
            if (uVar13 == 0) {
              lVar6 = 0;
            }
            else {
              pZVar3 = (Zone *)plVar24[3];
              uVar5 = uVar13 * 8;
              lVar6 = *(long *)(pZVar3 + 0x10);
              if (uVar5 < (ulong)(*(long *)(pZVar3 + 0x18) - lVar6) ||
                  uVar5 - (*(long *)(pZVar3 + 0x18) - lVar6) == 0) {
                *(ulong *)(pZVar3 + 0x10) = lVar6 + uVar5;
              }
              else {
                lVar6 = Zone::NewExpand(pZVar3,uVar5);
              }
            }
            puVar7 = (undefined8 *)(lVar6 + lVar18 * 8);
            puVar10 = puVar7 + 1;
            *puVar7 = pBVar17;
            puVar2 = (undefined8 *)*plVar24;
            puVar14 = (undefined8 *)plVar24[1];
            while (puVar14 != puVar2) {
              puVar14 = puVar14 + -1;
              puVar7 = puVar7 + -1;
              *puVar7 = *puVar14;
            }
            *plVar24 = (long)puVar7;
            plVar24[1] = (long)puVar10;
            plVar24[2] = lVar6 + uVar13 * 8;
            goto joined_r0x012b6ef0;
          }
          *puVar7 = pBVar17;
          plVar24[1] = plVar24[1] + 8;
        } while (0 < iVar16);
      }
    }
LAB_012b7078:
    lVar4 = *(long *)(this + 0x10);
  }
  else {
    lVar4 = *(long *)(this + 0x10);
  }
  if (lVar4 == 0) {
    *(BasicBlock **)(this + 0x10) = pBVar15;
  }
  if (pBVar15 != pBVar21) {
    pBVar20 = *(BasicBlock **)(param_1 + 0x20);
    plVar24 = (long *)0x0;
    uVar22 = *(int *)(param_1 + 0x30) - (uint)(*(long *)(param_1 + 0x28) != 0);
    do {
      BasicBlock::set_rpo_number(pBVar15,-1);
      while( true ) {
        if ((pBVar20 == (BasicBlock *)0x0) || (pBVar15 != *(BasicBlock **)(pBVar20 + 0x28)))
        goto LAB_012b7110;
        plVar24 = (long *)plVar24[3];
        if (plVar24 == (long *)0x0) break;
        pBVar20 = (BasicBlock *)*plVar24;
        uVar22 = uVar22 - 1;
      }
      pBVar20 = (BasicBlock *)0x0;
      uVar22 = uVar22 - 1;
LAB_012b7110:
      BasicBlock::set_loop_header(pBVar15,pBVar20);
      if (-1 < (int)*(uint *)pBVar15) {
        uVar22 = uVar22 + 1;
        plVar24 = (long *)(*(long *)(this + 0x20) + (ulong)*(uint *)pBVar15 * 0x30);
        pBVar20 = (BasicBlock *)plVar24[4];
        if ((pBVar20 == (BasicBlock *)0x0) &&
           (pBVar20 = *(BasicBlock **)(this + 0x18), pBVar20 == (BasicBlock *)0x0)) {
          pZVar3 = (Zone *)**(undefined8 **)(this + 8);
          pBVar20 = *(BasicBlock **)(pZVar3 + 0x10);
          if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pBVar20) < 0xa8) {
            pBVar20 = (BasicBlock *)Zone::NewExpand(pZVar3,0xa8);
          }
          else {
            *(BasicBlock **)(pZVar3 + 0x10) = pBVar20 + 0xa8;
          }
          BasicBlock::BasicBlock(pBVar20,**(undefined8 **)(this + 8),0xffffffffffffffff);
          *(BasicBlock **)(this + 0x18) = pBVar20;
        }
        BasicBlock::set_loop_end(pBVar15,pBVar20);
        pBVar20 = (BasicBlock *)*plVar24;
        if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("id:%d is a loop header, increment loop depth to %d\n",
                 (ulong)*(uint *)(pBVar15 + 0xa0),(ulong)uVar22);
        }
      }
      BasicBlock::set_loop_depth(pBVar15,uVar22);
      if (*(long *)(pBVar15 + 0x20) == 0) {
        if (FLAG_trace_turbo_scheduler != '\0') {
          PrintF("id:%d is not in a loop (depth == %d)\n",(ulong)*(uint *)(pBVar15 + 0xa0),
                 (ulong)*(uint *)(pBVar15 + 0x30));
        }
      }
      else if (FLAG_trace_turbo_scheduler != '\0') {
        PrintF("id:%d has loop header id:%d, (depth == %d)\n",(ulong)*(uint *)(pBVar15 + 0xa0),
               (ulong)*(uint *)(*(long *)(pBVar15 + 0x20) + 0xa0),(ulong)*(uint *)(pBVar15 + 0x30));
      }
      pBVar15 = *(BasicBlock **)(pBVar15 + 0x18);
    } while (pBVar15 != pBVar21);
  }
  return;
}

