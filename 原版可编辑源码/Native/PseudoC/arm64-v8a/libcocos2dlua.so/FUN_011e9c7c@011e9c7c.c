
/* WARNING: Type propagation algorithm not settling */

int FUN_011e9c7c(long *param_1,long *param_2,uint *param_3,long *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar6 = (long *)*param_1;
  if ((plVar6 == (long *)0x0) || (plVar6[3] != plVar6[4])) {
joined_r0x011e9cc0:
    if (param_2 == (long *)0x0) goto LAB_011e9d10;
LAB_011e9cc4:
    if ((param_2[3] == param_2[4]) && (iVar2 = (**(code **)(*param_2 + 0x48))(param_2), iVar2 == -1)
       ) goto LAB_011e9d10;
    if (plVar6 == (long *)0x0) goto LAB_011e9d18;
  }
  else {
    iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
    if (iVar2 == -1) {
      plVar6 = (long *)0x0;
      *param_1 = 0;
      goto joined_r0x011e9cc0;
    }
    plVar6 = (long *)*param_1;
    if (param_2 != (long *)0x0) goto LAB_011e9cc4;
LAB_011e9d10:
    if (plVar6 != (long *)0x0) {
      param_2 = (long *)0x0;
LAB_011e9d18:
      plVar6 = (long *)*param_1;
      if ((byte *)plVar6[3] == (byte *)plVar6[4]) {
        uVar4 = (**(code **)(*plVar6 + 0x48))();
        bVar1 = (byte)uVar4;
      }
      else {
        bVar1 = *(byte *)plVar6[3];
        uVar4 = (uint)bVar1;
      }
      if (((char)bVar1 < '\0') ||
         (((uint)*(undefined8 *)(param_4[2] + (ulong)(uVar4 & 0xff) * 8) >> 6 & 1) == 0)) {
        iVar2 = 0;
        uVar4 = *param_3 | 4;
        goto LAB_011e9d7c;
      }
      uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar4,0);
      plVar6 = (long *)*param_1;
      uVar4 = uVar4 & 0xff;
      if (plVar6[3] == plVar6[4]) {
        (**(code **)(*plVar6 + 0x50))();
      }
      else {
        plVar6[3] = plVar6[3] + 1;
      }
      plVar6 = (long *)*param_1;
      while( true ) {
        param_5 = param_5 + -1;
        if ((plVar6 != (long *)0x0) && (plVar6[3] == plVar6[4])) {
          iVar2 = (**(code **)(*plVar6 + 0x48))(plVar6);
          if (iVar2 == -1) {
            plVar6 = (long *)0x0;
            *param_1 = 0;
          }
          else {
            plVar6 = (long *)*param_1;
          }
        }
        iVar2 = uVar4 - 0x30;
        plVar5 = param_2;
        plVar7 = plVar6;
        if ((param_2 != (long *)0x0) && (param_2[3] == param_2[4])) {
          iVar3 = (**(code **)(*param_2 + 0x48))(param_2);
          plVar5 = (long *)0x0;
          plVar7 = (long *)*param_1;
          if (iVar3 != -1) {
            plVar5 = param_2;
          }
        }
        if ((param_5 < 1) || ((plVar6 == (long *)0x0) == (plVar5 == (long *)0x0))) break;
        if ((byte *)plVar7[3] == (byte *)plVar7[4]) {
          uVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
          bVar1 = (byte)uVar4;
        }
        else {
          bVar1 = *(byte *)plVar7[3];
          uVar4 = (uint)bVar1;
        }
        if ((char)bVar1 < '\0') {
          return iVar2;
        }
        if (((uint)*(undefined8 *)(param_4[2] + (ulong)(uVar4 & 0xff) * 8) >> 6 & 1) == 0) {
          return iVar2;
        }
        uVar4 = (**(code **)(*param_4 + 0x48))(param_4,uVar4,0);
        plVar6 = (long *)*param_1;
        uVar4 = iVar2 * 10 + (uVar4 & 0xff);
        param_2 = plVar5;
        if (plVar6[3] == plVar6[4]) {
          (**(code **)(*plVar6 + 0x50))();
          plVar6 = (long *)*param_1;
        }
        else {
          plVar6[3] = plVar6[3] + 1;
          plVar6 = (long *)*param_1;
        }
      }
      if ((plVar7 == (long *)0x0) || (plVar7[3] != plVar7[4])) {
joined_r0x011e9fb4:
        if (plVar5 == (long *)0x0) goto LAB_011e9fb8;
LAB_011e9f5c:
        if ((plVar5[3] == plVar5[4]) && (iVar3 = (**(code **)(*plVar5 + 0x48))(plVar5), iVar3 == -1)
           ) goto LAB_011e9fb8;
        if (plVar7 == (long *)0x0) {
          return iVar2;
        }
      }
      else {
        iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
        if (iVar3 == -1) {
          plVar7 = (long *)0x0;
          *param_1 = 0;
          goto joined_r0x011e9fb4;
        }
        plVar7 = (long *)*param_1;
        if (plVar5 != (long *)0x0) goto LAB_011e9f5c;
LAB_011e9fb8:
        if (plVar7 != (long *)0x0) {
          return iVar2;
        }
      }
      uVar4 = *param_3 | 2;
      goto LAB_011e9d7c;
    }
  }
  iVar2 = 0;
  uVar4 = *param_3 | 6;
LAB_011e9d7c:
  *param_3 = uVar4;
  return iVar2;
}

