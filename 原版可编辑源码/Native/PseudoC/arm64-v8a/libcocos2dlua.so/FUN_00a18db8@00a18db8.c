
uint FUN_00a18db8(long param_1,uint *param_2,byte *param_3,ulong param_4)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar12;
  ushort *puVar13;
  undefined *puVar14;
  uint uVar10;
  uint uVar11;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  iVar7 = 0;
  do {
    bVar2 = *param_3;
    uVar12 = (uint)bVar2;
    if (bVar2 == 0xe) {
      uVar12 = 2;
      if (uVar8 != 1) {
        uVar12 = uVar8;
      }
LAB_00a18de0:
      uVar8 = uVar12;
      bVar5 = param_4 <= (ulong)(long)(iVar7 + 2);
      bVar6 = (long)(iVar7 + 2) == param_4;
      param_3 = param_3 + 1;
      iVar7 = iVar7 + 1;
    }
    else {
      if (bVar2 == 0xf) {
        uVar12 = uVar8;
        if (uVar8 == 2) {
          uVar12 = 1;
        }
        goto LAB_00a18de0;
      }
      if (bVar2 != 0x1b) {
        if (4 < uVar8) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar9 = (uint)bVar2;
        uVar10 = (uint)bVar2;
        uVar11 = (uint)bVar2;
        switch(uVar8) {
        case 0:
          if (-1 < (char)bVar2) {
            *param_2 = uVar10;
            *(undefined4 *)(param_1 + 0x28) = 0;
            return iVar7 + 1;
          }
          break;
        case 1:
          if (-1 < (char)bVar2) {
            if (uVar10 == 0x5c) {
              uVar12 = 0xa5;
            }
            else if (uVar10 == 0x7e) {
              uVar12 = 0x203e;
            }
            *param_2 = uVar12;
            *(undefined4 *)(param_1 + 0x28) = 1;
            return iVar7 + 1;
          }
          break;
        case 2:
          if ((-1 < (char)bVar2) && ((uVar10 - 0x21 & 0xff) < 0x3f)) {
            *param_2 = (uVar9 ^ 0x80) + 0xfec0;
            *(undefined4 *)(param_1 + 0x28) = 2;
            return iVar7 + 1;
          }
          break;
        case 3:
          if (param_4 < (ulong)(long)(int)(iVar7 + 2U)) {
            uVar8 = 3;
            goto LAB_00a18fb8;
          }
          if ((-1 < (char)bVar2) && (-1 < (char)param_3[1])) {
            uVar12 = (uint)param_3[1];
            if (uVar9 < 0x75) {
              if (uVar9 == 0x2d) {
                if (0x58 < uVar12 - 0x21) break;
                uVar3 = *(ushort *)(&DAT_01329ef2 + ((ulong)(uVar12 - 0x20) & 0xff) * 2);
              }
              else {
                if ((7 < uVar9 - 0x21 && 0x44 < uVar9 - 0x30) || (0x5d < (uVar12 - 0x21 & 0xff)))
                break;
                iVar1 = uVar12 + uVar9 * 0x5e;
                uVar12 = iVar1 - 0xc3f;
                if (uVar12 < 0x582) {
                  if (0x2b1 < uVar12) break;
                  puVar13 = (ushort *)(&DAT_01303206 + (ulong)uVar12 * 2);
                }
                else {
                  if (0x3c < uVar12 >> 7) break;
                  puVar13 = (ushort *)(&DAT_0130376a + (ulong)(iVar1 - 0x11c1) * 2);
                }
                uVar3 = *puVar13;
              }
              uVar12 = (uint)uVar3;
              if (uVar12 != 0xfffd) {
LAB_00a19254:
                *param_2 = uVar12 & 0xffff;
                *(undefined4 *)(param_1 + 0x28) = 3;
                return iVar7 + 2U;
              }
            }
            else if ((uVar11 < 0x7f) && ((uVar12 - 0x21 & 0xff) < 0x5e)) {
              if ((uVar11 - 0x79 < 4) &&
                 (uVar8 = (uVar12 + uVar10 * 0x5e) - 0x2c8f, (uVar8 | 1) != 0x169)) {
                uVar12 = (uint)*(ushort *)(&DAT_013282c0 + (long)(int)uVar8 * 2);
              }
              else {
                uVar12 = (uVar12 + uVar10 * 0x5e) - 0x4b17;
              }
              goto LAB_00a19254;
            }
          }
          break;
        case 4:
          if (param_4 < (ulong)(long)(int)(iVar7 + 2U)) {
            uVar8 = 4;
            goto LAB_00a18fb8;
          }
          if (((char)bVar2 < '\0') || (bVar4 = param_3[1], (char)bVar4 < '\0')) break;
          if (bVar2 < 0x73) {
            if (((0x3d < uVar9 - 0x30) &&
                ((0x2b < uVar9 || ((1L << ((ulong)bVar2 & 0x3f) & 0xec400000000U) == 0)))) ||
               (0x5d < bVar4 - 0x21)) break;
            iVar1 = (uint)bVar4 + uVar10 * 0x5e;
            uVar12 = iVar1 - 0xc3f;
            if (uVar12 < 0x1d6) {
              if (0xae < uVar12) break;
              uVar12 = iVar1 - 0xc9d;
              puVar14 = &DAT_0130b5c8;
            }
            else if (uVar12 < 0x2f0) {
              if (0x291 < uVar12) break;
              uVar12 = iVar1 - 0xe15;
              puVar14 = &DAT_0130b66a;
            }
            else if (uVar12 < 0x582) {
              if (0x402 < uVar12) break;
              uVar12 = iVar1 - 0xf2f;
              puVar14 = &DAT_0130b7e2;
            }
            else {
              if (0x1c2a < uVar12) break;
              uVar12 = iVar1 - 0x11c1;
              puVar14 = &DAT_0130ba08;
            }
            uVar3 = *(ushort *)(puVar14 + (ulong)uVar12 * 2);
          }
          else {
            uVar12 = (uint)bVar4;
            if (0x74 < uVar11) {
              if ((0x7e < uVar11) || (0x5d < (uVar12 - 0x21 & 0xff))) break;
              uVar12 = uVar12 + uVar10 * 0x5e + 0xb895;
              goto LAB_00a192d0;
            }
            if (0x5d < uVar12 - 0x21) break;
            uVar9 = (uVar12 + uVar10 * 0x5e) - 0x5a;
            uVar12 = uVar9 & 0xff;
            if (0x6f < uVar12) {
              if (uVar12 == 0xa1) {
                uVar12 = 0x974d;
                goto LAB_00a192d0;
              }
              break;
            }
            uVar3 = *(ushort *)(&DAT_01329fb2 + ((ulong)uVar9 & 0xff) * 2);
          }
          uVar12 = (uint)uVar3;
          if (uVar12 != 0xfffd) {
LAB_00a192d0:
            *param_2 = uVar12;
            *(undefined4 *)(param_1 + 0x28) = 4;
            return iVar7 + 2U;
          }
        }
LAB_00a192b8:
        *(uint *)(param_1 + 0x28) = uVar8;
        return iVar7 << 1 ^ 0xffffffff;
      }
      iVar1 = iVar7 + 3;
      if (param_4 < (ulong)(long)iVar1) goto LAB_00a18fb8;
      if (param_3[1] == 0x24) {
        bVar2 = param_3[2];
        if (bVar2 == 0x28) {
          if (param_4 < (ulong)(long)(iVar7 + 4)) goto LAB_00a18fb8;
          if (param_3[3] != 0x44) goto LAB_00a192b8;
          param_3 = param_3 + 4;
          bVar5 = param_4 <= (ulong)(long)(iVar7 + 5);
          bVar6 = (long)(iVar7 + 5) == param_4;
          uVar8 = 4;
          iVar7 = iVar7 + 4;
        }
        else {
          if ((bVar2 != 0x42) && (bVar2 != 0x40)) goto LAB_00a192b8;
          param_3 = param_3 + 3;
          bVar5 = param_4 <= (ulong)(long)(iVar7 + 4);
          bVar6 = (long)(iVar7 + 4) == param_4;
          uVar8 = 3;
          iVar7 = iVar1;
        }
      }
      else {
        if (param_3[1] != 0x28) goto LAB_00a192b8;
        bVar2 = param_3[2];
        if (bVar2 == 0x4a) {
          param_3 = param_3 + 3;
          bVar5 = param_4 <= (ulong)(long)(iVar7 + 4);
          bVar6 = (long)(iVar7 + 4) == param_4;
          uVar8 = 1;
          iVar7 = iVar1;
        }
        else if (bVar2 == 0x49) {
          param_3 = param_3 + 3;
          bVar5 = param_4 <= (ulong)(long)(iVar7 + 4);
          bVar6 = (long)(iVar7 + 4) == param_4;
          uVar8 = 2;
          iVar7 = iVar1;
        }
        else {
          if (bVar2 != 0x42) goto LAB_00a192b8;
          uVar8 = 0;
          bVar5 = param_4 <= (ulong)(long)(iVar7 + 4);
          bVar6 = (long)(iVar7 + 4) == param_4;
          param_3 = param_3 + 3;
          iVar7 = iVar1;
        }
      }
    }
    if (bVar5 && !bVar6) {
LAB_00a18fb8:
      *(uint *)(param_1 + 0x28) = uVar8;
      return iVar7 * -2 - 2;
    }
  } while( true );
}

