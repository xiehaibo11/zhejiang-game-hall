
/* dtNavMeshQuery::isInClosedList(unsigned int) const */

void __thiscall dtNavMeshQuery::isInClosedList(dtNavMeshQuery *this,uint param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  dtNode **ppdVar5;
  dtNode *local_48 [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar3 = 0;
  if (*(dtNodePool **)(this + 0x58) != (dtNodePool *)0x0) {
    uVar2 = dtNodePool::findNodes(*(dtNodePool **)(this + 0x58),param_1,local_48,4);
    if (0 < (int)uVar2) {
      uVar4 = (ulong)uVar2;
      ppdVar5 = local_48;
      do {
        if (((byte)(*ppdVar5)[0x17] >> 3 & 1) != 0) {
          uVar3 = 1;
          goto LAB_0118f11c;
        }
        uVar4 = uVar4 - 1;
        ppdVar5 = ppdVar5 + 1;
      } while (uVar4 != 0);
    }
    uVar3 = 0;
  }
LAB_0118f11c:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

