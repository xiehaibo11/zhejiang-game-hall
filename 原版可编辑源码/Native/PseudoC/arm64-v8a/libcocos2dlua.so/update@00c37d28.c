
/* cocostudio::Armature::update(float) */

void __thiscall cocostudio::Armature::update(Armature *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  (**(code **)(**(long **)(this + 0x378) + 0x30))();
  puVar2 = *(undefined8 **)(this + 0x350);
  for (puVar1 = *(undefined8 **)(this + 0x348); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(long *)*puVar1 + 0x3d8))(CONCAT44(in_register_00005004,param_1));
  }
  this[0x31c] = (Armature)0x0;
  return;
}

