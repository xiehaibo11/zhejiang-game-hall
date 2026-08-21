
void FUN_00d274a8(long *param_1,long *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  
LAB_00d274e4:
  plVar12 = param_2 + -1;
LAB_00d27500:
  plVar11 = param_1;
  lVar10 = (long)param_2 - (long)plVar11;
  uVar8 = lVar10 >> 3;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_00d27908_caseD_0;
  case 2:
    if ((long *)param_2[-1] == (long *)0x0) {
      return;
    }
    plVar12 = (long *)*plVar11;
    if (plVar12 == (long *)0x0) {
      return;
    }
    uVar4 = (**(code **)(*(long *)param_2[-1] + 0x30))();
    uVar5 = (**(code **)(*plVar12 + 0x30))(plVar12);
    if (uVar5 <= uVar4) {
      return;
    }
    lVar10 = *plVar11;
    *plVar11 = param_2[-1];
    param_2[-1] = lVar10;
    return;
  case 3:
    FUN_00d27adc(plVar11,plVar11 + 1,plVar12);
    return;
  case 4:
    FUN_00d27c80(plVar11,plVar11 + 1,plVar11 + 2,plVar12);
    return;
  case 5:
    FUN_00d27db8(plVar11,plVar11 + 1,plVar11 + 2,plVar11 + 3,plVar12);
    return;
  default:
    if (lVar10 < 0xf8) {
      FUN_00d27adc(plVar11,plVar11 + 1,plVar11 + 2);
      if (plVar11 + 3 == param_2) {
        return;
      }
      lVar10 = 0;
      plVar12 = plVar11 + 3;
      plVar13 = plVar11 + 2;
      break;
    }
    uVar7 = uVar8;
    if ((long)uVar8 < 0) {
      uVar7 = uVar8 + 1;
    }
    plVar13 = (long *)((long)plVar11 + (uVar7 & 0x3ffffffffffffffe) * 4);
    if (lVar10 < 0x1f39) {
      iVar3 = FUN_00d27adc(plVar11,plVar13,plVar12);
    }
    else {
      uVar7 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar7 = uVar8;
      }
      lVar10 = (uVar7 & 0x7ffffffffffffffc) * 2;
      iVar3 = FUN_00d27db8(plVar11,(long)plVar11 + lVar10,plVar13,(long)plVar13 + lVar10,plVar12);
    }
    if (((long *)*plVar11 != (long *)0x0) && (plVar14 = (long *)*plVar13, plVar14 != (long *)0x0)) {
      uVar4 = (**(code **)(*(long *)*plVar11 + 0x30))();
      uVar5 = (**(code **)(*plVar14 + 0x30))(plVar14);
      plVar14 = plVar12;
      if (uVar5 <= uVar4) goto LAB_00d275c0;
      goto LAB_00d27628;
    }
LAB_00d275c0:
    plVar14 = param_2 + -2;
    if (plVar11 != param_2 + -2) {
      do {
        if (((long *)*plVar14 != (long *)0x0) &&
           (plVar16 = (long *)*plVar13, plVar16 != (long *)0x0)) {
          uVar4 = (**(code **)(*(long *)*plVar14 + 0x30))();
          uVar5 = (**(code **)(*plVar16 + 0x30))(plVar16);
          if (uVar4 < uVar5) goto LAB_00d27614;
        }
        plVar14 = plVar14 + -1;
        if (plVar11 == plVar14) break;
      } while( true );
    }
    param_1 = plVar11 + 1;
    if (((long *)*plVar11 != (long *)0x0) && (plVar13 = (long *)*plVar12, plVar13 != (long *)0x0)) {
      uVar4 = (**(code **)(*(long *)*plVar11 + 0x30))();
      uVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
      if (uVar4 < uVar5) goto LAB_00d27808;
    }
    if (param_1 == plVar12) {
      return;
    }
    param_1 = plVar11 + 2;
    goto LAB_00d277b0;
  }
