
ulong i2o_SCT_signature(int *param_1,long *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int line;
  undefined1 *puVar3;
  ulong uVar4;
  
  iVar1 = SCT_signature_is_complete();
  if (iVar1 == 0) {
    iVar1 = 0x6b;
    line = 0x9f;
  }
  else {
    if (*param_1 == 0) {
      uVar4 = *(long *)(param_1 + 0x14) + 4;
      if (param_2 == (long *)0x0) goto LAB_00b02c28;
      puVar3 = (undefined1 *)*param_2;
      if (puVar3 == (undefined1 *)0x0) {
        puVar2 = CRYPTO_malloc((int)uVar4,"crypto/ct/ct_oct.c",0xb4);
        puVar3 = puVar2;
        if (puVar2 == (undefined1 *)0x0) {
          iVar1 = 0x41;
          line = 0xb6;
          goto LAB_00b02c0c;
        }
      }
      else {
        puVar2 = puVar3 + uVar4;
      }
      *param_2 = (long)puVar2;
      *puVar3 = (char)param_1[0x10];
      puVar3[1] = *(undefined1 *)((long)param_1 + 0x41);
      puVar3[2] = (char)((ulong)*(undefined8 *)(param_1 + 0x14) >> 8);
      puVar3[3] = (char)*(undefined8 *)(param_1 + 0x14);
      memcpy(puVar3 + 4,*(void **)(param_1 + 0x12),*(size_t *)(param_1 + 0x14));
      goto LAB_00b02c28;
    }
    iVar1 = 0x67;
    line = 0xa4;
  }
LAB_00b02c0c:
  ERR_put_error(0x32,0x6d,iVar1,"crypto/ct/ct_oct.c",line);
  CRYPTO_free((void *)0x0);
  uVar4 = 0xffffffff;
LAB_00b02c28:
  return uVar4 & 0xffffffff;
}

