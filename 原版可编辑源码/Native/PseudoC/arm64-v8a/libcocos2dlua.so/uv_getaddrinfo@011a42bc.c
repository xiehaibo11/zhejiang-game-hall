
undefined4
uv_getaddrinfo(long param_1,long param_2,long param_3,char *param_4,char *param_5,
              undefined8 *param_6)

{
  void *__dest;
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  int *piVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  
  if ((param_2 != 0) && (param_4 != (char *)0x0 || param_5 != (char *)0x0)) {
    if (param_4 == (char *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = strlen(param_4);
      sVar3 = sVar3 + 1;
    }
    if (param_5 == (char *)0x0) {
      sVar4 = 0;
    }
    else {
      sVar4 = strlen(param_5);
      sVar4 = sVar4 + 1;
    }
    lVar8 = 0x30;
    if (param_6 == (undefined8 *)0x0) {
      lVar8 = 0;
    }
    puVar5 = malloc(sVar3 + lVar8 + sVar4);
    if (puVar5 == (undefined8 *)0x0) {
      uVar1 = 0xfffffff4;
    }
    else {
      *(undefined4 *)(param_2 + 8) = 8;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(long *)(param_2 + 0x40) = param_1;
      *(long *)(param_2 + 0x70) = param_3;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(undefined8 *)(param_2 + 0x90) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined4 *)(param_2 + 0x98) = 0;
      if (param_6 == (undefined8 *)0x0) {
        lVar8 = 0;
      }
      else {
        uVar10 = param_6[4];
        lVar8 = 0x30;
        puVar5[5] = param_6[5];
        puVar5[4] = uVar10;
        uVar10 = param_6[2];
        puVar5[3] = param_6[3];
        puVar5[2] = uVar10;
        uVar10 = *param_6;
        puVar5[1] = param_6[1];
        *puVar5 = uVar10;
        *(undefined8 *)(param_2 + 0x78) = puVar5;
      }
      if (param_5 != (char *)0x0) {
        __dest = (void *)((long)puVar5 + lVar8);
        memcpy(__dest,param_5,sVar4);
        lVar8 = lVar8 + sVar4;
        *(void **)(param_2 + 0x88) = __dest;
      }
      if (param_4 != (char *)0x0) {
        memcpy((void *)((long)puVar5 + lVar8),param_4,sVar3);
        *(void **)(param_2 + 0x80) = (void *)((long)puVar5 + lVar8);
      }
      if (param_3 == 0) {
        plVar9 = (long *)(param_2 + 0x78);
        iVar2 = getaddrinfo(*(char **)(param_2 + 0x80),*(char **)(param_2 + 0x88),
                            (addrinfo *)*plVar9,(addrinfo **)(param_2 + 0x90));
        iVar7 = 0;
        switch(iVar2) {
        case 0:
          break;
        case 1:
          iVar7 = -3000;
          break;
        case 2:
          iVar7 = -0xbb9;
          break;
        case 3:
          iVar7 = -0xbba;
          break;
        case 4:
          iVar7 = -0xbbc;
          break;
        case 5:
          iVar7 = -0xbbd;
          break;
        case 6:
          iVar7 = -0xbbe;
          break;
        case 7:
          iVar7 = -0xbbf;
          break;
        case 8:
          iVar7 = -0xbc0;
          break;
        case 9:
          iVar7 = -0xbc2;
          break;
        case 10:
          iVar7 = -0xbc3;
          break;
        case 0xb:
          piVar6 = (int *)__errno();
          iVar7 = -*piVar6;
          break;
        case 0xc:
          iVar7 = -0xbc5;
          break;
        case 0xd:
          iVar7 = -0xbc6;
          break;
        case 0xe:
          iVar7 = -0xbc1;
          break;
        default:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(int *)(param_2 + 0x98) = iVar7;
        *(int *)(*(long *)(param_2 + 0x40) + 0x20) = *(int *)(*(long *)(param_2 + 0x40) + 0x20) + -1
        ;
        if (((*plVar9 != 0) || (*(long *)(param_2 + 0x88) != 0)) || (*(long *)(param_2 + 0x80) != 0)
           ) {
          FUN_0119f27c();
        }
        *(undefined8 *)(param_2 + 0x80) = 0;
        *(undefined8 *)(param_2 + 0x88) = 0;
        *plVar9 = 0;
        if (*(code **)(param_2 + 0x70) != (code *)0x0) {
          (**(code **)(param_2 + 0x70))
                    (param_2,*(undefined4 *)(param_2 + 0x98),*(undefined8 *)(param_2 + 0x90));
        }
        uVar1 = *(undefined4 *)(param_2 + 0x98);
      }
      else {
        FUN_0119e4dc(param_1,param_2 + 0x48,FUN_011a4544,FUN_011a46b0);
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0xffffffea;
}

