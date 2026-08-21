
/* WARNING: Type propagation algorithm not settling */

int FT_Stream_ReadFields(long *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  byte *__src;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  byte *pbVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  
  if (param_2 == (byte *)0x0) {
    iVar14 = 6;
  }
  else {
    if (param_1 != (long *)0x0) {
      plVar16 = param_1 + 8;
      pbVar9 = (byte *)*plVar16;
      bVar7 = false;
LAB_01064f1c:
      do {
        bVar6 = bVar7;
        pbVar13 = param_2;
        __src = pbVar9;
        param_2 = pbVar13 + 4;
        bVar5 = *pbVar13;
        bVar7 = bVar6;
        switch(bVar5) {
        case 4:
          pcVar12 = (code *)param_1[5];
          uVar11 = (ulong)*(ushort *)(pbVar13 + 2);
          if (pcVar12 == (code *)0x0) {
            uVar10 = param_1[2];
            iVar14 = 0x55;
                    /* try { // try from 010650b0 to 0116516b has its CatchHandler @ 01064e18 */
            if (((ulong)param_1[1] <= uVar10) || (param_1[1] - uVar10 < uVar11))
            goto joined_r0x0106518c;
            param_1[2] = uVar10 + uVar11;
            pbVar9 = (byte *)(*param_1 + uVar10);
            param_1[8] = (long)pbVar9;
            param_1[9] = (long)(pbVar9 + uVar11);
            bVar7 = true;
          }
          else {
            if ((ulong)param_1[1] < uVar11) goto LAB_01065184;
            lVar15 = param_1[7];
            if (*(ushort *)(pbVar13 + 2) != 0) {
              lVar8 = (**(code **)(lVar15 + 8))(lVar15,uVar11);
              if (lVar8 != 0) {
                    /* try { // try from 0106509c to 011650af has its CatchHandler @ 010650f8 */
                pcVar12 = (code *)param_1[5];
                goto LAB_010650c4;
              }
              iVar14 = 0x40;
              *param_1 = 0;
              goto joined_r0x0106518c;
            }
            lVar8 = 0;
LAB_010650c4:
            *param_1 = lVar8;
            uVar10 = (*pcVar12)(param_1,param_1[2],lVar8,uVar11);
            pbVar9 = (byte *)*param_1;
            if (uVar10 < uVar11) {
              if (pbVar9 != (byte *)0x0) {
                    /* catch() { ... } // from try @ 01064f8c with catch @ 010650f0 */
                    /* catch() { ... } // from try @ 01064f4c with catch @ 010650f4 */
                    /* catch() { ... } // from try @ 0106509c with catch @ 010650f8 */
                (**(code **)(lVar15 + 0x10))(lVar15);
              }
              pbVar9 = (byte *)0x0;
              iVar14 = 0x55;
              *param_1 = 0;
            }
            else {
              iVar14 = 0;
            }
            param_1[8] = (long)pbVar9;
            param_1[9] = (long)(pbVar9 + uVar11);
            param_1[2] = param_1[2] + uVar10;
            bVar7 = true;
            if (iVar14 != 0) {
joined_r0x0106518c:
              if (!bVar6) {
                return iVar14;
              }
              if (param_1[5] != 0) {
                if (*param_1 != 0) {
                    /* catch() { ... } // from try @ 01064fcc with catch @ 01065150 */
                  (**(code **)(param_1[7] + 0x10))();
                }
                *param_1 = 0;
              }
              *plVar16 = 0;
              param_1[9] = 0;
              return iVar14;
            }
          }
          goto LAB_01064f1c;
        default:
          iVar14 = 0;
          *plVar16 = (long)__src;
          goto joined_r0x0106518c;
        case 8:
        case 9:
          pbVar9 = __src + 1;
          uVar11 = (ulong)*__src;
          iVar14 = 0x18;
          goto joined_r0x01064fe8;
        case 0xc:
        case 0xd:
                    /* try { // try from 01064f4c to 01164f63 has its CatchHandler @ 010650f4 */
          bVar2 = *__src;
          bVar3 = __src[1];
          break;
        case 0xe:
        case 0xf:
          bVar2 = __src[1];
          bVar3 = *__src;
          break;
        case 0x10:
        case 0x11:
          bVar2 = *__src;
          bVar3 = __src[1];
          bVar4 = __src[2];
          bVar1 = __src[3];
          goto LAB_01064f98;
        case 0x12:
        case 0x13:
          bVar2 = __src[3];
                    /* try { // try from 01064f8c to 01164fa3 has its CatchHandler @ 010650f0 */
          bVar3 = __src[2];
          bVar4 = __src[1];
          bVar1 = *__src;
LAB_01064f98:
          iVar14 = 0;
          pbVar9 = __src + 4;
          uVar11 = (ulong)bVar2 << 0x18 | (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar1;
          goto joined_r0x01064fe8;
        case 0x14:
        case 0x15:
          bVar2 = *__src;
          bVar3 = __src[1];
          bVar4 = __src[2];
          goto LAB_01064fd4;
        case 0x16:
        case 0x17:
          bVar2 = __src[2];
                    /* try { // try from 01064fcc to 01165067 has its CatchHandler @ 01065150 */
          bVar3 = __src[1];
          bVar4 = *__src;
LAB_01064fd4:
          pbVar9 = __src + 3;
          uVar11 = (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4;
          iVar14 = 8;
          goto joined_r0x01064fe8;
        case 0x18:
        case 0x19:
          pbVar9 = __src + pbVar13[1];
          if ((byte *)param_1[9] < pbVar9) {
LAB_01065184:
            iVar14 = 0x55;
            goto joined_r0x0106518c;
          }
          if (bVar5 == 0x18) {
            memcpy((void *)(param_3 + (ulong)*(ushort *)(pbVar13 + 2)),__src,(ulong)pbVar13[1]);
          }
          goto LAB_01064f1c;
        }
        pbVar9 = __src + 2;
        uVar11 = (ulong)CONCAT11(bVar2,bVar3);
        iVar14 = 0x10;
joined_r0x01064fe8:
        if ((bVar5 & 1) != 0) {
          uVar11 = (ulong)((int)(uVar11 << iVar14) >> iVar14);
        }
        bVar5 = pbVar13[1];
        uVar10 = (ulong)*(ushort *)(pbVar13 + 2);
        if (bVar5 == 4) {
          *(int *)(param_3 + uVar10) = (int)uVar11;
        }
        else if (bVar5 == 2) {
          *(short *)(param_3 + uVar10) = (short)uVar11;
        }
        else if (bVar5 == 1) {
          *(char *)(param_3 + uVar10) = (char)uVar11;
        }
        else {
          *(ulong *)(param_3 + uVar10) = uVar11;
        }
      } while( true );
    }
    iVar14 = 0x28;
  }
                    /* try { // try from 0106516c to 011651ab has its CatchHandler @ 0106516c
                       catch() { ... } // from try @ 0106516c with catch @ 0106516c
                       catch() { ... } // from try @ 010651c4 with catch @ 0106516c */
  return iVar14;
}

