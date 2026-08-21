
/* cocos2d::TMXLayer::~TMXLayer() */

void __thiscall cocos2d::TMXLayer::~TMXLayer(TMXLayer *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00f4c6c4 to 0104c6cb has its CatchHandler @ 00f4d478 */
  *(undefined ***)this = &PTR__TMXLayer_017111b8;
  *(undefined ***)(this + 0x2f8) = &PTR__TMXLayer_01711718;
                    /* try { // try from 00f4c6d8 to 0104c6ef has its CatchHandler @ 00f4d450 */
  if (*(Ref **)(this + 0x3f8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3f8));
  }
  if (*(Ref **)(this + 0x3c8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c8));
  }
  if (*(_ccCArray **)(this + 0x3d0) != (_ccCArray *)0x0) {
    ccCArrayFree(*(_ccCArray **)(this + 0x3d0));
    *(undefined8 *)(this + 0x3d0) = 0;
  }
  if (*(void **)(this + 0x3f0) != (void *)0x0) {
    free(*(void **)(this + 0x3f0));
    *(undefined8 *)(this + 0x3f0) = 0;
  }
  puVar1 = *(void **)(this + 0x420);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x410);
  *(undefined8 *)(this + 0x410) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (((byte)this[0x3a0] & 1) != 0) {
    operator_delete(*(void **)(this + 0x3b0));
  }
                    /* try { // try from 00f4c770 to 0104c787 has its CatchHandler @ 00f4d5b4 */
  SpriteBatchNode::~SpriteBatchNode((SpriteBatchNode *)this);
  return;
}

