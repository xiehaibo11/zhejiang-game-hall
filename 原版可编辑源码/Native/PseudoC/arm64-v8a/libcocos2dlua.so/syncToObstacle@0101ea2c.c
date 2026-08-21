
/* cocos2d::NavMeshObstacle::syncToObstacle() */

void __thiscall cocos2d::NavMeshObstacle::syncToObstacle(NavMeshObstacle *this)

{
  long lVar1;
  float *pfVar2;
  Vec3 aVStack_98 [16];
  Mat4 aMStack_88 [48];
  float local_58;
  float local_54;
  float local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 0101e998 with catch @ 0101ea34 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(dtTileCache **)(this + 0x60) != (dtTileCache *)0x0) {
    pfVar2 = (float *)dtTileCache::getObstacleByRef
                                (*(dtTileCache **)(this + 0x60),*(uint *)(this + 0x5c));
    if (pfVar2 != (float *)0x0) {
      Vec3::Vec3(aVStack_98,*pfVar2,pfVar2[1],pfVar2[2]);
      (**(code **)(**(long **)(this + 0x28) + 0x430))(aMStack_88);
      if ((((local_58 != *pfVar2) && (local_54 != pfVar2[1])) && (local_50 != pfVar2[2])) ||
         ((pfVar2[3] != *(float *)(this + 0x50) || (pfVar2[4] != *(float *)(this + 0x54))))) {
        dtTileCache::removeObstacle(*(dtTileCache **)(this + 0x60),*(uint *)(this + 0x5c));
        dtTileCache::addObstacle
                  (*(dtTileCache **)(this + 0x60),&local_58,*(float *)(this + 0x50),
                   *(float *)(this + 0x54),(uint *)(this + 0x5c));
      }
      Mat4::~Mat4(aMStack_88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

