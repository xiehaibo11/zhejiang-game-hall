
/* cocos2d::NavMesh::removeNavMeshObstacle(cocos2d::NavMeshObstacle*) */

void __thiscall cocos2d::NavMesh::removeNavMeshObstacle(NavMesh *this,NavMeshObstacle *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 0101bc60 to 0111bc6b has its CatchHandler @ 0101bd10 */
  puVar3 = *(undefined8 **)(this + 0x80);
  puVar2 = *(undefined8 **)(this + 0x88);
  if ((puVar2 != puVar3) && ((NavMeshObstacle *)*puVar3 != param_1)) {
    do {
      if (puVar2 + -1 == puVar3) {
        return;
      }
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
                    /* try { // try from 0101bc9c to 0111bca7 has its CatchHandler @ 0101bd0c */
    } while ((NavMeshObstacle *)*puVar1 != param_1);
  }
                    /* try { // try from 0101bca8 to 0111bd7b has its CatchHandler @ 0101bbe8 */
  if (puVar3 != puVar2) {
    NavMeshObstacle::removeFrom((dtTileCache *)param_1);
    Ref::release((Ref *)param_1);
    *puVar3 = 0;
  }
  return;
}

