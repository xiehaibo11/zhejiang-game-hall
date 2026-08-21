
/* dtPathCorridor::findCorners(float*, unsigned char*, unsigned int*, int, dtNavMeshQuery*,
   dtQueryFilter const*) */

ulong dtPathCorridor::findCorners
                (float *param_1,uchar *param_2,uint *param_3,int param_4,dtNavMeshQuery *param_5,
                dtQueryFilter *param_6)

{
  byte *pbVar1;
  uint uVar2;
  long lVar3;
  uint *__dest;
  ulong uVar4;
  ulong uVar5;
  uint local_6c;
  long local_68;
  
  __dest = (uint *)(ulong)(uint)param_4;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_6c = 0;
  dtNavMeshQuery::findStraightPath
            ((dtNavMeshQuery *)param_6,param_1,param_1 + 3,*(uint **)(param_1 + 6),(int)param_1[8],
             (float *)param_2,(uchar *)param_3,__dest,(int *)&local_6c,(int)param_5,0);
  uVar5 = (ulong)local_6c;
  if (local_6c != 0) {
    do {
      if ((((byte)*param_3 >> 2 & 1) != 0) ||
         (0.0001 < (*param_1 - *(float *)param_2) * (*param_1 - *(float *)param_2) +
                   (param_1[2] - *(float *)(param_2 + 8)) * (param_1[2] - *(float *)(param_2 + 8))))
      break;
      uVar2 = (int)uVar5 - 1;
      uVar5 = (ulong)uVar2;
      local_6c = uVar2;
      if (uVar2 == 0) break;
      memmove(param_3,(void *)((long)param_3 + 1),(long)(int)uVar2);
      memmove(__dest,__dest + 1,-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2);
      memmove(param_2,param_2 + 0xc,((long)(int)uVar2 + (long)(int)uVar2 * 2) * 4);
    } while (uVar2 != 0);
  }
  uVar4 = 0;
  do {
    if ((long)(int)uVar5 <= (long)uVar4) goto LAB_0119395c;
    pbVar1 = (byte *)((long)param_3 + uVar4);
    uVar4 = uVar4 + 1;
  } while ((*pbVar1 >> 2 & 1) == 0);
  uVar5 = uVar4 & 0xffffffff;
  local_6c = (uint)uVar4;
LAB_0119395c:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

