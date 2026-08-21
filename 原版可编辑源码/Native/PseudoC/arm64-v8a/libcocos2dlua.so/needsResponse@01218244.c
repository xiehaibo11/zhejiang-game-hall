
/* btCollisionDispatcher::needsResponse(btCollisionObject const*, btCollisionObject const*) */

bool __thiscall
btCollisionDispatcher::needsResponse
          (btCollisionDispatcher *this,btCollisionObject *param_1,btCollisionObject *param_2)

{
  if ((*(uint *)(param_1 + 0xe0) >> 2 & 1) != 0) {
    return false;
  }
  if ((*(uint *)(param_2 + 0xe0) >> 2 & 1) == 0) {
    if ((*(uint *)(param_1 + 0xe0) & 3) != 0) {
      return (*(uint *)(param_2 + 0xe0) & 3) == 0;
    }
    return true;
  }
  return false;
}

