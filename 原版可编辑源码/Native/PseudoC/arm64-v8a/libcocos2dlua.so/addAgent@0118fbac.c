
/* dtCrowd::addAgent(float const*, dtCrowdAgentParams const*) */

ulong __thiscall dtCrowd::addAgent(dtCrowd *this,float *param_1,dtCrowdAgentParams *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_4c;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = *(int *)this;
  if (0 < iVar2) {
    pcVar4 = *(char **)(this + 8);
    uVar3 = 0;
    do {
      if (*pcVar4 == '\0') {
        if ((int)uVar3 < iVar2) {
          uVar6 = *(undefined8 *)(param_2 + 8);
          uVar5 = *(undefined8 *)param_2;
          uVar8 = *(undefined8 *)(param_2 + 0x18);
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(pcVar4 + 0x200) = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(pcVar4 + 0x1e8) = uVar6;
          *(undefined8 *)(pcVar4 + 0x1e0) = uVar5;
          *(undefined8 *)(pcVar4 + 0x1f8) = uVar8;
          *(undefined8 *)(pcVar4 + 0x1f0) = uVar7;
        }
        local_4c = 0;
        local_48 = *(undefined8 *)param_1;
        local_40 = param_1[2];
        iVar2 = dtNavMeshQuery::findNearestPoly
                          (*(dtNavMeshQuery **)(this + 0x13c8),param_1,(float *)(this + 0x374),
                           (dtQueryFilter *)(this + (ulong)(byte)pcVar4[0x1fe] * 0x104 + 0x380),
                           &local_4c,(float *)&local_48);
        if (iVar2 < 0) {
          local_48 = *(undefined8 *)param_1;
          local_40 = param_1[2];
          local_4c = 0;
        }
        dtPathCorridor::reset((dtPathCorridor *)(pcVar4 + 8),local_4c,(float *)&local_48);
        dtLocalBoundary::reset((dtLocalBoundary *)(pcVar4 + 0x30));
        pcVar4[2] = '\0';
        pcVar4[0x164] = '\0';
        pcVar4[0x165] = '\0';
        pcVar4[0x166] = '\0';
        pcVar4[0x167] = '\0';
        pcVar4[0x26c] = '\0';
        pcVar4[0x26d] = '\0';
        pcVar4[0x26e] = '\0';
        pcVar4[0x26f] = '\0';
        pcVar4[0x198] = '\0';
        pcVar4[0x199] = '\0';
        pcVar4[0x19a] = '\0';
        pcVar4[0x19b] = '\0';
        pcVar4[0x1c0] = '\0';
        pcVar4[0x1c1] = '\0';
        pcVar4[0x1c2] = '\0';
        pcVar4[0x1c3] = '\0';
        pcVar4[0x1c4] = '\0';
        pcVar4[0x1c5] = '\0';
        pcVar4[0x1c6] = '\0';
        pcVar4[0x1c7] = '\0';
        pcVar4[0x1b8] = '\0';
        pcVar4[0x1b9] = '\0';
        pcVar4[0x1ba] = '\0';
        pcVar4[0x1bb] = '\0';
        pcVar4[0x1bc] = '\0';
        pcVar4[0x1bd] = '\0';
        pcVar4[0x1be] = '\0';
        pcVar4[0x1bf] = '\0';
        pcVar4[0x1d0] = '\0';
        pcVar4[0x1d1] = '\0';
        pcVar4[0x1d2] = '\0';
        pcVar4[0x1d3] = '\0';
        pcVar4[0x1d4] = '\0';
        pcVar4[0x1d5] = '\0';
        pcVar4[0x1d6] = '\0';
        pcVar4[0x1d7] = '\0';
        pcVar4[0x1c8] = '\0';
        pcVar4[0x1c9] = '\0';
        pcVar4[0x1ca] = '\0';
        pcVar4[0x1cb] = '\0';
        pcVar4[0x1cc] = '\0';
        pcVar4[0x1cd] = '\0';
        pcVar4[0x1ce] = '\0';
        pcVar4[0x1cf] = '\0';
        pcVar4[0x1d8] = '\0';
        pcVar4[0x1d9] = '\0';
        pcVar4[0x1da] = '\0';
        pcVar4[0x1db] = '\0';
        *(float *)(pcVar4 + 0x1a0) = (float)local_48;
        *(undefined4 *)(pcVar4 + 0x1a4) = local_48._4_4_;
        pcVar4[0x19c] = '\0';
        pcVar4[0x19d] = '\0';
        pcVar4[0x19e] = '\0';
        pcVar4[0x19f] = '\0';
        *(float *)(pcVar4 + 0x1a8) = local_40;
        pcVar4[0x250] = '\0';
        pcVar4[1] = local_4c != 0;
        *pcVar4 = '\x01';
        goto LAB_0118fcf0;
      }
      uVar3 = uVar3 + 1;
      pcVar4 = pcVar4 + 0x270;
    } while ((long)uVar3 < (long)iVar2);
  }
  uVar3 = 0xffffffff;
LAB_0118fcf0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 0xffffffff;
}

