
/* btTypedConstraint::serialize(void*, btSerializer*) const */

char * __thiscall
btTypedConstraint::serialize(btTypedConstraint *this,void *param_1,btSerializer *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x28));
  *(undefined8 *)param_1 = uVar1;
  uVar1 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 0x30));
  *(undefined8 *)((long)param_1 + 8) = uVar1;
  uVar1 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar1);
  *(long *)((long)param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar1);
  }
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 8);
  *(uint *)((long)param_1 + 0x24) = (uint)(byte)this[0x1d];
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x38) = *(undefined4 *)(this + 0x18);
  *(uint *)((long)param_1 + 0x3c) = (uint)(byte)this[0x1c];
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)((long)param_1 + 0x30) = 0;
  lVar2 = *(long *)(this + 0x28);
  if (0 < *(int *)(lVar2 + 0x20c)) {
    lVar3 = 0;
    do {
      if (*(btTypedConstraint **)(*(long *)(lVar2 + 0x218) + lVar3 * 8) == this) {
        *(undefined4 *)((long)param_1 + 0x30) = 1;
        lVar2 = *(long *)(this + 0x28);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar2 + 0x20c));
  }
  lVar2 = *(long *)(this + 0x30);
  if (0 < *(int *)(lVar2 + 0x20c)) {
    lVar3 = 0;
    do {
      if (*(btTypedConstraint **)(*(long *)(lVar2 + 0x218) + lVar3 * 8) == this) {
        *(undefined4 *)((long)param_1 + 0x30) = 1;
        lVar2 = *(long *)(this + 0x30);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(lVar2 + 0x20c));
  }
  return "btTypedConstraintFloatData";
}

