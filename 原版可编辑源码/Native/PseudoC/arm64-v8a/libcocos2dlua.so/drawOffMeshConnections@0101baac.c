
/* cocos2d::NavMesh::drawOffMeshConnections() */

void __thiscall cocos2d::NavMesh::drawOffMeshConnections(NavMesh *this)

{
  NavMeshDebugDraw *this_00;
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  
  this_00 = (NavMeshDebugDraw *)(this + 0xa0);
  NavMeshDebugDraw::begin((NavMeshDebugDraw *)0x40000000,this_00,1);
  lVar2 = *(long *)(this + 0x60);
  if (0 < *(int *)(lVar2 + 0x2400)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      pfVar1 = (float *)(lVar2 + (lVar3 >> 0x1e));
      NavMeshDebugDraw::vertex(this_00,*pfVar1,pfVar1[1],pfVar1[2],0x40000000);
      NavMeshDebugDraw::vertex(this_00,*pfVar1,pfVar1[1] + 0.2,pfVar1[2],0x40000000);
      NavMeshDebugDraw::vertex(this_00,pfVar1[3],pfVar1[4],pfVar1[5],0x40000000);
      NavMeshDebugDraw::vertex(this_00,pfVar1[3],pfVar1[4] + 0.2,pfVar1[5],0x40000000);
      duAppendCircle((duDebugDraw *)this_00,*pfVar1,pfVar1[1] + 0.1,pfVar1[2],
                     *(float *)(*(long *)(this + 0x60) + lVar4 * 4 + 0x1800),0x40000000);
      duAppendCircle((duDebugDraw *)this_00,pfVar1[3],pfVar1[4] + 0.1,pfVar1[5],
                     *(float *)(*(long *)(this + 0x60) + lVar4 * 4 + 0x1800),0x40000000);
                    /* catch() { ... } // from try @ 0101bca8 with catch @ 0101bbe8 */
      fVar5 = 0.0;
      if ((*(byte *)(*(long *)(this + 0x60) + lVar4 + 0x1c00) & 1) != 0) {
        fVar5 = 0.6;
      }
      duAppendArc((duDebugDraw *)this_00,*pfVar1,pfVar1[1],pfVar1[2],pfVar1[3],pfVar1[4],pfVar1[5],
                  0.25,fVar5,0.6,0xc08000c0);
      lVar2 = *(long *)(this + 0x60);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x600000000;
    } while (lVar4 < *(int *)(lVar2 + 0x2400));
  }
                    /* try { // try from 0101bc34 to 0111bc3b has its CatchHandler @ 0101bd34 */
                    /* try { // try from 0101bc48 to 0111bc53 has its CatchHandler @ 0101bd18 */
  NavMeshDebugDraw::end(this_00);
  return;
}

