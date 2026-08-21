
/* btCompoundShape::updateChildTransform(int, btTransform const&, bool) */

void __thiscall
btCompoundShape::updateChildTransform
          (btCompoundShape *this,int param_1,btTransform *param_2,bool param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)param_2;
  puVar2 = (undefined8 *)(*(long *)(this + 0x28) + (long)param_1 * 0x58);
  puVar2[1] = *(undefined8 *)(param_2 + 8);
  *puVar2 = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar2[3] = *(undefined8 *)(param_2 + 0x18);
  puVar2[2] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  puVar2[5] = *(undefined8 *)(param_2 + 0x28);
  puVar2[4] = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  puVar2[7] = *(undefined8 *)(param_2 + 0x38);
  puVar2[6] = uVar3;
  if (*(long *)(this + 0x58) != 0) {
    plVar1 = *(long **)(*(long *)(this + 0x28) + (long)param_1 * 0x58 + 0x40);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&uStack_40,&local_50);
    uStack_68 = uStack_38;
    local_70 = uStack_40;
    uStack_58 = uStack_48;
    uStack_60 = local_50;
    btDbvt::update(*(btDbvt **)(this + 0x58),
                   *(btDbvtNode **)(*(long *)(this + 0x28) + (long)param_1 * 0x58 + 0x50),
                   (btDbvtAabbMm *)&local_70);
  }
  if (param_3) {
    (**(code **)(*(long *)this + 0x88))(this);
  }
  return;
}

