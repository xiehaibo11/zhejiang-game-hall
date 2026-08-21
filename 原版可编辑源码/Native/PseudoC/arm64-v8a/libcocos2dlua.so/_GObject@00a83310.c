
/* fairygui::GObject::~GObject() */

void __thiscall fairygui::GObject::~GObject(GObject *this)

{
  GObject GVar1;
  Relations *this_00;
  
  *(undefined ***)this = &PTR__GObject_016a6188;
  if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
    GComponent::removeChild(*(GComponent **)(this + 0xa0),this);
  }
  if (*(long **)(this + 0xa8) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00a832b8 with catch @ 00a83350 */
    (**(code **)(**(long **)(this + 0xa8) + 0x270))();
                    /* catch() { ... } // from try @ 00a832d0 with catch @ 00a83354 */
    if (*(Ref **)(this + 0xa8) != (Ref *)0x0) {
      cocos2d::Ref::release(*(Ref **)(this + 0xa8));
    }
  }
  if (*(long **)(this + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x140) + 8))();
  }
  *(undefined8 *)(this + 0x140) = 0;
  if (*(long **)(this + 0x148) != (long *)0x0) {
                    /* catch() { ... } // from try @ 00a83284 with catch @ 00a83384 */
    (**(code **)(**(long **)(this + 0x148) + 8))();
  }
  *(undefined8 *)(this + 0x148) = 0;
  if (*(long **)(this + 0x150) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x150) + 8))();
  }
  *(undefined8 *)(this + 0x150) = 0;
  if (*(long **)(this + 0x158) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x158) + 8))();
  }
  *(undefined8 *)(this + 0x158) = 0;
  if (*(long **)(this + 0x160) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x160) + 8))();
  }
  *(undefined8 *)(this + 0x160) = 0;
  if (*(long **)(this + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x168) + 8))();
  }
  *(undefined8 *)(this + 0x168) = 0;
  if (*(long **)(this + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x170) + 8))();
  }
  *(undefined8 *)(this + 0x170) = 0;
  if (*(long **)(this + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x178) + 8))();
  }
  *(undefined8 *)(this + 0x178) = 0;
  if (*(long **)(this + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x180) + 8))();
  }
  *(undefined8 *)(this + 0x180) = 0;
  if (*(long **)(this + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x188) + 8))();
  }
  this_00 = *(Relations **)(this + 0x138);
  *(undefined8 *)(this + 0x188) = 0;
  if (this_00 != (Relations *)0x0) {
    Relations::~Relations(this_00);
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0x138) = 0;
  if (*(void **)(this + 0x1b0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1b0));
  }
  *(undefined8 *)(this + 0x1b0) = 0;
  if (*(long *)(this + 0x1d0) != 0) {
    WeakPtr::markDisposed(this);
  }
  cocos2d::Value::~Value((Value *)(this + 0x198));
  if (((byte)this[0x108] & 1) == 0) {
    GVar1 = this[0x60];
  }
  else {
    operator_delete(*(void **)(this + 0x118));
    GVar1 = this[0x60];
  }
  if (((byte)GVar1 & 1) == 0) {
                    /* try { // try from 00a834a4 to 00b834f3 has its CatchHandler @ 00a834a4
                       catch() { ... } // from try @ 00a834a4 with catch @ 00a834a4
                       catch() { ... } // from try @ 00a8352c with catch @ 00a834a4
                       catch() { ... } // from try @ 00a83570 with catch @ 00a834a4 */
    GVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x70));
    GVar1 = this[0x48];
  }
  if (((byte)GVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  UIEventDispatcher::~UIEventDispatcher((UIEventDispatcher *)this);
  return;
}

