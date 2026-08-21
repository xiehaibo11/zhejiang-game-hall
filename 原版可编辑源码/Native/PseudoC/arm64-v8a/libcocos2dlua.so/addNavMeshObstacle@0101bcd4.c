
/* cocos2d::NavMesh::addNavMeshObstacle(cocos2d::NavMeshObstacle*) */

void __thiscall cocos2d::NavMesh::addNavMeshObstacle(NavMesh *this,NavMeshObstacle *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x80);
  plVar2 = *(long **)(this + 0x88);
  if ((plVar2 != plVar3) && (*plVar3 != 0)) {
    do {
      if (plVar2 + -1 == plVar3) {
        return;
      }
      plVar1 = plVar3 + 1;
                    /* catch() { ... } // from try @ 0101bc9c with catch @ 0101bd0c */
      plVar3 = plVar3 + 1;
                    /* catch() { ... } // from try @ 0101bc60 with catch @ 0101bd10 */
    } while (*plVar1 != 0);
  }
                    /* catch() { ... } // from try @ 0101bc48 with catch @ 0101bd18 */
  if (plVar3 != plVar2) {
    NavMeshObstacle::addTo(param_1,*(dtTileCache **)(this + 0x40));
    Ref::retain((Ref *)param_1);
                    /* catch() { ... } // from try @ 0101bc34 with catch @ 0101bd34 */
    *plVar3 = (long)param_1;
  }
  return;
}

