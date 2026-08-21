
/* v8::internal::compiler::OperandAssigner::DecideSpillingMode() */

void __thiscall v8::internal::compiler::OperandAssigner::DecideSpillingMode(OperandAssigner *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  InstructionSequence *this_00;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  Zone *this_01;
  long *plVar12;
  long lVar13;
  
  lVar8 = *(long *)this;
  if ((*(byte *)(lVar8 + 0x1d0) & 1) != 0) {
    plVar12 = *(long **)(lVar8 + 0x88);
    plVar2 = *(long **)(lVar8 + 0x90);
    if (plVar12 != plVar2) {
      do {
        lVar13 = *plVar12;
        TickCounter::DoTick(*(TickCounter **)(lVar8 + 0x1d8));
        if (lVar13 != 0) {
          this_00 = *(InstructionSequence **)(*(long *)this + 0x10);
          plVar10 = *(long **)(this_00 + 0x10);
          lVar8 = *plVar10;
          lVar3 = plVar10[1];
          if ((*(byte *)(*(long *)this + 0x1d0) & 1) == 0) {
            if (*(char *)(lVar13 + 0x80) != '\0') {
LAB_016645b8:
              iVar4 = **(int **)(lVar13 + 0x10);
              iVar11 = iVar4 + 3;
              if (-1 < iVar4) {
                iVar11 = iVar4;
              }
              lVar5 = InstructionSequence::GetInstructionBlock(this_00,iVar11 >> 2);
              puVar9 = *(undefined8 **)this;
              if (*(char *)(lVar5 + 0x78) == '\0') {
                if ((*(uint *)(puVar9 + 0x3a) >> 2 & 1) != 0) {
                  PrintF("Live range %d is spilled deferred code only but alive outside\n",
                         (ulong)*(uint *)(lVar13 + 0x5c));
                  puVar9 = *(undefined8 **)this;
                }
                this_01 = (Zone *)*puVar9;
                *(undefined4 *)(lVar13 + 0x84) = 0xffffffff;
                *(undefined8 *)(lVar13 + 0x78) = 0;
                piVar6 = *(int **)(this_01 + 0x10);
                if ((ulong)(*(long *)(this_01 + 0x18) - (long)piVar6) < 0x10) {
                  piVar6 = (int *)Zone::NewExpand(this_01,0x10);
                }
                else {
                  *(int **)(this_01 + 0x10) = piVar6 + 4;
                }
                iVar11 = (int)((ulong)(lVar3 - lVar8) >> 3);
                *piVar6 = iVar11;
                if (iVar11 < 0x41) {
                  piVar6[1] = 1;
                  piVar6[2] = 0;
                  piVar6[3] = 0;
                }
                else {
                  iVar4 = iVar11 + 0x3e;
                  if (-1 < iVar11 + -1) {
                    iVar4 = iVar11 + -1;
                  }
                  uVar1 = (iVar4 >> 6) + 1;
                  piVar6[2] = 0;
                  piVar6[3] = 0;
                  piVar6[1] = uVar1;
                  puVar9 = *(undefined8 **)(this_01 + 0x10);
                  uVar7 = (ulong)uVar1 * 8;
                  if (uVar7 < (ulong)(*(long *)(this_01 + 0x18) - (long)puVar9) ||
                      uVar7 - (*(long *)(this_01 + 0x18) - (long)puVar9) == 0) {
                    *(undefined8 **)(this_01 + 0x10) = puVar9 + uVar1;
                  }
                  else {
                    puVar9 = (undefined8 *)Zone::NewExpand(this_01,uVar7);
                  }
                  *(undefined8 **)(piVar6 + 2) = puVar9;
                  if (piVar6[1] == 1) {
                    piVar6[2] = 0;
                    piVar6[3] = 0;
                  }
                  else if ((0 < piVar6[1]) && (*puVar9 = 0, 1 < piVar6[1])) {
                    lVar8 = 1;
                    do {
                      *(undefined8 *)(*(long *)(piVar6 + 2) + lVar8 * 8) = 0;
                      lVar8 = lVar8 + 1;
                    } while (lVar8 < piVar6[1]);
                  }
                }
                *(int **)(lVar13 + 0x78) = piVar6;
              }
              else {
                if ((*(uint *)(puVar9 + 0x3a) >> 2 & 1) != 0) {
                  PrintF("Live range %d is spilled and alive in deferred code only\n",
                         (ulong)*(uint *)(lVar13 + 0x5c));
                }
                if ((~*(uint *)(lVar13 + 4) & 0x60) == 0) {
                  *(uint *)(lVar13 + 4) = *(uint *)(lVar13 + 4) & 0xffffff9f | 0x40;
                }
              }
            }
          }
          else if ((~*(uint *)(lVar13 + 4) & 0x60) == 0) goto LAB_016645b8;
        }
        plVar12 = plVar12 + 1;
        if (plVar12 == plVar2) {
          return;
        }
        lVar8 = *(long *)this;
      } while( true );
    }
  }
  return;
}

