
/* cocos2d::TileMapAtlas::~TileMapAtlas() */

void __thiscall cocos2d::TileMapAtlas::~TileMapAtlas(TileMapAtlas *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__TileMapAtlas_01712650;
  *(undefined ***)(this + 0x2f8) = &PTR__TileMapAtlas_01712bb8;
  if (*(sImageTGA **)(this + 0x418) != (sImageTGA *)0x0) {
                    /* catch() { ... } // from try @ 00f578f8 with catch @ 00f578c8 */
    tgaDestroy(*(sImageTGA **)(this + 0x418));
  }
  puVar1 = *(void **)(this + 0x3f8);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
                    /* try { // try from 00f578f0 to 010578f7 has its CatchHandler @ 00f57968 */
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
                    /* try { // try from 00f578f8 to 01057983 has its CatchHandler @ 00f578c8 */
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 1000);
  *(undefined8 *)(this + 1000) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  AtlasNode::~AtlasNode((AtlasNode *)this);
  return;
}

