
/* WARNING: Type propagation algorithm not settling */

void FUN_008709e4(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ssize_t sVar6;
  int *piVar7;
  void *__ptr;
  long lVar8;
  code *pcVar9;
  int iVar10;
  undefined2 uVar11;
  uint local_178 [2];
  uint local_170 [64];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  DAT_01d35be0 = 1;
  DAT_01d35be8 = 0;
  DAT_01d35bf0 = 1;
  DAT_01d35bf4 = 1;
  iVar2 = open("/proc/cpuinfo",0);
  if (-1 < iVar2) {
    iVar10 = 0;
    do {
      while( true ) {
        sVar6 = read(iVar2,local_170,0x100);
        iVar3 = (int)sVar6;
        if (-1 < iVar3) break;
        piVar7 = (int *)__errno();
        if (*piVar7 != 4) goto LAB_00870a80;
      }
      iVar10 = iVar10 + iVar3;
    } while (iVar3 != 0);
LAB_00870a80:
    close(iVar2);
    if (-1 < iVar10) {
      __ptr = malloc((long)iVar10);
      if (__ptr != (void *)0x0) {
        iVar2 = open("/proc/cpuinfo",0);
        if (-1 < iVar2) {
          iVar3 = 0;
          do {
            while( true ) {
              if (iVar10 <= iVar3) goto LAB_00870b08;
              sVar6 = read(iVar2,(void *)((long)__ptr + (long)iVar3),(long)iVar10 - (long)iVar3);
              iVar4 = (int)sVar6;
              if (-1 < iVar4) break;
              piVar7 = (int *)__errno();
              if (*piVar7 != 4) {
                if (iVar3 != 0) goto LAB_00870b08;
                close(iVar2);
                goto LAB_00870c48;
              }
            }
            iVar3 = iVar3 + iVar4;
          } while (iVar4 != 0);
LAB_00870b08:
          close(iVar2);
          if (-1 < iVar3) {
            FUN_00870d54(local_170,"/sys/devices/system/cpu/present");
            FUN_00870d54(local_178,"/sys/devices/system/cpu/possible");
            uVar5 = local_170[0] & local_178[0];
            uVar5 = CONCAT13(POPCOUNT((char)(uVar5 >> 0x18)),
                             CONCAT12(POPCOUNT((char)(uVar5 >> 0x10)),
                                      CONCAT11(POPCOUNT((char)(uVar5 >> 8)),POPCOUNT((char)uVar5))))
            ;
            uVar11 = NEON_uaddlv((ulong)uVar5,1);
            DAT_01d35bf0 = CONCAT22((short)(uVar5 >> 0x10),uVar11);
            if ((local_170[0] & local_178[0]) == 0) {
              DAT_01d35bf0 = 1;
            }
            dlerror();
            lVar8 = dlopen("libc.so",2);
            if (lVar8 != 0) {
              pcVar9 = (code *)dlsym(lVar8,"getauxval");
              if (pcVar9 == (code *)0x0) {
                dlclose(lVar8);
              }
              else {
                uVar5 = (*pcVar9)(0x10);
                dlclose(lVar8);
                if (uVar5 != 0) {
                  if ((uVar5 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 1;
                  }
                  if ((uVar5 >> 1 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 2;
                  }
                  if ((uVar5 >> 3 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 4;
                  }
                  if ((uVar5 >> 4 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 8;
                  }
                  if ((uVar5 >> 5 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 0x10;
                  }
                  if ((uVar5 >> 6 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 0x20;
                  }
                  if ((uVar5 >> 7 & 1) != 0) {
                    DAT_01d35be8 = DAT_01d35be8 | 0x40;
                  }
                }
              }
            }
          }
        }
LAB_00870c48:
        free(__ptr);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

