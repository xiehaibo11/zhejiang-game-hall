
/* WARNING: Removing unreachable block (ram,0x00d43478) */
/* cocos2d::Terrain::initHeightMap(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall cocos2d::Terrain::initHeightMap(Terrain *this,basic_string *param_1)

{
  Terrain *pTVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Image *this_00;
  Chunk *this_01;
  QuadTree *this_02;
  uint uVar5;
  long lVar6;
  Terrain *pTVar7;
  Size *pSVar8;
  Terrain *pTVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined2 uVar13;
  float fVar14;
  
                    /* catch() { ... } // from try @ 00d4318c with catch @ 00d43224 */
                    /* catch() { ... } // from try @ 00d4317c with catch @ 00d43228 */
                    /* catch() { ... } // from try @ 00d431a8 with catch @ 00d4322c */
                    /* try { // try from 00d43240 to 00e4327f has its CatchHandler @ 00d43240
                       catch() { ... } // from try @ 00d43240 with catch @ 00d43240
                       catch() { ... } // from try @ 00d432f0 with catch @ 00d43240 */
  this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this_00 != (Image *)0x0) {
    Image::Image(this_00);
  }
  pTVar1 = this + 0x80528;
  *(Image **)(this + 0x80540) = this_00;
  Image::initWithImageFile(this_00,param_1);
                    /* try { // try from 00d43280 to 00e4328b has its CatchHandler @ 00d43334 */
  lVar6 = *(long *)(this + 0x80540);
  *(undefined8 *)(this + 0x440) = *(undefined8 *)(lVar6 + 0x28);
                    /* try { // try from 00d4328c to 00e43297 has its CatchHandler @ 00d43324 */
  iVar2 = *(int *)(lVar6 + 0x38);
  *(int *)pTVar1 = iVar2;
  iVar3 = *(int *)(lVar6 + 0x3c);
  iVar4 = iVar2 + -1;
  *(int *)(this + 0x8052c) = iVar3;
                    /* try { // try from 00d432ac to 00e432ef has its CatchHandler @ 00d43338 */
  if ((((iVar2 < 1) ||
       (uVar11 = CONCAT13(POPCOUNT((char)((uint)iVar2 >> 0x18)),
                          CONCAT12(POPCOUNT((char)((uint)iVar2 >> 0x10)),
                                   CONCAT11(POPCOUNT((char)((uint)iVar2 >> 8)),POPCOUNT((char)iVar2)
                                           ))), uVar13 = NEON_uaddlv((ulong)uVar11,1),
       1 < CONCAT22((short)(uVar11 >> 0x10),uVar13))) || (iVar3 < 1)) ||
     (uVar11 = CONCAT13(POPCOUNT((char)((uint)iVar3 >> 0x18)),
                        CONCAT12(POPCOUNT((char)((uint)iVar3 >> 0x10)),
                                 CONCAT11(POPCOUNT((char)((uint)iVar3 >> 8)),POPCOUNT((char)iVar3)))
                       ), uVar13 = NEON_uaddlv((ulong)uVar11,1),
     1 < CONCAT22((short)(uVar11 >> 0x10),uVar13))) {
    if (iVar4 < 1) {
      return 0;
    }
                    /* try { // try from 00d432f0 to 00e4334b has its CatchHandler @ 00d43240 */
    uVar11 = CONCAT13(POPCOUNT((char)((uint)iVar4 >> 0x18)),
                      CONCAT12(POPCOUNT((char)((uint)iVar4 >> 0x10)),
                               CONCAT11(POPCOUNT((char)((uint)iVar4 >> 8)),POPCOUNT((char)iVar4))));
    uVar13 = NEON_uaddlv((ulong)uVar11,1);
    if (1 < CONCAT22((short)(uVar11 >> 0x10),uVar13)) {
      return 0;
    }
    iVar4 = iVar3 + -1;
    if (iVar4 < 1) {
      return 0;
    }
    uVar11 = CONCAT13(POPCOUNT((char)((uint)iVar4 >> 0x18)),
                      CONCAT12(POPCOUNT((char)((uint)iVar4 >> 0x10)),
                               CONCAT11(POPCOUNT((char)((uint)iVar4 >> 8)),POPCOUNT((char)iVar4))));
    uVar13 = NEON_uaddlv((ulong)uVar11,1);
                    /* catch() { ... } // from try @ 00d4328c with catch @ 00d43324 */
    if (1 < CONCAT22((short)(uVar11 >> 0x10),uVar13)) {
      return 0;
    }
  }
  pSVar8 = (Size *)(this + 0x80530);
  fVar14 = *(float *)pSVar8;
                    /* catch() { ... } // from try @ 00d43280 with catch @ 00d43334 */
                    /* catch() { ... } // from try @ 00d432ac with catch @ 00d43338 */
  uVar11 = (uint)((float)iVar3 / *(float *)(this + 0x80534));
  loadVertices(this);
  calculateNormal(this);
  pTVar9 = this + 0x4f8;
  memset(pTVar9,0,0x80000);
  if (0 < (int)uVar11) {
    uVar5 = (uint)((float)iVar2 / fVar14);
    uVar10 = 0;
    do {
      if (0 < (int)uVar5) {
        uVar12 = 0;
        do {
          this_01 = operator_new(0x130,(nothrow_t *)&std::nothrow);
          if (this_01 != (Chunk *)0x0) {
            Chunk::Chunk(this_01);
          }
          *(Chunk **)(pTVar9 + uVar12 * 8) = this_01;
          *(Terrain **)(this_01 + 0xe8) = this;
          Size::operator=((Size *)(this_01 + 0xf0),pSVar8);
          Chunk::generate((int)*(undefined8 *)(pTVar9 + uVar12 * 8),*(int *)pTVar1,
                          *(int *)(this + 0x8052c),(int)uVar10,(uchar *)(uVar12 & 0xffffffff));
          uVar12 = uVar12 + 1;
        } while (uVar5 != uVar12);
      }
                    /* try { // try from 00d4339c to 00e4343f has its CatchHandler @ 00d4339c
                       catch() { ... } // from try @ 00d4339c with catch @ 00d4339c
                       catch() { ... } // from try @ 00d434ac with catch @ 00d4339c
                       catch() { ... } // from try @ 00d434f0 with catch @ 00d4339c */
      uVar10 = uVar10 + 1;
      pTVar9 = pTVar9 + 0x800;
    } while (uVar10 != uVar11);
    if (0 < (int)uVar11) {
      uVar10 = 0;
                    /* try { // try from 00d43440 to 00e4344b has its CatchHandler @ 00d434fc */
      do {
        if (0 < (int)uVar5) {
                    /* try { // try from 00d43464 to 00e4346f has its CatchHandler @ 00d434f4 */
          lVar6 = -0x61;
          pTVar9 = this + uVar10 * 0x800 + -0x308;
          while( true ) {
            pTVar7 = pTVar9;
                    /* try { // try from 00d434ac to 00e434e7 has its CatchHandler @ 00d4339c */
            if (lVar6 + 0x62 < (long)(int)uVar5) {
              *(undefined8 *)(*(long *)(pTVar7 + 0x800) + 0xc0) = *(undefined8 *)(pTVar7 + 0x808);
            }
            if (uVar10 != 0) {
              *(undefined8 *)(*(long *)(pTVar7 + 0x800) + 0xd0) = *(undefined8 *)pTVar7;
            }
            if ((long)(uVar10 + 1) < (long)(int)uVar11) {
              *(undefined8 *)(*(long *)(pTVar7 + 0x800) + 200) = *(undefined8 *)(pTVar7 + 0x1000);
            }
            lVar6 = lVar6 + 1;
                    /* try { // try from 00d43484 to 00e434ab has its CatchHandler @ 00d434f8 */
            if (lVar6 - (ulong)uVar5 == -0x61) break;
            pTVar9 = pTVar7 + 8;
            if (lVar6 != -0x61) {
              *(undefined8 *)(*(long *)(pTVar7 + 0x808) + 0xb8) = *(undefined8 *)(pTVar7 + 0x800);
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar11);
    }
  }
                    /* try { // try from 00d434e8 to 00e434ef has its CatchHandler @ 00d434f0 */
                    /* catch() { ... } // from try @ 00d434e8 with catch @ 00d434f0
                       try { // try from 00d434f0 to 00e43517 has its CatchHandler @ 00d4339c */
  this_02 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00d43464 with catch @ 00d434f4 */
                    /* catch() { ... } // from try @ 00d43484 with catch @ 00d434f8 */
  if (this_02 != (QuadTree *)0x0) {
                    /* catch() { ... } // from try @ 00d43440 with catch @ 00d434fc */
    QuadTree::QuadTree(this_02,0,0,*(int *)pTVar1,*(int *)(this + 0x8052c),this);
  }
  *(QuadTree **)(this + 0x4f0) = this_02;
                    /* catch() { ... } // from try @ 00d43548 with catch @ 00d43518 */
  fVar14 = *(float *)pSVar8;
  *(float *)(this + 0x448) = fVar14;
  *(ulong *)(this + 0x44c) = CONCAT44(fVar14 * 3.0,fVar14 * 2.0);
                    /* try { // try from 00d43540 to 00e43547 has its CatchHandler @ 00d435c0 */
                    /* try { // try from 00d43548 to 00e435db has its CatchHandler @ 00d43518 */
  return 1;
}

