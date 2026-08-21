
/* cocos2d::Terrain::QuadTree::preCalculateAABB(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Terrain::QuadTree::preCalculateAABB(QuadTree *this,Mat4 *param_1)

{
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x50);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x48);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x58);
  while (AABB::transform((AABB *)(this + 0x60),param_1), this[0x20] == (QuadTree)0x0) {
    preCalculateAABB(*(QuadTree **)this,param_1);
    preCalculateAABB(*(QuadTree **)(this + 8),param_1);
    preCalculateAABB(*(QuadTree **)(this + 0x10),param_1);
    this = *(QuadTree **)(this + 0x18);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x48);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x58);
  }
  return;
}

