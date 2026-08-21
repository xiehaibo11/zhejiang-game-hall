
int * aliases_lookup(byte *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 - 2U < 0x2c) {
    iVar2 = param_2;
    switch(param_2) {
    case 2:
      break;
    default:
      iVar2 = (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[10] * 2) + param_2;
    case 10:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[9] * 2);
    case 9:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[8] * 2);
    case 8:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[7] * 2);
    case 7:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[6] * 2);
    case 6:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[5] * 2);
    case 5:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[4] * 2);
    case 4:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a0e0ec with catch @ 00a0e07c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e11c with catch @ 00a0e07c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e14c with catch @ 00a0e07c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e174 with catch @ 00a0e07c
                       catch(type#1 @ 00000000) { ... } // from try @ 00a0e1a0 with catch @ 00a0e07c
                        */
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[3] * 2);
    case 3:
      iVar2 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[2] * 2);
    }
    uVar1 = iVar2 + (uint)*(ushort *)(&DAT_012fc494 + (ulong)*param_1 * 2) +
            (uint)*(ushort *)(&DAT_012fc494 + (ulong)param_1[param_2 - 1] * 2);
    if (uVar1 < 0x39a) {
      iVar2 = (&DAT_012f98d0)[(long)(int)uVar1 * 2];
                    /* try { // try from 00a0e0e4 to 00b0e0eb has its CatchHandler @ 00a0e1e0 */
                    /* try { // try from 00a0e0ec to 00b0e10f has its CatchHandler @ 00a0e07c */
      if (((-1 < iVar2) && (*param_1 == (&DAT_012fb5a0)[iVar2])) &&
         (iVar2 = strcmp((char *)(param_1 + 1),&UNK_012fb5a1 + iVar2), iVar2 == 0)) {
        return &DAT_012f98d0 + (long)(int)uVar1 * 2;
      }
    }
  }
  return (int *)0x0;
}

