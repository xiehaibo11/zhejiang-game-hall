
void FUN_00a1dcd4(long param_1,char *param_2,uint param_3,ulong param_4)

{
  char cVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  int iVar6;
  char local_4c;
  byte local_4b;
  long local_48;
  
                    /* try { // try from 00a1dcdc to 00b1dd33 has its CatchHandler @ 00a1dcdc
                       catch() { ... } // from try @ 00a1dcdc with catch @ 00a1dcdc
                       catch() { ... } // from try @ 00a1dd4c with catch @ 00a1dcdc
                       catch() { ... } // from try @ 00a1ddfc with catch @ 00a1dcdc
                       catch() { ... } // from try @ 00a1de4c with catch @ 00a1dcdc
                       catch() { ... } // from try @ 00a1de98 with catch @ 00a1dcdc */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_1 + 0x44) & 0xff) == 0) {
    uVar4 = 0;
    if (param_3 < 0x80) {
LAB_00a1dd5c:
      if (uVar4 < param_4) {
        *param_2 = (char)param_3;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar4 = (ulong)((uint)uVar4 | 1);
        goto LAB_00a1de64;
      }
    }
    else {
LAB_00a1dd94:
                    /* try { // try from 00a1dd98 to 00b1ddfb has its CatchHandler @ 00a1dec8 */
      iVar3 = FUN_00a208f0(&local_4c,param_3);
      iVar6 = (int)uVar4;
      if (iVar3 == -1) {
LAB_00a1ddd0:
        iVar3 = FUN_00a20bf4(&local_4c,param_3);
        if (iVar3 == -1) {
          uVar4 = FUN_00a20e58(&local_4c,param_3);
          if ((int)uVar4 == -1) goto LAB_00a1de64;
          if ((int)uVar4 != 2) goto LAB_00a1dea4;
        }
        else {
          if (iVar3 != 2) {
LAB_00a1dea4:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if ((param_3 & 0xffffffdf) == 0xca) {
                    /* try { // try from 00a1ddfc to 00b1de1f has its CatchHandler @ 00a1dcdc */
            if ((local_4c == -0x78) && ((local_4b == 0x66 || (local_4b == 0xa7)))) {
              *(uint *)(param_1 + 0x44) = (uint)local_4b;
                    /* try { // try from 00a1de20 to 00b1de2b has its CatchHandler @ 00a1de98 */
              goto LAB_00a1de64;
            }
            goto LAB_00a1dea4;
          }
        }
      }
      else {
        if (iVar3 != 2) goto LAB_00a1dea4;
        if ((local_4c == -0x39) || ((local_4c == -0x3a && (0xa0 < local_4b)))) goto LAB_00a1ddd0;
      }
                    /* try { // try from 00a1de40 to 00b1de4b has its CatchHandler @ 00a1dec8 */
      uVar4 = (ulong)(iVar6 + 2);
      if (uVar4 <= param_4) {
        *param_2 = local_4c;
                    /* try { // try from 00a1de90 to 00b1de97 has its CatchHandler @ 00a1dec8 */
        param_2[1] = local_4b;
                    /* catch() { ... } // from try @ 00a1de20 with catch @ 00a1de98
                       try { // try from 00a1de98 to 00b1dee3 has its CatchHandler @ 00a1dcdc */
        *(undefined4 *)(param_1 + 0x44) = 0;
        goto LAB_00a1de64;
      }
    }
  }
  else {
    cVar1 = (char)*(uint *)(param_1 + 0x44);
    if ((param_3 | 8) == 0x30c) {
      if (1 < param_4) {
        *param_2 = -0x78;
                    /* try { // try from 00a1dd34 to 00b1dd4b has its CatchHandler @ 00a1dec8 */
        param_2[1] = cVar1 + ((byte)(param_3 >> 2) & 6) + -4;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar4 = 2;
                    /* try { // try from 00a1dd4c to 00b1dd97 has its CatchHandler @ 00a1dcdc */
        goto LAB_00a1de64;
      }
    }
    else if (1 < param_4) {
      param_2[1] = cVar1;
      pcVar5 = param_2 + 2;
      *param_2 = -0x78;
      uVar4 = 2;
      param_2 = pcVar5;
      if (param_3 < 0x80) goto LAB_00a1dd5c;
      goto LAB_00a1dd94;
    }
  }
  uVar4 = 0xfffffffe;
LAB_00a1de64:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

