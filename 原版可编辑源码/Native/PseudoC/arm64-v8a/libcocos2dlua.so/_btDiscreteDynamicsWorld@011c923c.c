
/* btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld() */

void __thiscall btDiscreteDynamicsWorld::~btDiscreteDynamicsWorld(btDiscreteDynamicsWorld *this)

{
  *(undefined ***)this = &PTR__btDiscreteDynamicsWorld_0172d970;
  if (this[0x178] != (btDiscreteDynamicsWorld)0x0) {
    (**(code **)**(undefined8 **)(this + 0x118))();
    btAlignedFreeInternal(*(void **)(this + 0x118));
  }
  if (*(undefined8 **)(this + 0x108) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(this + 0x108))();
    btAlignedFreeInternal(*(void **)(this + 0x108));
  }
  if (this[0x179] != (btDiscreteDynamicsWorld)0x0) {
    (**(code **)**(undefined8 **)(this + 0x110))();
    btAlignedFreeInternal(*(void **)(this + 0x110));
  }
  if (*(void **)(this + 0x1b8) != (void *)0x0) {
    if (this[0x1c0] != (btDiscreteDynamicsWorld)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x1b8));
    }
    *(undefined8 *)(this + 0x1b8) = 0;
  }
  *(undefined8 *)(this + 0x1b8) = 0;
  this[0x1c0] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x1ac) = 0;
  if (*(void **)(this + 400) != (void *)0x0) {
    if (this[0x198] != (btDiscreteDynamicsWorld)0x0) {
      btAlignedFreeInternal(*(void **)(this + 400));
    }
    *(undefined8 *)(this + 400) = 0;
  }
  this[0x198] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x184) = 0;
  if (*(void **)(this + 0x150) != (void *)0x0) {
    if (this[0x158] != (btDiscreteDynamicsWorld)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x150));
    }
    *(undefined8 *)(this + 0x150) = 0;
  }
  *(undefined8 *)(this + 0x150) = 0;
  this[0x158] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x144) = 0;
  if (*(void **)(this + 0x130) != (void *)0x0) {
    if (this[0x138] != (btDiscreteDynamicsWorld)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x130));
    }
    *(undefined8 *)(this + 0x130) = 0;
  }
  this[0x138] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x124) = 0;
  if (*(void **)(this + 0xf8) != (void *)0x0) {
    if (this[0x100] != (btDiscreteDynamicsWorld)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0xf8));
    }
    *(undefined8 *)(this + 0xf8) = 0;
  }
  *(undefined8 *)(this + 0xf8) = 0;
  this[0x100] = (btDiscreteDynamicsWorld)0x1;
  *(undefined8 *)(this + 0xec) = 0;
  btCollisionWorld::~btCollisionWorld((btCollisionWorld *)this);
  return;
}

