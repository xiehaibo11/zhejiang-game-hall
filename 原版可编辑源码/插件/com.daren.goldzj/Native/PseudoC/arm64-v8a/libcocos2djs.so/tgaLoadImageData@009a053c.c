
/* cocos2d::tgaLoadImageData(unsigned char*, unsigned long, cocos2d::sImageTGA*) */

undefined8 cocos2d::tgaLoadImageData(uchar *param_1,ulong param_2,sImageTGA *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  sImageTGA sVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  size_t __n;
  
  sVar3 = param_3[5];
  iVar5 = (uint)((byte)sVar3 >> 3) * (int)*(short *)(param_3 + 8) * (int)*(short *)(param_3 + 6);
  __n = (size_t)iVar5;
  if (param_2 < __n + 0x12) {
    uVar6 = 0;
  }
  else {
    memcpy(*(void **)(param_3 + 0x10),param_1 + 0x12,__n);
    uVar6 = 1;
    if ((0x17 < (byte)sVar3) && (0 < iVar5)) {
      lVar7 = 0;
      do {
        puVar1 = (undefined1 *)(*(long *)(param_3 + 0x10) + lVar7);
        uVar4 = *puVar1;
                    /* try { // try from 009a05c0 to 00aa06ab has its CatchHandler @ 009a03a4 */
        *puVar1 = puVar1[2];
        lVar2 = *(long *)(param_3 + 0x10) + lVar7;
        lVar7 = lVar7 + (ulong)((byte)sVar3 >> 3);
        *(undefined1 *)(lVar2 + 2) = uVar4;
      } while (lVar7 < (long)__n);
      uVar6 = 1;
    }
  }
  return uVar6;
}

