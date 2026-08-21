
/* v8::internal::Utf8Decoder::Utf8Decoder(v8::internal::Vector<unsigned char const> const&) */

void __thiscall v8::internal::Utf8Decoder::Utf8Decoder(Utf8Decoder *this,Vector *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  byte bVar3;
  bool bVar4;
  State SVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  Utf8Decoder UVar9;
  char *pcVar10;
  int iVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  State SVar19;
  State local_24 [4];
  byte *pbVar18;
  
  *this = (Utf8Decoder)0x0;
  puVar2 = *(ulong **)param_1;
  puVar1 = (ulong *)((long)puVar2 + (long)(int)(uint)*(undefined8 *)(param_1 + 8));
  puVar12 = puVar2;
  if ((uint)*(undefined8 *)(param_1 + 8) < 8) {
LAB_011f56fc:
    puVar14 = puVar12;
    if (puVar12 < puVar1) {
      do {
        puVar14 = puVar12;
        if ((char)*puVar12 < '\0') break;
        puVar12 = (ulong *)((long)puVar12 + 1);
        puVar14 = puVar1;
      } while (puVar1 != puVar12);
    }
    pcVar10 = (char *)((long)puVar14 - (long)puVar2);
  }
  else if (((ulong)puVar2 & 7) == 0) {
LAB_011f56d4:
    do {
      puVar14 = puVar12 + 1;
      if (puVar1 < puVar14) goto LAB_011f56fc;
      uVar13 = *puVar12;
      puVar12 = puVar14;
    } while ((uVar13 & 0x8080808080808080) == 0);
    pcVar10 = (char *)((long)puVar14 + (-8 - (long)puVar2));
  }
  else if ((char)*puVar2 < '\0') {
    pcVar10 = (char *)0x0;
  }
  else {
    do {
      puVar12 = (ulong *)((long)puVar12 + 1);
      if (((ulong)puVar12 & 7) == 0) goto LAB_011f56d4;
    } while (-1 < *(char *)puVar12);
    pcVar10 = (char *)((long)puVar12 - (long)puVar2);
  }
  iVar8 = (int)pcVar10;
  *(int *)(this + 4) = iVar8;
  *(int *)(this + 8) = iVar8;
  iVar11 = (int)*(undefined8 *)(param_1 + 8);
  if (iVar8 != iVar11) {
    lVar16 = *(long *)param_1;
    local_24[0] = (State)0xc;
    if ((long)iVar8 < (long)iVar11) {
      uVar15 = 0;
      bVar4 = true;
      SVar19 = (State)0xc;
      pbVar18 = (byte *)(lVar16 + iVar8);
      do {
        pbVar17 = pbVar18 + 1;
        bVar3 = *pbVar18;
        uVar7 = (uint)bVar3;
        iVar8 = (int)pcVar10;
        if ((SVar19 == (State)0xc) && (-1 < (char)bVar3)) {
LAB_011f5790:
          pcVar10 = (char *)(ulong)(iVar8 + 1U);
          *(uint *)(this + 8) = iVar8 + 1U;
          bVar4 = (bool)(bVar4 & uVar7 < 0x100);
LAB_011f57a4:
          SVar5 = (State)0xc;
        }
        else {
          local_24[0] = *(State *)(&DAT_019e26d6 +
                                  (ulong)(byte)(&DAT_019e25d6)[bVar3] + (ulong)(byte)SVar19);
          uVar15 = 0x7fU >> (ulong)((byte)(&DAT_019e25d6)[bVar3] >> 1 & 0x1f) & uVar7 | uVar15 << 6;
          if (local_24[0] == (State)0xc) {
            if (uVar15 == 0xfffffffc) {
              uVar15 = 0;
            }
            else {
              bVar6 = uVar15 < 0x10000;
              bVar4 = (bool)(bVar4 & uVar15 < 0x100);
              uVar15 = 0;
              *(uint *)(this + 8) = iVar8 + 1U;
              if (bVar6) {
                pcVar10 = (char *)(ulong)(iVar8 + 1U);
                SVar5 = (State)0xc;
                goto LAB_011f57a8;
              }
              pcVar10 = (char *)(ulong)(iVar8 + 2U);
              *(uint *)(this + 8) = iVar8 + 2U;
            }
            goto LAB_011f57a4;
          }
          SVar5 = local_24[0];
          if (local_24[0] == (State)0x0) {
            uVar15 = 0;
            if (SVar19 != (State)0xc) {
              pbVar17 = pbVar18;
            }
            uVar7 = 0xfffd;
            local_24[0] = (State)0xc;
            goto LAB_011f5790;
          }
        }
LAB_011f57a8:
        SVar19 = SVar5;
        pbVar18 = pbVar17;
      } while (pbVar17 < (byte *)(lVar16 + iVar11));
    }
    else {
      bVar4 = true;
    }
    iVar8 = unibrow::Utf8::ValueOfIncrementalFinish(local_24);
    if (iVar8 == 0) {
      UVar9 = (Utf8Decoder)0x1;
      if (!bVar4) {
        UVar9 = (Utf8Decoder)0x2;
      }
    }
    else {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      UVar9 = (Utf8Decoder)0x2;
    }
    *this = UVar9;
  }
  return;
}

