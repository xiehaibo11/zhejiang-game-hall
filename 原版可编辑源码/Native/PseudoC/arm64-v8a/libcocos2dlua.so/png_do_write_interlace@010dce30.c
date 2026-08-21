
void png_do_write_interlace(uint *param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  ulong __n;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  
  if (param_3 < 6) {
    bVar2 = *(byte *)((long)param_1 + 0x13);
    if (bVar2 == 4) {
      uVar1 = *param_1;
      bVar2 = (&DAT_0147666b)[param_3];
      uVar9 = (uint)bVar2;
      if (bVar2 < uVar1) {
        bVar3 = (&DAT_01476672)[param_3];
        uVar4 = 0;
        uVar10 = (uint)bVar2;
        uVar7 = uVar10 << 2;
        uVar8 = 4;
        puVar5 = param_2;
        do {
          uVar4 = ((byte)param_2[uVar10 >> 1] >> (ulong)(~uVar7 & 4) & 0xf) << (ulong)(uVar8 & 0x1f)
                  | uVar4;
          if (uVar8 == 0) {
            puVar6 = puVar5 + 1;
            *puVar5 = (char)uVar4;
            uVar8 = 4;
            uVar4 = 0;
          }
          else {
            uVar8 = uVar8 - 4;
            puVar6 = puVar5;
          }
          uVar10 = uVar10 + bVar3;
          uVar7 = uVar7 + (uint)bVar3 * 4;
          puVar5 = puVar6;
        } while (uVar10 < uVar1);
        if (uVar8 != 4) {
          *puVar6 = (char)uVar4;
        }
      }
    }
    else {
                    /* try { // try from 010dce6c to 011dce73 has its CatchHandler @ 010dceec */
      if (bVar2 == 2) {
        uVar1 = *param_1;
        bVar2 = (&DAT_0147666b)[param_3];
        uVar9 = (uint)bVar2;
        if (bVar2 < uVar1) {
          bVar3 = (&DAT_01476672)[param_3];
          uVar4 = 0;
          uVar10 = (uint)bVar2;
          uVar7 = uVar10 << 1;
          uVar8 = 6;
          puVar5 = param_2;
          do {
            uVar4 = ((byte)param_2[uVar10 >> 2] >> (ulong)(~uVar7 & 6) & 3) << (ulong)(uVar8 & 0x1f)
                    | uVar4;
            if (uVar8 == 0) {
              puVar6 = puVar5 + 1;
              *puVar5 = (char)uVar4;
              uVar8 = 6;
              uVar4 = 0;
            }
            else {
              uVar8 = uVar8 - 2;
              puVar6 = puVar5;
            }
            uVar10 = uVar10 + bVar3;
            uVar7 = uVar7 + (uint)bVar3 * 2;
            puVar5 = puVar6;
          } while (uVar10 < uVar1);
          if (uVar8 != 6) {
            *puVar6 = (char)uVar4;
          }
        }
      }
      else {
                    /* try { // try from 010dce74 to 011dcf07 has its CatchHandler @ 010dcd4c */
        if (bVar2 == 1) {
          uVar1 = *param_1;
          bVar2 = (&DAT_0147666b)[param_3];
          uVar11 = (ulong)bVar2;
          uVar9 = (uint)bVar2;
          if (bVar2 < uVar1) {
            bVar2 = (&DAT_01476672)[param_3];
            uVar10 = 0;
            uVar7 = 7;
            puVar5 = param_2;
            do {
              uVar10 = ((byte)param_2[uVar11 >> 3] >> (ulong)(~(uint)uVar11 & 7) & 1) <<
                       (ulong)(uVar7 & 0x1f) | uVar10;
              if (uVar7 == 0) {
                puVar6 = puVar5 + 1;
                *puVar5 = (char)uVar10;
                uVar7 = 7;
                uVar10 = 0;
              }
              else {
                uVar7 = uVar7 - 1;
                puVar6 = puVar5;
              }
              uVar4 = (uint)uVar11 + (uint)bVar2;
              uVar11 = (ulong)uVar4;
                    /* catch() { ... } // from try @ 010dce6c with catch @ 010dceec */
              puVar5 = puVar6;
            } while (uVar4 < uVar1);
            if (uVar7 != 7) {
              *puVar6 = (char)uVar10;
            }
          }
        }
        else {
          uVar1 = *param_1;
          bVar3 = (&DAT_0147666b)[param_3];
          uVar11 = (ulong)bVar3;
          uVar9 = (uint)bVar3;
          if (bVar3 < uVar1) {
            bVar3 = (&DAT_01476672)[param_3];
            __n = (ulong)(bVar2 >> 3);
            puVar5 = param_2;
            do {
              if (puVar5 != param_2 + __n * uVar11) {
                memcpy(puVar5,param_2 + __n * uVar11,__n);
              }
              uVar10 = (int)uVar11 + (uint)bVar3;
              uVar11 = (ulong)uVar10;
              puVar5 = puVar5 + __n;
            } while (uVar10 < uVar1);
          }
        }
      }
    }
    bVar3 = (&DAT_01476672)[param_3];
    bVar2 = *(byte *)((long)param_1 + 0x13);
    uVar1 = 0;
    if (bVar3 != 0) {
      uVar1 = ((*param_1 + (uint)bVar3 + -1) - uVar9) / (uint)bVar3;
    }
    *param_1 = uVar1;
    if ((ulong)bVar2 < 8) {
      uVar11 = (ulong)bVar2 * (ulong)uVar1 + 7 >> 3;
    }
    else {
      uVar11 = (ulong)(bVar2 >> 3) * (ulong)uVar1;
    }
    *(ulong *)(param_1 + 2) = uVar11;
  }
  return;
}

