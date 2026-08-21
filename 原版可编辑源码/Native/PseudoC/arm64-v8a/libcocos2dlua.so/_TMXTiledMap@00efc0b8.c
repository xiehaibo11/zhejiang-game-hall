
/* cocos2d::experimental::TMXTiledMap::~TMXTiledMap() */

void __thiscall cocos2d::experimental::TMXTiledMap::~TMXTiledMap(TMXTiledMap *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
                    /* try { // try from 00efc0c0 to 00ffc11b has its CatchHandler @ 00efc630 */
  *(undefined ***)this = &PTR__TMXTiledMap_016fcaa8;
  puVar1 = *(void **)(this + 0x360);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 3));
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x350);
  *(undefined8 *)(this + 0x350) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x338);
  while (puVar1 != (void *)0x0) {
                    /* try { // try from 00efc12c to 00ffc137 has its CatchHandler @ 00efc578 */
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x328);
  *(undefined8 *)(this + 0x328) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(undefined8 **)(this + 0x310);
  puVar3 = *(undefined8 **)(this + 0x318);
                    /* try { // try from 00efc168 to 00ffc193 has its CatchHandler @ 00efc630 */
  if (puVar1 != puVar3) {
    do {
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar3 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x310);
  }
  *(undefined8 **)(this + 0x318) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x318) = puVar1;
    operator_delete(puVar1);
  }
  Node::~Node((Node *)this);
  return;
}

