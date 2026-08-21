
/* cocos2d::FontAtlas::init() */

undefined8 __thiscall cocos2d::FontAtlas::init(FontAtlas *this)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  iVar1 = *(int *)(this + 0xa4);
  iVar2 = *(int *)(this + 0xa8);
  *(undefined4 *)(this + 0x6c) = 2;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(this + 0xac);
  *(int *)(this + 100) = iVar1;
  *(int *)(this + 0x68) = iVar2;
  iVar4 = PixelModeSize();
  pvVar5 = *(void **)(this + 0x38);
  uVar6 = (ulong)(iVar2 * iVar1 * iVar4);
  lVar8 = *(long *)(this + 0x40);
  uVar9 = lVar8 - (long)pvVar5;
                    /* try { // try from 009f28dc to 00af28df has its CatchHandler @ 009f2a50 */
  if (uVar9 < uVar6) {
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::__append
              ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 0x38),
               uVar6 - uVar9);
    pvVar5 = *(void **)(this + 0x38);
    lVar8 = *(long *)(this + 0x40);
  }
  else if (uVar9 != uVar6) {
    lVar8 = (long)pvVar5 + uVar6;
    *(long *)(this + 0x40) = lVar8;
  }
  if (0 < lVar8 - (long)pvVar5) {
    memset(pvVar5,0,lVar8 - (long)pvVar5);
  }
  *(undefined4 *)(this + 0x50) = 0;
  FontAtlasFrame::getTexture((FontAtlasFrame *)(this + 0x30));
  if (*(long *)(this + 0x20) != 0) {
    puVar3 = *(void **)(this + 0x18);
    while (puVar3 != (void *)0x0) {
      pvVar5 = (void *)*puVar3;
      operator_delete(puVar3);
                    /* try { // try from 009f293c to 00af2943 has its CatchHandler @ 009f2a30 */
      puVar3 = pvVar5;
    }
    lVar8 = *(long *)(this + 0x10);
                    /* try { // try from 009f2944 to 00af2a67 has its CatchHandler @ 009f2750 */
    *(undefined8 *)(this + 0x18) = 0;
    if (lVar8 != 0) {
      lVar7 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 8) + lVar7 * 8) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar8 != lVar7);
    }
    *(undefined8 *)(this + 0x20) = 0;
  }
  return 1;
}

