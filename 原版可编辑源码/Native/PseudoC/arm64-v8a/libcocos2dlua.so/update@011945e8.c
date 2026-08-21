
/* dtPathQueue::update(int) */

void __thiscall dtPathQueue::update(dtPathQueue *this,int param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  dtPathQueue *pdVar6;
  long lVar7;
  int local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar5 = 8;
  iVar4 = *(int *)(this + 0x248);
  do {
    if (*(int *)(this + (long)(iVar4 % 8) * 0x48) != 0) {
      lVar7 = (long)(iVar4 % 8);
      pdVar6 = this + lVar7 * 0x48 + 0x34;
      uVar3 = *(uint *)pdVar6;
      if (uVar3 >> 0x1e == 0) {
        if (uVar3 == 0) {
          uVar3 = dtNavMeshQuery::initSlicedFindPath
                            (*(dtNavMeshQuery **)(this + 0x250),
                             *(uint *)(this + lVar7 * 0x48 + 0x1c),
                             *(uint *)(this + lVar7 * 0x48 + 0x20),
                             (float *)(this + lVar7 * 0x48 + 4),
                             (float *)(this + lVar7 * 0x48 + 0x10),
                             *(dtQueryFilter **)(this + lVar7 * 0x48 + 0x40),0);
          *(uint *)pdVar6 = uVar3;
        }
        if ((uVar3 >> 0x1d & 1) != 0) {
          local_5c = 0;
          uVar3 = dtNavMeshQuery::updateSlicedFindPath
                            (*(dtNavMeshQuery **)(this + 0x250),param_1,&local_5c);
          *(uint *)pdVar6 = uVar3;
          param_1 = param_1 - local_5c;
        }
        if ((uVar3 >> 0x1e & 1) != 0) {
          uVar3 = dtNavMeshQuery::finalizeSlicedFindPath
                            (*(dtNavMeshQuery **)(this + 0x250),
                             *(uint **)(this + lVar7 * 0x48 + 0x28),
                             (int *)(this + lVar7 * 0x48 + 0x30),*(int *)(this + 0x244));
          *(uint *)pdVar6 = uVar3;
        }
        if (param_1 < 1) break;
        iVar4 = *(int *)(this + 0x248);
      }
      else {
        iVar1 = *(int *)(this + lVar7 * 0x48 + 0x38);
        *(int *)(this + lVar7 * 0x48 + 0x38) = iVar1 + 1;
        if (1 < iVar1) {
          *(int *)(this + (long)(iVar4 % 8) * 0x48) = 0;
          *(uint *)pdVar6 = 0;
        }
      }
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + -1;
    *(int *)(this + 0x248) = iVar4;
  } while (iVar5 != 0);
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

