
int FT_Bitmap_Copy(undefined8 *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *__src;
  ulong __n;
  uint uVar7;
  size_t __n_00;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_44;
  
  local_44 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (param_3 == (uint *)0x0) {
    return 6;
  }
  if (param_2 == param_3) {
    return 0;
  }
  uVar7 = param_2[2];
  uVar4 = param_3[2];
  iVar1 = 1;
  if ((int)uVar7 < 0) {
    iVar1 = -1;
  }
  iVar2 = 1;
  if ((int)uVar4 < 0) {
    iVar2 = -1;
  }
  if (*(long *)(param_2 + 4) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 2);
    uVar6 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 2) = uVar8;
    *(undefined8 *)param_3 = uVar6;
    *(undefined8 *)(param_3 + 6) = uVar10;
    *(undefined8 *)(param_3 + 4) = uVar9;
    if (iVar1 == iVar2) {
      return 0;
    }
    param_3[2] = -param_3[2];
    return 0;
  }
  pvVar5 = *(void **)(param_3 + 4);
  uVar3 = -uVar7;
  if (-1 < (int)uVar7) {
    uVar3 = uVar7;
  }
  __n = (ulong)uVar3;
  __n_00 = *param_2 * __n;
  if (pvVar5 == (void *)0x0) {
    pvVar5 = (void *)FUN_00e1d8b0(*param_1,__n_00,&local_44);
  }
  else {
    uVar7 = -uVar4;
    if (-1 < (int)uVar4) {
      uVar7 = uVar4;
    }
    if ((ulong)*param_3 * (ulong)uVar7 - __n_00 == 0) goto LAB_00e85318;
    pvVar5 = (void *)FUN_00e1ea0c(*param_1,1,(ulong)*param_3 * (ulong)uVar7,__n_00,pvVar5,&local_44)
    ;
  }
  *(void **)(param_3 + 4) = pvVar5;
LAB_00e85318:
  if (local_44 == 0) {
    uVar8 = *(undefined8 *)param_2;
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = uVar8;
    *(undefined8 *)(param_3 + 6) = uVar10;
    *(undefined8 *)(param_3 + 4) = uVar9;
    *(undefined8 *)(param_3 + 8) = uVar6;
    *(void **)(param_3 + 4) = pvVar5;
    __src = *(void **)(param_2 + 4);
    if (iVar1 == iVar2) {
      memcpy(pvVar5,__src,__n_00);
    }
    else {
      uVar7 = *param_3;
      if (uVar7 != 0) {
        pvVar5 = (void *)((long)pvVar5 + (uVar7 - 1) * __n);
        do {
          memcpy(pvVar5,__src,__n);
          __src = (void *)((long)__src + __n);
          uVar7 = uVar7 - 1;
          pvVar5 = (void *)((long)pvVar5 - __n);
        } while (uVar7 != 0);
      }
    }
  }
  return local_44;
}

