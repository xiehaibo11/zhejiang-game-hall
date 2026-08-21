
/* cocos2d::renderer::State::~State() */

void __thiscall cocos2d::renderer::State::~State(State *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x58);
  for (puVar2 = *(undefined8 **)(this + 0x50); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    if ((Ref *)*puVar2 != (Ref *)0x0) {
      Ref::release((Ref *)*puVar2);
    }
                    /* catch() { ... } // from try @ 009b80a8 with catch @ 009b822c */
                    /* catch() { ... } // from try @ 009b809c with catch @ 009b8230 */
  }
                    /* catch() { ... } // from try @ 009b807c with catch @ 009b8234 */
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
  }
  puVar3 = *(undefined8 **)(this + 0x90);
                    /* catch() { ... } // from try @ 009b80b4 with catch @ 009b8244 */
  for (puVar2 = *(undefined8 **)(this + 0x88); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    if ((Ref *)*puVar2 != (Ref *)0x0) {
      Ref::release((Ref *)*puVar2);
    }
  }
  if (*(Ref **)(this + 0xa0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xa0));
  }
  pvVar1 = *(void **)(this + 0x88);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x90) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x68);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x70) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x50);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  *(void **)(this + 0x58) = pvVar1;
                    /* try { // try from 009b829c to 00ab82ef has its CatchHandler @ 009b829c
                       catch() { ... } // from try @ 009b829c with catch @ 009b829c
                       catch() { ... } // from try @ 009b842c with catch @ 009b829c */
  operator_delete(pvVar1);
  return;
}

