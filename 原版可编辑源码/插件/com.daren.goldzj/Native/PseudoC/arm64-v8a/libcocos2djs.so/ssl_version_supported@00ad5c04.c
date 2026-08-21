
bool ssl_version_supported(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar5 = &DAT_01c72708;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      return *param_1 == param_2;
    }
    piVar5 = &DAT_01c72780;
  }
  iVar3 = *piVar5;
  iVar1 = 0xff00;
  if (param_2 != 0x100) {
    iVar1 = param_2;
  }
  do {
    if (iVar3 == 0) {
      return false;
    }
    if (iVar3 != param_2) {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x68) >> 3 & 1) == 0) {
        if (iVar3 <= param_2) {
          return false;
        }
      }
      else {
        iVar2 = 0xff00;
        if (iVar3 != 0x100) {
          iVar2 = iVar3;
        }
        if (iVar1 <= iVar2) {
          return false;
        }
      }
    }
    if ((*(code **)(piVar5 + 2) != (code *)0x0) && (iVar3 == param_2)) {
      uVar4 = (**(code **)(piVar5 + 2))();
      iVar3 = FUN_00ad5cf8(param_1,uVar4);
      if (iVar3 == 0) {
        return true;
      }
    }
    iVar3 = piVar5[6];
    piVar5 = piVar5 + 6;
  } while( true );
}

