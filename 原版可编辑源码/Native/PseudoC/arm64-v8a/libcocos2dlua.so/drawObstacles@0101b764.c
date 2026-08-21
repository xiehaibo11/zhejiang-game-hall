
/* cocos2d::NavMesh::drawObstacles() */

void __thiscall cocos2d::NavMesh::drawObstacles(NavMesh *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  dtTileCacheObstacle *pdVar4;
  long lVar5;
  uint uVar6;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar1 = *(long **)(this + 0x80);
  plVar2 = *(long **)(this + 0x88);
  if (plVar1 != plVar2) {
    lVar5 = *plVar1;
    while( true ) {
      if ((lVar5 != 0) &&
         (pdVar4 = (dtTileCacheObstacle *)
                   dtTileCache::getObstacleByRef
                             (*(dtTileCache **)(this + 0x40),*(uint *)(lVar5 + 0x5c)),
         pdVar4[0x56] != (dtTileCacheObstacle)0x0)) {
        dtTileCache::getObstacleBounds(*(dtTileCache **)(this + 0x40),pdVar4,&local_74,&local_80);
        if ((byte)pdVar4[0x56] - 1 < 3) {
          uVar6 = *(uint *)(&DAT_014585a4 + (long)(char)((byte)pdVar4[0x56] - 1) * 4);
        }
        else {
          uVar6 = 0;
        }
        duDebugDrawCylinder((duDebugDraw *)(this + 0xa0),local_74,fStack_70,local_6c,local_80,
                            fStack_7c,local_78,uVar6);
        duDebugDrawCylinderWire
                  ((duDebugDraw *)(this + 0xa0),local_74,fStack_70,local_6c,local_80,fStack_7c,
                   local_78,uVar6 >> 1 & 0x7f7f | uVar6 & 0xc0000000,2.0);
      }
      plVar1 = plVar1 + 1;
      if (plVar2 == plVar1) break;
      lVar5 = *plVar1;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

