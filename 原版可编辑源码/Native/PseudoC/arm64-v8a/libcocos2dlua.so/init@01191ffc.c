
/* dtObstacleAvoidanceDebugData::init(int) */

bool __thiscall dtObstacleAvoidanceDebugData::init(dtObstacleAvoidanceDebugData *this,int param_1)

{
  bool bVar1;
  long lVar2;
  
  *(int *)(this + 4) = param_1;
  lVar2 = dtAlloc(param_1 * 0xc,0);
  *(long *)(this + 8) = lVar2;
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = dtAlloc(*(int *)(this + 4) << 2,0);
    *(long *)(this + 0x18) = lVar2;
    bVar1 = false;
    if (lVar2 != 0) {
      lVar2 = dtAlloc(*(int *)(this + 4) << 2,0);
      *(long *)(this + 0x10) = lVar2;
      bVar1 = false;
      if (lVar2 != 0) {
        lVar2 = dtAlloc(*(int *)(this + 4) << 2,0);
        *(long *)(this + 0x20) = lVar2;
        bVar1 = false;
        if (lVar2 != 0) {
          lVar2 = dtAlloc(*(int *)(this + 4) << 2,0);
          *(long *)(this + 0x28) = lVar2;
          bVar1 = false;
          if (lVar2 != 0) {
            lVar2 = dtAlloc(*(int *)(this + 4) << 2,0);
            *(long *)(this + 0x30) = lVar2;
            bVar1 = false;
            if (lVar2 != 0) {
              lVar2 = dtAlloc(*(int *)(this + 4) << 2,0);
              bVar1 = lVar2 != 0;
              *(long *)(this + 0x38) = lVar2;
            }
          }
        }
      }
    }
  }
  return bVar1;
}

