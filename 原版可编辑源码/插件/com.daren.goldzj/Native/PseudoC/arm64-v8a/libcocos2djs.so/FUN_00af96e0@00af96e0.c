
ulong FUN_00af96e0(BIO *param_1,undefined1 *param_2,int param_3)

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
                    /* try { // try from 00af9708 to 00bf973f has its CatchHandler @ 00af978c */
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
                    /* try { // try from 00af9740 to 00bf97a7 has its CatchHandler @ 00af95e0 */
    } while (*pcVar1 != '\n');
    puVar8 = *(ulong **)((long)param_1->ptr + 8);
    BIO_clear_flags(param_1,0xf);
    uVar5 = (uint)uVar6;
    if ((int)uVar5 < 0) {
                    /* try { // try from 00af97a8 to 00bf98a7 has its CatchHandler @ 00af97a8
                       catch() { ... } // from try @ 00af97a8 with catch @ 00af97a8
                       catch() { ... } // from try @ 00af98e0 with catch @ 00af97a8 */
      uVar4 = *puVar8;
LAB_00af97ac:
      if (uVar4 == 0) {
        uVar6 = (ulong)(uint)param_1->num;
        if (param_1->num == 0) goto LAB_00af97d4;
        BIO_set_flags(param_1,9);
      }
      if ((int)uVar6 < 1) goto LAB_00af97d4;
    }
    else {
      uVar4 = *puVar8;
      uVar2 = (uint)uVar4;
      if ((ulong)(long)(int)uVar5 <= uVar4) {
        uVar2 = uVar5;
      }
      uVar6 = (ulong)uVar2;
      if ((param_2 == (undefined1 *)0x0) || ((int)uVar2 < 1)) goto LAB_00af97ac;
      __n = (size_t)(int)uVar2;
      memcpy(param_2,(void *)puVar8[1],__n);
                    /* catch() { ... } // from try @ 00af9708 with catch @ 00af978c */
      *puVar8 = *puVar8 - __n;
      puVar8[1] = puVar8[1] + __n;
    }
    param_2 = param_2 + (int)uVar6;
  }
  *param_2 = 0;
LAB_00af97d4:
  return uVar6 & 0xffffffff;
}

