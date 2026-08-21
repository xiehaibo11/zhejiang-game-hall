
/* cocos2d::NavMeshObstacle::removeFrom(dtTileCache*) */

void cocos2d::NavMeshObstacle::removeFrom(dtTileCache *param_1)

{
  dtTileCache::removeObstacle(*(dtTileCache **)(param_1 + 0x60),*(uint *)(param_1 + 0x5c));
  *(undefined8 *)(param_1 + 0x60) = 0;
                    /* try { // try from 0101e7bc to 0111e7c7 has its CatchHandler @ 0101e7d4 */
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
                    /* try { // try from 0101e7c8 to 0111e827 has its CatchHandler @ 0101e760 */
  return;
}

