
void FUN_010966c4(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    uVar3 = param_1[0x1101f];
    ft_mem_free(uVar3,*param_1);
    lVar7 = param_1[0x1d];
    *param_1 = 0;
    if (lVar7 != 0) {
      iVar8 = *(int *)(lVar7 + 4);
      puVar4 = *(undefined8 **)(lVar7 + 0x10);
      if (0 < iVar8) {
        do {
          ft_mem_free(uVar3,*puVar4);
          iVar8 = iVar8 + -1;
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        } while (iVar8 != 0);
        puVar4 = *(undefined8 **)(lVar7 + 0x10);
      }
      ft_mem_free(uVar3,puVar4);
      *(undefined8 *)(lVar7 + 0x10) = 0;
      ft_mem_free(uVar3,param_1[0x1d]);
      param_1[0x1d] = 0;
    }
    ft_mem_free(uVar3,param_1[0x13]);
    uVar2 = param_1[0x10];
    param_1[0x13] = 0;
    if (uVar2 != 0) {
      uVar5 = 0;
      lVar7 = 0x10;
      do {
        if (*(int *)(param_1[0x12] + lVar7 + -8) == 1) {
          ft_mem_free(uVar3,*(undefined8 *)(param_1[0x12] + lVar7));
          *(undefined8 *)(param_1[0x12] + lVar7) = 0;
          uVar2 = param_1[0x10];
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x18;
      } while (uVar5 < uVar2);
    }
    ft_mem_free(uVar3,param_1[0x12]);
    param_1[0x12] = 0;
    if (param_1[0xb] != 0) {
      puVar4 = (undefined8 *)param_1[0xc];
      uVar2 = 0;
      do {
        ft_mem_free(uVar3,*puVar4);
        *puVar4 = 0;
        ft_mem_free(uVar3,puVar4[4]);
        puVar4[4] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 7;
      } while (uVar2 < (ulong)param_1[0xb]);
    }
    if (param_1[0xe] != 0) {
      puVar4 = (undefined8 *)param_1[0xf];
      uVar2 = 0;
      do {
        ft_mem_free(uVar3,*puVar4);
        *puVar4 = 0;
        ft_mem_free(uVar3,puVar4[4]);
        puVar4[4] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 7;
      } while (uVar2 < (ulong)param_1[0xe]);
    }
    ft_mem_free(uVar3,param_1[0xc]);
    param_1[0xc] = 0;
    ft_mem_free(uVar3,param_1[0xf]);
    puVar4 = (undefined8 *)param_1[0x18];
    param_1[0xf] = 0;
    if (param_1[0x1a] != 0) {
      uVar2 = 0;
      do {
        ft_mem_free(uVar3,*puVar4);
        *puVar4 = 0;
        ft_mem_free(uVar3,puVar4[4]);
        puVar4[4] = 0;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 7;
      } while (uVar2 < (ulong)param_1[0x1a]);
      puVar4 = (undefined8 *)param_1[0x18];
    }
    ft_mem_free(uVar3,puVar4);
    param_1[0x18] = 0;
    iVar8 = *(int *)((long)param_1 + 0x88114);
    puVar4 = param_1 + 0x11024;
    puVar6 = (undefined8 *)*puVar4;
    if (0 < iVar8) {
      do {
        ft_mem_free(uVar3,*puVar6);
        iVar8 = iVar8 + -1;
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      } while (iVar8 != 0);
      puVar6 = (undefined8 *)*puVar4;
    }
    ft_mem_free(uVar3,puVar6);
    *puVar4 = 0;
    plVar1 = param_1 + 0x11020;
    lVar7 = *plVar1;
    if (param_1[0x11021] != 0) {
      uVar2 = 0;
      puVar4 = (undefined8 *)(lVar7 + 0x10);
      do {
        ft_mem_free(uVar3,puVar4[-2]);
        puVar4[-2] = 0;
        if (*(int *)(puVar4 + -1) == 1) {
          ft_mem_free(uVar3,*puVar4);
          *puVar4 = 0;
        }
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 3;
      } while (uVar2 < (ulong)param_1[0x11021]);
      lVar7 = *plVar1;
    }
    ft_mem_free(uVar3,lVar7);
    *plVar1 = 0;
  }
  return;
}

