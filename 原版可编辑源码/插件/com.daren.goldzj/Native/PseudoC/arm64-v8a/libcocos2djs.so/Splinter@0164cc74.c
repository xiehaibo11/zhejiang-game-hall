
/* v8::internal::compiler::LiveRangeSeparator::Splinter() */

void __thiscall v8::internal::compiler::LiveRangeSeparator::Splinter(LiveRangeSeparator *this)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  InstructionSequence *this_00;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  
  lVar9 = *(long *)this;
  lVar5 = *(long *)(lVar9 + 0x90) - *(long *)(lVar9 + 0x88);
  if (lVar5 != 0) {
    uVar13 = 0;
    while( true ) {
      lVar11 = *(long *)(*(long *)(lVar9 + 0x88) + uVar13 * 8);
      if (((lVar11 != 0) && (*(uint **)(lVar11 + 0x10) != (uint *)0x0)) &&
         (*(long *)(lVar11 + 0x68) == 0)) {
        uVar2 = **(uint **)(lVar11 + 0x10);
        uVar10 = uVar2 + 3;
        if (-1 < (int)uVar2) {
          uVar10 = uVar2;
        }
        lVar9 = InstructionSequence::GetInstructionBlock
                          (*(InstructionSequence **)(lVar9 + 0x10),
                           (uVar2 >> 1 & 1) + ((int)uVar10 >> 2));
        if (*(char *)(lVar9 + 0x78) == '\0') {
          if (*(uint **)(lVar11 + 0x10) != (uint *)0x0) {
            lVar9 = *(long *)this;
            iVar14 = -1;
            this_00 = *(InstructionSequence **)(lVar9 + 0x10);
            puVar15 = *(uint **)(lVar11 + 0x10);
            do {
              uVar2 = *puVar15;
              puVar16 = *(uint **)(puVar15 + 2);
              uVar3 = puVar15[1];
              uVar10 = uVar2 + 3;
              if (-1 < (int)uVar2) {
                uVar10 = uVar2;
              }
              lVar6 = InstructionSequence::GetInstructionBlock
                                (this_00,(uVar2 >> 1 & 1) + ((int)uVar10 >> 2));
              uVar2 = puVar15[1];
              uVar10 = uVar2 + 3;
              if (-1 < (int)uVar2) {
                uVar10 = uVar2;
              }
              iVar4 = (uVar2 & 1) - 1;
              if ((uVar2 & 2) != 0) {
                iVar4 = 0;
              }
              lVar7 = InstructionSequence::GetInstructionBlock(this_00,iVar4 + ((int)uVar10 >> 2));
              iVar4 = *(int *)(lVar7 + 100);
              if (*(int *)(lVar6 + 100) <= iVar4) {
                iVar8 = -1;
                uVar12 = (long)*(int *)(lVar6 + 100);
                do {
                  lVar6 = **(long **)(this_00 + 0x10);
                  if ((ulong)((*(long **)(this_00 + 0x10))[1] - lVar6 >> 3) <= uVar12) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  lVar6 = *(long *)(lVar6 + uVar12 * 8);
                  if (*(char *)(lVar6 + 0x78) == '\0') {
                    if (iVar8 != -1) {
                      FUN_0164d178(lVar11,lVar9,iVar8,iVar14,*(uint *)(lVar9 + 0x1d0) >> 2 & 1);
                      iVar8 = -1;
                      iVar14 = -1;
                    }
                  }
                  else {
                    if (iVar8 == -1) {
                      iVar8 = *(int *)(lVar6 + 0x70) << 2;
                    }
                    iVar14 = *(int *)(lVar6 + 0x74) * 4 + -4;
                  }
                  bVar1 = (long)uVar12 < (long)iVar4;
                  uVar12 = uVar12 + 1;
                } while (bVar1);
                if (iVar8 != -1) {
                  FUN_0164d178(lVar11,lVar9,iVar8,uVar3,*(uint *)(lVar9 + 0x1d0) >> 2 & 1);
                  iVar14 = -1;
                }
              }
              puVar15 = puVar16;
            } while (puVar16 != (uint *)0x0);
          }
          if (((*(uint *)(lVar11 + 4) & 6) != 0) && (lVar9 = *(long *)(lVar11 + 0x98), lVar9 != 0))
          {
            lVar6 = *(long *)(lVar11 + 0x18);
            uVar10 = *(uint *)(lVar11 + 4) & 0xfffffff9;
            *(uint *)(lVar11 + 4) = uVar10;
            if (lVar6 != 0) {
              do {
                if ((~*(uint *)(lVar6 + 0x1c) & 3) == 0) {
                  uVar2 = 6;
                  if (((uVar10 ^ 0xffffffff) & 6) != 0) {
                    uVar2 = 4;
                  }
                  uVar10 = uVar2 | uVar10 & 0xfffffff9;
                  *(uint *)(lVar11 + 4) = uVar10;
                }
                lVar6 = *(long *)(lVar6 + 0x10);
              } while ((lVar6 != 0) && ((uVar10 & 6) == 0));
            }
            lVar11 = *(long *)(lVar9 + 0x18);
            uVar10 = *(uint *)(lVar9 + 4) & 0xfffffff9;
            *(uint *)(lVar9 + 4) = uVar10;
            if (lVar11 != 0) {
              do {
                if ((~*(uint *)(lVar11 + 0x1c) & 3) == 0) {
                  uVar2 = 6;
                  if (((uVar10 ^ 0xffffffff) & 6) != 0) {
                    uVar2 = 4;
                  }
                  uVar10 = uVar2 | uVar10 & 0xfffffff9;
                  *(uint *)(lVar9 + 4) = uVar10;
                }
                lVar11 = *(long *)(lVar11 + 0x10);
              } while ((lVar11 != 0) && ((uVar10 & 6) == 0));
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      if ((ulong)(lVar5 >> 3) <= uVar13) break;
      lVar9 = *(long *)this;
    }
  }
  return;
}

