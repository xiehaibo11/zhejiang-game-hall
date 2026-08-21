
/* WARNING: Removing unreachable block (ram,0x00ad603c) */

ulong ssl_choose_server_version(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  iVar2 = param_1[0x81];
  iVar8 = **(int **)(param_1 + 2);
  if (iVar8 == 0x10000) {
    piVar9 = &DAT_01c72708;
    iVar8 = 0x303;
  }
  else {
    if (iVar8 != 0x1ffff) {
      iVar8 = *param_1;
      if (iVar2 == iVar8) {
        iVar7 = 0;
      }
      else if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x68) >> 3 & 1) == 0) {
        iVar7 = 1;
        if (iVar2 < iVar8) {
          iVar7 = -1;
        }
      }
      else {
        iVar1 = 0xff00;
        if (iVar2 != 0x100) {
          iVar1 = iVar2;
        }
        iVar2 = 0xff00;
        if (iVar8 != 0x100) {
          iVar2 = iVar8;
        }
        iVar7 = 1;
        if (iVar2 < iVar1) {
          iVar7 = -1;
        }
      }
      return (ulong)(iVar7 >> 0x1f & 0x10a);
    }
    piVar9 = &DAT_01c72780;
    iVar8 = 0xfefd;
  }
  bVar5 = false;
  iVar1 = 0xff00;
  if (iVar2 != 0x100) {
    iVar1 = iVar2;
  }
  do {
    if (*(code **)(piVar9 + 4) == (code *)0x0) goto LAB_00ad6020;
    if (iVar2 == iVar8) {
LAB_00ad6004:
      uVar3 = (**(code **)(piVar9 + 4))();
      uVar4 = FUN_00ad5cf8(param_1,uVar3);
      if ((int)uVar4 == 0) {
        iVar2 = *piVar9;
        *(undefined8 *)(param_1 + 2) = uVar3;
        *param_1 = iVar2;
        return uVar4;
      }
      bVar5 = true;
    }
    else if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) {
      if (iVar8 <= iVar2) goto LAB_00ad6004;
    }
    else {
      iVar7 = 0xff00;
      if (iVar8 != 0x100) {
        iVar7 = iVar8;
      }
      if (iVar1 <= iVar7) goto LAB_00ad6004;
    }
LAB_00ad6020:
    iVar8 = piVar9[6];
    piVar9 = piVar9 + 6;
    if (iVar8 == 0) {
      uVar6 = 0x102;
      if (!bVar5) {
        uVar6 = 0x18c;
      }
      return (ulong)uVar6;
    }
  } while( true );
}

