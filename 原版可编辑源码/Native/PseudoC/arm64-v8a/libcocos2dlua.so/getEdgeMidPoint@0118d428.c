
/* dtNavMeshQuery::getEdgeMidPoint(unsigned int, unsigned int, float*) const */

void __thiscall
dtNavMeshQuery::getEdgeMidPoint(dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uchar auStack_50 [4];
  uchar auStack_4c [4];
  float local_48 [2];
  float local_40;
  float local_38 [2];
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = getPortalPoints(this,param_1,param_2,local_38,local_48,auStack_4c,auStack_50);
  if (iVar2 < 0) {
    uVar3 = 0x80000008;
  }
  else {
    uVar3 = 0x40000000;
    *(ulong *)param_3 =
         CONCAT44((local_38[1] + local_48[1]) * 0.5,(local_38[0] + local_48[0]) * 0.5);
    param_3[2] = (local_30 + local_40) * 0.5;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

