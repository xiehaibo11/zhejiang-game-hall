
void FUN_00c263c4(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x6c) + 1;
  *(int *)(param_1 + 0x6c) = iVar6;
  if (iVar6 < 0x15) {
    while( true ) {
      iVar6 = *(int *)(param_1 + 4);
      uVar3 = 8;
      while (iVar6 != 0x2a) {
        if ((iVar6 != 0x26) && (iVar6 != 0x105)) {
          if (iVar6 == 0x28) {
            FUN_00c2593c(param_1);
            FUN_00c277f0(param_1,param_2);
            if ((param_2[3] >> 1 & 1) != 0) {
              iVar6 = *(int *)(param_1 + 4);
              if (iVar6 == 0x29) goto LAB_00c26720;
              if (iVar6 - 0x10dU < 0x1d) goto LAB_00c26720;
              if (iVar6 == 0x100) {
                if (**(uint **)(param_1 + 0x18) >> 0x1c == 7) goto LAB_00c26720;
              }
              else if (iVar6 == 0x24) goto LAB_00c26720;
            }
            uVar3 = param_2[1];
            FUN_00c263c4(param_1,param_2);
            FUN_00c263a0(param_1,0x29);
            param_2[1] = uVar3;
            iVar6 = *(int *)(param_1 + 4);
          }
          else if (iVar6 == 0x100) {
            if ((param_2[3] >> 2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00c258bc(param_1,0x103);
            }
            uVar4 = *(undefined8 *)(param_1 + 0x10);
            param_2[10] = *(uint *)(param_1 + 0xc);
            *(undefined8 *)(param_2 + 6) = uVar4;
            FUN_00c2593c(param_1);
            iVar6 = *(int *)(param_1 + 4);
          }
          else if ((param_2[3] >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00c258bc(param_1,0x100);
          }
          goto joined_r0x00c26560;
        }
        FUN_00c2593c(param_1);
        uVar5 = *param_2;
        param_2[0xb] = param_2[0xb] & 0xfcff00ff;
        if (99 < uVar5) goto LAB_00c267a0;
        uVar1 = param_2[1];
        *(undefined2 *)(param_2 + (ulong)uVar5 * 6 + 0x12) = 0;
        param_2[(ulong)uVar5 * 6 + 0x10] = 0x22830000;
        param_2[(ulong)uVar5 * 6 + 0x11] = 8;
        (param_2 + (ulong)uVar5 * 6 + 0x14)[0] = 0;
        (param_2 + (ulong)uVar5 * 6 + 0x14)[1] = 0;
        *(undefined2 *)((long)param_2 + (ulong)uVar5 * 0x18 + 0x4a) =
             *(undefined2 *)((long)param_2 + (ulong)uVar1 * 0x18 + 0x4a);
        *(short *)((long)param_2 + (ulong)uVar1 * 0x18 + 0x4a) = (short)uVar5;
        iVar6 = *(int *)(param_1 + 4);
        *param_2 = uVar5 + 1;
        param_2[1] = uVar5;
      }
      FUN_00c2593c(param_1);
      FUN_00c277f0(param_1,param_2);
      uVar5 = param_2[0xb];
      uVar1 = *param_2;
      param_2[0xb] = uVar5 & 0xfcff00ff;
      iVar6 = 0x20030000;
      if ((uVar5 >> 8 & 0xff) == 4) {
        iVar6 = 0x20020000;
        uVar3 = 4;
      }
      if (99 < uVar1) break;
      uVar2 = param_2[1];
      *(undefined2 *)(param_2 + (ulong)uVar1 * 6 + 0x12) = 0;
      param_2[(ulong)uVar1 * 6 + 0x10] = iVar6 + (uVar5 & 0x3800000);
      param_2[(ulong)uVar1 * 6 + 0x11] = uVar3;
      (param_2 + (ulong)uVar1 * 6 + 0x14)[0] = 0;
      (param_2 + (ulong)uVar1 * 6 + 0x14)[1] = 0;
      *(undefined2 *)((long)param_2 + (ulong)uVar1 * 0x18 + 0x4a) =
           *(undefined2 *)((long)param_2 + (ulong)uVar2 * 0x18 + 0x4a);
      *(short *)((long)param_2 + (ulong)uVar2 * 0x18 + 0x4a) = (short)uVar1;
      *param_2 = uVar1 + 1;
      param_2[1] = uVar1;
    }
LAB_00c267a0:
    param_1 = *(long *)(param_2 + 4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c2520c(param_1,0x863);
joined_r0x00c26560:
  while (iVar6 != 0x5b) {
    if (iVar6 != 0x28) {
      if (((param_2[3] >> 3 & 1) != 0) && (iVar6 == 0x3a)) {
        FUN_00c2593c(param_1);
        uVar3 = FUN_00c276a0(param_1);
        param_2[0xf] = uVar3;
      }
      FUN_00c277f0(param_1,param_2);
      if (((param_2[(ulong)param_2[1] * 6 + 0x10] >> 0x1c != 6) && ((param_2[0xb] & 1) != 0)) &&
         ((param_2[3] >> 3 & 1) == 0)) {
        FUN_00c25690(param_2,0x80020000,param_2[0xb] >> 0x10 & 0xf);
      }
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + -1;
      return;
    }
    FUN_00c2593c(param_1);
LAB_00c26720:
    FUN_00c28a34(param_1,param_2);
    iVar6 = *(int *)(param_1 + 4);
  }
  FUN_00c2593c(param_1);
  FUN_00c277f0(param_1,param_2);
  if (*(int *)(param_1 + 4) == 0x3f) {
    uVar3 = 0xffffffff;
    uVar5 = 0x30100000;
    FUN_00c2593c(param_1);
LAB_00c26578:
    if (*(int *)(param_1 + 4) != 0x5d) {
                    /* WARNING: Subroutine does not return */
      FUN_00c258bc(param_1,0x5d);
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 0x5d) {
      uVar5 = 0x30000000;
      uVar3 = FUN_00c276a0(param_1);
      goto LAB_00c26578;
    }
    uVar3 = 0xffffffff;
    uVar5 = 0x30000000;
  }
  FUN_00c2593c(param_1);
  uVar1 = *param_2;
  if (99 < uVar1) goto LAB_00c267a0;
  uVar2 = param_2[1];
  iVar6 = *(int *)(param_1 + 4);
  *(undefined2 *)(param_2 + (ulong)uVar1 * 6 + 0x12) = 0;
  param_2[(ulong)uVar1 * 6 + 0x10] = uVar5;
  param_2[(ulong)uVar1 * 6 + 0x11] = uVar3;
  (param_2 + (ulong)uVar1 * 6 + 0x14)[0] = 0;
  (param_2 + (ulong)uVar1 * 6 + 0x14)[1] = 0;
  *(undefined2 *)((long)param_2 + (ulong)uVar1 * 0x18 + 0x4a) =
       *(undefined2 *)((long)param_2 + (ulong)uVar2 * 0x18 + 0x4a);
  *(short *)((long)param_2 + (ulong)uVar2 * 0x18 + 0x4a) = (short)uVar1;
  *param_2 = uVar1 + 1;
  goto joined_r0x00c26560;
}

