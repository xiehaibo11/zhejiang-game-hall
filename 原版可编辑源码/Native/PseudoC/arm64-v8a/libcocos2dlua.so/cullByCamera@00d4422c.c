
/* cocos2d::Terrain::QuadTree::cullByCamera(cocos2d::Camera const*, cocos2d::Mat4 const&) */

void __thiscall
cocos2d::Terrain::QuadTree::cullByCamera(QuadTree *this,Camera *param_1,Mat4 *param_2)

{
  ulong uVar1;
  
  while( true ) {
    uVar1 = Camera::isVisibleInFrustum(param_1,(AABB *)(this + 0x60));
    if ((uVar1 & 1) == 0) {
      resetNeedDraw(this,false);
      return;
    }
    if (this[0x20] != (QuadTree)0x0) break;
    cullByCamera(*(QuadTree **)this,param_1,param_2);
    cullByCamera(*(QuadTree **)(this + 8),param_1,param_2);
    cullByCamera(*(QuadTree **)(this + 0x10),param_1,param_2);
    this = *(QuadTree **)(this + 0x18);
  }
  return;
}

