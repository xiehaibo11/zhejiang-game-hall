
undefined8 jpeg_resync_to_restart(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = *param_1;
  uVar4 = *(uint *)((long)param_1 + 0x23c);
  *(undefined4 *)(lVar3 + 0x28) = 0x7c;
  *(uint *)(lVar3 + 0x2c) = uVar4;
  *(int *)(lVar3 + 0x30) = param_2;
  (**(code **)(lVar3 + 8))(param_1,0xffffffff);
  if (0xbf < (int)uVar4) goto LAB_010e8a74;
  do {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 99;
    *(uint *)(lVar3 + 0x2c) = uVar4;
    *(undefined4 *)(lVar3 + 0x30) = 2;
    (**(code **)(lVar3 + 8))(param_1,4);
    while( true ) {
      uVar2 = FUN_010e8b30(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      uVar4 = *(uint *)((long)param_1 + 0x23c);
      if ((int)uVar4 < 0xc0) break;
LAB_010e8a74:
      if ((uVar4 & 0xfffffff8) != 0xd0) {
        lVar3 = *param_1;
        *(undefined4 *)(lVar3 + 0x28) = 99;
        *(uint *)(lVar3 + 0x2c) = uVar4;
        *(undefined4 *)(lVar3 + 0x30) = 3;
        (**(code **)(lVar3 + 8))(param_1,4);
        return 1;
      }
      iVar5 = 1;
      if (uVar4 == (param_2 + 6U & 7 | 0xd0) || uVar4 == (param_2 + 7U & 7 | 0xd0)) {
        iVar5 = 2;
      }
      iVar1 = 3;
      if (uVar4 != (param_2 + 2U & 7 | 0xd0) && uVar4 != (param_2 + 1U & 7 | 0xd0)) {
        iVar1 = iVar5;
      }
      while( true ) {
        lVar3 = *param_1;
        *(undefined4 *)(lVar3 + 0x28) = 99;
        *(uint *)(lVar3 + 0x2c) = uVar4;
        *(int *)(lVar3 + 0x30) = iVar1;
        (**(code **)(lVar3 + 8))(param_1,4);
        if (iVar1 == 3) {
          return 1;
        }
        if (iVar1 == 2) break;
        if (iVar1 == 1) {
          *(undefined4 *)((long)param_1 + 0x23c) = 0;
          return 1;
        }
      }
    }
  } while( true );
}

