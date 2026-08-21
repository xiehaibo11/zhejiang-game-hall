
int FUN_0109109c(long param_1,long *param_2,uint param_3)

{
  short *psVar1;
  undefined1 *puVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  short sVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  uint uVar19;
  int local_34;
  undefined1 *puVar15;
  
  lVar12 = *param_2;
  local_34 = 0;
  if (lVar12 == 0) {
    iVar10 = 0x23;
  }
  else {
    lVar18 = *(long *)(lVar12 + 0xf8);
    if ((lVar18 == 0) || (*(uint *)(lVar12 + 0x20) <= param_3)) {
      iVar10 = 6;
    }
    else {
      if (param_3 == 0) {
        param_3 = (uint)*(byte *)(lVar18 + 0x76);
      }
      else {
        param_3 = param_3 - 1;
      }
      sVar3 = *(short *)(lVar18 + 8);
      iVar10 = 6;
      bVar7 = sVar3 != 0x300;
      if (bVar7) {
        iVar10 = 4;
      }
      iVar11 = 0x94;
      if (bVar7) {
        iVar11 = 0x76;
      }
                    /* catch() { ... } // from try @ 01090e38 with catch @ 01091114 */
      uVar13 = *(ulong *)(lVar18 + 0x10);
                    /* catch() { ... } // from try @ 01090da8 with catch @ 01091118 */
      uVar16 = (ulong)(iVar11 + iVar10 * param_3);
                    /* catch() { ... } // from try @ 01090dc0 with catch @ 0109111c */
                    /* catch() { ... } // from try @ 01090f98 with catch @ 01091120 */
      lVar12 = -4;
      if (bVar7) {
        lVar12 = -2;
      }
      if (uVar16 < (uVar13 + lVar12) - 2) {
        lVar12 = *(long *)(lVar18 + 0xd8);
                    /* try { // try from 0109113c to 0119115f has its CatchHandler @ 0109113c
                       catch() { ... } // from try @ 0109113c with catch @ 0109113c
                       catch() { ... } // from try @ 010911bc with catch @ 0109113c */
        psVar1 = (short *)(lVar12 + uVar16);
        sVar6 = *psVar1;
        *(int *)(param_1 + 0x9c) = (int)sVar6;
        if (sVar3 == 0x300) {
                    /* try { // try from 01091160 to 01191163 has its CatchHandler @ 010911fc */
                    /* try { // try from 01091164 to 0119116b has its CatchHandler @ 010911ec */
          uVar16 = (ulong)*(byte *)((long)psVar1 + 5) << 0x18 | (ulong)*(byte *)(psVar1 + 2) << 0x10
                   | (ulong)*(byte *)((long)psVar1 + 3) << 8;
        }
        else {
          uVar16 = (ulong)*(byte *)((long)psVar1 + 3) << 8;
        }
                    /* try { // try from 01091184 to 011911bb has its CatchHandler @ 010911bc */
        uVar16 = uVar16 | *(byte *)(psVar1 + 1);
        if (uVar16 < uVar13) {
          uVar19 = (int)sVar6 + 7U >> 3;
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 8) + 0xb8);
          *(uint *)(param_1 + 0xa0) = uVar19;
          uVar4 = *(ushort *)(lVar18 + 0x6c);
          *(undefined1 *)(param_1 + 0xb2) = 1;
                    /* catch() { ... } // from try @ 01091184 with catch @ 010911bc
                       try { // try from 010911bc to 0119120f has its CatchHandler @ 0109113c */
          *(uint *)(param_1 + 0x98) = (uint)uVar4;
          if (uVar16 + uVar19 * uVar4 <= uVar13) {
                    /* catch() { ... } // from try @ 01091164 with catch @ 010911ec */
            puVar9 = (undefined1 *)ft_mem_realloc(uVar8,uVar4,0,uVar19,0,&local_34);
                    /* catch() { ... } // from try @ 01091160 with catch @ 010911fc */
            *(undefined1 **)(param_1 + 0xa8) = puVar9;
            if (local_34 != 0) {
              return local_34;
            }
            if (uVar19 != 0) {
              puVar14 = (undefined1 *)(lVar12 + uVar16);
              do {
                    /* catch() { ... } // from try @ 01091260 with catch @ 01091210 */
                if (*(uint *)(param_1 + 0x98) != 0) {
                  puVar2 = puVar14 + *(uint *)(param_1 + 0x98);
                  puVar15 = puVar14;
                  puVar17 = puVar9;
                  do {
                    puVar14 = puVar15 + 1;
                    *puVar17 = *puVar15;
                    puVar17 = puVar17 + *(int *)(param_1 + 0xa0);
                    puVar15 = puVar14;
                  } while (puVar14 < puVar2);
                }
                uVar5 = uVar19 - 1;
                puVar9 = puVar9 + 1;
                bVar7 = 0 < (int)uVar19;
                uVar19 = uVar5;
              } while (uVar5 != 0 && bVar7);
            }
                    /* try { // try from 01091254 to 0119125f has its CatchHandler @ 0109131c */
            *(undefined4 *)(*(long *)(param_1 + 0x128) + 8) = 1;
            *(undefined4 *)(param_1 + 0xc0) = 0;
            uVar4 = *(ushort *)(lVar18 + 0x5c);
                    /* try { // try from 01091260 to 01191337 has its CatchHandler @ 01091210 */
            *(undefined4 *)(param_1 + 0x90) = 0x62697473;
            *(uint *)(param_1 + 0xc4) = (uint)uVar4;
            uVar13 = (ulong)(uint)(*(int *)(param_1 + 0x9c) << 6);
            *(ulong *)(param_1 + 0x30) = uVar13;
            *(ulong *)(param_1 + 0x38) = (ulong)(uint)(*(int *)(param_1 + 0x98) << 6);
            *(ulong *)(param_1 + 0x48) = (ulong)uVar4 << 6;
            *(ulong *)(param_1 + 0x50) = uVar13;
            *(undefined8 *)(param_1 + 0x40) = 0;
            ft_synthesize_vertical_metrics(param_1 + 0x30);
            return local_34;
          }
        }
      }
      iVar10 = 3;
    }
  }
  return iVar10;
}

