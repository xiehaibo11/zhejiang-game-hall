
/* btHashMap<btHashPtr, btCollisionShape*>::~btHashMap() */

void __thiscall
btHashMap<btHashPtr,btCollisionShape*>::~btHashMap(btHashMap<btHashPtr,btCollisionShape*> *this)

{
  if (*(void **)(this + 0x70) != (void *)0x0) {
    if (this[0x78] != (btHashMap<btHashPtr,btCollisionShape*>)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x70));
    }
    *(undefined8 *)(this + 0x70) = 0;
  }
  this[0x78] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 100) = 0;
  if (*(void **)(this + 0x50) != (void *)0x0) {
    if (this[0x58] != (btHashMap<btHashPtr,btCollisionShape*>)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x50));
    }
    *(undefined8 *)(this + 0x50) = 0;
  }
  this[0x58] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x44) = 0;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    if (this[0x38] != (btHashMap<btHashPtr,btCollisionShape*>)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x30));
    }
    *(undefined8 *)(this + 0x30) = 0;
  }
  this[0x38] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x24) = 0;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    if (this[0x18] != (btHashMap<btHashPtr,btCollisionShape*>)0x0) {
      btAlignedFreeInternal(*(void **)(this + 0x10));
    }
    *(undefined8 *)(this + 0x10) = 0;
  }
  this[0x18] = (btHashMap<btHashPtr,btCollisionShape*>)0x1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 4) = 0;
  return;
}

