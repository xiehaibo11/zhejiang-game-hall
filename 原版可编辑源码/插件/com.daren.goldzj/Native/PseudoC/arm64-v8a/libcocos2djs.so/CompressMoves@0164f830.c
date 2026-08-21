
/* v8::internal::compiler::MoveOptimizer::CompressMoves(v8::internal::compiler::ParallelMove*,
   v8::internal::ZoneVector<v8::internal::compiler::MoveOperands*>*) */

void __thiscall
v8::internal::compiler::MoveOptimizer::CompressMoves
          (MoveOptimizer *this,ParallelMove *param_1,ZoneVector *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  MoveOperands *pMVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  Zone *this_00;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  long lVar13;
  
  if (param_2 != (ZoneVector *)0x0) {
    if (*(long *)param_1 != *(long *)(param_1 + 8)) {
      puVar3 = *(undefined8 **)(param_2 + 8);
      for (puVar10 = *(undefined8 **)param_2; puVar10 != puVar3; puVar10 = puVar10 + 1) {
        pMVar4 = (MoveOperands *)*puVar10;
        uVar5 = *(ulong *)pMVar4;
        if ((uVar5 & 7) != 0) {
          if (((uint)uVar5 >> 2 & 1) == 0) {
            uVar8 = *(ulong *)(pMVar4 + 8);
            if (((uint)uVar8 >> 2 & 1) != 0) goto LAB_0164f8e0;
LAB_0164f8ac:
            if (uVar5 == uVar8) goto LAB_0164f884;
          }
          else {
            uVar8 = 0x180;
            if (((uint)uVar5 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
              uVar8 = 0;
            }
            uVar5 = uVar5 & 0xffffffffffffe018 | uVar8 | 4;
            uVar8 = *(ulong *)(pMVar4 + 8);
            if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_0164f8ac;
LAB_0164f8e0:
            uVar1 = 0x180;
            if (((uint)uVar8 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
              uVar1 = 0;
            }
            if (uVar5 == (uVar8 & 0xffffffffffffe018 | uVar1 | 4)) goto LAB_0164f884;
          }
          ParallelMove::PrepareInsertAfter(param_1,pMVar4,(ZoneVector *)(this + 0x10));
        }
LAB_0164f884:
      }
      puVar10 = *(undefined8 **)(this + 0x10);
      puVar3 = *(undefined8 **)(this + 0x18);
      if (puVar10 != puVar3) {
        do {
          puVar6 = puVar10 + 1;
          puVar10 = (undefined8 *)*puVar10;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10 = puVar6;
        } while (puVar3 != puVar6);
        puVar10 = *(undefined8 **)(this + 0x10);
      }
      *(undefined8 **)(this + 0x18) = puVar10;
    }
    puVar10 = *(undefined8 **)param_2;
    puVar3 = *(undefined8 **)(param_2 + 8);
    if (puVar10 != puVar3) {
      do {
        puVar12 = (ulong *)*puVar10;
        uVar5 = *puVar12;
        if ((uVar5 & 7) != 0) {
          if (((uint)uVar5 >> 2 & 1) == 0) {
            uVar8 = puVar12[1];
            if (((uint)uVar8 >> 2 & 1) != 0) goto LAB_0164f9c8;
LAB_0164f994:
            if (uVar5 == uVar8) goto LAB_0164f96c;
          }
          else {
            uVar8 = 0x180;
            if (((uint)uVar5 >> 5 & 0xff) < 0xb || (uVar5 & 0x1c) != 4) {
              uVar8 = 0;
            }
            uVar5 = uVar5 & 0xffffffffffffe018 | uVar8 | 4;
            uVar8 = puVar12[1];
            if (((uint)uVar8 >> 2 & 1) == 0) goto LAB_0164f994;
LAB_0164f9c8:
            uVar1 = 0x180;
            if (((uint)uVar8 >> 5 & 0xff) < 0xb || (uVar8 & 0x1c) != 4) {
              uVar1 = 0;
            }
            if (uVar5 == (uVar8 & 0xffffffffffffe018 | uVar1 | 4)) goto LAB_0164f96c;
          }
          puVar6 = *(undefined8 **)(param_1 + 8);
          if (puVar6 == *(undefined8 **)(param_1 + 0x10)) {
            lVar13 = (long)puVar6 - *(long *)param_1 >> 3;
            uVar5 = lVar13 + 1;
            if (uVar5 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar7 = (long)*(undefined8 **)(param_1 + 0x10) - *(long *)param_1;
            uVar8 = lVar7 >> 2;
            if (uVar5 <= uVar8) {
              uVar5 = uVar8;
            }
            if (0x7fffffe < (ulong)(lVar7 >> 3)) {
              uVar5 = 0xfffffff;
            }
            if (uVar5 == 0) {
              lVar7 = 0;
            }
            else {
              this_00 = *(Zone **)(param_1 + 0x18);
              uVar8 = uVar5 * 8;
              lVar7 = *(long *)(this_00 + 0x10);
              if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
                  uVar8 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
                *(ulong *)(this_00 + 0x10) = lVar7 + uVar8;
              }
              else {
                lVar7 = Zone::NewExpand(this_00,uVar8);
              }
            }
            puVar6 = (undefined8 *)(lVar7 + lVar13 * 8);
            puVar9 = puVar6 + 1;
            *puVar6 = puVar12;
            puVar2 = *(undefined8 **)param_1;
            puVar11 = *(undefined8 **)(param_1 + 8);
            while (puVar11 != puVar2) {
              puVar11 = puVar11 + -1;
              puVar6 = puVar6 + -1;
              *puVar6 = *puVar11;
            }
            *(undefined8 **)param_1 = puVar6;
            *(undefined8 **)(param_1 + 8) = puVar9;
            *(ulong *)(param_1 + 0x10) = lVar7 + uVar5 * 8;
          }
          else {
            *puVar6 = puVar12;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
          }
        }
LAB_0164f96c:
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar3);
      puVar10 = *(undefined8 **)param_2;
    }
    *(undefined8 **)(param_2 + 8) = puVar10;
  }
  return;
}

