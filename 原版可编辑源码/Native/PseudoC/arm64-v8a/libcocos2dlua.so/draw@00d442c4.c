
/* cocos2d::Terrain::QuadTree::draw() */

void __thiscall cocos2d::Terrain::QuadTree::draw(QuadTree *this)

{
  QuadTree QVar1;
  
  QVar1 = this[0x80];
  while( true ) {
    if (QVar1 == (QuadTree)0x0) {
      return;
    }
    if (this[0x20] != (QuadTree)0x0) break;
    draw(*(QuadTree **)this);
    draw(*(QuadTree **)(this + 8));
    draw(*(QuadTree **)(this + 0x18));
    this = *(QuadTree **)(this + 0x10);
    QVar1 = this[0x80];
  }
  Chunk::bindAndDraw(*(Chunk **)(this + 0x28));
  return;
}

