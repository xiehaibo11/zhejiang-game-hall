
void FUN_00c0c20c(long *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)((long)param_1 + 0x34);
  lVar6 = *param_1;
  lVar3 = param_1[0xe];
  if (iVar1 == 0x28) {
    iVar1 = *(int *)((long)param_1 + 0x74);
    if (iVar1 != (int)lVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00c07bc4(param_1,0xa2e);
    }
    FUN_00c079c0();
    if (*(int *)((long)param_1 + 0x34) == 0x29) {
      local_10 = 0xe;
    }
    else {
      FUN_00c0c134(param_1,&local_18);
      if (local_10 == 0xd) {
        *(undefined1 *)(*(long *)(lVar6 + 0x48) + (local_18 & 0xffffffff) * 8 + 3) = 0;
      }
    }
    FUN_00c086ac(param_1,0x29,0x28,iVar1);
    iVar1 = *param_2;
  }
  else {
    if (iVar1 == 0x7b) {
      FUN_00c0ba44(param_1,&local_18);
    }
    else {
      if (iVar1 != 0x120) {
                    /* WARNING: Subroutine does not return */
        FUN_00c07bc4(param_1,0xa5f);
      }
      local_18 = param_1[2] & 0x7fffffffffff;
      local_10 = 3;
      local_c = 0xffffffff;
      local_8 = 0xffffffff;
      FUN_00c079c0();
    }
    iVar1 = *param_2;
  }
  if (local_10 == 0xd) {
    local_18._4_4_ = (int)(local_18 >> 0x20);
    uVar2 = iVar1 << 8 | 0x2000041U | ((local_18._4_4_ + -2) - iVar1) * 0x10000;
  }
  else {
    if (local_10 != 0xe) {
      FUN_00c08c34(lVar6,&local_18);
    }
    uVar2 = iVar1 << 8 | 0x2000042U | ((*(int *)(lVar6 + 0x34) + -1) - iVar1) * 0x10000;
  }
  iVar4 = FUN_00c07f70(lVar6,uVar2);
  param_2[1] = iVar1;
  *param_2 = iVar4;
  param_2[3] = -1;
  iVar4 = *(int *)(lVar6 + 0x28);
  lVar5 = *(long *)(lVar6 + 0x48);
  param_2[2] = 0xd;
  param_2[4] = -1;
  *(int *)(lVar5 + (ulong)(iVar4 - 1) * 8 + 4) = (int)lVar3;
  *(int *)(lVar6 + 0x34) = iVar1 + 1;
  return;
}

