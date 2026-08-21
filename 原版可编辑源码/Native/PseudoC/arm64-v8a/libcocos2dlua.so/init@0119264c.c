
/* dtObstacleAvoidanceQuery::init(int, int) */

undefined8 __thiscall
dtObstacleAvoidanceQuery::init(dtObstacleAvoidanceQuery *this,int param_1,int param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  *(int *)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x38) = 0;
  pvVar1 = (void *)dtAlloc(param_1 << 6,0);
  *(void **)(this + 0x30) = pvVar1;
  uVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,(long)*(int *)(this + 0x28) << 6);
    *(int *)(this + 0x3c) = param_2;
    *(undefined4 *)(this + 0x48) = 0;
    pvVar1 = (void *)dtAlloc(param_2 * 0x1c,0);
    *(void **)(this + 0x40) = pvVar1;
    uVar2 = 0;
    if (pvVar1 != (void *)0x0) {
      memset(pvVar1,0,(long)*(int *)(this + 0x3c) * 0x1c);
      uVar2 = 1;
    }
  }
  return uVar2;
}

