
long FUN_00b44538(long param_1,ulong param_2)

{
  long lVar1;
  char *pcVar2;
  char cVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  byte abStack_41 [17];
  
  uVar10 = *(ulong *)(param_1 + 0x28);
  if (uVar10 < param_2) {
    uVar5 = *(ulong *)(param_1 + 0x30);
    if (uVar5 <= param_2) {
      lVar1 = ((param_2 + 4) - uVar5 & 0xfffffffffffffffc) + uVar5;
      *(long *)(param_1 + 0x30) = lVar1;
      pvVar4 = CRYPTO_realloc(*(void **)(param_1 + 0x58),(int)lVar1 * 0x10,"crypto/modes/ocb128.c",
                              0x7a);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      *(void **)(param_1 + 0x58) = pvVar4;
    }
    do {
      pcVar2 = (char *)(*(long *)(param_1 + 0x58) + uVar10 * 0x10);
      cVar3 = *pcVar2;
      lVar1 = 0xf;
LAB_00b445c0:
      do {
        lVar9 = lVar1;
        if (lVar9 == 0) {
          bVar8 = *pcVar2 << 1;
          pcVar2[0x10] = bVar8;
          lVar6 = -1;
          pbVar7 = (byte *)(pcVar2 + 0x10);
        }
        else {
          lVar6 = lVar9 + -1;
          pbVar7 = (byte *)(pcVar2 + 0x10 + lVar9);
          bVar8 = pcVar2[lVar9] << 1;
          abStack_41[lVar9] = (byte)pcVar2[lVar9] >> 7;
          *pbVar7 = bVar8;
          lVar1 = 0xe;
          if (lVar9 == 0xf) goto LAB_00b445c0;
        }
        *pbVar7 = bVar8 ^ abStack_41[lVar9 + 1];
        lVar1 = lVar6;
      } while (0 < lVar9);
      uVar10 = uVar10 + 1;
      pcVar2[0x1f] = pcVar2[0x1f] ^ cVar3 >> 7 & 0x87U;
    } while (uVar10 != param_2);
    *(ulong *)(param_1 + 0x28) = param_2;
  }
  return *(long *)(param_1 + 0x58) + param_2 * 0x10;
}

