
int gzread(uint *param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  
  if (((param_1 == (uint *)0x0) || (param_1[6] != 0x1c4f)) ||
     ((param_1[0x1b] != 0 && (param_1[0x1b] != 0xfffffffb)))) {
LAB_00e0fac0:
    iVar2 = -1;
  }
  else if ((int)param_3 < 0) {
    FUN_00e0f54c(param_1,0xfffffffd,"requested length does not fit in int");
    iVar2 = -1;
  }
  else if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    if (param_1[0x1a] != 0) {
      lVar8 = *(long *)(param_1 + 0x18);
      param_1[0x1a] = 0;
      for (; lVar8 != 0; lVar8 = lVar8 - uVar9) {
        while( true ) {
          uVar1 = *param_1;
          if (uVar1 != 0) break;
          if ((param_1[0x14] != 0) && (param_1[0x20] == 0)) goto LAB_00e0f9b8;
          iVar2 = FUN_00e0fb14(param_1);
          if (iVar2 == -1) {
            return -1;
          }
        }
        uVar7 = (uint)lVar8;
        if ((long)(ulong)uVar1 <= lVar8) {
          uVar7 = uVar1;
        }
        uVar9 = (ulong)uVar7;
        *param_1 = uVar1 - uVar7;
        *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) + uVar9;
        *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) + uVar9;
      }
    }
LAB_00e0f9b8:
    puVar10 = param_1 + 2;
    iVar2 = 0;
    do {
      while (uVar1 = *param_1, uVar1 == 0) {
        if ((param_1[0x14] != 0) && (param_1[0x20] == 0)) {
          param_1[0x15] = 1;
          return iVar2;
        }
        if ((param_1[0x11] != 0) && (param_1[10] << 1 <= param_3)) {
          if (param_1[0x11] == 1) {
            uVar9 = 0;
            do {
              sVar4 = read(param_1[7],(void *)((long)param_2 + uVar9),(ulong)(param_3 - (int)uVar9))
              ;
              iVar3 = (int)sVar4;
              if (iVar3 < 1) {
                if (iVar3 < 0) {
                  piVar5 = (int *)__errno();
                  pcVar6 = strerror(*piVar5);
                  FUN_00e0f54c(param_1,0xffffffff,pcVar6);
                  return -1;
                }
                param_1[0x14] = 1;
                break;
              }
              uVar1 = (int)uVar9 + iVar3;
              uVar9 = (ulong)uVar1;
            } while (uVar1 < param_3);
            goto LAB_00e0fa60;
          }
          param_1[0x26] = param_3;
          *(void **)(param_1 + 0x24) = param_2;
          iVar3 = FUN_00e0fc40(param_1);
          if (iVar3 != -1) {
            uVar9 = (ulong)*param_1;
            uVar7 = 0;
            goto LAB_00e0fa5c;
          }
          goto LAB_00e0fac0;
        }
        iVar3 = FUN_00e0fb14(param_1);
        if (iVar3 == -1) goto LAB_00e0fac0;
        if (param_3 == 0) {
          return iVar2;
        }
      }
      uVar7 = param_3;
      if (uVar1 <= param_3) {
        uVar7 = uVar1;
      }
      uVar9 = (ulong)uVar7;
      memcpy(param_2,*(void **)puVar10,uVar9);
      *(ulong *)puVar10 = *(long *)puVar10 + uVar9;
      uVar7 = *param_1 - uVar7;
LAB_00e0fa5c:
      *param_1 = uVar7;
LAB_00e0fa60:
      param_3 = param_3 - (int)uVar9;
      param_2 = (void *)((long)param_2 + uVar9);
      iVar2 = (int)uVar9 + iVar2;
      *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) + uVar9;
    } while (param_3 != 0);
  }
  return iVar2;
}

