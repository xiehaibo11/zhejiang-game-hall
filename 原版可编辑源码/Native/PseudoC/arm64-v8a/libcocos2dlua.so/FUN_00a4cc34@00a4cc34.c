
undefined8 FUN_00a4cc34(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x618);
  iVar1 = FUN_00a30680();
  if (iVar1 != 0) {
switchD_00a4cc84_caseD_1:
    return 0x2a;
  }
  if (lVar3 == 0) {
switchD_00a4cc84_caseD_ffffff9c:
    uVar2 = 0;
  }
  else {
    uVar2 = 0x44;
    switch(*(undefined4 *)(lVar3 + 8)) {
    case 0:
    case 4:
      uVar2 = 0x47;
      break;
    case 1:
      break;
    case 2:
      uVar2 = 0x45;
      break;
    case 3:
      uVar2 = 0x46;
      break;
    case 5:
      uVar2 = 0x48;
      break;
    case 6:
      uVar2 = 0x49;
      break;
    case 7:
      uVar2 = 0x4a;
      break;
    case 0xffffff9c:
      goto switchD_00a4cc84_caseD_ffffff9c;
    case 0xffffff9d:
      uVar2 = 0x1c;
      break;
    case 0xffffff9e:
      uVar2 = 7;
      break;
    default:
      goto switchD_00a4cc84_caseD_1;
    }
  }
  return uVar2;
}

