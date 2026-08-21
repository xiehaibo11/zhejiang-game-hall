
undefined4 FUN_00e091b8(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = param_1[3] - 5;
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  do {
    uVar4 = *(uint *)((long)param_1 + 0xa4);
    if (uVar4 < 2) {
      FUN_00e07218(param_1);
      uVar4 = *(uint *)((long)param_1 + 0xa4);
      if (uVar4 == 0 && param_2 == 0) {
        return 0;
      }
      if (uVar4 == 0) {
        *(undefined4 *)((long)param_1 + 0x171c) = 0;
        if (param_2 == 4) {
          uVar2 = param_1[0x11];
          if ((long)uVar2 < 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = param_1[10] + (uVar2 & 0xffffffff);
          }
          FUN_00e0d324(param_1,lVar5,*(uint *)((long)param_1 + 0x9c) - uVar2,1);
          lVar7 = *param_1;
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          lVar5 = *(long *)(lVar7 + 0x38);
          FUN_00e0d150(lVar5);
          uVar4 = *(uint *)(lVar7 + 0x20);
          if (*(uint *)(lVar5 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
            uVar4 = *(uint *)(lVar5 + 0x28);
          }
          if (uVar4 != 0) {
            uVar2 = (ulong)uVar4;
            memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar5 + 0x20),uVar2);
            *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar2;
            *(ulong *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + uVar2;
            *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar2;
            *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar4;
            iVar1 = *(int *)(lVar5 + 0x28) - uVar4;
            *(int *)(lVar5 + 0x28) = iVar1;
            if (iVar1 == 0) {
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) != 0) {
            return 3;
          }
          return 2;
        }
        uVar2 = param_1[0x11];
        if ((long)uVar2 < (long)(ulong)*(uint *)((long)param_1 + 0x9c)) {
          if ((long)uVar2 < 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = param_1[10] + (uVar2 & 0xffffffff);
          }
          FUN_00e0d324(param_1,lVar5,*(uint *)((long)param_1 + 0x9c) - uVar2,0);
          lVar7 = *param_1;
          param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
          lVar5 = *(long *)(lVar7 + 0x38);
          FUN_00e0d150(lVar5);
          uVar4 = *(uint *)(lVar7 + 0x20);
          if (*(uint *)(lVar5 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
            uVar4 = *(uint *)(lVar5 + 0x28);
          }
          if (uVar4 != 0) {
            uVar2 = (ulong)uVar4;
            memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar5 + 0x20),uVar2);
            *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar2;
            *(ulong *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + uVar2;
            *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar2;
            *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar4;
            iVar1 = *(int *)(lVar5 + 0x28) - uVar4;
            *(int *)(lVar5 + 0x28) = iVar1;
            if (iVar1 == 0) {
              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
            }
          }
          if (*(int *)(*param_1 + 0x20) == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
    uVar3 = param_1[0x11];
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
    uVar4 = *(int *)((long)param_1 + 0x9c) + uVar4;
    uVar6 = uVar3 + uVar2;
    *(uint *)((long)param_1 + 0x9c) = uVar4;
    if ((uVar4 == 0) || (uVar6 <= uVar4)) {
      *(uint *)((long)param_1 + 0xa4) = uVar4 - (int)uVar6;
      *(int *)((long)param_1 + 0x9c) = (int)uVar6;
      if ((long)uVar3 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[10] + (uVar3 & 0xffffffff);
      }
      FUN_00e0d324(param_1,lVar5,(uVar6 & 0xffffffff) - uVar3,0);
      lVar7 = *param_1;
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      lVar5 = *(long *)(lVar7 + 0x38);
      FUN_00e0d150(lVar5);
      uVar4 = *(uint *)(lVar7 + 0x20);
      if (*(uint *)(lVar5 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
        uVar4 = *(uint *)(lVar5 + 0x28);
      }
      if (uVar4 != 0) {
        uVar6 = (ulong)uVar4;
        memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar5 + 0x20),uVar6);
        *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar6;
        *(ulong *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + uVar6;
        *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar6;
        *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar4;
        iVar1 = *(int *)(lVar5 + 0x28) - uVar4;
        *(int *)(lVar5 + 0x28) = iVar1;
        if (iVar1 == 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
      uVar4 = *(uint *)((long)param_1 + 0x9c);
      uVar3 = param_1[0x11];
    }
    if (*(int *)((long)param_1 + 0x44) - 0x106U <= uVar4 - (int)uVar3) {
      if ((long)uVar3 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[10] + (uVar3 & 0xffffffff);
      }
      FUN_00e0d324(param_1,lVar5,uVar4 - uVar3,0);
      lVar7 = *param_1;
      param_1[0x11] = (ulong)*(uint *)((long)param_1 + 0x9c);
      lVar5 = *(long *)(lVar7 + 0x38);
      FUN_00e0d150(lVar5);
      uVar4 = *(uint *)(lVar7 + 0x20);
      if (*(uint *)(lVar5 + 0x28) <= *(uint *)(lVar7 + 0x20)) {
        uVar4 = *(uint *)(lVar5 + 0x28);
      }
      if (uVar4 != 0) {
        uVar6 = (ulong)uVar4;
        memcpy(*(void **)(lVar7 + 0x18),*(void **)(lVar5 + 0x20),uVar6);
        *(ulong *)(lVar7 + 0x18) = *(long *)(lVar7 + 0x18) + uVar6;
        *(ulong *)(lVar5 + 0x20) = *(long *)(lVar5 + 0x20) + uVar6;
        *(ulong *)(lVar7 + 0x28) = *(long *)(lVar7 + 0x28) + uVar6;
        *(uint *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) - uVar4;
        iVar1 = *(int *)(lVar5 + 0x28) - uVar4;
        *(int *)(lVar5 + 0x28) = iVar1;
        if (iVar1 == 0) {
          *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(lVar5 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  } while( true );
}

