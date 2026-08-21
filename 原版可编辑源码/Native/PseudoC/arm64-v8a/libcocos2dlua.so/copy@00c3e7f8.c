
/* cocostudio::BaseData::copy(cocostudio::BaseData const*) */

void __thiscall cocostudio::BaseData::copy(BaseData *this,BaseData *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  uVar1 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x2c) = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  this[0x44] = param_1[0x44];
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar1;
  return;
}

