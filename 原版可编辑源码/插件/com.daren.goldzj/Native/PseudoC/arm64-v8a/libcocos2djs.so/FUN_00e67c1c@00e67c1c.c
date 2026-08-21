
undefined8 FUN_00e67c1c(long param_1,char *param_2,long *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long local_48;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined1 *)(param_1 + 0x20);
  iVar4 = strcmp(param_2,"glyph-to-script-map");
  if (iVar4 == 0) {
    lVar6 = *param_3;
    if (lVar6 != 0) {
      local_48 = *(long *)(lVar6 + 0xd8);
      if (local_48 == 0) {
        uVar5 = FUN_00e66f10(lVar6,&local_48,param_1);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(long *)(lVar6 + 0xd8) = local_48;
        *(code **)(lVar6 + 0xe0) = FUN_00e67534;
      }
      param_3[1] = *(long *)(local_48 + 0x10);
      return 0;
    }
  }
  else {
    iVar4 = strcmp(param_2,"fallback-script");
    if (iVar4 == 0) {
      *(undefined4 *)param_3 = *(undefined4 *)((&PTR_DAT_01c97340)[uVar1] + 8);
      return 0;
    }
    iVar4 = strcmp(param_2,"default-script");
    if (iVar4 == 0) {
      *(undefined4 *)param_3 = uVar2;
      return 0;
    }
    iVar4 = strcmp(param_2,"increase-x-height");
    if (iVar4 != 0) {
      iVar4 = strcmp(param_2,"warping");
      if (iVar4 == 0) {
        *(undefined1 *)param_3 = uVar3;
        return 0;
      }
      iVar4 = strcmp(param_2,"darkening-parameters");
      if (iVar4 != 0) {
        iVar4 = strcmp(param_2,"no-stem-darkening");
        if (iVar4 != 0) {
          return 0xc;
        }
        *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x21);
        return 0;
      }
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)((long)param_3 + 4) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)((long)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)((long)param_3 + 0x14) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)((long)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x40);
      return 0;
    }
    lVar6 = *param_3;
    if (lVar6 != 0) {
      local_48 = *(long *)(lVar6 + 0xd8);
      if (local_48 == 0) {
        uVar5 = FUN_00e66f10(lVar6,&local_48,param_1);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(long *)(lVar6 + 0xd8) = local_48;
        *(code **)(lVar6 + 0xe0) = FUN_00e67534;
      }
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_48 + 0x18);
      return 0;
    }
  }
  return 0x23;
}

