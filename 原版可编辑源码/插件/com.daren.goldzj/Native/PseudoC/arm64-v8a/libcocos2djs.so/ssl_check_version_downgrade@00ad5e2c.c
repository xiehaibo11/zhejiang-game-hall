
/* WARNING: Removing unreachable block (ram,0x00ad5e7c) */

bool ssl_check_version_downgrade(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  
  iVar1 = *(int *)**(undefined8 **)(param_1 + 0x6e);
  if (*param_1 == iVar1) {
    return true;
  }
  piVar2 = (int *)TLS_method();
  if (iVar1 == *piVar2) {
    piVar2 = &DAT_01c72708;
  }
  else {
    iVar1 = *(int *)**(undefined8 **)(param_1 + 0x6e);
    piVar2 = (int *)DTLS_method();
    if (iVar1 != *piVar2) {
      return false;
    }
    piVar2 = &DAT_01c72780;
  }
  do {
    piVar4 = piVar2 + 6;
    if (*(code **)(piVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(piVar2 + 4))();
      iVar1 = FUN_00ad5cf8(param_1,uVar3);
      if (iVar1 == 0) {
        return *param_1 == *piVar2;
      }
    }
    piVar2 = piVar4;
  } while (*piVar4 != 0);
  return false;
}

