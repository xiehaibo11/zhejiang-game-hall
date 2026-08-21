
undefined8 FUN_01348300(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x26;
  undefined8 unaff_x27;
  long *local_88;
  long local_40 [3];
  
  uVar3 = *(undefined8 *)(unaff_x26 + 0xa0);
  local_40[0] = unaff_x26 + (ulong)*(uint *)(param_4 + 3);
  local_40[1] = 0;
  local_88 = local_40 + 1;
  *(undefined1 **)(unaff_x26 + 0x2c28) = &stack0xffffffffffffffb0;
  *(undefined8 *)(unaff_x26 + 0x2bc8) = unaff_x27;
  pcVar2 = *(code **)(unaff_x26 + (ulong)*(uint *)(param_4 + 0x17) + 3);
  if ((**(char **)(unaff_x26 + 0x14b0) != '\0') || (**(int **)(unaff_x26 + 0x1058) != 0)) {
    pcVar2 = *(code **)(unaff_x26 + 0x11a8);
  }
  puVar6 = *(undefined8 **)(unaff_x26 + 0x1450);
  uVar4 = *puVar6;
  lVar5 = puVar6[1];
  iVar1 = *(int *)(puVar6 + 2);
  *(int *)(puVar6 + 2) = iVar1 + 1;
  local_40[2] = param_1;
  (*pcVar2)(local_40,&local_88);
  *puVar6 = uVar4;
  *(int *)(puVar6 + 2) = iVar1;
  if (lVar5 != puVar6[1]) {
    puVar6[1] = lVar5;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x1348460;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xffffffffffffffb0;
    (**(code **)(unaff_x26 + 0x10b0))();
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  *(undefined8 *)(unaff_x26 + 0x2c28) = 0;
  if ((int)*(undefined8 *)(unaff_x26 + 0x2c20) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2018));
  }
  return uVar3;
}

