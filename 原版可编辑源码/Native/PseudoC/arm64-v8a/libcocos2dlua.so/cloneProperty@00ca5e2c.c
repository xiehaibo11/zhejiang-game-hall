
/* cocostudio::timeline::Frame::cloneProperty(cocostudio::timeline::Frame*) */

void __thiscall cocostudio::timeline::Frame::cloneProperty(Frame *this,Frame *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  *(undefined4 *)(this + 0x24) = uVar2;
  bVar1 = (**(code **)(*(long *)param_1 + 0x48))(param_1);
  this[0x28] = (Frame)(bVar1 & 1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x58))(param_1);
  *(undefined4 *)(this + 0x2c) = uVar2;
  uVar3 = (**(code **)(*(long *)param_1 + 0x68))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00ca5ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x60))(this,uVar3);
  return;
}

