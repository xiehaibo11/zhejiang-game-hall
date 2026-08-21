
void uv_resident_set_memory(long *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ssize_t sVar5;
  char *pcVar6;
  long lVar7;
  char acStack_448 [1024];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  do {
    iVar2 = open("/proc/self/stat",0);
    if (iVar2 != -1) goto LAB_011ac868;
    piVar4 = (int *)__errno();
    iVar2 = *piVar4;
  } while (iVar2 == 4);
  goto LAB_011ac8a4;
  while (piVar4 = (int *)__errno(), *piVar4 == 4) {
LAB_011ac868:
    sVar5 = read(iVar2,acStack_448,0x3ff);
    if (sVar5 != -1) {
      FUN_011a2d5c(iVar2);
      acStack_448[sVar5] = '\0';
      pcVar6 = strchr(acStack_448,0x20);
      if (pcVar6 == (char *)0x0) {
LAB_011acab4:
        iVar2 = -0x16;
        if (*(long *)(lVar1 + 0x28) == local_48) {
          return;
        }
        goto LAB_011ac8b8;
      }
      if (pcVar6[1] == '(') {
        pcVar6 = strchr(pcVar6 + 1,0x29);
        if (((((((((pcVar6 == (char *)0x0) ||
                  (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
                 (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
                ((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
                 (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)))) ||
               (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
              (((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
                (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
               ((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
                (((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
                  (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
                 (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)))))))) ||
             ((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
              (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)))) ||
            ((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
             (((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
               (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
              ((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
               (((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
                 (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)) ||
                (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)))))))))) ||
           ((pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0 ||
            (pcVar6 = strchr(pcVar6 + 1,0x20), pcVar6 == (char *)0x0)))) goto LAB_011acab4;
        piVar4 = (int *)__errno();
        *piVar4 = 0;
        lVar7 = strtol(pcVar6,(char **)0x0,10);
        if ((-1 < lVar7) && (*piVar4 == 0)) {
          iVar3 = getpagesize();
          iVar2 = 0;
          *param_1 = lVar7 * iVar3;
          if (*(long *)(lVar1 + 0x28) == local_48) {
            return;
          }
          goto LAB_011ac8b8;
        }
      }
      iVar2 = -0x16;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_011ac8b8;
    }
  }
  FUN_011a2d5c(iVar2);
  iVar2 = *piVar4;
LAB_011ac8a4:
  iVar2 = -iVar2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_011ac8b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

