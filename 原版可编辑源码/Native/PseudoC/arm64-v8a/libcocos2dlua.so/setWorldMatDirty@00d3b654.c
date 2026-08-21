
/* cocos2d::Bone3D::setWorldMatDirty(bool) */

void __thiscall cocos2d::Bone3D::setWorldMatDirty(Bone3D *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 00d3b664 to 00e3b66b has its CatchHandler @ 00d3b710 */
  puVar2 = *(undefined8 **)(this + 200);
  puVar1 = *(undefined8 **)(this + 0xd0);
                    /* try { // try from 00d3b66c to 00e3b6ff has its CatchHandler @ 00d3b4f4 */
  this[0xe0] = (Bone3D)param_1;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    setWorldMatDirty((Bone3D *)*puVar2,param_1);
  }
  return;
}

