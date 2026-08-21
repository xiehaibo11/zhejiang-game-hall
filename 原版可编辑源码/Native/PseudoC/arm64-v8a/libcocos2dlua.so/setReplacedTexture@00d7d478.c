
/* dragonBones::Armature::setReplacedTexture(void*) */

void __thiscall dragonBones::Armature::setReplacedTexture(Armature *this,void *param_1)

{
  undefined8 *puVar1;
  Slot *this_00;
  undefined8 *puVar2;
  
  if (*(void **)(this + 200) != param_1) {
    if (*(BaseObject **)(this + 0x38) != (BaseObject *)0x0) {
      BaseObject::returnToPool(*(BaseObject **)(this + 0x38));
      *(undefined8 *)(this + 0x38) = 0;
    }
    puVar2 = *(undefined8 **)(this + 0x78);
    puVar1 = *(undefined8 **)(this + 0x80);
    *(void **)(this + 200) = param_1;
    for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
      this_00 = (Slot *)*puVar2;
      this_00[0xf8] = (Slot)0x1;
      this_00[0xfc] = (Slot)0x1;
      Slot::update(this_00,-1);
    }
  }
  return;
}