LAB_00d2797c:
  plVar14 = plVar12;
  if (((long *)*plVar14 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    uVar4 = (**(code **)(*(long *)*plVar14 + 0x30))();
    uVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
    if (uVar4 < uVar5) {
      plVar12 = (long *)*plVar14;
      lVar1 = lVar10;
      do {
        lVar9 = lVar1;
        *(undefined8 *)((long)plVar11 + lVar9 + 0x18) =
             *(undefined8 *)((long)plVar11 + lVar9 + 0x10);
        plVar13 = plVar11;
        if (lVar9 == -0x10) goto LAB_00d27a28;
        if ((plVar12 == (long *)0x0) ||
           (plVar13 = *(long **)((long)plVar11 + lVar9 + 8), plVar13 == (long *)0x0)) break;
        uVar4 = (**(code **)(*plVar12 + 0x30))(plVar12);
        uVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
        lVar1 = lVar9 + -8;
      } while (uVar4 < uVar5);
      plVar13 = (long *)((long)plVar11 + lVar9 + 0x10);
LAB_00d27a28:
      *plVar13 = (long)plVar12;
    }
  }
  lVar10 = lVar10 + 8;
  plVar12 = plVar14 + 1;
  plVar13 = plVar14;
  if (plVar14 + 1 == param_2) {
switchD_00d27908_caseD_0:
    return;
  }
  goto LAB_00d2797c;
LAB_00d27614:
  lVar10 = *plVar11;
  iVar3 = iVar3 + 1;
  *plVar11 = *plVar14;
  *plVar14 = lVar10;
LAB_00d27628:
  plVar16 = plVar11 + 1;
  plVar6 = plVar13;
  if (plVar16 < plVar14) {
LAB_00d27654:
    plVar13 = plVar6;
    plVar6 = (long *)*plVar16;
    plVar15 = plVar16;
    while ((plVar6 != (long *)0x0 && (plVar16 = (long *)*plVar13, plVar16 != (long *)0x0))) {
      uVar4 = (**(code **)(*plVar6 + 0x30))();
      uVar5 = (**(code **)(*plVar16 + 0x30))(plVar16);
      if (uVar5 <= uVar4) break;
      plVar15 = plVar15 + 1;
      plVar6 = (long *)*plVar15;
    }
    do {
      do {
        do {
          plVar14 = plVar14 + -1;
          plVar16 = (long *)*plVar13;
        } while ((long *)*plVar14 == (long *)0x0);
      } while (plVar16 == (long *)0x0);
      uVar4 = (**(code **)(*(long *)*plVar14 + 0x30))();
      uVar5 = (**(code **)(*plVar16 + 0x30))(plVar16);
    } while (uVar5 <= uVar4);
    plVar16 = plVar15;
    if (plVar15 <= plVar14) {
      lVar10 = *plVar15;
      iVar3 = iVar3 + 1;
      plVar16 = plVar15 + 1;
      *plVar15 = *plVar14;
      *plVar14 = lVar10;
      plVar6 = plVar14;
      if (plVar13 != plVar15) {
        plVar6 = plVar13;
      }
      goto LAB_00d27654;
    }
  }
  if (((plVar16 != plVar13) && ((long *)*plVar13 != (long *)0x0)) &&
     (plVar14 = (long *)*plVar16, plVar14 != (long *)0x0)) {
    uVar4 = (**(code **)(*(long *)*plVar13 + 0x30))();
    uVar5 = (**(code **)(*plVar14 + 0x30))(plVar14);
    if (uVar4 < uVar5) {
      lVar10 = *plVar16;
      iVar3 = iVar3 + 1;
      *plVar16 = *plVar13;
      *plVar13 = lVar10;
    }
  }
  if (iVar3 == 0) {
    uVar8 = FUN_00d27f48(plVar11,plVar16);
    uVar7 = FUN_00d27f48(plVar16 + 1,param_2);
    if ((uVar7 & 1) != 0) goto LAB_00d278d4;
    param_1 = plVar16 + 1;
    if ((uVar8 & 1) != 0) goto LAB_00d27500;
  }
  if ((long)param_2 - (long)plVar16 <= (long)plVar16 - (long)plVar11) {
    FUN_00d274a8(plVar16 + 1,param_2);
    param_2 = plVar16;
    param_1 = plVar11;
    goto LAB_00d274e4;
  }
  FUN_00d274a8(plVar11,plVar16);
  param_1 = plVar16 + 1;
  goto LAB_00d27500;
LAB_00d278d4:
  bVar2 = (uVar8 & 1) == 0;
  if (bVar2) {
    param_2 = plVar16;
  }
  uVar4 = 1;
  if (bVar2) {
    uVar4 = 2;
  }
  param_1 = plVar11;
  if (4 < uVar4) {
    return;
  }
LAB_00d278bc:
  if ((1 << uVar4 & 0x15U) == 0) {
    return;
  }
  goto LAB_00d274e4;
LAB_00d277b0:
  if (((long *)*plVar11 != (long *)0x0) && (plVar13 = (long *)param_1[-1], plVar13 != (long *)0x0))
  {
    uVar4 = (**(code **)(*(long *)*plVar11 + 0x30))();
    uVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
    if (uVar4 < uVar5) goto LAB_00d277f8;
  }
  param_1 = param_1 + 1;
  if (param_2 == param_1) {
    return;
  }
  goto LAB_00d277b0;
LAB_00d277f8:
  lVar10 = param_1[-1];
  param_1[-1] = *plVar12;
  *plVar12 = lVar10;
LAB_00d27808:
  if (param_1 == plVar12) {
    return;
  }
  do {
    while( true ) {
      plVar13 = (long *)*param_1;
      if (((long *)*plVar11 != (long *)0x0) && (plVar13 != (long *)0x0)) break;
LAB_00d27814:
      param_1 = param_1 + 1;
    }
    uVar4 = (**(code **)(*(long *)*plVar11 + 0x30))();
    uVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
    if (uVar5 <= uVar4) goto LAB_00d27814;
    do {
      plVar12 = plVar12 + -1;
      if (((long *)*plVar11 == (long *)0x0) || (plVar13 = (long *)*plVar12, plVar13 == (long *)0x0))
      break;
      uVar4 = (**(code **)(*(long *)*plVar11 + 0x30))();
      uVar5 = (**(code **)(*plVar13 + 0x30))(plVar13);
    } while (uVar4 < uVar5);
    if (plVar12 <= param_1) break;
    lVar10 = *param_1;
    *param_1 = *plVar12;
    *plVar12 = lVar10;
    param_1 = param_1 + 1;
  } while( true );
  uVar4 = 4;
  goto LAB_00d278bc;
}

