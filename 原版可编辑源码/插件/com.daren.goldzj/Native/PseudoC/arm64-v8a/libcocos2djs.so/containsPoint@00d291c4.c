
/* dragonBones::Armature::containsPoint(float, float) const */

Slot * __thiscall dragonBones::Armature::containsPoint(Armature *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  Slot *this_00;
  
  puVar1 = *(undefined8 **)(this + 0x80);
  puVar2 = *(undefined8 **)(this + 0x78);
  do {
    if (puVar2 == puVar1) {
      return (Slot *)0x0;
    }
    this_00 = (Slot *)*puVar2;
    uVar3 = Slot::containsPoint(this_00,param_1,param_2);
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 1) == 0);
  return this_00;
}

