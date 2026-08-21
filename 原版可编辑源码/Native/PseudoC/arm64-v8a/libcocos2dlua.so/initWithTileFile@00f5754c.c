
/* cocos2d::TileMapAtlas::initWithTileFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, int, int) */

void __thiscall
cocos2d::TileMapAtlas::initWithTileFile
          (TileMapAtlas *this,basic_string *param_1,basic_string *param_2,int param_3,int param_4)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  Size local_70 [16];
  char *local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  plVar7 = (long *)FileUtils::getInstance();
                    /* try { // try from 00f5758c to 0105760b has its CatchHandler @ 00f57650 */
  (**(code **)(*plVar7 + 0x50))(local_70,plVar7,param_2);
  pcVar1 = (char *)((ulong)local_70 | 1);
  if (((byte)local_70[0] & 1) != 0) {
    pcVar1 = local_60;
  }
  lVar8 = tgaLoad(pcVar1);
  *(long *)(this + 0x418) = lVar8;
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
    lVar8 = *(long *)(this + 0x418);
  }
  *(undefined4 *)(this + 0x410) = 0;
  lVar11 = (long)*(short *)(lVar8 + 6);
  if (lVar11 < 1) {
    iVar10 = 0;
  }
  else {
    sVar4 = *(short *)(lVar8 + 8);
    iVar10 = 0;
    lVar12 = 0;
    do {
      if (0 < sVar4) {
        pcVar1 = (char *)(*(long *)(lVar8 + 0x10) + lVar12 * 3);
                    /* catch() { ... } // from try @ 00f574d0 with catch @ 00f5761c */
        cVar3 = *pcVar1;
        lVar5 = (long)sVar4;
        while( true ) {
          if (cVar3 != '\0') {
            iVar10 = iVar10 + 1;
            *(int *)(this + 0x410) = iVar10;
          }
          lVar5 = lVar5 + -1;
          pcVar1 = pcVar1 + lVar11 * 3;
          if (lVar5 == 0) break;
                    /* catch() { ... } // from try @ 00f574b8 with catch @ 00f57634 */
          cVar3 = *pcVar1;
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar11);
  }
                    /* catch() { ... } // from try @ 00f574a8 with catch @ 00f5764c */
                    /* catch() { ... } // from try @ 00f5739c with catch @ 00f57650
                       catch() { ... } // from try @ 00f5758c with catch @ 00f57650 */
                    /* catch() { ... } // from try @ 00f56d80 with catch @ 00f57658 */
  uVar9 = AtlasNode::initWithTileFile((AtlasNode *)this,param_1,param_3,param_4,iVar10);
                    /* catch() { ... } // from try @ 00f56d68 with catch @ 00f57660 */
  bVar2 = (uVar9 & 1) != 0;
  if (bVar2) {
                    /* catch() { ... } // from try @ 00f56d88 with catch @ 00f57668
                       catch() { ... } // from try @ 00f5735c with catch @ 00f57668 */
                    /* catch() { ... } // from try @ 00f57390 with catch @ 00f5766c
                       catch() { ... } // from try @ 00f57424 with catch @ 00f5766c
                       catch() { ... } // from try @ 00f574fc with catch @ 00f5766c */
                    /* catch() { ... } // from try @ 00f572b4 with catch @ 00f57670 */
    (**(code **)(*(long *)this + 0x530))(this);
                    /* catch() { ... } // from try @ 00f57210 with catch @ 00f57674 */
                    /* catch() { ... } // from try @ 00f5716c with catch @ 00f57678 */
                    /* catch() { ... } // from try @ 00f570c8 with catch @ 00f5767c */
                    /* catch() { ... } // from try @ 00f57020 with catch @ 00f57680 */
                    /* catch() { ... } // from try @ 00f56f7c with catch @ 00f57684 */
                    /* catch() { ... } // from try @ 00f56ed0 with catch @ 00f57688 */
                    /* catch() { ... } // from try @ 00f56e30 with catch @ 00f5768c */
                    /* catch() { ... } // from try @ 00f56dd4 with catch @ 00f57690 */
                    /* catch() { ... } // from try @ 00f57278 with catch @ 00f57694 */
                    /* catch() { ... } // from try @ 00f571d4 with catch @ 00f57698 */
                    /* catch() { ... } // from try @ 00f57130 with catch @ 00f5769c */
    Size::Size(local_70,(float)(*(int *)(this + 0x308) *
                               (int)*(short *)(*(long *)(this + 0x418) + 6)),
               (float)(*(int *)(this + 0x30c) * (int)*(short *)(*(long *)(this + 0x418) + 8)));
                    /* catch() { ... } // from try @ 00f57088 with catch @ 00f576a0 */
                    /* catch() { ... } // from try @ 00f56fe4 with catch @ 00f576a4 */
                    /* catch() { ... } // from try @ 00f56f40 with catch @ 00f576a8 */
                    /* catch() { ... } // from try @ 00f56e94 with catch @ 00f576ac */
                    /* catch() { ... } // from try @ 00f56de0 with catch @ 00f576b0 */
    (**(code **)(*(long *)this + 0x160))(this,local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

