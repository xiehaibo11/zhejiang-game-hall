
/* cocos2d::Physics3DShape::initBox(cocos2d::Vec3 const&) */

undefined8 __thiscall cocos2d::Physics3DShape::initBox(Physics3DShape *this,Vec3 *param_1)

{
  long lVar1;
  btBoxShape *this_00;
  float fVar2;
  undefined4 uVar3;
  undefined8 local_58;
  float local_50;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x24) = 1;
                    /* try { // try from 010175d0 to 011175d3 has its CatchHandler @ 01017618 */
  this_00 = (btBoxShape *)btAlignedAllocInternal(0x48,0x10);
                    /* try { // try from 010175d4 to 0111762f has its CatchHandler @ 01017504 */
  local_40 = 0x3f000000;
  uVar3 = 0x3f000000;
  local_58 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) * 0.5,
                      (float)*(undefined8 *)param_1 * 0.5);
  fVar2 = *(float *)(param_1 + 8) * 0.5;
  local_50 = fVar2;
  local_48 = convertVec3TobtVector3((Vec3 *)&local_58);
  fStack_44 = fVar2;
  uStack_3c = uVar3;
  btBoxShape::btBoxShape(this_00,(btVector3 *)&local_48);
  *(btBoxShape **)(this + 0x28) = this_00;
                    /* catch() { ... } // from try @ 010175d0 with catch @ 01017618 */
                    /* catch() { ... } // from try @ 01017568 with catch @ 0101761c */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

