
/* btPointCollector::addContactPoint(btVector3 const&, btVector3 const&, float) */

void __thiscall
btPointCollector::addContactPoint
          (btPointCollector *this,btVector3 *param_1,btVector3 *param_2,float param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 < *(float *)(this + 0x28)) {
    this[0x2c] = (btPointCollector)0x1;
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 8) = uVar1;
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)param_2;
    *(float *)(this + 0x28) = param_3;
    *(undefined8 *)(this + 0x20) = uVar2;
    *(undefined8 *)(this + 0x18) = uVar1;
  }
  return;
}

