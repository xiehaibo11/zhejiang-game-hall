
/* btCollisionDispatcher::needsCollision(btCollisionObject const*, btCollisionObject const*) */

undefined8 __thiscall
btCollisionDispatcher::needsCollision
          (btCollisionDispatcher *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  ulong uVar1;
  
  if ((*(int *)(param_1 + 0xec) == 5) || (*(int *)(param_1 + 0xec) == 2)) {
    if ((*(int *)(param_2 + 0xec) == 2) || (*(int *)(param_2 + 0xec) == 5)) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    uVar1 = (*(code *)**(undefined8 **)param_1)(param_1,param_2);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

