
/* cocos2d::NavMeshObstacle::syncToNode() */

void __thiscall cocos2d::NavMeshObstacle::syncToNode(NavMeshObstacle *this)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  long *plVar4;
  float local_88;
  float fStack_84;
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
                    /* catch() { ... } // from try @ 0101e9e0 with catch @ 0101e928 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((*(dtTileCache **)(this + 0x60) != (dtTileCache *)0x0) &&
     (pfVar2 = (float *)dtTileCache::getObstacleByRef
                                  (*(dtTileCache **)(this + 0x60),*(uint *)(this + 0x5c)),
     pfVar2 != (float *)0x0)) {
    Vec3::Vec3((Vec3 *)&local_88,*pfVar2,pfVar2[1],pfVar2[2]);
    lVar3 = (**(code **)(**(long **)(this + 0x28) + 0x260))();
    if (lVar3 != 0) {
      plVar4 = (long *)(**(code **)(**(long **)(this + 0x28) + 0x260))();
                    /* try { // try from 0101e998 to 0111e9df has its CatchHandler @ 0101ea34 */
      (**(code **)(*plVar4 + 0x448))(aMStack_78);
      Mat4::transformVector(aMStack_78,local_88,fStack_84,local_80,1.0,(Vec3 *)&local_88);
      Mat4::~Mat4(aMStack_78);
    }
    (**(code **)(**(long **)(this + 0x28) + 0xf8))(*(long **)(this + 0x28),&local_88);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(pfVar2 + 3);
  }
                    /* try { // try from 0101e9e0 to 0111ea6f has its CatchHandler @ 0101e928 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

