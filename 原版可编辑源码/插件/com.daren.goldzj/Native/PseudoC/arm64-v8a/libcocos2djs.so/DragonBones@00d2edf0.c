
/* dragonBones::DragonBones::DragonBones(dragonBones::IEventDispatcher*) */

void __thiscall dragonBones::DragonBones::DragonBones(DragonBones *this,IEventDispatcher *param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__DragonBones_01c909c8;
  *(DragonBones **)(this + 8) = this + 0x10;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  puVar1 = operator_new(0x38);
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  *puVar1 = &PTR__WorldClock_01c906b0;
  puVar1[1] = 0x3f80000000000000;
  *(undefined8 **)(this + 0x38) = puVar1;
  *(IEventDispatcher **)(this + 0x40) = param_1;
  return;
}

