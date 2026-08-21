
/* btDiscreteDynamicsWorld::serialize(btSerializer*) */

void __thiscall
btDiscreteDynamicsWorld::serialize(btDiscreteDynamicsWorld *this,btSerializer *param_1)

{
  long lVar1;
  undefined8 *__s;
  undefined8 uVar2;
  
  (**(code **)(*(long *)param_1 + 0x40))(param_1);
  lVar1 = (**(code **)(*(long *)param_1 + 0x20))(param_1,0x68,1);
  __s = *(undefined8 **)(lVar1 + 8);
  memset(__s,0,0x68);
  *(undefined4 *)(__s + 0xb) = *(undefined4 *)(this + 0x160);
  *(undefined4 *)((long)__s + 0x5c) = *(undefined4 *)(this + 0x164);
  *(undefined4 *)(__s + 0xc) = *(undefined4 *)(this + 0x168);
  *(undefined4 *)((long)__s + 100) = *(undefined4 *)(this + 0x16c);
  uVar2 = *(undefined8 *)(this + 0x90);
  __s[1] = *(undefined8 *)(this + 0x98);
  *__s = uVar2;
  *(undefined4 *)(__s + 2) = *(undefined4 *)(this + 0xa0);
  uVar2 = *(undefined8 *)(this + 0xa8);
  *(undefined8 *)((long)__s + 0x1c) = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)((long)__s + 0x14) = uVar2;
  *(undefined4 *)((long)__s + 0x24) = *(undefined4 *)(this + 0xb8);
  *(undefined4 *)(__s + 5) = *(undefined4 *)(this + 0xc0);
  *(undefined4 *)((long)__s + 0x2c) = *(undefined4 *)(this + 0xc4);
  *(undefined4 *)(__s + 6) = *(undefined4 *)(this + 200);
  *(undefined4 *)((long)__s + 0x34) = *(undefined4 *)(this + 0xcc);
  *(undefined4 *)(__s + 7) = *(undefined4 *)(this + 0xdc);
  *(undefined4 *)((long)__s + 0x3c) = *(undefined4 *)(this + 0xe0);
  *(undefined4 *)(__s + 8) = *(undefined4 *)(this + 0xa4);
  *(undefined4 *)((long)__s + 0x44) = *(undefined4 *)(this + 0xd0);
  *(undefined4 *)(__s + 9) = *(undefined4 *)(this + 0xd4);
  *(undefined4 *)((long)__s + 0x4c) = *(undefined4 *)(this + 0xd8);
  *(undefined4 *)(__s + 10) = *(undefined4 *)(this + 0xbc);
  (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar1,"btDynamicsWorldFloatData",0x444c5744,__s);
  serializeRigidBodies(this,param_1);
  btCollisionWorld::serializeCollisionObjects((btCollisionWorld *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x011cd638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  return;
}

