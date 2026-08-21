
/* v8::internal::compiler::Verifier::Run(v8::internal::compiler::Graph*,
   v8::internal::compiler::Verifier::Typing, v8::internal::compiler::Verifier::CheckInputs,
   v8::internal::compiler::Verifier::CodeType) */

void v8::internal::compiler::Verifier::Run
               (Graph *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_110;
  undefined8 *local_108;
  long local_f0;
  ulong local_e8;
  char local_d0;
  Zone *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  Zone aZStack_b0 [64];
  long local_70;
  undefined8 *puVar10;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(graph->start()) != nullptr");
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    Zone::Zone(aZStack_b0,*(AccountingAllocator **)(*(long *)param_1 + 0x20),
               "../../src/compiler/verifier.cc:1913");
    local_c8 = aZStack_b0;
    local_c0 = param_2;
    uStack_bc = param_3;
    local_b8 = param_4;
    AllNodes::AllNodes((AllNodes *)&local_110,aZStack_b0,param_1,true);
    puVar4 = local_108;
    puVar9 = local_110;
    if (local_110 != local_108) {
      do {
        puVar10 = puVar9 + 1;
        Visitor::Check((Visitor *)&local_c8,(Node *)*puVar9,(AllNodes *)&local_110);
        puVar9 = puVar10;
        puVar3 = local_110;
      } while (puVar4 != puVar10);
      for (; puVar3 != local_108; puVar3 = puVar3 + 1) {
        plVar11 = (long *)*puVar3;
        if (*(short *)(*plVar11 + 0x10) == 0x37) {
          plVar12 = plVar11 + 4;
          if ((~*(uint *)((long)plVar11 + 0x14) & 0xf000000) == 0) {
            plVar12 = (long *)(*plVar12 + 0x10);
          }
          plVar12 = (long *)*plVar12;
          for (plVar13 = (long *)plVar12[3]; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
            plVar14 = plVar13 + (ulong)(*(uint *)(plVar13 + 2) >> 1) * 3 + 3;
            if ((*(uint *)(plVar13 + 2) & 1) == 0) {
              plVar14 = (long *)*plVar14;
            }
            if (local_d0 != '\x01') {
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","only_inputs_");
            }
            if (plVar14 != (long *)0x0) {
              uVar1 = *(uint *)((long)plVar14 + 0x14);
              uVar8 = (ulong)uVar1 & 0xffffff;
              if ((((uVar8 < local_e8) && (plVar14 != plVar11)) &&
                  ((*(ulong *)(local_f0 + (uVar8 >> 3 & 0x1ffff8)) & 1L << ((ulong)uVar1 & 0x3f)) !=
                   0)) && (*(short *)((Operator *)*plVar14 + 0x10) == 0x37)) {
                plVar7 = plVar14 + 4;
                if ((~uVar1 & 0xf000000) == 0) {
                  plVar7 = (long *)(*plVar7 + 0x10);
                }
                if ((long *)*plVar7 == plVar12) {
                  lVar5 = ProjectionIndexOf((Operator *)*plVar14);
                  lVar6 = ProjectionIndexOf((Operator *)*plVar11);
                  if (lVar5 == lVar6) {
                    /* WARNING: Subroutine does not return */
                    V8_Fatal("Node #%d:%s has duplicate projections #%d and #%d",
                             (ulong)(*(uint *)((long)plVar12 + 0x14) & 0xffffff),
                             *(undefined8 *)(*plVar12 + 8),
                             (ulong)(*(uint *)((long)plVar11 + 0x14) & 0xffffff),
                             (ulong)(*(uint *)((long)plVar14 + 0x14) & 0xffffff));
                  }
                }
              }
            }
          }
        }
      }
    }
    Zone::~Zone(aZStack_b0);
    if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(graph->end()) != nullptr");
}

