
int FUN_018093f4(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  
  plVar8 = (long *)*param_1;
  if (plVar8 == (long *)0x0) {
LAB_01809478:
    bVar2 = true;
    if (param_2 != (long *)0x0) goto LAB_01809480;
LAB_01809454:
    if (bVar2) goto LAB_018094d0;
    plVar8 = (long *)0x0;
  }
  else {
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar5 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      iVar5 = *(int *)plVar8[3];
    }
    if (iVar5 == -1) {
      *param_1 = 0;
      goto LAB_01809478;
    }
    bVar2 = *param_1 == 0;
    if (param_2 == (long *)0x0) goto LAB_01809454;
LAB_01809480:
    if ((int *)param_2[3] == (int *)param_2[4]) {
      iVar5 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    else {
      iVar5 = *(int *)param_2[3];
    }
    plVar8 = (long *)0x0;
    if (iVar5 != -1) {
      plVar8 = param_2;
    }
    if (bVar2 == (iVar5 == -1)) {
LAB_018094d0:
      iVar5 = 0;
      uVar4 = *param_3 | 6;
      goto LAB_0180975c;
    }
  }
  plVar9 = (long *)*param_1;
  if ((undefined4 *)plVar9[3] == (undefined4 *)plVar9[4]) {
    uVar6 = (**(code **)(*plVar9 + 0x48))();
  }
  else {
    uVar6 = *(undefined4 *)plVar9[3];
  }
  uVar10 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar6);
  if ((uVar10 & 1) != 0) {
    uVar4 = (**(code **)(*param_4 + 0x68))(param_4,uVar6,0);
    plVar9 = (long *)*param_1;
    uVar4 = uVar4 & 0xff;
    if (plVar9[3] == plVar9[4]) {
      (**(code **)(*plVar9 + 0x50))();
    }
    else {
      plVar9[3] = plVar9[3] + 4;
    }
    param_5 = param_5 + -1;
    plVar9 = (long *)*param_1;
    if (plVar9 != (long *)0x0) goto LAB_01809588;
LAB_018095e8:
    plVar9 = (long *)0x0;
    bVar2 = true;
    iVar5 = uVar4 - 0x30;
    if (plVar8 == (long *)0x0) goto LAB_018095b4;
LAB_018095f4:
    if ((int *)plVar8[3] == (int *)plVar8[4]) {
      iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
      plVar9 = (long *)*param_1;
    }
    else {
      iVar7 = *(int *)plVar8[3];
    }
    bVar3 = iVar7 == -1;
    plVar1 = (long *)0x0;
    if (!bVar3) {
      plVar1 = plVar8;
    }
    do {
      plVar8 = plVar1;
      if ((param_5 < 1) || (param_5 = param_5 + -1, !(bool)(bVar2 ^ bVar3))) {
        if (plVar9 == (long *)0x0) {
LAB_01809718:
          bVar2 = true;
          if (plVar8 != (long *)0x0) goto LAB_01809720;
LAB_018096f4:
          if (!bVar2) {
            return iVar5;
          }
        }
        else {
          if ((int *)plVar9[3] == (int *)plVar9[4]) {
            iVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
          }
          else {
            iVar7 = *(int *)plVar9[3];
          }
          if (iVar7 == -1) {
            *param_1 = 0;
            goto LAB_01809718;
          }
          bVar2 = *param_1 == 0;
          if (plVar8 == (long *)0x0) goto LAB_018096f4;
LAB_01809720:
          if ((int *)plVar8[3] == (int *)plVar8[4]) {
            iVar7 = (**(code **)(*plVar8 + 0x48))(plVar8);
          }
          else {
            iVar7 = *(int *)plVar8[3];
          }
          if (bVar2 != (iVar7 == -1)) {
            return iVar5;
          }
        }
        uVar4 = *param_3 | 2;
        goto LAB_0180975c;
      }
      if ((undefined4 *)plVar9[3] == (undefined4 *)plVar9[4]) {
        uVar6 = (**(code **)(*plVar9 + 0x48))(plVar9);
      }
      else {
        uVar6 = *(undefined4 *)plVar9[3];
      }
      uVar10 = (**(code **)(*param_4 + 0x18))(param_4,0x40,uVar6);
      if ((uVar10 & 1) == 0) {
        return iVar5;
      }
      uVar4 = (**(code **)(*param_4 + 0x68))(param_4,uVar6,0);
      plVar9 = (long *)*param_1;
      uVar4 = iVar5 * 10 + (uVar4 & 0xff);
      if (plVar9[3] == plVar9[4]) {
        (**(code **)(*plVar9 + 0x50))();
        plVar9 = (long *)*param_1;
      }
      else {
        plVar9[3] = plVar9[3] + 4;
        plVar9 = (long *)*param_1;
      }
      if (plVar9 == (long *)0x0) goto LAB_018095e8;
LAB_01809588:
      if ((int *)plVar9[3] == (int *)plVar9[4]) {
        iVar5 = (**(code **)(*plVar9 + 0x48))();
      }
      else {
        iVar5 = *(int *)plVar9[3];
      }
      if (iVar5 == -1) {
        *param_1 = 0;
        goto LAB_018095e8;
      }
      plVar9 = (long *)*param_1;
      bVar2 = plVar9 == (long *)0x0;
      iVar5 = uVar4 - 0x30;
      if (plVar8 != (long *)0x0) goto LAB_018095f4;
LAB_018095b4:
      bVar3 = true;
      plVar1 = plVar8;
    } while( true );
  }
  iVar5 = 0;
  uVar4 = *param_3 | 4;
LAB_0180975c:
  *param_3 = uVar4;
  return iVar5;
}

