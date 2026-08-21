
ulong FUN_00c20144(long param_1)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar12 = *(long *)(param_1 + 8);
  pcVar4 = *(char **)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(lVar12 + 0x28);
  uVar10 = *(undefined8 *)(lVar12 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x50);
  *(int *)(param_1 + 0x74) = (int)uVar8 - (int)uVar10;
  if (*(char **)(param_1 + 0x28) < pcVar4 + 0xd) {
    FUN_00c1f918(param_1,0xd,0);
    pcVar4 = *(char **)(param_1 + 0x20);
  }
  *(char **)(param_1 + 0x20) = pcVar4 + 1;
  if (((*pcVar4 == 'L') && (*(char **)(param_1 + 0x20) = pcVar4 + 2, pcVar4[1] == 'J')) &&
     (*(char **)(param_1 + 0x20) = pcVar4 + 3, pcVar4[2] == '\x02')) {
    lVar6 = param_1 + 0x20;
    uVar1 = FUN_00c1b56c(lVar6);
    *(uint *)(param_1 + 0xac) = uVar1;
    if (((uVar1 & 0xfffffff0) == 0) && ((uVar1 >> 3 & 1) != 0)) {
      if (((uVar1 >> 2 & 1) != 0) &&
         (lVar11 = *(long *)(param_1 + 8), *(long *)(*(long *)(lVar11 + 0x10) + 0x168) == 0)) {
        lVar7 = *(long *)(lVar11 + 0x28);
        lVar13 = *(long *)(lVar11 + 0x38);
        luaopen_ffi(lVar11);
        *(long *)(lVar11 + 0x28) = (lVar7 - lVar13) + *(long *)(lVar11 + 0x38);
      }
      if ((uVar1 >> 1 & 1) == 0) {
        uVar2 = FUN_00c1b56c(lVar6);
        uVar2 = uVar2 & 0xffffffff;
        lVar11 = *(long *)(param_1 + 0x20);
        uVar9 = lVar11 + uVar2;
        if (*(ulong *)(param_1 + 0x28) < uVar9) {
          FUN_00c1f918(param_1,uVar2,1);
          lVar11 = *(long *)(param_1 + 0x20);
          uVar9 = lVar11 + uVar2;
        }
        *(ulong *)(param_1 + 0x20) = uVar9;
        uVar8 = FUN_00bfba1c(*(undefined8 *)(param_1 + 8),lVar11,uVar2);
        *(undefined8 *)(param_1 + 0x78) = uVar8;
      }
      else {
        pcVar4 = *(char **)(param_1 + 0x80);
        sVar3 = strlen(pcVar4);
        uVar8 = FUN_00bfba1c(*(undefined8 *)(param_1 + 8),pcVar4,sVar3);
        *(undefined8 *)(param_1 + 0x78) = uVar8;
      }
      while( true ) {
        pcVar4 = *(char **)(param_1 + 0x20);
        pcVar5 = *(char **)(param_1 + 0x28);
        if ((pcVar4 < pcVar5) && (*pcVar4 == '\0')) break;
        if (pcVar4 + 5 <= pcVar5) {
          uVar1 = FUN_00c1b56c(lVar6);
          if (uVar1 != 0) goto LAB_00c20260;
LAB_00c202f4:
          pcVar5 = *(char **)(param_1 + 0x28);
          pcVar4 = *(char **)(param_1 + 0x20);
          goto LAB_00c202fc;
        }
        FUN_00c1f918(param_1,5,0);
        uVar1 = FUN_00c1b56c(lVar6);
        if (uVar1 == 0) goto LAB_00c202f4;
LAB_00c20260:
        uVar9 = *(long *)(param_1 + 0x20) + (ulong)uVar1;
        if (*(ulong *)(param_1 + 0x28) < uVar9) {
          FUN_00c1f918(param_1,uVar1,1);
          uVar9 = *(long *)(param_1 + 0x20) + (ulong)uVar1;
        }
        uVar2 = FUN_00c1fafc(param_1);
        if (*(ulong *)(param_1 + 0x20) != uVar9) goto LAB_00c203b4;
        **(ulong **)(lVar12 + 0x28) = uVar2 | 0xfffc000000000000;
        uVar9 = *(long *)(lVar12 + 0x28) + 8;
        *(ulong *)(lVar12 + 0x28) = uVar9;
        if (*(ulong *)(lVar12 + 0x30) <= uVar9) {
          FUN_00bfe164(lVar12);
        }
      }
      pcVar4 = pcVar4 + 1;
      *(char **)(param_1 + 0x20) = pcVar4;
LAB_00c202fc:
      if (((int)pcVar5 - (int)pcVar4) * 2 < 1) {
        lVar6 = *(long *)(lVar12 + 0x28);
        lVar11 = lVar6 + -8;
        if (lVar11 == (long)*(int *)(param_1 + 0x74) + *(long *)(lVar12 + 0x38)) {
          *(long *)(lVar12 + 0x28) = lVar11;
          return *(ulong *)(lVar6 + -8) & 0x7fffffffffff;
        }
      }
LAB_00c203b4:
                    /* WARNING: Subroutine does not return */
      FUN_00c1f8a8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x80),0xb64);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c1f8a8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x80),0xb42);
}

