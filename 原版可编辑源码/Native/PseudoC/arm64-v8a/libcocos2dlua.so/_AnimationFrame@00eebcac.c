
/* cocos2d::AnimationFrame::~AnimationFrame() */

void __thiscall cocos2d::AnimationFrame::~AnimationFrame(AnimationFrame *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
                    /* try { // try from 00eebcb0 to 00febcbf has its CatchHandler @ 00eebd2c */
                    /* try { // try from 00eebcc4 to 00febcd3 has its CatchHandler @ 00eebd14 */
                    /* try { // try from 00eebcd4 to 00febd43 has its CatchHandler @ 00eebc68 */
  *(undefined ***)this = &PTR__AnimationFrame_016fa3e0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016fa408;
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  puVar1 = *(void **)(this + 0x50);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eebcc4 with catch @ 00eebd14
                        */
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar2 != (void *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eebcb0 with catch @ 00eebd2c
                        */
    operator_delete(pvVar2);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00eebca0 with catch @ 00eebd30
                        */
  Ref::~Ref((Ref *)this);
  return;
}

