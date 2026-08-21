
/* v8::internal::compiler::ParallelMove::PrepareInsertAfter(v8::internal::compiler::MoveOperands*,
   v8::internal::ZoneVector<v8::internal::compiler::MoveOperands*>*) const */

void __thiscall
v8::internal::compiler::ParallelMove::PrepareInsertAfter
          (ParallelMove *this,MoveOperands *param_1,ZoneVector *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  Zone *this_00;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  
  puVar14 = *(undefined8 **)this;
  puVar3 = *(undefined8 **)(this + 8);
  if (puVar14 != puVar3) {
    pbVar15 = (byte *)0x0;
    pbVar5 = (byte *)0x0;
    do {
      pbVar17 = (byte *)*puVar14;
      if ((*pbVar17 & 7) != 0) {
        uVar9 = *(ulong *)(pbVar17 + 8);
        uVar8 = (uint)uVar9;
        pbVar4 = pbVar5;
        if ((uVar8 >> 2 & 1) == 0) {
          uVar12 = *(ulong *)param_1;
          uVar11 = uVar9;
          if (((uint)uVar12 >> 2 & 1) == 0) goto LAB_01644c5c;
LAB_01644c98:
          uVar1 = 0x180;
          if (((uint)uVar12 >> 5 & 0xff) < 0xb || (uVar12 & 0x1c) != 4) {
            uVar1 = 0;
          }
          if (uVar11 != (uVar12 & 0xffffffffffffe018 | uVar1 | 4)) goto LAB_01644cc0;
        }
        else {
          uVar11 = 0x180;
          if ((uVar8 >> 5 & 0xff) < 0xb || (uVar9 & 0x1c) != 4) {
            uVar11 = 0;
          }
          uVar11 = uVar9 & 0xffffffffffffe018 | uVar11 | 4;
          uVar12 = *(ulong *)param_1;
          if (((uint)uVar12 >> 2 & 1) != 0) goto LAB_01644c98;
LAB_01644c5c:
          if (uVar11 != uVar12) {
LAB_01644cc0:
            if ((uVar8 >> 2 & 1) == 0) {
              uVar11 = *(ulong *)(param_1 + 8);
              if (((uint)uVar11 >> 2 & 1) == 0) goto LAB_01644ccc;
LAB_01644d00:
              uVar12 = 0x180;
              if (((uint)uVar11 >> 5 & 0xff) < 0xb || (uVar11 & 0x1c) != 4) {
                uVar12 = 0;
              }
              if (uVar9 != (uVar11 & 0xffffffffffffe018 | uVar12 | 4)) goto LAB_01644c2c;
            }
            else {
              uVar11 = 0x180;
              if ((uVar8 >> 5 & 0xff) < 0xb || (uVar9 & 0x1c) != 4) {
                uVar11 = 0;
              }
              uVar9 = uVar9 & 0xffffffffffffe018 | uVar11 | 4;
              uVar11 = *(ulong *)(param_1 + 8);
              if (((uint)uVar11 >> 2 & 1) != 0) goto LAB_01644d00;
LAB_01644ccc:
              if (uVar9 != uVar11) goto LAB_01644c2c;
            }
            puVar7 = *(undefined8 **)(param_2 + 8);
            pbVar5 = pbVar17;
            if (puVar7 != *(undefined8 **)(param_2 + 0x10)) {
              *puVar7 = pbVar17;
              *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
              if (pbVar15 == (byte *)0x0) goto LAB_01644c2c;
              goto LAB_01644e00;
            }
            lVar16 = (long)puVar7 - *(long *)param_2 >> 3;
            uVar9 = lVar16 + 1;
            if (uVar9 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            lVar6 = (long)*(undefined8 **)(param_2 + 0x10) - *(long *)param_2;
            uVar11 = lVar6 >> 2;
            if (uVar9 <= uVar11) {
              uVar9 = uVar11;
            }
            if (0x7fffffe < (ulong)(lVar6 >> 3)) {
              uVar9 = 0xfffffff;
            }
            if (uVar9 == 0) {
              lVar6 = 0;
            }
            else {
              this_00 = *(Zone **)(param_2 + 0x18);
              uVar11 = uVar9 * 8;
              lVar6 = *(long *)(this_00 + 0x10);
              if (uVar11 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
                  uVar11 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
                *(ulong *)(this_00 + 0x10) = lVar6 + uVar11;
              }
              else {
                lVar6 = Zone::NewExpand(this_00,uVar11);
              }
            }
            puVar7 = (undefined8 *)(lVar6 + lVar16 * 8);
            puVar10 = puVar7 + 1;
            *puVar7 = pbVar17;
            puVar2 = *(undefined8 **)param_2;
            puVar13 = *(undefined8 **)(param_2 + 8);
            while (puVar13 != puVar2) {
              puVar13 = puVar13 + -1;
              puVar7 = puVar7 + -1;
              *puVar7 = *puVar13;
            }
            *(undefined8 **)param_2 = puVar7;
            *(undefined8 **)(param_2 + 8) = puVar10;
            *(ulong *)(param_2 + 0x10) = lVar6 + uVar9 * 8;
            pbVar17 = pbVar15;
            pbVar4 = pbVar15;
          }
        }
        pbVar15 = pbVar17;
        if (pbVar4 != (byte *)0x0) goto LAB_01644e00;
      }
LAB_01644c2c:
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar3);
    if (pbVar15 != (byte *)0x0) {
LAB_01644e00:
      *(undefined8 *)param_1 = *(undefined8 *)pbVar15;
    }
  }
  return;
}

