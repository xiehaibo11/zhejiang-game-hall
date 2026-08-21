
/* cocos2d::Skeleton3D::getBoneIndex(cocos2d::Bone3D*) const */

long __thiscall cocos2d::Skeleton3D::getBoneIndex(Skeleton3D *this,Bone3D *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x30) - *(long *)(this + 0x28);
  if (0 < lVar2) {
    lVar1 = 0;
    do {
                    /* try { // try from 00d3c958 to 00e3c95f has its CatchHandler @ 00d3ca20 */
      if (*(Bone3D **)(*(long *)(this + 0x28) + lVar1 * 8) == param_1) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
                    /* try { // try from 00d3c968 to 00e3c973 has its CatchHandler @ 00d3ca10 */
    } while (lVar1 < lVar2 >> 3);
  }
  return 0xffffffff;
}

