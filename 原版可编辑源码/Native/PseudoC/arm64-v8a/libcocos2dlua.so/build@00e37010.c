
/* cocos2d::PUMeshSurfaceEmitter::build() */

void __thiscall cocos2d::PUMeshSurfaceEmitter::build(PUMeshSurfaceEmitter *this)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00e3701c to 00f37033 has its CatchHandler @ 00e37534 */
  puVar3 = *(undefined8 **)(this + 0x238);
  if (puVar3 != (undefined8 *)0x0) {
    pvVar2 = (void *)*puVar3;
    puVar3[1] = pvVar2;
    if (pvVar2 != (void *)0x0) {
      puVar3[1] = pvVar2;
      operator_delete(pvVar2);
    }
    operator_delete(puVar3);
    *(undefined8 *)(this + 0x238) = 0;
  }
  puVar3 = operator_new(0x20,(nothrow_t *)&std::nothrow);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(this + 0x234);
                    /* try { // try from 00e37060 to 00f3706b has its CatchHandler @ 00e37444 */
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = uVar1;
  }
  *(undefined8 **)(this + 0x238) = puVar3;
  return;
}

