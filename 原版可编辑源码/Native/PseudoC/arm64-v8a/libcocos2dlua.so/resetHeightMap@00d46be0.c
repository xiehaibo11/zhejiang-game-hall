
/* cocos2d::Terrain::resetHeightMap(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::Terrain::resetHeightMap(Terrain *this,basic_string *param_1)

{
  Chunk *this_00;
  QuadTree *this_01;
  long lVar1;
  Terrain *pTVar2;
  long lVar3;
  
                    /* try { // try from 00d46bec to 00e46c4f has its CatchHandler @ 00d46b84 */
  Ref::release(*(Ref **)(this + 0x80540));
  *(undefined8 *)(this + 0x80500) = *(undefined8 *)(this + 0x804f8);
  free(*(void **)(this + 0x440));
  lVar1 = 0;
  pTVar2 = this + 0x4f8;
  do {
                    /* catch() { ... } // from try @ 00d46bd0 with catch @ 00d46c3c */
    lVar3 = 0;
    this_00 = *(Chunk **)pTVar2;
    while( true ) {
      if (this_00 != (Chunk *)0x0) {
        Chunk::~Chunk(this_00);
        operator_delete(this_00);
      }
      lVar3 = lVar3 + 8;
                    /* try { // try from 00d46c50 to 00e46c97 has its CatchHandler @ 00d46c50
                       catch() { ... } // from try @ 00d46c50 with catch @ 00d46c50
                       catch() { ... } // from try @ 00d46cb4 with catch @ 00d46c50 */
      if (lVar3 == 0x800) break;
      this_00 = *(Chunk **)(pTVar2 + lVar3);
    }
    lVar1 = lVar1 + 1;
    pTVar2 = pTVar2 + 0x800;
  } while (lVar1 != 0x100);
  this_01 = *(QuadTree **)(this + 0x4f0);
  if (this_01 != (QuadTree *)0x0) {
    QuadTree::~QuadTree(this_01);
    operator_delete(this_01);
  }
                    /* try { // try from 00d46c98 to 00e46cb3 has its CatchHandler @ 00d46cf0 */
  initHeightMap(this,param_1);
  return;
}

