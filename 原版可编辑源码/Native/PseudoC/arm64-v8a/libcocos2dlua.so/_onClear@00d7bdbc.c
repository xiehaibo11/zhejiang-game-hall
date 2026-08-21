
/* dragonBones::Armature::_onClear() */

void __thiscall dragonBones::Armature::_onClear(Armature *this)

{
  undefined8 *puVar1;
  BaseObject *this_00;
  undefined8 *puVar2;
  
  if (*(WorldClock **)(this + 0xc0) != (WorldClock *)0x0) {
    WorldClock::remove(*(WorldClock **)(this + 0xc0),
                       (IAnimatable *)(this + *(long *)(*(long *)this + -0x18)));
  }
  puVar1 = *(undefined8 **)(this + 0x68);
  for (puVar2 = *(undefined8 **)(this + 0x60); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar2);
  }
  puVar1 = *(undefined8 **)(this + 0x80);
  for (puVar2 = *(undefined8 **)(this + 0x78); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar2);
  }
  puVar1 = *(undefined8 **)(this + 0x48);
  for (puVar2 = *(undefined8 **)(this + 0x40); puVar2 != puVar1; puVar2 = puVar2 + 1) {
                    /* try { // try from 00d7be30 to 00e7bf13 has its CatchHandler @ 00d7be30
                       catch() { ... } // from try @ 00d7be30 with catch @ 00d7be30
                       catch() { ... } // from try @ 00d7cb64 with catch @ 00d7be30
                       catch() { ... } // from try @ 00d7d554 with catch @ 00d7be30
                       catch() { ... } // from try @ 00d7d7dc with catch @ 00d7be30 */
    BaseObject::returnToPool((BaseObject *)*puVar2);
  }
  puVar1 = *(undefined8 **)(this + 0x98);
  for (puVar2 = *(undefined8 **)(this + 0x90); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    BaseObject::returnToPool((BaseObject *)*puVar2);
  }
  this_00 = *(BaseObject **)(this + 0xa8);
  if (this_00 != (BaseObject *)0x0) {
    BaseObject::returnToPool(this_00);
  }
  if (*(long **)(this + 0xb0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xb0) + 0x38))();
  }
  if (*(BaseObject **)(this + 0x38) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x38));
  }
  this[0xd] = (Armature)0x1;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined2 *)(this + 0x5c) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  return;
}

