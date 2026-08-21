
/* btCollisionDispatcher::btCollisionDispatcher(btCollisionConfiguration*) */

void __thiscall
btCollisionDispatcher::btCollisionDispatcher
          (btCollisionDispatcher *this,btCollisionConfiguration *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  btCollisionDispatcher *pbVar5;
  
  *(undefined4 *)(this + 8) = 2;
  this[0x28] = (btCollisionDispatcher)0x1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x14) = 0;
  *(undefined ***)this = &PTR__btCollisionDispatcher_01731940;
  *(btCollisionConfiguration **)(this + 0x28f8) = param_1;
  *(undefined ***)(this + 0x30) = &PTR__Result_017323d0;
  *(code **)(this + 0x60) = defaultNearCallback;
  uVar2 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  *(undefined8 *)(this + 0x68) = uVar2;
  uVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  pbVar5 = this + 0x78;
  *(undefined8 *)(this + 0x70) = uVar2;
  uVar3 = 0;
  do {
    uVar4 = 0;
    do {
      uVar2 = (**(code **)(**(long **)(this + 0x28f8) + 0x20))
                        (*(long **)(this + 0x28f8),uVar3 & 0xffffffff,uVar4 & 0xffffffff);
      *(undefined8 *)(pbVar5 + uVar4 * 8) = uVar2;
      bVar1 = (long)uVar4 < 0x23;
      uVar4 = uVar4 + 1;
    } while (bVar1);
    pbVar5 = pbVar5 + 0x120;
    bVar1 = (long)uVar3 < 0x23;
    uVar3 = uVar3 + 1;
  } while (bVar1);
  return;
}

