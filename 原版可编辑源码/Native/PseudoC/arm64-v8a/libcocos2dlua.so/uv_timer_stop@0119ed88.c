
undefined8 uv_timer_stop(long param_1)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  
  if ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 8);
    uVar2 = *(uint *)(lVar4 + 0x210);
    if (uVar2 != 0) {
      plVar1 = (long *)(lVar4 + 0x208);
      plVar7 = (long *)(param_1 + 0x68);
      plVar8 = plVar1;
      if (uVar2 - 1 != 0) {
        uVar10 = 0;
        iVar9 = -1;
        uVar11 = uVar2;
        do {
          uVar10 = uVar11 & 1 | uVar10 << 1;
          iVar9 = iVar9 + 1;
          bVar3 = 3 < uVar11;
          uVar11 = uVar11 >> 1;
        } while (bVar3);
        iVar12 = 0;
        do {
          plVar8 = (long *)*plVar8;
          uVar11 = uVar10 & 1;
          uVar10 = uVar10 >> 1;
          if (uVar11 != 0) {
            plVar8 = plVar8 + 1;
          }
          bVar3 = iVar12 != iVar9;
          iVar12 = iVar12 + 1;
        } while (bVar3);
      }
      *(uint *)(lVar4 + 0x210) = uVar2 - 1;
      plVar5 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar5 != plVar7) {
        lVar4 = *(long *)(param_1 + 0x68);
        *plVar5 = lVar4;
        lVar13 = *(long *)(param_1 + 0x70);
        plVar5[2] = *(long *)(param_1 + 0x78);
        plVar5[1] = lVar13;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar5;
        }
        if (lVar13 != 0) {
          *(long **)(lVar13 + 0x10) = plVar5;
        }
        plVar6 = *(long **)(param_1 + 0x78);
        plVar8 = plVar1;
        if ((plVar6 != (long *)0x0) && (plVar8 = plVar6, (long *)*plVar6 != plVar7)) {
          plVar8 = plVar6 + 1;
        }
        *plVar8 = (long)plVar5;
        plVar7 = (long *)*plVar5;
        if (plVar7 != (long *)0x0) goto LAB_0119ee80;
LAB_0119eec0:
        plVar8 = (long *)plVar5[1];
        plVar7 = plVar5;
        if (plVar8 == (long *)0x0) goto LAB_0119ef00;
        do {
          if ((ulong)plVar7[3] <= (ulong)plVar8[3]) {
            if ((ulong)plVar7[3] < (ulong)plVar8[3]) goto LAB_0119ef00;
            if ((ulong)plVar7[5] <= (ulong)plVar8[5]) goto LAB_0119ef00;
          }
          while( true ) {
            if (plVar8 == plVar5) goto LAB_0119ef94;
            lVar14 = plVar5[1];
            lVar4 = *plVar5;
            lVar13 = *plVar8;
            plVar5[1] = plVar8[1];
            *plVar5 = lVar13;
            plVar8[2] = plVar5[2];
            plVar8[1] = lVar14;
            *plVar8 = lVar4;
            plVar5[2] = (long)plVar8;
            plVar7 = (long *)*plVar8;
            if (plVar7 == plVar8) {
              plVar7 = (long *)plVar8[1];
              *plVar8 = (long)plVar5;
            }
            else {
              plVar8[1] = (long)plVar5;
            }
            if (plVar7 != (long *)0x0) {
              plVar7[2] = (long)plVar8;
            }
            if (*plVar5 != 0) {
              *(long **)(*plVar5 + 0x10) = plVar5;
            }
            if (plVar5[1] != 0) {
              *(long **)(plVar5[1] + 0x10) = plVar5;
            }
            plVar6 = (long *)plVar8[2];
            plVar7 = plVar1;
            if ((plVar6 != (long *)0x0) && (plVar7 = plVar6, (long *)*plVar6 != plVar5)) {
              plVar7 = plVar6 + 1;
            }
            *plVar7 = (long)plVar8;
            plVar7 = (long *)*plVar5;
            if (plVar7 == (long *)0x0) goto LAB_0119eec0;
LAB_0119ee80:
            if (((ulong)plVar5[3] <= (ulong)plVar7[3]) &&
               (((ulong)plVar5[3] < (ulong)plVar7[3] || ((ulong)plVar5[5] <= (ulong)plVar7[5]))))
            goto LAB_0119eec0;
            plVar8 = (long *)plVar5[1];
            if (plVar8 != (long *)0x0) break;
LAB_0119ef00:
            plVar8 = plVar7;
          }
        } while( true );
      }
      if ((long *)*plVar1 == plVar7) {
        *plVar1 = 0;
      }
    }
LAB_0119f05c:
    uVar2 = *(uint *)(param_1 + 0x58);
    if (((uVar2 >> 2 & 1) != 0) &&
       (*(uint *)(param_1 + 0x58) = uVar2 & 0xfffffffb, (uVar2 >> 3 & 1) != 0)) {
      *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
    }
  }
  return 0;
LAB_0119ef94:
  plVar7 = (long *)plVar5[2];
  if (plVar7 == (long *)0x0) goto LAB_0119f05c;
  if (((ulong)plVar7[3] <= (ulong)plVar5[3]) &&
     (((ulong)plVar7[3] < (ulong)plVar5[3] || ((ulong)plVar7[5] <= (ulong)plVar5[5]))))
  goto LAB_0119f05c;
  lVar14 = plVar7[1];
  lVar4 = *plVar7;
  lVar13 = *plVar5;
  plVar7[1] = plVar5[1];
  *plVar7 = lVar13;
  plVar5[2] = plVar7[2];
  plVar5[1] = lVar14;
  *plVar5 = lVar4;
  plVar7[2] = (long)plVar5;
  plVar8 = (long *)*plVar5;
  if (plVar8 == plVar5) {
    plVar8 = (long *)plVar5[1];
    *plVar5 = (long)plVar7;
  }
  else {
    plVar5[1] = (long)plVar7;
  }
  if (plVar8 != (long *)0x0) {
    plVar8[2] = (long)plVar5;
  }
  if (*plVar7 != 0) {
    *(long **)(*plVar7 + 0x10) = plVar7;
  }
  if (plVar7[1] != 0) {
    *(long **)(plVar7[1] + 0x10) = plVar7;
  }
  plVar6 = (long *)plVar5[2];
  plVar8 = plVar1;
  if ((plVar6 != (long *)0x0) && (plVar8 = plVar6, (long *)*plVar6 != plVar7)) {
    plVar8 = plVar6 + 1;
  }
  *plVar8 = (long)plVar5;
  goto LAB_0119ef94;
}

