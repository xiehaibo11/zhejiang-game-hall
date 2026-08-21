
ulong i2o_SCT(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int line;
  undefined8 *puVar3;
  size_t __n;
  undefined8 uVar4;
  undefined1 *local_28;
  
  local_28 = (undefined1 *)0x0;
  iVar1 = SCT_is_complete();
  if (iVar1 == 0) {
    iVar1 = 0x6a;
    line = 0xce;
LAB_00b121bc:
    ERR_put_error(0x32,0x6b,iVar1,"crypto/ct/ct_oct.c",line);
    puVar2 = (undefined1 *)0x0;
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      __n = *(long *)(param_1 + 0xe) + *(long *)(param_1 + 0x14) + 0x2f;
    }
    else {
      __n = *(size_t *)(param_1 + 4);
    }
    if (param_2 == (undefined8 *)0x0) goto LAB_00b121d8;
    puVar2 = (undefined1 *)*param_2;
    if (puVar2 == (undefined1 *)0x0) {
      local_28 = CRYPTO_malloc((int)__n,"crypto/ct/ct_oct.c",0xe3);
      if (local_28 == (undefined1 *)0x0) {
        iVar1 = 0x41;
        line = 0xe5;
        local_28 = (undefined1 *)0x0;
        goto LAB_00b121bc;
      }
      iVar1 = *param_1;
      *param_2 = local_28;
    }
    else {
      *param_2 = puVar2 + __n;
      local_28 = puVar2;
    }
    if (iVar1 != 0) {
      memcpy(local_28,*(void **)(param_1 + 2),__n);
      goto LAB_00b121d8;
    }
    *local_28 = 0;
    puVar3 = *(undefined8 **)(param_1 + 6);
    uVar4 = puVar3[2];
    puVar2 = local_28 + 0x2b;
    *(undefined8 *)(local_28 + 0x19) = puVar3[3];
    *(undefined8 *)(local_28 + 0x11) = uVar4;
    uVar4 = *puVar3;
    *(undefined8 *)(local_28 + 9) = puVar3[1];
    *(undefined8 *)(local_28 + 1) = uVar4;
    local_28[0x21] = *(undefined1 *)((long)param_1 + 0x2f);
    local_28[0x22] = (char)*(undefined2 *)((long)param_1 + 0x2e);
    local_28[0x23] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x28);
    local_28[0x24] = (char)param_1[0xb];
    local_28[0x25] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x18);
    local_28[0x26] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 0x10);
    local_28[0x27] = (char)((ulong)*(undefined8 *)(param_1 + 10) >> 8);
    local_28[0x28] = (char)*(undefined8 *)(param_1 + 10);
    local_28[0x29] = (char)((ulong)*(undefined8 *)(param_1 + 0xe) >> 8);
    local_28[0x2a] = (char)*(undefined8 *)(param_1 + 0xe);
    local_28 = puVar2;
    if (*(size_t *)(param_1 + 0xe) != 0) {
      memcpy(puVar2,*(void **)(param_1 + 0xc),*(size_t *)(param_1 + 0xe));
      local_28 = puVar2 + *(long *)(param_1 + 0xe);
    }
    iVar1 = i2o_SCT_signature(param_1,&local_28);
    puVar2 = local_28;
    if (0 < iVar1) goto LAB_00b121d8;
  }
  CRYPTO_free(puVar2);
  __n = 0xffffffff;
LAB_00b121d8:
  return __n & 0xffffffff;
}

