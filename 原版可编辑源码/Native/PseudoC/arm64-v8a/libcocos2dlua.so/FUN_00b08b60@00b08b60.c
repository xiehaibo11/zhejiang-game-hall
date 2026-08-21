
ulong FUN_00b08b60(BIO *param_1,undefined1 *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  size_t __n;
  int *piVar7;
  ulong *puVar8;
  
  piVar7 = *(int **)((long)param_1->ptr + 8);
  BIO_clear_flags(param_1,0xf);
  iVar3 = *piVar7;
  if (param_3 <= iVar3) {
    iVar3 = param_3 + -1;
  }
  if (iVar3 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      if ((long)iVar3 <= (long)uVar6) break;
      pcVar1 = (char *)(*(long *)(piVar7 + 2) + uVar6);
      uVar6 = uVar6 + 1;
    } while (*pcVar1 != '\n');
    puVar8 = *(ulong **)((long)param_1->ptr + 8);
    BIO_clear_flags(param_1,0xf);
    uVar5 = (uint)uVar6;
    if ((int)uVar5 < 0) {
      uVar4 = *puVar8;
LAB_00b08c2c:
      if (uVar4 == 0) {
        uVar6 = (ulong)(uint)param_1->num;
        if (param_1->num == 0) goto LAB_00b08c54;
        BIO_set_flags(param_1,9);
      }
      if ((int)uVar6 < 1) goto LAB_00b08c54;
    }
    else {
      uVar4 = *puVar8;
      uVar2 = (uint)uVar4;
      if ((ulong)(long)(int)uVar5 <= uVar4) {
        uVar2 = uVar5;
      }
      uVar6 = (ulong)uVar2;
      if ((param_2 == (undefined1 *)0x0) || ((int)uVar2 < 1)) goto LAB_00b08c2c;
      __n = (size_t)(int)uVar2;
      memcpy(param_2,(void *)puVar8[1],__n);
      *puVar8 = *puVar8 - __n;
      puVar8[1] = puVar8[1] + __n;
    }
    param_2 = param_2 + (int)uVar6;
  }
  *param_2 = 0;
LAB_00b08c54:
  return uVar6 & 0xffffffff;
}

