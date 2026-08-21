
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::Label::~Label() */

void __thiscall cocos2d::Label::~Label(Label *this)

{
  Label LVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR__Label_016fd330;
  *(undefined ***)(this + 0x300) = &PTR__Label_016fd980;
  *(undefined ***)(this + 0x2f8) = &PTR__Label_016fd950;
  if (*(void **)(this + 0x430) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x430));
  }
  if (*(long *)(this + 0x3d0) != 0) {
    Node::removeAllChildrenWithCleanup((Node *)this,true);
    if (*(Ref **)(this + 0x408) != (Ref *)0x0) {
      Ref::release(*(Ref **)(this + 0x408));
      *(undefined8 *)(this + 0x408) = 0;
    }
    puVar2 = *(undefined8 **)(this + 0x3d8);
    puVar4 = *(undefined8 **)(this + 0x3e0);
    if (puVar2 != puVar4) {
      do {
        Ref::release((Ref *)*puVar2);
        puVar2 = puVar2 + 1;
      } while (puVar4 != puVar2);
      puVar2 = *(undefined8 **)(this + 0x3d8);
    }
    *(undefined8 **)(this + 0x3e0) = puVar2;
    FontAtlasCache::releaseFontAtlas(*(FontAtlas **)(this + 0x3d0));
  }
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x668));
  EventDispatcher::removeEventListener
            (*(EventDispatcher **)(this + 0x1f0),*(EventListener **)(this + 0x670));
  if (*(Ref **)(this + 0x3c0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c0));
    *(undefined8 *)(this + 0x3c0) = 0;
  }
  if (*(Ref **)(this + 0x3c8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x3c8));
    *(undefined8 *)(this + 0x3c8) = 0;
  }
  puVar2 = *(void **)(this + 0x650);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x640);
  *(undefined8 *)(this + 0x640) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x5c0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x570));
  QuadCommand::~QuadCommand((QuadCommand *)(this + 0x4c8));
  pvVar3 = *(void **)(this + 0x478);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x480) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x460);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x468) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x3f0);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x3f8) = pvVar3;
    operator_delete(pvVar3);
  }
                    /* catch() { ... } // from try @ 00f0a734 with catch @ 00f0a6fc */
  puVar2 = *(undefined8 **)(this + 0x3d8);
  puVar4 = *(undefined8 **)(this + 0x3e0);
  if (puVar2 != puVar4) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar4 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x3d8);
  }
  *(undefined8 **)(this + 0x3e0) = puVar2;
                    /* try { // try from 00f0a72c to 0100a733 has its CatchHandler @ 00f0a76c */
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 00f0a734 to 0100a787 has its CatchHandler @ 00f0a6fc */
    *(undefined8 **)(this + 0x3e0) = puVar2;
    operator_delete(puVar2);
  }
  if (((byte)this[0x3a0] & 1) == 0) {
    LVar1 = this[0x360];
  }
  else {
    operator_delete(*(void **)(this + 0x3b0));
                    /* catch() { ... } // from try @ 00f0a7c4 with catch @ 00f0a788 */
    LVar1 = this[0x360];
  }
  if (((byte)LVar1 & 1) == 0) {
    LVar1 = this[0x348];
  }
  else {
    operator_delete(*(void **)(this + 0x370));
    LVar1 = this[0x348];
  }
  if (((byte)LVar1 & 1) == 0) {
    LVar1 = this[0x328];
  }
  else {
    operator_delete(*(void **)(this + 0x358));
    LVar1 = this[0x328];
  }
  if (((byte)LVar1 & 1) == 0) {
    LVar1 = this[0x310];
  }
  else {
    operator_delete(*(void **)(this + 0x338));
    LVar1 = this[0x310];
  }
                    /* try { // try from 00f0a7bc to 0100a7c3 has its CatchHandler @ 00f0a7fc */
  if (((byte)LVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 800));
  }
                    /* catch() { ... } // from try @ 00f0a72c with catch @ 00f0a76c */
  Node::~Node((Node *)this);
  return;
}

