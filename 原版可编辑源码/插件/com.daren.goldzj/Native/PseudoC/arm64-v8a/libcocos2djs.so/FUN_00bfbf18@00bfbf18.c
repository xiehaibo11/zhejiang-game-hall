
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfbf18(long param_1)

{
  int __fd;
  int __fd_00;
  bool bVar1;
  int iVar2;
  long __offset;
  ssize_t sVar3;
  int *piVar4;
  ssize_t sVar5;
  ulong uVar6;
  size_t __nbytes;
  long lVar7;
  ulong uVar8;
  pollfd local_2010;
  undefined1 auStack_2008 [8192];
  long local_8;
  
  bVar1 = true;
  uVar8 = 0;
  local_8 = ___stack_chk_guard;
  uVar6 = *(ulong *)(param_1 + 0x180);
  __offset = *(long *)(param_1 + 0x130);
  __fd = *(int *)(param_1 + 0x11c);
  __fd_00 = *(int *)(param_1 + 0x118);
LAB_00bfbf8c:
  do {
    if (uVar6 <= uVar8) {
LAB_00bfc11c:
      if (uVar8 != 0xffffffffffffffff) {
        *(long *)(param_1 + 0x130) = __offset;
      }
LAB_00bfc0bc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar8);
    }
    __nbytes = uVar6 - uVar8;
    if (0x2000 < __nbytes) {
      __nbytes = 0x2000;
    }
    if (!bVar1) {
      while (sVar3 = read(__fd,auStack_2008,__nbytes), sVar3 == -1) {
        piVar4 = (int *)__errno();
        if (*piVar4 != 4) goto LAB_00bfc114;
      }
LAB_00bfbfec:
      if (sVar3 == 0) goto LAB_00bfc11c;
      lVar7 = 0;
      if (0 < sVar3) {
        do {
          do {
            sVar5 = write(__fd_00,auStack_2008 + lVar7,sVar3 - lVar7);
            if (sVar5 != -1) {
              lVar7 = lVar7 + sVar5;
              goto LAB_00bfc03c;
            }
            piVar4 = (int *)__errno();
          } while (*piVar4 == 4);
          if ((*piVar4 != 0xb) && (*piVar4 != 0xb)) goto LAB_00bfc0b4;
          local_2010.events = 4;
          local_2010.revents = 0;
          local_2010.fd = __fd_00;
          while (iVar2 = poll(&local_2010,1,-1), iVar2 == -1) {
            if (*piVar4 != 4) goto LAB_00bfc198;
          }
          if (((long)local_2010.revents & 0xfffffffbU) != 0) {
LAB_00bfc198:
            *piVar4 = 5;
            goto LAB_00bfc0b4;
          }
LAB_00bfc03c:
        } while (lVar7 < sVar3);
      }
      __offset = __offset + sVar3;
      uVar8 = uVar8 + sVar3;
      goto LAB_00bfbf8c;
    }
    do {
      sVar3 = pread(__fd,auStack_2008,__nbytes,__offset);
      if (sVar3 != -1) goto LAB_00bfbfec;
      piVar4 = (int *)__errno();
    } while (*piVar4 == 4);
    if (uVar8 != 0) {
LAB_00bfc114:
      if (uVar8 == 0) {
LAB_00bfc0b4:
        uVar8 = 0xffffffffffffffff;
        goto LAB_00bfc0bc;
      }
      goto LAB_00bfc11c;
    }
    if ((*piVar4 != 5) && (*piVar4 != 0x1d)) goto LAB_00bfc0b4;
    bVar1 = false;
  } while( true );
}

