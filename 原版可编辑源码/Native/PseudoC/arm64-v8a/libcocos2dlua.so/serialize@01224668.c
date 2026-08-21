
/* btCollisionShape::serialize(void*, btSerializer*) const */

char * __thiscall
btCollisionShape::serialize(btCollisionShape *this,void *param_1,btSerializer *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar1);
  *(long *)param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar1);
  }
  *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)(this + 8);
  return "btCollisionShapeData";
}

