
/* cocos2d::Terrain::~Terrain() */

void __thiscall cocos2d::Terrain::~Terrain(Terrain *this)

{
  void *pvVar1;
  QuadTree *this_00;
  Chunk *this_01;
  ulong uVar2;
  long lVar3;
  Terrain *pTVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00d45e18 to 00e45e2f has its CatchHandler @ 00d45e4c */
  *(undefined ***)this = &PTR__Terrain_016d4530;
                    /* try { // try from 00d45e30 to 00e45ec3 has its CatchHandler @ 00d45da0 */
  if (*(Ref **)(this + 0x80628) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80628));
  }
  if (*(Ref **)(this + 0x478) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x478));
  }
                    /* catch() { ... } // from try @ 00d45e18 with catch @ 00d45e4c */
  if (*(Ref **)(this + 0x480) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x480));
  }
  if (*(Ref **)(this + 0x80540) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80540));
  }
  this_00 = *(QuadTree **)(this + 0x4f0);
  if (this_00 != (QuadTree *)0x0) {
    QuadTree::~QuadTree(this_00);
    operator_delete(this_00);
  }
  if (*(Ref **)(this + 0x458) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x458));
  }
  if (*(Ref **)(this + 0x460) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x460));
  }
  if (*(Ref **)(this + 0x468) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x468));
  }
  if (*(Ref **)(this + 0x470) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x470));
  }
  lVar3 = 0;
  pTVar4 = this + 0x4f8;
  do {
    lVar6 = 0;
    this_01 = *(Chunk **)pTVar4;
    while( true ) {
      if (this_01 != (Chunk *)0x0) {
        Chunk::~Chunk(this_01);
        operator_delete(this_01);
      }
      lVar6 = lVar6 + 8;
      if (lVar6 == 0x800) break;
      this_01 = *(Chunk **)(pTVar4 + lVar6);
    }
    lVar3 = lVar3 + 1;
    pTVar4 = pTVar4 + 0x800;
  } while (lVar3 != 0x100);
  lVar6 = *(long *)(this + 0x2f8);
  lVar3 = *(long *)(this + 0x300) - lVar6;
  if (lVar3 != 0) {
    lVar5 = 0x14;
    for (uVar2 = 1; glDeleteBuffers(1,lVar6 + lVar5),
        uVar2 < (ulong)((lVar3 >> 2) * 0x6db6db6db6db6db7); uVar2 = uVar2 + 1) {
      lVar6 = *(long *)(this + 0x2f8);
      lVar5 = lVar5 + 0x1c;
    }
  }
  lVar6 = *(long *)(this + 0x310);
  lVar3 = *(long *)(this + 0x318) - lVar6;
  if (lVar3 != 0) {
    lVar5 = 4;
    for (uVar2 = 1; glDeleteBuffers(1,lVar6 + lVar5),
        uVar2 < (ulong)((lVar3 >> 2) * -0x5555555555555555); uVar2 = uVar2 + 1) {
      lVar6 = *(long *)(this + 0x310);
      lVar5 = lVar5 + 0xc;
    }
  }
  lVar3 = Director::getInstance();
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(lVar3 + 0xb0),*(EventListener **)(this + 0x80630));
  Mat4::~Mat4((Mat4 *)(this + 0x80588));
  Mat4::~Mat4((Mat4 *)(this + 0x80548));
  pvVar1 = *(void **)(this + 0x80510);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x80518) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x804f8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x80500) = pvVar1;
    operator_delete(pvVar1);
  }
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x4a0));
  TerrainData::~TerrainData((TerrainData *)(this + 0x370));
  Mat4::~Mat4((Mat4 *)(this + 0x328));
  pvVar1 = *(void **)(this + 0x310);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x318) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x2f8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x300) = pvVar1;
    operator_delete(pvVar1);
  }
  Node::~Node((Node *)this);
  return;
}

