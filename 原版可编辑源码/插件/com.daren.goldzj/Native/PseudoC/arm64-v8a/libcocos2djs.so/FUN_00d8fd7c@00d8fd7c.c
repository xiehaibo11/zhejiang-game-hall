
void FUN_00d8fd7c(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_1 + 0x280);
  if (*(int *)(lVar5 + 0x48) == 0) {
    uVar2 = *(uint *)(lVar5 + 0x50);
    uVar3 = *param_6;
    if (1 < uVar2) {
      uVar2 = 2;
    }
    local_40 = *(undefined8 *)(param_5 + (ulong)uVar3 * 8);
    uVar1 = param_7 - uVar3;
    if (uVar2 <= param_7 - uVar3) {
      uVar1 = uVar2;
    }
    if (uVar1 < 2) {
      local_38 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined4 *)(lVar5 + 0x48) = 1;
    }
    else {
      local_38 = *(undefined8 *)(param_5 + (ulong)(uVar3 + 1) * 8);
    }
    (**(code **)(lVar5 + 0x18))(param_1,param_2,*param_3,&local_40);
    iVar4 = *(int *)(lVar5 + 0x48);
    *param_6 = *param_6 + uVar1;
    *(uint *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) - uVar1;
    if (iVar4 != 0) {
      return;
    }
  }
  else {
    jcopy_sample_rows(lVar5 + 0x40,0,param_5 + (ulong)*param_6 * 8,0,1,*(undefined4 *)(lVar5 + 0x4c)
                     );
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *param_6 = *param_6 + 1;
    *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + -1;
  }
  *param_3 = *param_3 + 1;
  return;
}

