
uint gzwrite(long param_1,void *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong __n;
  long lVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x18) == 0x79b1) && (*(int *)(param_1 + 0x6c) == 0)) {
    if ((int)param_3 < 0) {
      FUN_0117e474(param_1,0xfffffffd,"requested length does not fit in int");
    }
    else if ((param_3 != 0) &&
            ((*(int *)(param_1 + 0x28) != 0 || (iVar5 = FUN_0117f684(param_1), iVar5 != -1)))) {
      if (*(int *)(param_1 + 0x68) != 0) {
        lVar8 = *(long *)(param_1 + 0x60);
        *(undefined4 *)(param_1 + 0x68) = 0;
        if ((*(int *)(param_1 + 0x80) != 0) && (iVar5 = FUN_0117f76c(param_1,0), iVar5 == -1)) {
          return 0;
        }
        if (lVar8 != 0) {
          bVar4 = false;
          do {
            uVar1 = (uint)lVar8;
            if ((long)(ulong)*(uint *)(param_1 + 0x28) <= lVar8) {
              uVar1 = *(uint *)(param_1 + 0x28);
            }
            if (!bVar4) {
              memset(*(void **)(param_1 + 0x30),0,(ulong)uVar1);
            }
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
            *(uint *)(param_1 + 0x80) = uVar1;
            *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar1;
            iVar5 = FUN_0117f76c(param_1,0);
            if (iVar5 == -1) {
              return 0;
            }
            lVar8 = lVar8 - (ulong)uVar1;
            bVar4 = true;
          } while (lVar8 != 0);
        }
      }
      uVar1 = param_3;
      if (param_3 < *(uint *)(param_1 + 0x28)) {
        while( true ) {
          uVar2 = *(uint *)(param_1 + 0x80);
          if (uVar2 == 0) {
            lVar7 = *(long *)(param_1 + 0x30);
            *(long *)(param_1 + 0x78) = lVar7;
            lVar8 = lVar7;
          }
          else {
            lVar7 = *(long *)(param_1 + 0x30);
            lVar8 = *(long *)(param_1 + 0x78);
          }
          uVar6 = (lVar8 + (ulong)uVar2) - lVar7;
          uVar3 = *(int *)(param_1 + 0x28) - (int)uVar6;
          uVar2 = uVar1;
          if (uVar3 <= uVar1) {
            uVar2 = uVar3;
          }
          __n = (ulong)uVar2;
          memcpy((void *)(lVar7 + (uVar6 & 0xffffffff)),param_2,__n);
          *(uint *)(param_1 + 0x80) = uVar2 + *(int *)(param_1 + 0x80);
          *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n;
          if (uVar1 - uVar2 == 0) break;
          param_2 = (void *)((long)param_2 + __n);
          iVar5 = FUN_0117f76c(param_1,0);
          uVar1 = uVar1 - uVar2;
          if (iVar5 == -1) {
            return 0;
          }
        }
        return param_3;
      }
      if ((*(uint *)(param_1 + 0x80) == 0) || (iVar5 = FUN_0117f76c(param_1,0), iVar5 != -1)) {
        *(uint *)(param_1 + 0x80) = param_3;
        *(void **)(param_1 + 0x78) = param_2;
        *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)param_3;
        iVar5 = FUN_0117f76c(param_1,0);
        if (iVar5 != -1) {
          return param_3;
        }
      }
    }
  }
  return 0;
}

