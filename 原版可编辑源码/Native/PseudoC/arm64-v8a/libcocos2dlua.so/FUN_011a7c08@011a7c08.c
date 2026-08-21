
void FUN_011a7c08(long param_1)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  ssize_t sVar5;
  int *piVar6;
  size_t __n;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long local_268;
  int local_260 [126];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar8 = 0;
  __n = 0;
  do {
    while( true ) {
      sVar5 = read(*(int *)(param_1 + 0x228),(void *)((long)local_260 + (__n - 8)),0x200 - __n);
      if ((int)sVar5 != -1) break;
      piVar6 = (int *)__errno();
      if (*piVar6 != 4) {
        if (*piVar6 != 0xb) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (__n == 0) goto LAB_011a7d28;
      }
LAB_011a7d1c:
      bVar4 = uVar8 != 0x200;
      uVar8 = 0x200;
      if (bVar4) goto LAB_011a7d28;
    }
    uVar1 = __n + (long)(int)sVar5;
    uVar8 = uVar1 & 0xfffffffffffffff0;
    if (uVar8 != 0) {
      uVar9 = 0;
      do {
        lVar7 = *(long *)((long)local_260 + (uVar9 - 8));
        if (*(int *)((long)local_260 + uVar9) == *(int *)(lVar7 + 0x68)) {
          (**(code **)(lVar7 + 0x60))(lVar7);
        }
        uVar2 = *(uint *)(lVar7 + 0x58);
        *(int *)(lVar7 + 0x94) = *(int *)(lVar7 + 0x94) + 1;
        if ((uVar2 >> 0x19 & 1) != 0) {
          FUN_011a6e70(lVar7);
          uVar2 = *(uint *)(lVar7 + 0x58);
        }
        if (((uVar2 & 1) != 0) && (*(int *)(lVar7 + 0x90) == *(int *)(lVar7 + 0x94))) {
          FUN_011a26b4(lVar7);
        }
        uVar9 = uVar9 + 0x10;
      } while (uVar9 < uVar8);
    }
    __n = uVar1 - uVar8;
    if (__n == 0) goto LAB_011a7d1c;
    memmove(&local_268,(void *)((long)local_260 + (uVar8 - 8)),__n);
    bVar4 = uVar8 == 0x200;
    uVar8 = 0x200;
  } while (bVar4);
LAB_011a7d28:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

