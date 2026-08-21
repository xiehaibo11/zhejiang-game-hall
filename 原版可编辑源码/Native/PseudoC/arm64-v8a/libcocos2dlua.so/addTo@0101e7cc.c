
/* cocos2d::NavMeshObstacle::addTo(dtTileCache*) */

void __thiscall cocos2d::NavMeshObstacle::addTo(NavMeshObstacle *this,dtTileCache *param_1)

{
  long lVar1;
  Mat4 aMStack_78 [48];
  float afStack_48 [4];
  long local_38;
  
                    /* catch() { ... } // from try @ 0101e7bc with catch @ 0101e7d4 */
                    /* catch() { ... } // from try @ 0101e790 with catch @ 0101e7d8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(dtTileCache **)(this + 0x60) = param_1;
  (**(code **)(**(long **)(this + 0x28) + 0x430))(aMStack_78);
  dtTileCache::addObstacle
            (*(dtTileCache **)(this + 0x60),afStack_48,*(float *)(this + 0x50),
             *(float *)(this + 0x54),(uint *)(this + 0x5c));
  Mat4::~Mat4(aMStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

