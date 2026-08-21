
/* cocos2d::Skeleton3D::updateBoneMatrix() */

void __thiscall cocos2d::Skeleton3D::updateBoneMatrix(Skeleton3D *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(this + 0x48);
                    /* try { // try from 00d3c988 to 00e3c993 has its CatchHandler @ 00d3ca24 */
  for (puVar2 = *(undefined8 **)(this + 0x40); puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* try { // try from 00d3c994 to 00e3ca6b has its CatchHandler @ 00d3c858 */
    Bone3D::setWorldMatDirty((Bone3D *)*puVar2,true);
    Bone3D::updateWorldMat((Bone3D *)*puVar2);
  }
  return;
}

