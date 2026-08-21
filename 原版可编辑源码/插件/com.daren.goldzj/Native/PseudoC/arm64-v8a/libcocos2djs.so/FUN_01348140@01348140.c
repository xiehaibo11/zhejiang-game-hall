
undefined8 FUN_01348140(undefined8 param_1,code *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined1 *local_98;
  undefined8 *local_90;
  long local_88;
  long local_80;
  undefined8 local_30;
  undefined8 local_8;
  
  local_98 = (undefined1 *)&local_30;
  uVar2 = *(undefined8 *)(unaff_x26 + 0xa0);
  *(undefined1 **)(unaff_x26 + 0x2c28) = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x26 + 0x2bc8) = unaff_x27;
  local_90 = &local_8 + param_3;
  local_80 = param_3 + 7;
  if ((**(char **)(unaff_x26 + 0x14b0) != '\0') || (**(int **)(unaff_x26 + 0x1058) != 0)) {
    param_2 = *(code **)(unaff_x26 + 0x11b0);
  }
  puVar5 = *(undefined8 **)(unaff_x26 + 0x1450);
  uVar3 = *puVar5;
  lVar4 = puVar5[1];
  iVar1 = *(int *)(puVar5 + 2);
  *(int *)(puVar5 + 2) = iVar1 + 1;
  local_88 = param_3;
  local_30 = param_1;
  local_8 = uVar2;
  (*param_2)(&local_98);
  *puVar5 = uVar3;
  *(int *)(puVar5 + 2) = iVar1;
  if (lVar4 != puVar5[1]) {
    puVar5[1] = lVar4;
    *(undefined8 *)(unaff_x26 + 0x40) = 0x13482b0;
    *(undefined1 **)(unaff_x26 + 0x38) = &stack0xffffffffffffffc0;
    (**(code **)(unaff_x26 + 0x10b0))();
    *(undefined8 *)(unaff_x26 + 0x38) = 0;
  }
  *(undefined8 *)(unaff_x26 + 0x2c28) = 0;
  if ((int)*(undefined8 *)(unaff_x26 + 0x2c20) != (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2018));
  }
  return uVar2;
}

