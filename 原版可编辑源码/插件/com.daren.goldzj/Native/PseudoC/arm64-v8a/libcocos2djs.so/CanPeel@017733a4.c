
/* v8::internal::compiler::LoopPeeler::CanPeel(v8::internal::compiler::LoopTree::Loop*) */

undefined8 __thiscall v8::internal::compiler::LoopPeeler::CanPeel(LoopPeeler *this,Loop *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  Loop *pLVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  
  iVar2 = *(int *)(param_1 + 0x30);
  lVar3 = (long)iVar2;
  if (iVar2 != *(int *)(param_1 + 0x34)) {
    lVar12 = *(long *)(this + 0x10);
    lVar11 = (long)*(int *)(param_1 + 0x34) * 8;
    lVar14 = lVar11 + lVar3 * -8;
    plVar10 = (long *)(*(long *)(lVar12 + 0x68) + lVar3 * 8);
    plVar15 = plVar10;
    do {
      if (*(short *)(*(long *)*plVar15 + 0x10) == 1) {
        if (iVar2 == *(int *)(param_1 + 0x3c)) {
          return 1;
        }
        plVar17 = plVar10;
        do {
          plVar13 = (long *)*plVar17;
          plVar4 = (long *)plVar13[3];
          if (plVar4 != (long *)0x0) {
            plVar1 = plVar13 + 4;
            do {
              plVar16 = plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3;
              if ((*(uint *)(plVar4 + 2) & 1) == 0) {
                plVar16 = (long *)*plVar16;
              }
              uVar5 = (ulong)*(uint *)((long)plVar16 + 0x14) & 0xffffff;
              if (((uVar5 < (ulong)(*(long *)(lVar12 + 0x50) - *(long *)(lVar12 + 0x48) >> 2)) &&
                  (iVar2 = *(int *)(*(long *)(lVar12 + 0x48) + uVar5 * 4), 0 < iVar2)) &&
                 (*(long *)(lVar12 + 0x28) != 0)) {
                pLVar6 = (Loop *)(*(long *)(lVar12 + 0x28) + (long)iVar2 * 0x40 + -0x40);
                do {
                  if (pLVar6 == param_1) goto LAB_01773460;
                  pLVar6 = *(Loop **)pLVar6;
                } while (pLVar6 != (Loop *)0x0);
              }
              uVar7 = (uint)*(ushort *)(*plVar13 + 0x10);
              if (uVar7 - 0x35 < 2) {
                plVar9 = plVar1;
                if ((~*(uint *)((long)plVar13 + 0x14) & 0xf000000) == 0) {
                  plVar9 = (long *)(*plVar1 + 0x10);
                }
                plVar8 = (long *)(plVar9[1] + 0x20);
                if ((~*(uint *)(plVar9[1] + 0x14) & 0xf000000) == 0) {
                  lVar14 = *plVar8;
LAB_01773450:
                  plVar8 = (long *)(lVar14 + 0x10);
                }
LAB_01773454:
                if ((long *)plVar8[1] != (long *)*plVar15) {
LAB_01773540:
                  if (FLAG_trace_turbo_loop == '\0') {
                    return 0;
                  }
                  lVar11 = lVar11 + lVar3 * -8;
                  do {
                    if (*(short *)(*(long *)*plVar10 + 0x10) == 1) {
                      PrintF("Cannot peel loop %i. Loop exit without explicit mark: Node %i (%s) is inside loop, but its use %i (%s) is outside.\n"
                             ,(ulong)(*(uint *)(*plVar10 + 0x14) & 0xffffff),
                             (ulong)(*(uint *)((long)plVar13 + 0x14) & 0xffffff),
                             *(undefined8 *)(*plVar13 + 8),uVar5,*(undefined8 *)(*plVar16 + 8));
                      return 0;
                    }
                    lVar11 = lVar11 + -8;
                    plVar10 = plVar10 + 1;
                  } while (lVar11 != 0);
                  goto LAB_017733f4;
                }
              }
              else {
                if (uVar7 == 0x34) {
                  plVar8 = plVar1;
                  if ((~*(uint *)((long)plVar13 + 0x14) & 0xf000000) == 0) {
                    lVar14 = *plVar1;
                    goto LAB_01773450;
                  }
                  goto LAB_01773454;
                }
                if (*(short *)(*plVar16 + 0x10) != 0x12) goto LAB_01773540;
              }
LAB_01773460:
              plVar4 = (long *)*plVar4;
            } while (plVar4 != (long *)0x0);
          }
          plVar17 = plVar17 + 1;
          if (plVar17 == (long *)(*(long *)(lVar12 + 0x68) + (long)*(int *)(param_1 + 0x3c) * 8)) {
            return 1;
          }
        } while( true );
      }
      lVar14 = lVar14 + -8;
      plVar15 = plVar15 + 1;
    } while (lVar14 != 0);
  }
LAB_017733f4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

