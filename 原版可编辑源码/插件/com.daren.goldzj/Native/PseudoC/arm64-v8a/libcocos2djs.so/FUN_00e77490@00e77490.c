
undefined1 * FUN_00e77490(long *param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  FUN_00e7752c();
  if (0 < (int)param_1[3]) {
    return (undefined1 *)0x0;
  }
  puVar2 = (undefined1 *)*param_1 + -1;
  puVar4 = (undefined1 *)*param_1;
switchD_00e77504_caseD_b:
  if (puVar4 < (undefined1 *)param_1[2]) goto code_r0x00e774dc;
  goto switchD_00e77504_caseD_1a;
switchD_00e77504_caseD_9:
  return puVar2;
code_r0x00e774dc:
  *param_1 = (long)(puVar4 + 1);
  uVar1 = *puVar4;
  puVar4 = puVar4 + 1;
  switch(uVar1) {
  case 9:
  case 0x20:
    goto switchD_00e77504_caseD_9;
  case 10:
  case 0xd:
    uVar3 = 2;
    break;
  default:
    goto switchD_00e77504_caseD_b;
  case 0x1a:
switchD_00e77504_caseD_1a:
    uVar3 = 3;
    break;
  case 0x3b:
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 3) = uVar3;
  return puVar2;
}

