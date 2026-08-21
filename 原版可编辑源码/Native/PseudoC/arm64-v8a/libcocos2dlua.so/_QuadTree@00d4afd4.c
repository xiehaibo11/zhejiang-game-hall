
/* cocos2d::Terrain::QuadTree::~QuadTree() */

void __thiscall cocos2d::Terrain::QuadTree::~QuadTree(QuadTree *this)

{
  QuadTree *pQVar1;
  
  pQVar1 = *(QuadTree **)this;
  if (pQVar1 != (QuadTree *)0x0) {
    ~QuadTree(pQVar1);
    operator_delete(pQVar1);
  }
  pQVar1 = *(QuadTree **)(this + 8);
  if (pQVar1 != (QuadTree *)0x0) {
    ~QuadTree(pQVar1);
    operator_delete(pQVar1);
  }
                    /* try { // try from 00d4b014 to 00e4b037 has its CatchHandler @ 00d4b880 */
  pQVar1 = *(QuadTree **)(this + 0x10);
  if (pQVar1 != (QuadTree *)0x0) {
    ~QuadTree(pQVar1);
    operator_delete(pQVar1);
  }
  pQVar1 = *(QuadTree **)(this + 0x18);
  if (pQVar1 != (QuadTree *)0x0) {
    ~QuadTree(pQVar1);
    operator_delete(pQVar1);
    return;
  }
  return;
}

