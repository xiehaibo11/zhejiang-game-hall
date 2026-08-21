
undefined4 FUN_0117f76c(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if ((*(int *)(param_1 + 0x28) == 0) && (iVar3 = FUN_0117f684(param_1), iVar3 == -1)) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    lVar1 = param_1 + 0x78;
    if (param_2 == 0) {
      iVar3 = *(int *)(param_1 + 0x98);
      do {
        if (iVar3 == 0) {
          uVar9 = *(long *)(param_1 + 0x90) - (long)*(void **)(param_1 + 8);
          iVar3 = (int)uVar9;
          if (iVar3 == 0) {
LAB_0117f91c:
            iVar3 = *(int *)(param_1 + 0x28);
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            *(int *)(param_1 + 0x98) = iVar3;
            *(undefined8 *)(param_1 + 0x90) = uVar8;
          }
          else {
            sVar5 = write(*(int *)(param_1 + 0x1c),*(void **)(param_1 + 8),uVar9 & 0xffffffff);
            if (((int)sVar5 < 0) || ((int)sVar5 != iVar3)) goto LAB_0117f96c;
            iVar3 = *(int *)(param_1 + 0x98);
            if (iVar3 == 0) goto LAB_0117f91c;
            uVar8 = *(undefined8 *)(param_1 + 0x90);
          }
          *(undefined8 *)(param_1 + 8) = uVar8;
        }
        iVar4 = deflate(lVar1,0);
        if (iVar4 == -2) goto LAB_0117f990;
        bVar2 = iVar3 != *(int *)(param_1 + 0x98);
        iVar3 = *(int *)(param_1 + 0x98);
      } while (bVar2);
    }
    else if (param_2 == 4) {
      iVar4 = 0;
      iVar3 = *(int *)(param_1 + 0x98);
      do {
        if ((iVar3 == 0) || (iVar4 == 1)) {
          uVar9 = *(long *)(param_1 + 0x90) - (long)*(void **)(param_1 + 8);
          iVar4 = (int)uVar9;
          if (iVar4 != 0) {
            sVar5 = write(*(int *)(param_1 + 0x1c),*(void **)(param_1 + 8),uVar9 & 0xffffffff);
            if (((int)sVar5 < 0) || ((int)sVar5 != iVar4)) goto LAB_0117f96c;
            iVar3 = *(int *)(param_1 + 0x98);
          }
          if (iVar3 == 0) {
            iVar3 = *(int *)(param_1 + 0x28);
            uVar8 = *(undefined8 *)(param_1 + 0x38);
            *(int *)(param_1 + 0x98) = iVar3;
            *(undefined8 *)(param_1 + 0x90) = uVar8;
          }
          else {
            uVar8 = *(undefined8 *)(param_1 + 0x90);
          }
          *(undefined8 *)(param_1 + 8) = uVar8;
        }
        iVar4 = deflate(lVar1,4);
        if (iVar4 == -2) {
LAB_0117f990:
          FUN_0117e474(param_1,0xfffffffe,"internal error: deflate stream corrupt");
          return 0xffffffff;
        }
        bVar2 = iVar3 != *(int *)(param_1 + 0x98);
        iVar3 = *(int *)(param_1 + 0x98);
      } while (bVar2);
    }
    else {
      do {
        uVar9 = *(long *)(param_1 + 0x90) - (long)*(void **)(param_1 + 8);
        iVar3 = (int)uVar9;
        if (iVar3 != 0) {
          sVar5 = write(*(int *)(param_1 + 0x1c),*(void **)(param_1 + 8),uVar9 & 0xffffffff);
          if (((int)sVar5 < 0) || ((int)sVar5 != iVar3)) goto LAB_0117f96c;
        }
        iVar3 = *(int *)(param_1 + 0x98);
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          uVar8 = *(undefined8 *)(param_1 + 0x38);
          *(int *)(param_1 + 0x98) = iVar3;
          *(undefined8 *)(param_1 + 0x90) = uVar8;
        }
        else {
          uVar8 = *(undefined8 *)(param_1 + 0x90);
        }
        *(undefined8 *)(param_1 + 8) = uVar8;
        iVar4 = deflate(lVar1,param_2);
        if (iVar4 == -2) goto LAB_0117f990;
      } while (iVar3 != *(int *)(param_1 + 0x98));
    }
    if (param_2 == 4) {
      deflateReset(lVar1);
    }
    return 0;
  }
  sVar5 = write(*(int *)(param_1 + 0x1c),*(void **)(param_1 + 0x78),(ulong)*(uint *)(param_1 + 0x80)
               );
  if ((-1 < (int)sVar5) && (*(int *)(param_1 + 0x80) == (int)sVar5)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    return 0;
  }
LAB_0117f96c:
  piVar6 = (int *)__errno();
  pcVar7 = strerror(*piVar6);
  FUN_0117e474(param_1,0xffffffff,pcVar7);
  return 0xffffffff;
}

