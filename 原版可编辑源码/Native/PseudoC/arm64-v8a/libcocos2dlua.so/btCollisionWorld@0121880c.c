
/* btCollisionWorld::btCollisionWorld(btDispatcher*, btBroadphaseInterface*,
   btCollisionConfiguration*) */

void __thiscall
btCollisionWorld::btCollisionWorld
          (btCollisionWorld *this,btDispatcher *param_1,btBroadphaseInterface *param_2,
          btCollisionConfiguration *param_3)

{
  *(undefined8 *)(this + 0x34) = 0x100000000;
  *(undefined4 *)(this + 0x3c) = 0x3f800000;
  *(undefined2 *)(this + 0x51) = 0x101;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0xc) = 0;
  *(btDispatcher **)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x50] = (btCollisionWorld)0x0;
  this[0x58] = (btCollisionWorld)0x0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(btBroadphaseInterface **)(this + 0x60) = param_2;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x20] = (btCollisionWorld)0x1;
  this[0x40] = (btCollisionWorld)0x1;
  *(undefined4 *)(this + 0x54) = 0x3d23d70a;
  *(undefined ***)this = &PTR__btCollisionWorld_01731a80;
  this[0x70] = (btCollisionWorld)0x1;
  return;
}

