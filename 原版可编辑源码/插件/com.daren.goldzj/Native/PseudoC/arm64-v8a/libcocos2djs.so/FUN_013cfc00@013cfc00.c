
undefined8
FUN_013cfc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5)

{
  ulong *puVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  long unaff_x26;
  double dVar8;
  double dVar9;
  ulong in_stack_00000000;
  ulong local_70 [5];
  double local_40 [3];
  ulong local_28 [3];
  
  uVar7 = (ulong)((in_stack_00000000 & 1) == 0);
  puVar1 = local_70 + 4;
  local_70[4] = uVar7;
  do {
    bVar2 = (param_5 & 1) == 0;
    puVar1[6] = param_5;
    puVar1[5] = (ulong)bVar2;
    if (bVar2) {
      if ((int)uVar7 == 0) {
        dVar9 = *(double *)(in_stack_00000000 + 3);
        dVar8 = (double)((int)param_5 >> 1);
        goto LAB_013cfc9c;
      }
      if ((int)in_stack_00000000 <= (int)param_5) {
        return 0xfffffffffffffffe;
      }
    }
    else {
      dVar8 = *(double *)(param_5 + 3);
      if ((int)uVar7 == 0) {
        dVar9 = *(double *)(in_stack_00000000 + 3);
      }
      else {
        dVar9 = (double)((int)in_stack_00000000 >> 1);
      }
LAB_013cfc9c:
      if (dVar9 <= dVar8) {
        return 0xfffffffffffffffe;
      }
    }
    uVar4 = FUN_013c0ba0(param_4,param_5,param_3,param_4,param_5,param_2);
    puVar1[-2] = uVar4;
    puVar1[-1] = puVar1[3];
    puVar1[-4] = puVar1[2];
    puVar1[-3] = puVar1[6];
    uVar7 = FUN_0133fcc0(3,puVar1[4]);
    uVar3 = (uint)uVar7;
    if (uVar3 != (uint)*(undefined8 *)(unaff_x26 + 0xc0)) {
      if ((uVar7 & 1) == 0) {
joined_r0x013cfd30:
        if (uVar3 != 0) goto LAB_013cfd68;
      }
      else if ((uVar3 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
              (lVar5 = unaff_x26 + (ulong)*(uint *)(uVar7 - 1), (*(byte *)(lVar5 + 9) >> 4 & 1) == 0
              )) {
        if ((int)lVar5 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          if (*(short *)(lVar5 + 7) == 0x41) {
            uVar3 = *(uint *)(uVar7 + 3) >> 1 & 0x3fffffff;
            goto joined_r0x013cfd30;
          }
LAB_013cfd68:
          return puVar1[2];
        }
        if (0.0 < ABS(*(double *)(uVar7 + 3))) goto LAB_013cfd68;
      }
    }
    if ((int)puVar1[1] == 0) {
      lVar5 = puVar1[2];
LAB_013cfd98:
      if ((int)puVar1[1] == 0) {
        dVar8 = *(double *)(lVar5 + 3);
      }
      else {
        dVar8 = (double)((int)lVar5 >> 1);
      }
      dVar8 = dVar8 + 1.0;
      iVar6 = (int)dVar8;
      puVar1[2] = (ulong)dVar8;
      if ((dVar8 != (double)iVar6) ||
         (((iVar6 == 0 && ((long)dVar8 < 0)) || (SCARRY4(iVar6,iVar6))))) {
        param_5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar7 = param_5 + 0xc;
        if (uVar7 < **(ulong **)(unaff_x26 + 0x1430)) {
          param_5 = param_5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar7;
        }
        else {
          param_5 = FUN_01348560(lVar5,0xc);
        }
        *(int *)(param_5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(ulong *)(param_5 + 3) = puVar1[2];
      }
      else {
        param_5 = (ulong)(iVar6 * 2);
      }
    }
    else {
      lVar5 = puVar1[2];
      if (SCARRY4((int)lVar5,2)) goto LAB_013cfd98;
      param_5 = (ulong)((int)lVar5 + 2);
    }
    param_2 = *puVar1;
    param_3 = puVar1[-1];
    param_4 = puVar1[-2];
    in_stack_00000000 = puVar1[6];
    uVar7 = puVar1[-4];
    puVar1 = puVar1 + -4;
  } while( true );
}

