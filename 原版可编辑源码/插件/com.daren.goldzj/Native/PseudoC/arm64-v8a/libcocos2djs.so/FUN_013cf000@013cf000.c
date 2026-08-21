
undefined8
FUN_013cf000(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5)

{
  ulong uVar1;
  ulong *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x26;
  double dVar9;
  double dVar10;
  ulong in_stack_00000000;
  ulong local_80 [6];
  undefined8 local_48;
  double local_40 [2];
  ulong local_30 [4];
  
  uVar8 = (ulong)((in_stack_00000000 & 1) == 0);
  puVar2 = local_80 + 4;
  local_80[5] = uVar8;
  local_48 = param_4;
  do {
    bVar3 = (param_5 & 1) == 0;
    puVar2[7] = param_5;
    puVar2[6] = (ulong)bVar3;
    if (bVar3) {
      if ((int)uVar8 == 0) {
        dVar10 = *(double *)(in_stack_00000000 + 3);
        dVar9 = (double)((int)param_5 >> 1);
        goto LAB_013cf09c;
      }
      if ((int)in_stack_00000000 <= (int)param_5) goto LAB_013cf158;
    }
    else {
      dVar9 = *(double *)(param_5 + 3);
      if ((int)uVar8 == 0) {
        dVar10 = *(double *)(in_stack_00000000 + 3);
      }
      else {
        dVar10 = (double)((int)in_stack_00000000 >> 1);
      }
LAB_013cf09c:
      if (dVar10 <= dVar9) {
LAB_013cf158:
        return *(undefined8 *)(unaff_x26 + 0xa0);
      }
    }
    uVar5 = FUN_013c0ba0(param_4,param_5,param_3,param_4,param_5,param_2);
    puVar2[-2] = uVar5;
    puVar2[-1] = puVar2[4];
    puVar2[-4] = puVar2[3];
    puVar2[-3] = puVar2[7];
    puVar2[8] = uVar5;
    uVar8 = FUN_0133fcc0(3,puVar2[5]);
    uVar4 = (uint)uVar8;
    if (uVar4 != (uint)*(undefined8 *)(unaff_x26 + 0xc0)) {
      if ((uVar8 & 1) == 0) {
joined_r0x013cf138:
        if (uVar4 != 0) goto LAB_013cf16c;
      }
      else if ((uVar4 != (uint)*(undefined8 *)(unaff_x26 + 200)) &&
              (lVar7 = unaff_x26 + (ulong)*(uint *)(uVar8 - 1), (*(byte *)(lVar7 + 9) >> 4 & 1) == 0
              )) {
        if ((int)lVar7 != (int)*(undefined8 *)(unaff_x26 + 0x140)) {
          if (*(short *)(lVar7 + 7) == 0x41) {
            uVar4 = *(uint *)(uVar8 + 3) >> 1 & 0x3fffffff;
            goto joined_r0x013cf138;
          }
LAB_013cf16c:
          return puVar2[4];
        }
        if (0.0 < ABS(*(double *)(uVar8 + 3))) goto LAB_013cf16c;
      }
    }
    if ((int)puVar2[2] == 0) {
      lVar7 = puVar2[3];
LAB_013cf19c:
      if ((int)puVar2[2] == 0) {
        dVar9 = *(double *)(lVar7 + 3);
      }
      else {
        dVar9 = (double)((int)lVar7 >> 1);
      }
      dVar9 = dVar9 + 1.0;
      iVar6 = (int)dVar9;
      puVar2[4] = (ulong)dVar9;
      if ((dVar9 != (double)iVar6) ||
         (((iVar6 == 0 && ((long)dVar9 < 0)) || (SCARRY4(iVar6,iVar6))))) {
        param_5 = **(ulong **)(unaff_x26 + 0x1428);
        uVar1 = param_5 + 0xc;
        if (uVar1 < **(ulong **)(unaff_x26 + 0x1430)) {
          param_5 = param_5 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar1;
        }
        else {
          param_5 = FUN_01348560(uVar8,0xc);
        }
        *(int *)(param_5 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(ulong *)(param_5 + 3) = puVar2[4];
      }
      else {
        param_5 = (ulong)(iVar6 * 2);
      }
    }
    else {
      lVar7 = puVar2[3];
      if (SCARRY4((int)lVar7,2)) goto LAB_013cf19c;
      param_5 = (ulong)((int)lVar7 + 2);
    }
    param_2 = puVar2[1];
    param_3 = *puVar2;
    param_4 = puVar2[-1];
    in_stack_00000000 = puVar2[8];
    uVar8 = puVar2[-3];
    puVar2 = puVar2 + -4;
  } while( true );
}

