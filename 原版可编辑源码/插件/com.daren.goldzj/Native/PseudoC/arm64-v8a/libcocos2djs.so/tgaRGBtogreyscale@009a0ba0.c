
/* cocos2d::tgaRGBtogreyscale(cocos2d::sImageTGA*) */

void cocos2d::tgaRGBtogreyscale(sImageTGA *param_1)

{
  sImageTGA sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *__ptr;
  ulong uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  sVar1 = param_1[5];
  if (sVar1 != (sImageTGA)0x8) {
    sVar2 = *(short *)(param_1 + 8);
    sVar3 = *(short *)(param_1 + 6);
    puVar5 = malloc((long)sVar3 * (long)sVar2);
    if (puVar5 != (undefined1 *)0x0) {
      __ptr = *(void **)(param_1 + 0x10);
      uVar4 = (int)sVar3 * (int)sVar2;
      if (0 < (int)uVar4) {
                    /* try { // try from 009a0c08 to 00aa0c5f has its CatchHandler @ 009a0dac */
        uVar6 = (ulong)uVar4;
        pbVar7 = (byte *)((long)__ptr + 1);
        puVar8 = puVar5;
        do {
          uVar6 = uVar6 - 1;
          dVar9 = (double)NEON_ucvtf((ulong)pbVar7[-1]);
          dVar10 = (double)NEON_ucvtf((ulong)*pbVar7);
          dVar11 = (double)NEON_ucvtf((ulong)pbVar7[1]);
          *puVar8 = (char)(int)(dVar9 * 0.3 + dVar10 * 0.59 + dVar11 * 0.11);
          pbVar7 = pbVar7 + ((byte)sVar1 >> 3);
          puVar8 = puVar8 + 1;
        } while (uVar6 != 0);
      }
      free(__ptr);
      *(undefined2 *)(param_1 + 4) = 0x803;
      *(undefined1 **)(param_1 + 0x10) = puVar5;
    }
  }
  return;
}

