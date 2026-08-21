
ulong FUN_00b22434(long param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  size_t __n;
  size_t sVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 auStack_70 [2];
  
  lVar6 = *(long *)(param_1 + 0x78);
  __n = *(size_t *)(lVar6 + 0xb8);
  if (*(int *)(lVar6 + 0xac) == 0) {
    puVar8 = (undefined4 *)(lVar6 + 0x20);
    *puVar8 = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    *(undefined8 *)(lVar6 + 0x60) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x40) = 0;
    puVar10 = (undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *puVar10 = 0;
    ChaCha20_ctr32(puVar10,puVar10,0x40,lVar6,puVar8);
    Poly1305_Init(lVar6 + 0xc0,puVar10);
    *puVar8 = 1;
    *(undefined4 *)(lVar6 + 0x70) = 0;
    *(undefined8 *)(lVar6 + 0x98) = 0;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    *(undefined4 *)(lVar6 + 0xac) = 1;
    if (param_3 == (void *)0x0) goto LAB_00b2255c;
LAB_00b22478:
    if (param_2 == (undefined8 *)0x0) {
      Poly1305_Update(lVar6 + 0xc0,param_3,param_4);
      *(undefined4 *)(lVar6 + 0xa8) = 1;
      *(size_t *)(lVar6 + 0x98) = *(long *)(lVar6 + 0x98) + param_4;
      goto LAB_00b226d8;
    }
    piVar9 = (int *)(lVar6 + 0xa8);
    if (*piVar9 != 0) {
      uVar5 = *(ulong *)(lVar6 + 0x98) & 0xf;
      if (uVar5 != 0) {
        Poly1305_Update(lVar6 + 0xc0,&DAT_018b0d3c,0x10 - uVar5);
      }
      *piVar9 = 0;
    }
    *(undefined8 *)(lVar6 + 0xb8) = 0xffffffffffffffff;
    sVar7 = param_4;
    if ((__n == 0xffffffffffffffff) || (sVar7 = __n, __n + 0x10 == param_4)) {
      if (*(int *)(param_1 + 0x10) == 0) {
        Poly1305_Update(lVar6 + 0xc0,param_3,sVar7);
        FUN_00b22008(param_1,param_2,param_3,sVar7);
      }
      else {
        FUN_00b22008(param_1,param_2,param_3,sVar7);
        Poly1305_Update(lVar6 + 0xc0,param_2,sVar7);
      }
      *(size_t *)(lVar6 + 0xa0) = *(long *)(lVar6 + 0xa0) + sVar7;
      if (sVar7 == param_4) goto LAB_00b226d8;
      bVar3 = false;
      param_2 = (undefined8 *)((long)param_2 + sVar7);
      param_3 = (void *)((long)param_3 + sVar7);
      iVar4 = *piVar9;
      __n = sVar7;
      goto joined_r0x00b225e8;
    }
  }
  else {
    if (param_3 != (void *)0x0) goto LAB_00b22478;
LAB_00b2255c:
    bVar3 = __n == param_4;
    iVar4 = *(int *)(lVar6 + 0xa8);
joined_r0x00b225e8:
    if (iVar4 != 0) {
      uVar5 = *(ulong *)(lVar6 + 0x98) & 0xf;
      if (uVar5 != 0) {
        Poly1305_Update(lVar6 + 0xc0,&DAT_018b0d3c,0x10 - uVar5);
      }
      *(undefined4 *)(lVar6 + 0xa8) = 0;
    }
    lVar1 = lVar6 + 0xc0;
    uVar5 = *(ulong *)(lVar6 + 0xa0) & 0xf;
    if (uVar5 != 0) {
      Poly1305_Update(lVar1,&DAT_018b0d3c,0x10 - uVar5);
    }
    Poly1305_Update(lVar1,lVar6 + 0x98,0x10);
    puVar10 = (undefined8 *)(lVar6 + 0x84);
    puVar2 = puVar10;
    if (*(int *)(param_1 + 0x10) == 0) {
      puVar2 = auStack_70;
    }
    Poly1305_Final(lVar1,puVar2);
    *(undefined4 *)(lVar6 + 0xac) = 0;
    if (bVar3 || param_3 == (void *)0x0) {
      if ((*(int *)(param_1 + 0x10) != 0) ||
         (iVar4 = CRYPTO_memcmp(auStack_70,puVar10,(long)*(int *)(lVar6 + 0xb0)), iVar4 == 0))
      goto LAB_00b226d8;
    }
    else {
      if (*(int *)(param_1 + 0x10) != 0) {
        uVar11 = *puVar10;
        param_2[1] = *(undefined8 *)(lVar6 + 0x8c);
        *param_2 = uVar11;
        goto LAB_00b226d8;
      }
      iVar4 = CRYPTO_memcmp(auStack_70,param_3,0x10);
      if (iVar4 == 0) goto LAB_00b226d8;
      memset((void *)((long)param_2 - __n),0,__n);
    }
  }
  param_4 = 0xffffffff;
LAB_00b226d8:
  return param_4 & 0xffffffff;
}

