
/* btDiscreteDynamicsWorld::clearForces() */

void __thiscall btDiscreteDynamicsWorld::clearForces(btDiscreteDynamicsWorld *this)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(this + 0x144)) {
    lVar1 = 0;
    do {
      lVar2 = *(long *)(*(long *)(this + 0x150) + lVar1 * 8);
      lVar1 = lVar1 + 1;
      *(undefined8 *)(lVar2 + 0x1d0) = 0;
      *(undefined8 *)(lVar2 + 0x1c8) = 0;
      *(undefined8 *)(lVar2 + 0x1c0) = 0;
      *(undefined8 *)(lVar2 + 0x1b8) = 0;
    } while (lVar1 < *(int *)(this + 0x144));
  }
  return;
}

