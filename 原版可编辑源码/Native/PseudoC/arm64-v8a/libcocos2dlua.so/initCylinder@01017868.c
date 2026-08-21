
/* cocos2d::Physics3DShape::initCylinder(float, float) */

undefined8 __thiscall
cocos2d::Physics3DShape::initCylinder(Physics3DShape *this,float param_1,float param_2)

{
  long lVar1;
  btCylinderShape *this_00;
  float fVar2;
  undefined4 uVar3;
  Vec3 local_78 [8];
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined4 local_58;
  float fStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x24) = 3;
  this_00 = (btCylinderShape *)btAlignedAllocInternal(0x48,0x10);
  Vec3::Vec3(local_78,param_1,param_2,param_1);
  local_50 = 0x3f000000;
  uVar3 = 0x3f000000;
  local_68 = CONCAT44(local_78._4_4_ * 0.5,local_78._0_4_ * 0.5);
  fVar2 = local_70 * 0.5;
  local_60 = fVar2;
  local_58 = convertVec3TobtVector3((Vec3 *)&local_68);
  fStack_54 = fVar2;
  uStack_4c = uVar3;
  btCylinderShape::btCylinderShape(this_00,(btVector3 *)&local_58);
  *(btCylinderShape **)(this + 0x28) = this_00;
                    /* try { // try from 01017908 to 0111795f has its CatchHandler @ 01017908
                       catch() { ... } // from try @ 01017908 with catch @ 01017908
                       catch() { ... } // from try @ 01017998 with catch @ 01017908 */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

