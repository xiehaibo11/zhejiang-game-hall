
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf1560(long param_1)

{
  ssize_t sVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  long local_208;
  int local_200 [126];
  long local_8;
  
  uVar6 = 0;
  __n = 0;
  local_8 = ___stack_chk_guard;
  do {
    sVar1 = read(*(int *)(param_1 + 0x228),(void *)((long)&local_208 + __n),0x200 - __n);
    if ((int)sVar1 == -1) {
      piVar2 = (int *)__errno();
      if (*piVar2 != 4) {
        if ((*piVar2 != 0xb) && (*piVar2 != 0xb)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (__n == 0) break;
      }
    }
    else {
      __n = __n + (long)(int)sVar1;
      uVar6 = __n & 0xfffffffffffffff0;
      if (uVar6 == 0) {
        if (__n == 0) break;
      }
      else {
        uVar5 = 0;
        do {
          lVar4 = *(long *)((long)&local_208 + uVar5);
          if (*(int *)((long)local_200 + uVar5) == *(int *)(lVar4 + 0x68)) {
            (**(code **)(lVar4 + 0x60))(lVar4);
          }
          uVar3 = *(uint *)(lVar4 + 0x58);
          *(int *)(lVar4 + 0x94) = *(int *)(lVar4 + 0x94) + 1;
          if (((uVar3 >> 0x13 & 1) != 0) && (*(int *)(lVar4 + 0x68) != 0)) {
            FUN_00bf0f6c(lVar4);
            uVar3 = *(uint *)(lVar4 + 0x58);
          }
          if (((uVar3 & 1) != 0) && (*(int *)(lVar4 + 0x90) == *(int *)(lVar4 + 0x94))) {
            uv__make_close_pending(lVar4);
          }
          uVar5 = uVar5 + 0x10;
        } while (uVar5 < uVar6);
        __n = __n - uVar6;
        if (__n == 0) goto LAB_00bf1624;
      }
      memmove(&local_208,(void *)((long)&local_208 + uVar6),__n);
    }
LAB_00bf1624:
  } while (uVar6 == 0x200);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

