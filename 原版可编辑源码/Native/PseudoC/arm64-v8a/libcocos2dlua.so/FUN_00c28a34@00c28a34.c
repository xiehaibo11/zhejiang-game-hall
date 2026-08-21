
void FUN_00c28a34(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  int *local_9a8;
  undefined1 auStack_9a0 [12];
  undefined4 local_994;
  long local_988;
  
  uVar9 = 0;
  uVar8 = 0;
  uVar3 = 0x60000000;
  uVar7 = 0;
  if (*(int *)(param_1 + 4) != 0x29) {
    if (*(int *)(param_1 + 4) == 0x2e) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar11 = 0;
      do {
        FUN_00c27ec4(param_1,auStack_9a0,0x80000);
        local_994 = 6;
        FUN_00c263c4(param_1,auStack_9a0);
        uVar3 = FUN_00c25220(param_1,auStack_9a0);
        uVar6 = (ulong)uVar3;
        plVar5 = *(long **)(param_1 + 0x50);
        while( true ) {
          local_9a8 = (int *)(*plVar5 + uVar6 * 0x18);
          uVar1 = *(uint *)(*plVar5 + uVar6 * 0x18);
          uVar4 = uVar1 >> 0x1c;
          if (uVar4 != 8) break;
          uVar6 = (ulong)(ushort)uVar1;
        }
        if (uVar4 == 4) {
LAB_00c28d24:
          uVar8 = (undefined2)uVar9;
          uVar3 = 0x60000000;
          goto LAB_00c28a74;
        }
        if ((uVar1 & 0xfc000000) == 0x30000000) {
          uVar3 = FUN_00c0e7d0(plVar5,(uVar1 & 0xffff | 0x30000) + 0x20000000,8);
          plVar5 = *(long **)(param_1 + 0x50);
        }
        else if (uVar4 == 6) {
          uVar3 = FUN_00c0e7d0(plVar5,(uVar3 | 0x30000) + 0x20000000,8);
          plVar5 = *(long **)(param_1 + 0x50);
        }
        uVar4 = FUN_00c0e728(plVar5,&local_9a8);
        uVar1 = uVar4;
        if (uVar9 != 0) {
          *(short *)(**(long **)(param_1 + 0x50) + uVar11 * 0x18 + 8) = (short)uVar4;
          uVar1 = uVar9;
        }
        uVar9 = uVar1;
        if (local_988 != 0) {
          *(byte *)(local_988 + 8) = *(byte *)(local_988 + 8) | 0x20;
          *(long *)(local_9a8 + 4) = local_988;
        }
        iVar10 = *(int *)(param_1 + 4);
        local_9a8[1] = uVar7;
        *local_9a8 = uVar3 + 0x90000000;
        uVar7 = uVar7 + 1;
        if (iVar10 != 0x2c) goto LAB_00c28d24;
        FUN_00c2593c(param_1);
        uVar11 = (ulong)uVar4;
      } while (*(int *)(param_1 + 4) != 0x2e);
    }
    uVar8 = (undefined2)uVar9;
    uVar3 = 0x60800000;
    FUN_00c2593c(param_1);
    FUN_00c263a0(param_1,0x2e);
    FUN_00c263a0(param_1,0x2e);
  }
LAB_00c28a74:
  FUN_00c263a0(param_1,0x29);
  if (*(int *)(param_1 + 4) == 0x7b) {
    iVar10 = 1;
    FUN_00c2593c(param_1);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x20;
    do {
      iVar2 = *(int *)(param_1 + 4);
      if (iVar2 == 0x7b) {
        iVar10 = iVar10 + 1;
      }
      else if (iVar2 == 0x7d) {
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
          *(undefined4 *)(param_1 + 4) = 0x3b;
          *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xffffffdf;
          break;
        }
      }
      else if (iVar2 == 0x103) {
                    /* WARNING: Subroutine does not return */
        FUN_00c258bc(param_1,0x7d);
      }
      FUN_00c2593c(param_1);
    } while( true );
  }
  uVar9 = *param_2;
  uVar1 = param_2[0xc];
  param_2[0xc] = 0;
  if (99 < uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_00c2520c(*(undefined8 *)(param_2 + 4),0x863);
  }
  uVar4 = param_2[1];
  *(undefined2 *)(param_2 + (ulong)uVar9 * 6 + 0x12) = 0;
  param_2[(ulong)uVar9 * 6 + 0x10] = uVar3 | uVar1 & 0xffff0000;
  param_2[(ulong)uVar9 * 6 + 0x11] = uVar7;
  (param_2 + (ulong)uVar9 * 6 + 0x14)[0] = 0;
  (param_2 + (ulong)uVar9 * 6 + 0x14)[1] = 0;
  *(undefined2 *)((long)param_2 + (ulong)uVar9 * 0x18 + 0x4a) =
       *(undefined2 *)((long)param_2 + (ulong)uVar4 * 0x18 + 0x4a);
  *(short *)((long)param_2 + (ulong)uVar4 * 0x18 + 0x4a) = (short)uVar9;
  *param_2 = uVar9 + 1;
  *(undefined2 *)(param_2 + (ulong)uVar9 * 6 + 0x12) = uVar8;
  return;
}

