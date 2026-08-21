
/* btCapsuleShape::serialize(void*, btSerializer*) const */

char * __thiscall
btCapsuleShape::serialize(btCapsuleShape *this,void *param_1,btSerializer *param_2)

{
  btCollisionShape::serialize((btCollisionShape *)this,param_1,param_2);
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x10) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x18) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x38) = *(undefined4 *)(this + 0x40);
  return "btCapsuleShapeData";
}

