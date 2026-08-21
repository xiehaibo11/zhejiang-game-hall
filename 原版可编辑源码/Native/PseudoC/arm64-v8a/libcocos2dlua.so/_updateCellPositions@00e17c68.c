
/* cocos2d::extension::TableView::_updateCellPositions() */

void __thiscall cocos2d::extension::TableView::_updateCellPositions(TableView *this)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  Size aSStack_58 [8];
  float local_50 [2];
  long local_48;
  
                    /* try { // try from 00e17c70 to 00f17c7b has its CatchHandler @ 00e17cb4 */
                    /* try { // try from 00e17c7c to 00f17cd7 has its CatchHandler @ 00e17c1c */
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = (**(code **)(**(long **)(this + 0x4d0) + 0x28))(*(long **)(this + 0x4d0),this);
  local_50[0] = 0.0;
                    /* catch() { ... } // from try @ 00e17c70 with catch @ 00e17cb4 */
  uVar1 = lVar4 + 1;
  uVar6 = *(long *)(this + 0x490) - *(long *)(this + 0x488) >> 2;
                    /* catch() { ... } // from try @ 00e17c64 with catch @ 00e17cc4 */
  if (uVar1 < uVar6 || uVar1 - uVar6 == 0) {
    if (uVar1 < uVar6) {
      *(ulong *)(this + 0x490) = *(long *)(this + 0x488) + uVar1 * 4;
    }
  }
  else {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x488),uVar1 - uVar6,local_50)
    ;
                    /* try { // try from 00e17cd8 to 00f17d17 has its CatchHandler @ 00e17cd8
                       catch() { ... } // from try @ 00e17cd8 with catch @ 00e17cd8
                       catch() { ... } // from try @ 00e17d2c with catch @ 00e17cd8 */
  }
  if (0 < lVar4) {
    Size::Size((Size *)local_50);
    lVar5 = *(long *)(this + 0x488);
    lVar7 = 0;
    fVar8 = 0.0;
    do {
      *(float *)(lVar5 + lVar7 * 4) = fVar8;
                    /* try { // try from 00e17d18 to 00f17d2b has its CatchHandler @ 00e17d60 */
                    /* try { // try from 00e17d2c to 00f17d73 has its CatchHandler @ 00e17cd8 */
      (**(code **)(**(long **)(this + 0x4d0) + 0x10))
                (aSStack_58,*(long **)(this + 0x4d0),this,lVar7);
      Size::operator=((Size *)local_50,aSStack_58);
      lVar7 = lVar7 + 1;
      pfVar2 = local_50;
      if (*(int *)(this + 0x330) != 0) {
        pfVar2 = (float *)((ulong)local_50 | 4);
      }
      lVar5 = *(long *)(this + 0x488);
      fVar8 = fVar8 + *pfVar2;
                    /* catch() { ... } // from try @ 00e17d18 with catch @ 00e17d60 */
    } while (lVar4 != lVar7);
    *(float *)(lVar5 + lVar4 * 4) = fVar8;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

