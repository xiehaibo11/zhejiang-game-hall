
/* btCollisionObject::serialize(void*, btSerializer*) const */

char * __thiscall
btCollisionObject::serialize(btCollisionObject *this,void *param_1,btSerializer *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *(undefined4 *)((long)param_1 + 0x20) = *(undefined4 *)(this + 8);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)((long)param_1 + 0x28) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(this + 0x14);
  *(undefined4 *)((long)param_1 + 0x30) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)((long)param_1 + 0x38) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)((long)param_1 + 0x3c) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)((long)param_1 + 0x40) = *(undefined4 *)(this + 0x28);
  *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)((long)param_1 + 0x48) = *(undefined4 *)(this + 0x30);
  *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)((long)param_1 + 0x50) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)((long)param_1 + 0x58) = *(undefined4 *)(this + 0x40);
  *(undefined4 *)((long)param_1 + 0x5c) = *(undefined4 *)(this + 0x44);
  *(undefined4 *)((long)param_1 + 0x60) = *(undefined4 *)(this + 0x48);
  *(undefined4 *)((long)param_1 + 100) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)((long)param_1 + 0x68) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)((long)param_1 + 0x70) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)((long)param_1 + 0x74) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)((long)param_1 + 0x78) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)((long)param_1 + 0x7c) = *(undefined4 *)(this + 100);
  *(undefined4 *)((long)param_1 + 0x80) = *(undefined4 *)(this + 0x68);
  *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)(this + 0x6c);
  *(undefined4 *)((long)param_1 + 0x88) = *(undefined4 *)(this + 0x70);
  *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)(this + 0x74);
  *(undefined4 *)((long)param_1 + 0x90) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)((long)param_1 + 0x94) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)((long)param_1 + 0x98) = *(undefined4 *)(this + 0x80);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(this + 0x84);
  *(undefined4 *)((long)param_1 + 0xa0) = *(undefined4 *)(this + 0x88);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(this + 0x8c);
  *(undefined4 *)((long)param_1 + 0xa8) = *(undefined4 *)(this + 0x90);
  *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)(this + 0x94);
  *(undefined4 *)((long)param_1 + 0xb0) = *(undefined4 *)(this + 0x98);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(this + 0x9c);
  *(undefined4 *)((long)param_1 + 0xb8) = *(undefined4 *)(this + 0xa0);
  *(undefined4 *)((long)param_1 + 0xbc) = *(undefined4 *)(this + 0xa4);
  *(undefined4 *)((long)param_1 + 0xc0) = *(undefined4 *)(this + 0xa8);
  *(undefined4 *)((long)param_1 + 0xc4) = *(undefined4 *)(this + 0xac);
  *(undefined4 *)((long)param_1 + 200) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)(this + 0xb4);
  *(undefined4 *)((long)param_1 + 0xf0) = *(undefined4 *)(this + 0xb8);
  uVar1 = *(undefined4 *)(this + 0xbc);
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xd0) = uVar1;
  uVar2 = (**(code **)(*(long *)param_2 + 0x38))(param_2,*(undefined8 *)(this + 200));
  *(undefined8 *)((long)param_1 + 8) = uVar2;
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  uVar2 = *(undefined8 *)(this + 0xe0);
  *(undefined8 *)((long)param_1 + 0xfc) = *(undefined8 *)(this + 0xe8);
  *(undefined8 *)((long)param_1 + 0xf4) = uVar2;
  *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)((long)param_1 + 0xd8) = *(undefined4 *)(this + 0xf4);
  *(undefined4 *)((long)param_1 + 0xdc) = *(undefined4 *)(this + 0xfc);
  *(undefined4 *)((long)param_1 + 0xe0) = *(undefined4 *)(this + 0xf8);
  *(undefined4 *)((long)param_1 + 0x104) = *(undefined4 *)(this + 0x100);
  uVar2 = (**(code **)(*(long *)param_2 + 0x50))(param_2,this);
  lVar3 = (**(code **)(*(long *)param_2 + 0x38))(param_2,uVar2);
  *(long *)((long)param_1 + 0x18) = lVar3;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_2 + 0x60))(param_2,uVar2);
  }
  *(undefined4 *)((long)param_1 + 0xe4) = *(undefined4 *)(this + 0x110);
  *(undefined4 *)((long)param_1 + 0xe8) = *(undefined4 *)(this + 0x114);
  *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)(this + 0x118);
  *(undefined4 *)((long)param_1 + 0x108) = *(undefined4 *)(this + 0x11c);
  return "btCollisionObjectFloatData";
}

