
/* cocostudio::ActionObject::updateToFrameByTime(float) */

void __thiscall cocostudio::ActionObject::updateToFrameByTime(ActionObject *this,float param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 in_register_00005004;
  
  puVar2 = *(undefined8 **)(this + 0x28);
  puVar1 = *(undefined8 **)(this + 0x30);
  *(float *)(this + 0x60) = param_1;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(long *)*puVar2 + 0x10))(CONCAT44(in_register_00005004,param_1));
  }
  return;
}

