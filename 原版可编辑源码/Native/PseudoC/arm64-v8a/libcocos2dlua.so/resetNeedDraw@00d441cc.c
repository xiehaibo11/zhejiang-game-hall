
/* cocos2d::Terrain::QuadTree::resetNeedDraw(bool) */

void __thiscall cocos2d::Terrain::QuadTree::resetNeedDraw(QuadTree *this,bool param_1)

{
  QuadTree QVar1;
  
  QVar1 = this[0x20];
  this[0x80] = (QuadTree)param_1;
  while (QVar1 == (QuadTree)0x0) {
    resetNeedDraw(*(QuadTree **)this,param_1);
    resetNeedDraw(*(QuadTree **)(this + 8),param_1);
    resetNeedDraw(*(QuadTree **)(this + 0x10),param_1);
    this = *(QuadTree **)(this + 0x18);
    QVar1 = this[0x20];
    this[0x80] = (QuadTree)param_1;
  }
  return;
}

