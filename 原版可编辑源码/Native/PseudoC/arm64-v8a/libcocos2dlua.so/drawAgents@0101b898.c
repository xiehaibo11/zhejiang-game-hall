
/* cocos2d::NavMesh::drawAgents() */

void __thiscall cocos2d::NavMesh::drawAgents(NavMesh *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  NavMeshAgent *this_00;
  float fVar7;
  float fVar8;
  
  puVar1 = *(undefined8 **)(this + 0x68);
  puVar3 = *(undefined8 **)(this + 0x70);
  if (puVar1 != puVar3) {
    this_00 = (NavMeshAgent *)*puVar1;
    while( true ) {
      if (this_00 != (NavMeshAgent *)0x0) {
        lVar5 = dtCrowd::getAgent(*(dtCrowd **)(this + 0x38),*(int *)(this_00 + 0xcc));
        fVar7 = (float)NavMeshAgent::getRadius(this_00);
        fVar8 = (float)NavMeshAgent::getHeight(this_00);
        duDebugDrawCircle((duDebugDraw *)(this + 0xa0),*(float *)(lVar5 + 0x1a0),
                          *(float *)(lVar5 + 0x1a4),*(float *)(lVar5 + 0x1a8),fVar7,0x20000000,2.0);
        uVar6 = *(byte *)(lVar5 + 0x250) - 1;
        if (uVar6 < 6) {
          uVar6 = *(uint *)(&DAT_014585b0 + (long)(char)uVar6 * 4);
        }
        else {
          uVar6 = 0x80dcdcdc;
        }
        duDebugDrawCylinder((duDebugDraw *)(this + 0xa0),*(float *)(lVar5 + 0x1a0) - fVar7,
                            fVar7 * 0.1 + *(float *)(lVar5 + 0x1a4),
                            *(float *)(lVar5 + 0x1a8) - fVar7,fVar7 + *(float *)(lVar5 + 0x1a0),
                            fVar8 + *(float *)(lVar5 + 0x1a4),fVar7 + *(float *)(lVar5 + 0x1a8),
                            uVar6);
      }
      puVar1 = puVar1 + 1;
      if (puVar3 == puVar1) break;
      this_00 = (NavMeshAgent *)*puVar1;
    }
    plVar2 = *(long **)(this + 0x68);
    plVar4 = *(long **)(this + 0x70);
    if (plVar2 != plVar4) {
      lVar5 = *plVar2;
      while( true ) {
        if (lVar5 != 0) {
          lVar5 = dtCrowd::getAgent(*(dtCrowd **)(this + 0x38),*(int *)(lVar5 + 0xcc));
          fVar7 = *(float *)(lVar5 + 0x1e4);
          uVar6 = *(byte *)(lVar5 + 0x250) - 1;
          if (uVar6 < 6) {
            uVar6 = *(uint *)(&DAT_014585c8 + (long)(char)uVar6 * 4);
          }
          else {
            uVar6 = 0xc0dcdcdc;
          }
          duDebugDrawCircle((duDebugDraw *)(this + 0xa0),*(float *)(lVar5 + 0x1a0),
                            fVar7 + *(float *)(lVar5 + 0x1a4),*(float *)(lVar5 + 0x1a8),
                            *(float *)(lVar5 + 0x1e0),uVar6,2.0);
          fVar7 = fVar7 + *(float *)(lVar5 + 0x1a4);
          duDebugDrawArrow((duDebugDraw *)(this + 0xa0),*(float *)(lVar5 + 0x1a0),fVar7,
                           *(float *)(lVar5 + 0x1a8),
                           *(float *)(lVar5 + 0x1a0) + *(float *)(lVar5 + 0x1d0),
                           fVar7 + *(float *)(lVar5 + 0x1d4),
                           *(float *)(lVar5 + 0x1a8) + *(float *)(lVar5 + 0x1d8),0.0,0.4,0xa0000000,
                           2.0);
        }
        plVar2 = plVar2 + 1;
        if (plVar4 == plVar2) break;
        lVar5 = *plVar2;
      }
    }
  }
  return;
}

