
int FUN_00a38b64(int param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *__s;
  size_t sVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  undefined1 **ppuStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  int local_54;
  
  lVar5 = *param_2;
  puStack_90 = auStack_d0;
  ppuStack_98 = &local_a0;
  uStack_88 = 0xffffff80ffffffd8;
  local_c8 = param_4;
  local_c0 = param_5;
  uStack_b8 = param_6;
  local_b0 = param_7;
  uStack_a8 = param_8;
  local_a0 = (undefined1 *)register0x00000008;
                    /* try { // try from 00a38bdc to 00b38c5f has its CatchHandler @ 00a38bdc
                       catch() { ... } // from try @ 00a38bdc with catch @ 00a38bdc
                       catch() { ... } // from try @ 00a38ccc with catch @ 00a38bdc */
  __s = (char *)FUN_00a2442c(param_3,&local_a0);
  if (__s == (char *)0x0) {
    iVar7 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    pcVar6 = __s;
    while( true ) {
      local_54 = 0;
      uVar4 = (ulong)(*(int *)((long)param_2 + 0x264) == param_1);
      lVar3 = (*(code *)param_2[uVar4 + 0x51])(param_2,uVar4,pcVar6,sVar2,&local_54);
      if (lVar3 < 0) {
                    /* try { // try from 00a38c68 to 00b38c93 has its CatchHandler @ 00a38d34 */
        if (local_54 != 0x51) {
          iVar7 = local_54;
          if (local_54 == 0) {
            iVar7 = 0x37;
                    /* try { // try from 00a38ccc to 00b38d6f has its CatchHandler @ 00a38bdc */
          }
          goto LAB_00a38c88;
        }
        lVar3 = 0;
        cVar1 = *(char *)(lVar5 + 0x628);
      }
      else {
        cVar1 = *(char *)(lVar5 + 0x628);
      }
      if (cVar1 != '\0') {
        FUN_00a38860(lVar5,4,pcVar6,lVar3,param_2);
      }
      sVar2 = sVar2 - lVar3;
                    /* try { // try from 00a38c60 to 00b38c67 has its CatchHandler @ 00a38d20 */
      if (sVar2 == 0) break;
      pcVar6 = pcVar6 + lVar3;
    }
    iVar7 = 0;
LAB_00a38c88:
    (*(code *)PTR_free_01769a00)(__s);
  }
                    /* try { // try from 00a38cb4 to 00b38ccb has its CatchHandler @ 00a38d30 */
  return iVar7;
}

