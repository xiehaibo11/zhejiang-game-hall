
/* dtNavMeshQuery::init(dtNavMesh const*, int) */

undefined4 __thiscall dtNavMeshQuery::init(dtNavMeshQuery *this,dtNavMesh *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  dtNodePool *pdVar3;
  dtNodeQueue *pdVar4;
  dtNavMeshQuery *pdVar5;
  
  *(dtNavMesh **)this = param_1;
  pdVar5 = this + 0x58;
  pdVar3 = *(dtNodePool **)pdVar5;
  if (pdVar3 != (dtNodePool *)0x0) {
    if (param_2 <= *(int *)(pdVar3 + 0x18)) {
      dtNodePool::clear(pdVar3);
      pdVar3 = *(dtNodePool **)(this + 0x50);
      goto joined_r0x01188b30;
    }
    dtNodePool::~dtNodePool(pdVar3);
    dtFree(*(void **)pdVar5);
    *(undefined8 *)pdVar5 = 0;
  }
  pdVar3 = (dtNodePool *)dtAlloc(0x28,0);
  iVar1 = param_2 + 3;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  uVar2 = (iVar1 >> 2) - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  dtNodePool::dtNodePool(pdVar3,param_2,(uVar2 | uVar2 >> 0x10) + 1);
  *(dtNodePool **)pdVar5 = pdVar3;
  if (pdVar3 == (dtNodePool *)0x0) {
    return 0x80000004;
  }
  pdVar3 = *(dtNodePool **)(this + 0x50);
joined_r0x01188b30:
  if (pdVar3 == (dtNodePool *)0x0) {
    pdVar3 = (dtNodePool *)dtAlloc(0x28,0);
    dtNodePool::dtNodePool(pdVar3,0x40,0x20);
    *(dtNodePool **)(this + 0x50) = pdVar3;
    if (pdVar3 == (dtNodePool *)0x0) {
      return 0x80000004;
    }
    pdVar4 = *(dtNodeQueue **)(this + 0x60);
  }
  else {
    dtNodePool::clear(pdVar3);
    pdVar4 = *(dtNodeQueue **)(this + 0x60);
  }
  if (pdVar4 != (dtNodeQueue *)0x0) {
    if (param_2 <= *(int *)(pdVar4 + 8)) {
      *(undefined4 *)(pdVar4 + 0xc) = 0;
      return 0x40000000;
    }
    dtNodeQueue::~dtNodeQueue(pdVar4);
    dtFree(*(void **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
  }
  pdVar4 = (dtNodeQueue *)dtAlloc(0x10,0);
  dtNodeQueue::dtNodeQueue(pdVar4,param_2);
  *(dtNodeQueue **)(this + 0x60) = pdVar4;
  if (pdVar4 == (dtNodeQueue *)0x0) {
    return 0x80000004;
  }
  return 0x40000000;
}

