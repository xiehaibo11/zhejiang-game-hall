
void FUN_0101ac90(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  Ref *unaff_x19;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  dtFreeNavMeshQuery(*(dtNavMeshQuery **)(unaff_x19 + 0x30));
  if (*(long **)(unaff_x19 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x19 + 0x48) + 8))();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  if (*(long **)(unaff_x19 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x19 + 0x50) + 8))();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  if (*(long **)(unaff_x19 + 0x58) != (long *)0x0) {
    (**(code **)(**(long **)(unaff_x19 + 0x58) + 8))();
  }
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  if (*(void **)(unaff_x19 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(unaff_x19 + 0x60));
  }
  puVar3 = *(undefined8 **)(unaff_x19 + 0x68);
  puVar4 = *(undefined8 **)(unaff_x19 + 0x70);
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  if (puVar3 != puVar4) {
    do {
      if ((Ref *)*puVar3 != (Ref *)0x0) {
        cocos2d::Ref::release((Ref *)*puVar3);
      }
      puVar3 = puVar3 + 1;
                    /* catch() { ... } // from try @ 0101ad2c with catch @ 0101ad04 */
    } while (puVar4 != puVar3);
    puVar3 = *(undefined8 **)(unaff_x19 + 0x68);
  }
  puVar4 = *(undefined8 **)(unaff_x19 + 0x80);
  puVar1 = *(undefined8 **)(unaff_x19 + 0x88);
  *(undefined8 **)(unaff_x19 + 0x70) = puVar3;
                    /* try { // try from 0101ad28 to 0111ad2b has its CatchHandler @ 0101ad74 */
                    /* try { // try from 0101ad2c to 0111ad8f has its CatchHandler @ 0101ad04 */
  if (puVar4 != puVar1) {
    do {
      if ((Ref *)*puVar4 != (Ref *)0x0) {
        cocos2d::Ref::release((Ref *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    } while (puVar1 != puVar4);
    puVar4 = *(undefined8 **)(unaff_x19 + 0x80);
  }
  *(undefined8 **)(unaff_x19 + 0x88) = puVar4;
  if (((byte)unaff_x19[0x178] & 1) != 0) {
    operator_delete(*(void **)(unaff_x19 + 0x188));
  }
  if (((byte)unaff_x19[0x160] & 1) != 0) {
                    /* catch() { ... } // from try @ 0101ad28 with catch @ 0101ad74 */
    operator_delete(*(void **)(unaff_x19 + 0x170));
  }
  cocos2d::NavMeshDebugDraw::~NavMeshDebugDraw((NavMeshDebugDraw *)(unaff_x19 + 0xa0));
  pvVar2 = *(void **)(unaff_x19 + 0x80);
  if (pvVar2 != (void *)0x0) {
    *(void **)(unaff_x19 + 0x88) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(unaff_x19 + 0x68);
  if (pvVar2 != (void *)0x0) {
    *(void **)(unaff_x19 + 0x70) = pvVar2;
    operator_delete(pvVar2);
  }
  cocos2d::Ref::~Ref(unaff_x19);
  return;
}

