
/* dragonBones::Slot::init(dragonBones::SlotData const*, dragonBones::Armature*, void*, void*) */

void __thiscall
dragonBones::Slot::init(Slot *this,SlotData *param_1,Armature *param_2,void *param_3,void *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(long *)(this + 200) != 0) {
    return;
  }
  *(undefined2 *)(this + 0xfa) = 0x101;
  *(SlotData **)(this + 200) = param_1;
  this[0x90] = (Slot)0x1;
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x18);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  uVar3 = *puVar2;
  *(undefined8 *)(this + 0xac) = puVar2[1];
  *(undefined8 *)(this + 0xa4) = uVar3;
  uVar4 = puVar2[3];
  uVar3 = puVar2[2];
  *(void **)(this + 0xe0) = param_3;
  *(void **)(this + 0xe8) = param_4;
  *(Armature **)(this + 0x68) = param_2;
  *(undefined8 *)(this + 0xbc) = uVar4;
  *(undefined8 *)(this + 0xb4) = uVar3;
  lVar1 = Armature::getBone(param_2,(basic_string *)(*(long *)(param_1 + 0x48) + 0x18));
  if (lVar1 != 0) {
    *(long *)(this + 0x180) = lVar1;
  }
  Armature::_addSlot(*(Armature **)(this + 0x68),this);
  (**(code **)(*(long *)this + 0x20))(this,*(undefined8 *)(this + 0xe0),0);
  if (*(long *)(this + 0xe0) != *(long *)(this + 0xe8)) {
    (**(code **)(*(long *)this + 0x20))(this,*(long *)(this + 0xe8),0);
  }
  (**(code **)(*(long *)this + 0x30))(this);
                    /* WARNING: Could not recover jumptable at 0x00d80038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x38))(this);
  return;
}

