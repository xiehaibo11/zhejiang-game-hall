
undefined8 FUN_001036e4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  byte *pbVar16;
  int iVar17;
  char *pcVar18;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar6 = thunk_EXT_FUN_00002bb0(param_2,"-----BEGIN PUBLIC KEY-----");
  if (uVar6 == 0) {
LAB_00103898:
    uVar15 = 0;
    goto LAB_0010390c;
  }
  uVar7 = thunk_EXT_FUN_00002bb0(param_2,"-----END PUBLIC KEY-----");
  uVar15 = 0;
  if ((uVar7 == 0) || (uVar7 <= uVar6)) goto LAB_0010390c;
  pcVar18 = (char *)(uVar6 + 0x1a);
  if (*pcVar18 == ' ') {
    pcVar18 = (char *)(uVar6 + 0x1b);
  }
  pcVar3 = pcVar18 + 1;
  if (*pcVar18 != '\r') {
    pcVar3 = pcVar18;
  }
  if (*pcVar3 != '\n') goto LAB_00103898;
  pbVar16 = (byte *)(pcVar3 + 1);
  lVar8 = thunk_EXT_FUN_00002bb0(param_2);
  puVar14 = auStack_50 + -(lVar8 * 3 + 0xfU & 0xfffffffffffffff0);
  uVar7 = uVar7 - (long)pbVar16;
  if (uVar7 == 0) {
LAB_001038cc:
    iVar17 = 0;
  }
  else {
    uVar9 = 0;
    lVar10 = 0;
    uVar6 = 0;
    do {
      if (uVar6 < uVar7) {
        lVar12 = 0;
        do {
          if (pbVar16[lVar12 + uVar6] != 0x20) {
            uVar1 = uVar6 + lVar12;
            break;
          }
          lVar12 = lVar12 + 1;
          uVar1 = uVar6 + lVar12;
        } while (uVar1 < uVar7);
      }
      else {
        lVar12 = 0;
        uVar1 = uVar6;
      }
      uVar6 = uVar7;
      if (uVar7 == uVar1) break;
      uVar13 = (uint)pbVar16[uVar1];
      if ((uVar7 - uVar1 < 2) || (uVar13 != 0xd)) {
        if (uVar13 != 10) {
          if ((int)lVar12 == 0) goto LAB_0010383c;
          goto LAB_001038c4;
        }
      }
      else if (pbVar16[uVar1 + 1] != 10) {
        uVar13 = 0xd;
        if ((int)lVar12 != 0) goto LAB_001038c4;
LAB_0010383c:
        if (uVar13 == 0x3d) {
          uVar9 = uVar9 + 1;
          if (2 < uVar9) goto LAB_001038c4;
        }
        else if ((char)uVar13 < '\0') goto LAB_001038c4;
        if (((&DAT_0010aa8c)[uVar13] == 0x7f) ||
           ((uVar9 != 0 && ((byte)(&DAT_0010aa8c)[uVar13] < 0x40)))) goto LAB_001038c4;
        lVar10 = lVar10 + 1;
      }
      uVar6 = uVar1 + 1;
    } while (uVar6 < uVar7);
    if (lVar10 == 0) goto LAB_001038cc;
    if ((ulong)(lVar8 * 3) < (lVar10 * 6 + 7U >> 3) - (ulong)uVar9) {
LAB_001038c4:
      uVar15 = 0;
      goto LAB_0010390c;
    }
    puVar11 = puVar14;
    if (uVar6 != 0) {
      uVar13 = 0;
      lVar8 = 0;
      uVar9 = 3;
      do {
        bVar4 = *pbVar16;
        if ((0x20 < bVar4) || (uVar2 = uVar13, (1L << ((ulong)bVar4 & 0x3f) & 0x100002400U) == 0)) {
          lVar8 = lVar8 + 1;
          uVar9 = uVar9 - (bVar4 == 0x3d);
          uVar2 = (byte)(&DAT_0010aa8c)[bVar4] & 0x3f | uVar13 << 6;
          if (lVar8 == 4) {
            if (uVar9 == 0) {
              lVar8 = 0;
            }
            else {
              *puVar11 = (char)(uVar13 >> 10);
              if (uVar9 == 1) {
                lVar8 = 0;
                puVar11 = puVar11 + 1;
              }
              else {
                puVar11[1] = (char)(uVar13 >> 2);
                lVar8 = 0;
                if (uVar9 < 3) {
                  puVar11 = puVar11 + 2;
                  uVar9 = 2;
                }
                else {
                  puVar11[2] = (char)uVar2;
                  puVar11 = puVar11 + 3;
                }
              }
            }
          }
        }
        uVar13 = uVar2;
        uVar6 = uVar6 - 1;
        pbVar16 = pbVar16 + 1;
      } while (uVar6 != 0);
    }
    iVar17 = (int)puVar11 - (int)puVar14;
  }
  uVar15 = (**(code **)(*param_1 + 0x580))(param_1,iVar17);
  (**(code **)(*param_1 + 0x680))(param_1,uVar15,0,iVar17,puVar14);
LAB_0010390c:
  if (*(long *)(lVar5 + 0x28) != local_48) {
    uVar15 = thunk_EXT_FUN_00002bb0();
    return uVar15;
  }
  return uVar15;
}

