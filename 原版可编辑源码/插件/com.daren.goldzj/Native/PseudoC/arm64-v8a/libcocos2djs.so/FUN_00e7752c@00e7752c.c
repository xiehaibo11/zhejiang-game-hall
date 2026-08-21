
void FUN_00e7752c(ulong *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  if ((int)param_1[3] < 1) {
    puVar3 = (undefined1 *)*param_1;
    if (puVar3 < (undefined1 *)param_1[2]) {
LAB_00e77550:
      puVar1 = puVar3 + 1;
      *param_1 = (ulong)puVar1;
      switch(*puVar3) {
      case 9:
      case 0x20:
        goto switchD_00e77574_caseD_9;
      case 10:
      case 0xd:
        uVar2 = 2;
        goto LAB_00e77588;
      default:
        goto switchD_00e77574_caseD_b;
      case 0x1a:
        break;
      case 0x3b:
        uVar2 = 1;
        goto LAB_00e77588;
      }
    }
switchD_00e77574_caseD_1a:
    uVar2 = 3;
LAB_00e77588:
    *(undefined4 *)(param_1 + 3) = uVar2;
  }
switchD_00e77574_caseD_b:
  return;
switchD_00e77574_caseD_9:
  puVar3 = puVar1;
  if ((undefined1 *)param_1[2] <= puVar1) goto switchD_00e77574_caseD_1a;
  goto LAB_00e77550;
}

