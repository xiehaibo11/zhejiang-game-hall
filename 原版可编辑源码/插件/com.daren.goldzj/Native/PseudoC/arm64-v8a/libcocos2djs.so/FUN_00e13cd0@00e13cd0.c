
int FUN_00e13cd0(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar2;
  lVar8 = *param_1;
  uVar1 = *(short *)((long)param_1 + 0x1a) + param_2 + (int)*(short *)((long)param_1 + 0x62);
  if (uVar2 < uVar1) {
    uVar1 = uVar1 + 7;
    if (uVar1 >> 0xf != 0) {
      return 10;
    }
    lVar12 = param_1[4];
    uVar1 = uVar1 & 0xfffffff8;
    uVar10 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (lVar12 != 0) {
        (**(code **)(lVar8 + 0x10))(lVar8,lVar12);
      }
      plVar13 = param_1 + 5;
      param_1[4] = 0;
      if (*plVar13 == 0) {
        *plVar13 = 0;
LAB_00e13f14:
        cVar3 = *(char *)((long)param_1 + 0x14);
      }
      else {
        (**(code **)(lVar8 + 0x10))(lVar8);
        *plVar13 = 0;
        cVar3 = *(char *)((long)param_1 + 0x14);
      }
joined_r0x00e13ed8:
      if (cVar3 != '\0') {
        lVar12 = param_1[8];
        uVar7 = uVar1 * 2;
        uVar14 = (ulong)uVar7;
        if (uVar7 == 0) {
          if (lVar12 == 0) {
LAB_00e13f64:
            param_1[8] = lVar12;
          }
          else {
            (**(code **)(lVar8 + 0x10))(lVar8,lVar12);
            lVar12 = 0;
            param_1[8] = 0;
          }
        }
        else {
          uVar2 = uVar2 * 2;
          uVar15 = (ulong)uVar2;
          if (uVar2 == 0) {
            lVar12 = (**(code **)(lVar8 + 8))(lVar8,uVar14 << 4);
            iVar11 = (uint)(lVar12 == 0) << 6;
            if (uVar7 != 0) goto LAB_00e13f48;
          }
          else {
            lVar6 = (**(code **)(lVar8 + 0x18))(lVar8,uVar15 << 4,uVar14 << 4,lVar12);
            iVar11 = (uint)(lVar6 == 0) << 6;
            if (lVar6 != 0) {
              lVar12 = lVar6;
            }
            if (uVar2 < uVar7) {
LAB_00e13f48:
              if ((iVar11 == 0) && (lVar12 != 0)) {
                memset((void *)(lVar12 + uVar15 * 0x10),0,(uVar14 - uVar15) * 0x10);
                goto LAB_00e13f64;
              }
            }
          }
          param_1[8] = lVar12;
          if (iVar11 != 0) goto LAB_00e1409c;
        }
        memmove((void *)(lVar12 + uVar10 * 0x10),(void *)(lVar12 + uVar9 * 0x10),uVar9 * 0x10);
        param_1[9] = param_1[8] + uVar10 * 0x10;
      }
      bVar5 = true;
      *(uint *)(param_1 + 1) = uVar1;
      goto LAB_00e13f9c;
    }
    if (uVar2 == 0) {
      lVar12 = (**(code **)(lVar8 + 8))(lVar8,uVar10 << 4);
      iVar11 = (uint)(lVar12 == 0) << 6;
      if (uVar1 != 0) goto LAB_00e13d64;
LAB_00e13e74:
      param_1[4] = lVar12;
      if (iVar11 == 0) {
        lVar12 = param_1[5];
        if (uVar2 == 0) goto LAB_00e13d90;
LAB_00e13e88:
        lVar6 = (**(code **)(lVar8 + 0x18))(lVar8,uVar9,uVar10,lVar12);
        bVar5 = lVar6 == 0;
        if (!bVar5) {
          lVar12 = lVar6;
        }
        goto joined_r0x00e13eb4;
      }
    }
    else {
      lVar6 = (**(code **)(lVar8 + 0x18))(lVar8,uVar9 << 4,uVar10 << 4,lVar12);
      iVar11 = (uint)(lVar6 == 0) << 6;
      if (lVar6 != 0) {
        lVar12 = lVar6;
      }
      if (uVar1 <= uVar2) goto LAB_00e13e74;
LAB_00e13d64:
      if ((iVar11 != 0) || (lVar12 == 0)) goto LAB_00e13e74;
      memset((void *)(lVar12 + uVar9 * 0x10),0,(uVar10 - uVar9) * 0x10);
      param_1[4] = lVar12;
      lVar12 = param_1[5];
      if (uVar2 != 0) goto LAB_00e13e88;
LAB_00e13d90:
      lVar12 = (**(code **)(lVar8 + 8))(lVar8,uVar10);
      bVar5 = lVar12 == 0;
joined_r0x00e13eb4:
      uVar7 = (uint)bVar5;
      iVar11 = uVar7 << 6;
      if (((uVar2 < uVar1) && (uVar7 == 0)) && (lVar12 != 0)) {
        memset((void *)(lVar12 + uVar9),0,uVar10 - uVar9);
        param_1[5] = lVar12;
        cVar3 = *(char *)((long)param_1 + 0x14);
        goto joined_r0x00e13ed8;
      }
      param_1[5] = lVar12;
      if (uVar7 == 0) goto LAB_00e13f14;
    }
LAB_00e1409c:
    lVar8 = *param_1;
    if (param_1[4] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[4] = 0;
    if (param_1[5] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[5] = 0;
    if (param_1[6] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[6] = 0;
    if (param_1[8] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    param_1[8] = 0;
    if (param_1[0xb] != 0) {
      (**(code **)(lVar8 + 0x10))(lVar8);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[0xd] = param_1[4];
    param_1[0xc] = param_1[3];
    param_1[0xf] = param_1[6];
    param_1[0xe] = param_1[5];
    param_1[0xb] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    param_1[0x14] = 0;
    param_1[0x11] = param_1[8];
    param_1[0x10] = param_1[7];
    param_1[0x13] = param_1[10];
    param_1[0x12] = param_1[9];
  }
  else {
    bVar5 = false;
LAB_00e13f9c:
    sVar4 = (short)param_1[3];
    uVar2 = *(uint *)((long)param_1 + 0xc);
    uVar9 = (ulong)uVar2;
    uVar1 = sVar4 + param_3 + (int)(short)param_1[0xc];
    if (uVar2 < uVar1) {
      uVar1 = uVar1 + 3;
      if (uVar1 >> 0xf != 0) {
        return 10;
      }
      lVar12 = param_1[6];
      uVar1 = uVar1 & 0xfffffffc;
      if (uVar1 == 0) {
        if (lVar12 != 0) {
          (**(code **)(lVar8 + 0x10))(lVar8,lVar12);
        }
        lVar12 = 0;
        param_1[6] = 0;
      }
      else {
        uVar10 = (ulong)uVar1;
        if (uVar2 == 0) {
          lVar12 = (**(code **)(lVar8 + 8))(lVar8,uVar10 << 1);
          iVar11 = (uint)(lVar12 == 0) << 6;
          if (uVar1 != 0) goto LAB_00e14020;
        }
        else {
          lVar8 = (**(code **)(lVar8 + 0x18))(lVar8,uVar9 << 1,uVar10 << 1,lVar12);
          iVar11 = (uint)(lVar8 == 0) << 6;
          if (lVar8 != 0) {
            lVar12 = lVar8;
          }
          if (uVar2 < uVar1) {
LAB_00e14020:
            if ((iVar11 == 0) && (lVar12 != 0)) {
              memset((void *)(lVar12 + uVar9 * 2),0,(uVar10 - uVar9) * 2);
              param_1[6] = lVar12;
              goto LAB_00e1414c;
            }
          }
        }
        param_1[6] = lVar12;
        if (iVar11 != 0) goto LAB_00e1409c;
      }
LAB_00e1414c:
      sVar4 = (short)param_1[3];
      *(uint *)((long)param_1 + 0xc) = uVar1;
    }
    else {
      if (!bVar5) {
        return 0;
      }
      lVar12 = param_1[6];
    }
    lVar8 = (long)*(short *)((long)param_1 + 0x1a);
    iVar11 = 0;
    param_1[0xd] = param_1[4] + lVar8 * 0x10;
    param_1[0xe] = param_1[5] + lVar8;
    param_1[0xf] = lVar12 + (long)sVar4 * 2;
    if (*(char *)((long)param_1 + 0x14) != '\0') {
      param_1[0x11] = param_1[8] + lVar8 * 0x10;
      param_1[0x12] = param_1[9] + lVar8 * 0x10;
    }
  }
  return iVar11;
}

