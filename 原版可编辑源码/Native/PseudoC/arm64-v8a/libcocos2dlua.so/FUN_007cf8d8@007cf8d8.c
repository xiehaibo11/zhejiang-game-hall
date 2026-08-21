
/* WARNING: Type propagation algorithm not settling */

void FUN_007cf8d8(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ssize_t sVar5;
  int *piVar6;
  void *__ptr;
  long lVar7;
  code *pcVar8;
  int iVar9;
  undefined2 uVar10;
  uint local_150 [2];
  uint local_148 [64];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DAT_01781cfc = 1;
  DAT_01781d00 = 0;
  DAT_01781d08 = 1;
  DAT_01781d0c = 1;
  iVar2 = __open_2("/proc/cpuinfo",0);
  if (-1 < iVar2) {
    iVar9 = 0;
    do {
      while( true ) {
        sVar5 = read(iVar2,local_148,0x100);
        iVar3 = (int)sVar5;
        if (-1 < iVar3) break;
        piVar6 = (int *)__errno();
        if (*piVar6 != 4) goto LAB_007cf96c;
      }
      iVar9 = iVar9 + iVar3;
    } while (iVar3 != 0);
LAB_007cf96c:
    close(iVar2);
    if (-1 < iVar9) {
      __ptr = malloc((long)iVar9);
      if (__ptr != (void *)0x0) {
        iVar2 = FUN_007cfbd0("/proc/cpuinfo",__ptr,(long)iVar9);
        if (-1 < iVar2) {
          FUN_007cfc7c(local_148,"/sys/devices/system/cpu/present");
          FUN_007cfc7c(local_150,"/sys/devices/system/cpu/possible");
          uVar4 = local_148[0] & local_150[0];
          uVar4 = CONCAT13(POPCOUNT((char)(uVar4 >> 0x18)),
                           CONCAT12(POPCOUNT((char)(uVar4 >> 0x10)),
                                    CONCAT11(POPCOUNT((char)(uVar4 >> 8)),POPCOUNT((char)uVar4))));
          uVar10 = NEON_uaddlv((ulong)uVar4,1);
          DAT_01781d08 = CONCAT22((short)(uVar4 >> 0x10),uVar10);
          if ((local_148[0] & local_150[0]) == 0) {
            DAT_01781d08 = 1;
          }
          dlerror();
          lVar7 = dlopen("libc.so",2);
          if (lVar7 != 0) {
            pcVar8 = (code *)dlsym(lVar7,"getauxval");
            if (pcVar8 == (code *)0x0) {
              dlclose(lVar7);
            }
            else {
              uVar4 = (*pcVar8)(0x10);
              dlclose(lVar7);
              if (uVar4 != 0) {
                if ((uVar4 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 1;
                }
                if ((uVar4 >> 1 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 2;
                }
                if ((uVar4 >> 3 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 4;
                }
                if ((uVar4 >> 4 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 8;
                }
                if ((uVar4 >> 5 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 0x10;
                }
                if ((uVar4 >> 6 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 0x20;
                }
                if ((uVar4 >> 7 & 1) != 0) {
                  DAT_01781d00 = DAT_01781d00 | 0x40;
                }
              }
            }
          }
        }
        free(__ptr);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

