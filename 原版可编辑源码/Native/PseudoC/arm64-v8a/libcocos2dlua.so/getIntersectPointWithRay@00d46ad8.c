
/* cocos2d::Terrain::Chunk::getIntersectPointWithRay(cocos2d::Ray const&, cocos2d::Vec3&) */

undefined4 __thiscall
cocos2d::Terrain::Chunk::getIntersectPointWithRay(Chunk *this,Ray *param_1,Vec3 *param_2)

{
  Triangle *pTVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  Triangle *this_00;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar3 = Ray::intersects(param_1,(AABB *)(this + 0x88),(float *)0x0);
  if ((uVar3 & 1) != 0) {
    this_00 = *(Triangle **)(this + 0x118);
    pTVar1 = *(Triangle **)(this + 0x120);
    if (this_00 != pTVar1) {
      uVar5 = 0;
      fVar4 = 3.4028235e+38;
      do {
        Vec3::Vec3((Vec3 *)&local_68);
        uVar3 = Triangle::getIntersectPoint(this_00,param_1,(Vec3 *)&local_68);
        if ((uVar3 & 1) != 0) {
                    /* try { // try from 00d46b84 to 00e46bcf has its CatchHandler @ 00d46b84
                       catch() { ... } // from try @ 00d46b84 with catch @ 00d46b84
                       catch() { ... } // from try @ 00d46bec with catch @ 00d46b84 */
          fVar6 = (float)Vec3::distance((Vec3 *)param_1,(Vec3 *)&local_68);
          if (fVar6 < fVar4) {
            uVar5 = 1;
            *(undefined4 *)(param_2 + 8) = local_60;
            *(undefined8 *)param_2 = local_68;
            fVar4 = fVar6;
          }
          else {
            uVar5 = 1;
          }
        }
        this_00 = this_00 + 0x24;
      } while (pTVar1 != this_00);
      goto LAB_00d46b9c;
    }
  }
  uVar5 = 0;
LAB_00d46b9c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

