
/* ClipperLib::ClipperOffset::FixOrientations() */

void __thiscall ClipperLib::ClipperOffset::FixOrientations(ClipperOffset *this)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar5 = *(ulong *)(this + 0xa0);
  if ((long)uVar5 < 0) {
    lVar3 = *(long *)(this + 200);
  }
  else {
    lVar3 = *(long *)(this + 200);
    plVar7 = *(long **)(lVar3 + (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 |
                                (uVar5 & 0xffffffff) << 3));
    lVar8 = *plVar7;
    uVar5 = plVar7[1] - lVar8;
    uVar9 = uVar5 >> 4;
    if (2 < (int)uVar9) {
      plVar7 = (long *)(lVar8 + 8);
      dVar14 = 0.0;
      uVar13 = 0;
      uVar9 = uVar9 - 1;
      do {
        uVar11 = uVar13;
        plVar2 = (long *)(lVar8 + ((long)(uVar9 << 0x20) >> 0x1c));
        uVar13 = uVar11 + 1;
        dVar14 = dVar14 + ((double)*plVar2 + (double)plVar7[-1]) *
                          ((double)plVar2[1] - (double)*plVar7);
        plVar7 = plVar7 + 2;
        uVar9 = uVar11;
      } while ((uVar5 >> 4 & 0xffffffff) != uVar13);
      if (dVar14 * -0.5 < 0.0) {
        lVar8 = *(long *)(this + 0xd0);
        if ((int)((ulong)(lVar8 - lVar3) >> 3) < 1) {
          return;
        }
        lVar6 = 0;
        do {
          puVar12 = *(ulong **)(lVar3 + lVar6 * 8);
          if (*(int *)((long)puVar12 + 0x44) == 1) {
            puVar10 = (undefined8 *)*puVar12;
            puVar4 = (undefined8 *)puVar12[1];
            uVar5 = (ulong)((long)puVar4 - (long)puVar10) >> 4;
            if (2 < (int)uVar5) {
              plVar7 = puVar10 + 1;
              dVar14 = 0.0;
              uVar9 = 0;
              uVar5 = uVar5 - 1;
              do {
                uVar13 = uVar9;
                plVar2 = (long *)((long)puVar10 + ((long)(uVar5 << 0x20) >> 0x1c));
                uVar9 = uVar13 + 1;
                dVar14 = dVar14 + ((double)*plVar2 + (double)plVar7[-1]) *
                                  ((double)plVar2[1] - (double)*plVar7);
                plVar7 = plVar7 + 2;
                uVar5 = uVar13;
              } while (((ulong)((long)puVar4 - (long)puVar10) >> 4 & 0xffffffff) != uVar9);
              if (dVar14 * -0.5 < 0.0) goto LAB_010398ac;
            }
            if (puVar4 != puVar10) {
LAB_01039964:
              if (puVar10 < puVar4 + -2) {
                puVar4 = puVar4 + -4;
                do {
                  uVar17 = puVar10[1];
                  uVar15 = *puVar10;
                  uVar16 = puVar4[2];
                  puVar10[1] = puVar4[3];
                  *puVar10 = uVar16;
                  puVar4[3] = uVar17;
                  puVar4[2] = uVar15;
                  bVar1 = puVar10 + 2 < puVar4;
                  puVar4 = puVar4 + -2;
                  puVar10 = puVar10 + 2;
                } while (bVar1);
                lVar3 = *(long *)(this + 200);
                lVar8 = *(long *)(this + 0xd0);
              }
            }
          }
          else if (*(int *)((long)puVar12 + 0x44) == 0) {
            puVar10 = (undefined8 *)*puVar12;
            puVar4 = (undefined8 *)puVar12[1];
            if (puVar4 != puVar10) goto LAB_01039964;
          }
LAB_010398ac:
          lVar6 = lVar6 + 1;
          if ((int)((ulong)(lVar8 - lVar3) >> 3) <= lVar6) {
            return;
          }
        } while( true );
      }
    }
  }
  lVar8 = *(long *)(this + 0xd0);
  if (0 < (int)((ulong)(lVar8 - lVar3) >> 3)) {
    lVar6 = 0;
    do {
      puVar12 = *(ulong **)(lVar3 + lVar6 * 8);
      if (*(int *)((long)puVar12 + 0x44) == 1) {
        puVar10 = (undefined8 *)*puVar12;
        puVar4 = (undefined8 *)puVar12[1];
        uVar5 = (ulong)((long)puVar4 - (long)puVar10) >> 4;
        if (2 < (int)uVar5) {
          plVar7 = puVar10 + 1;
          dVar14 = 0.0;
          uVar9 = 0;
          uVar5 = uVar5 - 1;
          do {
            uVar13 = uVar9;
            plVar2 = (long *)((long)puVar10 + ((long)(uVar5 << 0x20) >> 0x1c));
            uVar9 = uVar13 + 1;
            dVar14 = dVar14 + ((double)*plVar2 + (double)plVar7[-1]) *
                              ((double)plVar2[1] - (double)*plVar7);
            plVar7 = plVar7 + 2;
            uVar5 = uVar13;
          } while (((ulong)((long)puVar4 - (long)puVar10) >> 4 & 0xffffffff) != uVar9);
          if (((dVar14 * -0.5 < 0.0) && (puVar4 != puVar10)) && (puVar10 < puVar4 + -2)) {
            puVar4 = puVar4 + -4;
            do {
              uVar17 = puVar10[1];
              uVar15 = *puVar10;
              uVar16 = puVar4[2];
              puVar10[1] = puVar4[3];
              *puVar10 = uVar16;
              puVar4[3] = uVar17;
              puVar4[2] = uVar15;
              bVar1 = puVar10 + 2 < puVar4;
              puVar4 = puVar4 + -2;
              puVar10 = puVar10 + 2;
            } while (bVar1);
            lVar3 = *(long *)(this + 200);
            lVar8 = *(long *)(this + 0xd0);
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)((ulong)(lVar8 - lVar3) >> 3));
  }
  return;
}

