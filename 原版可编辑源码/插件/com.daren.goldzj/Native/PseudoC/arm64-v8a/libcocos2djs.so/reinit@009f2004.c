
/* cocos2d::FontAtlasFrame::reinit(cocos2d::PixelMode, int, int) */

void __thiscall
cocos2d::FontAtlasFrame::reinit(FontAtlasFrame *this,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = param_2;
  *(int *)(this + 0x34) = param_3;
  *(int *)(this + 0x38) = param_4;
  *(undefined4 *)(this + 0x3c) = 2;
  iVar2 = PixelModeSize(param_2);
  puVar4 = *(undefined1 **)(this + 8);
  uVar3 = (ulong)(param_4 * param_3 * iVar2);
                    /* catch() { ... } // from try @ 009f1c30 with catch @ 009f2050 */
  puVar5 = *(undefined1 **)(this + 0x10);
  uVar6 = (long)puVar5 - (long)puVar4;
  if (uVar6 < uVar3) {
                    /* catch() { ... } // from try @ 009f1c24 with catch @ 009f2060 */
                    /* catch() { ... } // from try @ 009f1fec with catch @ 009f2064 */
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 8),
               uVar3 - uVar6);
                    /* catch() { ... } // from try @ 009f1fa4 with catch @ 009f2068 */
    puVar4 = *(undefined1 **)(this + 8);
    puVar5 = *(undefined1 **)(this + 0x10);
  }
  else if (uVar6 != uVar3) {
    puVar5 = puVar4 + uVar3;
    *(undefined1 **)(this + 0x10) = puVar5;
  }
  uVar3 = (long)puVar5 - (long)puVar4;
  if (0 < (long)uVar3) {
    if (0x1f < uVar3) {
      uVar7 = uVar3 & 0xffffffffffffffe0;
                    /* catch() { ... } // from try @ 009f1f68 with catch @ 009f209c */
      puVar8 = (undefined8 *)(puVar4 + 0x10);
      puVar4 = puVar4 + uVar7;
                    /* catch() { ... } // from try @ 009f1f58 with catch @ 009f20ac */
      uVar6 = uVar7;
      do {
                    /* catch() { ... } // from try @ 009f1ce4 with catch @ 009f20b0 */
        puVar8[-1] = 0;
        puVar8[-2] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
                    /* catch() { ... } // from try @ 009f1c80 with catch @ 009f20b4 */
        uVar6 = uVar6 - 0x20;
        puVar8 = puVar8 + 4;
      } while (uVar6 != 0);
      bVar1 = uVar3 == uVar7;
      uVar3 = uVar3 - uVar7;
      if (bVar1) goto LAB_009f20d8;
    }
    do {
      uVar3 = uVar3 - 1;
                    /* catch() { ... } // from try @ 009f1b38 with catch @ 009f20d0 */
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (0 < (long)uVar3);
  }
LAB_009f20d8:
  *(undefined4 *)(this + 0x20) = 0;
  getTexture(this);
  return;
}

