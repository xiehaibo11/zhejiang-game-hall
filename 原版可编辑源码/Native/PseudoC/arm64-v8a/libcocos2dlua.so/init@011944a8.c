
/* dtPathQueue::init(int, int, dtNavMesh*) */

undefined8 __thiscall
dtPathQueue::init(dtPathQueue *this,int param_1,int param_2,dtNavMesh *param_3)

{
  int iVar1;
  dtNavMeshQuery *this_00;
  long lVar2;
  undefined8 uVar3;
  
  purge(this);
  this_00 = (dtNavMeshQuery *)dtAllocNavMeshQuery();
  *(dtNavMeshQuery **)(this + 0x250) = this_00;
  uVar3 = 0;
  if (this_00 != (dtNavMeshQuery *)0x0) {
    iVar1 = dtNavMeshQuery::init(this_00,param_3,param_2);
    if (iVar1 < 0) {
      uVar3 = 0;
    }
    else {
      *(int *)(this + 0x244) = param_1;
      *(undefined4 *)this = 0;
      lVar2 = dtAlloc(param_1 << 2,0);
      *(long *)(this + 0x28) = lVar2;
      uVar3 = 0;
      if (lVar2 != 0) {
        *(undefined4 *)(this + 0x48) = 0;
        lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
        *(long *)(this + 0x70) = lVar2;
        uVar3 = 0;
        if (lVar2 != 0) {
          *(undefined4 *)(this + 0x90) = 0;
          lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
          *(long *)(this + 0xb8) = lVar2;
          uVar3 = 0;
          if (lVar2 != 0) {
            *(undefined4 *)(this + 0xd8) = 0;
            lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
            *(long *)(this + 0x100) = lVar2;
            uVar3 = 0;
            if (lVar2 != 0) {
              *(undefined4 *)(this + 0x120) = 0;
              lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
              *(long *)(this + 0x148) = lVar2;
              uVar3 = 0;
              if (lVar2 != 0) {
                *(undefined4 *)(this + 0x168) = 0;
                lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
                *(long *)(this + 400) = lVar2;
                uVar3 = 0;
                if (lVar2 != 0) {
                  *(undefined4 *)(this + 0x1b0) = 0;
                  lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
                  *(long *)(this + 0x1d8) = lVar2;
                  uVar3 = 0;
                  if (lVar2 != 0) {
                    *(undefined4 *)(this + 0x1f8) = 0;
                    lVar2 = dtAlloc(*(int *)(this + 0x244) << 2,0);
                    *(long *)(this + 0x220) = lVar2;
                    uVar3 = 0;
                    if (lVar2 != 0) {
                      uVar3 = 1;
                      *(undefined4 *)(this + 0x248) = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar3;
}

