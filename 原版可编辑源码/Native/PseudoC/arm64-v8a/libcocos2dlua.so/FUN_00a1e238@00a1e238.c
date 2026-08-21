
void FUN_00a1e238(long param_1,char *param_2,uint param_3,ulong param_4)

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
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a1e274 to 00b1e2c3 has its CatchHandler @ 00a1e274
                       catch() { ... } // from try @ 00a1e274 with catch @ 00a1e274
                       catch() { ... } // from try @ 00a1e310 with catch @ 00a1e274
                       catch() { ... } // from try @ 00a1e354 with catch @ 00a1e274 */
  if ((*(uint *)(param_1 + 0x44) & 0xff) == 0) {
    uVar4 = 0;
    if (param_3 < 0x80) {
LAB_00a1e2c0:
                    /* try { // try from 00a1e2c4 to 00b1e30f has its CatchHandler @ 00a1e394 */
      if (uVar4 < param_4) {
        *param_2 = (char)param_3;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar4 = (ulong)((uint)uVar4 | 1);
        goto LAB_00a1e3c8;
      }
    }
    else {
LAB_00a1e2f8:
      iVar3 = FUN_00a208f0(&local_4c,param_3);
      iVar6 = (int)uVar4;
      if (iVar3 == -1) {
LAB_00a1e334:
        iVar3 = FUN_00a20bf4(&local_4c,param_3);
                    /* try { // try from 00a1e340 to 00b1e353 has its CatchHandler @ 00a1e394 */
        if (iVar3 == -1) {
          iVar3 = FUN_00a20e58(&local_4c,param_3);
                    /* catch() { ... } // from try @ 00a1e2c4 with catch @ 00a1e394
                       catch() { ... } // from try @ 00a1e340 with catch @ 00a1e394 */
          if (iVar3 == -1) {
            uVar4 = FUN_00a2159c(&local_4c,param_3);
            iVar3 = (int)uVar4;
            if (iVar3 == -1) goto LAB_00a1e3c8;
          }
          if (iVar3 != 2) goto LAB_00a1e420;
        }
        else {
          if (iVar3 != 2) {
LAB_00a1e420:
                    /* WARNING: Subroutine does not return */
            abort();
          }
                    /* try { // try from 00a1e354 to 00b1e3af has its CatchHandler @ 00a1e274 */
          if ((param_3 & 0xffffffdf) == 0xca) {
            if ((local_4c == -0x78) && ((local_4b == 0x66 || (local_4b == 0xa7)))) {
              *(uint *)(param_1 + 0x44) = (uint)local_4b;
              goto LAB_00a1e3c8;
            }
            goto LAB_00a1e420;
          }
        }
      }
      else {
                    /* try { // try from 00a1e310 to 00b1e33f has its CatchHandler @ 00a1e274 */
        if (iVar3 != 2) goto LAB_00a1e420;
        if ((local_4c == -0x39) || ((local_4c == -0x3a && (0xa0 < local_4b)))) goto LAB_00a1e334;
      }
      uVar4 = (ulong)(iVar6 + 2);
      if (uVar4 <= param_4) {
        *param_2 = local_4c;
        param_2[1] = local_4b;
        *(undefined4 *)(param_1 + 0x44) = 0;
                    /* try { // try from 00a1e400 to 00b1e417 has its CatchHandler @ 00a1e4d4 */
        goto LAB_00a1e3c8;
      }
    }
  }
  else {
    cVar1 = (char)*(uint *)(param_1 + 0x44);
    if ((param_3 | 8) == 0x30c) {
      if (1 < param_4) {
        *param_2 = -0x78;
        param_2[1] = cVar1 + ((byte)(param_3 >> 2) & 6) + -4;
        *(undefined4 *)(param_1 + 0x44) = 0;
        uVar4 = 2;
        goto LAB_00a1e3c8;
      }
    }
    else if (1 < param_4) {
      param_2[1] = cVar1;
      pcVar5 = param_2 + 2;
      *param_2 = -0x78;
      uVar4 = 2;
      param_2 = pcVar5;
      if (param_3 < 0x80) goto LAB_00a1e2c0;
      goto LAB_00a1e2f8;
    }
  }
  uVar4 = 0xfffffffe;
LAB_00a1e3c8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

