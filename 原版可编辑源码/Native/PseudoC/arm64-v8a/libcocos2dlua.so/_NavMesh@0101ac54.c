
/* cocos2d::NavMesh::~NavMesh() */

void __thiscall cocos2d::NavMesh::~NavMesh(NavMesh *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
                    /* try { // try from 0101ac54 to 0111ac9b has its CatchHandler @ 0101ac0c */
  *(undefined ***)this = &PTR__NavMesh_01726fb8;
  dtFreeTileCache(*(dtTileCache **)(this + 0x40));
  dtFreeCrowd(*(dtCrowd **)(this + 0x38));
                    /* catch() { ... } // from try @ 0101ac4c with catch @ 0101ac88 */
  dtFreeNavMesh(*(dtNavMesh **)(this + 0x28));
  dtFreeNavMeshQuery(*(dtNavMeshQuery **)(this + 0x30));
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long **)(this + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x50) + 8))();
  }
  *(undefined8 *)(this + 0x50) = 0;
  if (*(long **)(this + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x58) + 8))();
  }
  *(undefined8 *)(this + 0x58) = 0;
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x60));
  }
  puVar3 = *(undefined8 **)(this + 0x68);
  puVar4 = *(undefined8 **)(this + 0x70);
  *(undefined8 *)(this + 0x60) = 0;
  if (puVar3 != puVar4) {
    do {
      if ((Ref *)*puVar3 != (Ref *)0x0) {
        Ref::release((Ref *)*puVar3);
      }
      puVar3 = puVar3 + 1;
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(this + 0x68);
  }
  puVar4 = *(undefined8 **)(this + 0x80);
  puVar1 = *(undefined8 **)(this + 0x88);
  *(undefined8 **)(this + 0x70) = puVar3;
  if (puVar4 != puVar1) {
    do {
      if ((Ref *)*puVar4 != (Ref *)0x0) {
        Ref::release((Ref *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    puVar4 = *(undefined8 **)(this + 0x80);
  }
  *(undefined8 **)(this + 0x88) = puVar4;
  if (((byte)this[0x178] & 1) != 0) {
    operator_delete(*(void **)(this + 0x188));
  }
  if (((byte)this[0x160] & 1) != 0) {
    operator_delete(*(void **)(this + 0x170));
  }
  NavMeshDebugDraw::~NavMeshDebugDraw((NavMeshDebugDraw *)(this + 0xa0));
  pvVar2 = *(void **)(this + 0x80);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  return;
}

