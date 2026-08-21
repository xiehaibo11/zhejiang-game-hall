
void FUN_00a25394(long *param_1,int param_2)

{
  long *__buf;
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined4 uVar10;
  long lVar11;
  socklen_t local_15c;
  sockaddr local_158 [8];
  sockaddr local_d8 [8];
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x28);
  if (*(int *)((long)param_1 + 0xac) == 2) goto LAB_00a25474;
  lVar9 = *param_1;
  if ((*(char *)((long)param_1 + 0x3ba) == '\0') && (*(char *)((long)param_1 + 0x3d6) == '\0')) {
    local_15c = 0x80;
    iVar2 = getpeername(param_2,local_d8,&local_15c);
    if (iVar2 == 0) {
      local_15c = 0x80;
      memset(local_158,0,0x80);
      iVar2 = getsockname(param_2,local_158,&local_15c);
      if (iVar2 == 0) {
        __buf = (long *)((long)param_1 + 0x1aa);
        if (local_d8[0].sa_family == 1) {
          FUN_00a241ac(__buf,0x2e,"%s",(ulong)local_d8 | 2);
          uVar8 = 0;
LAB_00a255a0:
          param_1[0x3b] = uVar8;
          *(long *)((long)param_1 + 0x9e) = param_1[0x3a];
          *(long *)((long)param_1 + 0x96) = param_1[0x39];
          param_1[0x12] = *(long *)((long)param_1 + 0x1c2);
          param_1[0x11] = *(long *)((long)param_1 + 0x1ba);
          param_1[0x10] = *(long *)((long)param_1 + 0x1b2);
          param_1[0xf] = *__buf;
          if (local_158[0].sa_family == 1) {
            FUN_00a241ac(param_1 + 0x3c,0x2e,"%s",(ulong)local_158 | 2);
            uVar8 = 0;
LAB_00a2565c:
            lVar9 = *param_1;
            param_1[0x42] = uVar8;
            goto LAB_00a253e8;
          }
          if (local_158[0].sa_family == 10) {
            pcVar5 = local_158[0].sa_data + 6;
LAB_00a25644:
            pcVar5 = inet_ntop((uint)local_158[0].sa_family,pcVar5,(char *)(param_1 + 0x3c),0x2e);
            if (pcVar5 != (char *)0x0) {
              uVar8 = (ulong)((uint)((ushort)local_158[0].sa_data._0_2_ >> 8) |
                             ((ushort)local_158[0].sa_data._0_2_ & 0xff00ff) << 8);
              goto LAB_00a2565c;
            }
          }
          else if (local_158[0].sa_family == 2) {
            pcVar5 = (char *)((ulong)local_158 | 4);
            goto LAB_00a25644;
          }
          *(undefined1 *)(param_1 + 0x3c) = 0;
          param_1[0x42] = 0;
          puVar3 = (undefined4 *)__errno();
          uVar10 = *puVar3;
          uVar4 = FUN_00a2afbc(param_1,uVar10);
          pcVar5 = "ssloc inet_ntop() failed with errno %d: %s";
        }
        else {
          if (local_d8[0].sa_family == 10) {
            pcVar5 = local_d8[0].sa_data + 6;
LAB_00a25584:
            pcVar5 = inet_ntop((uint)local_d8[0].sa_family,pcVar5,(char *)__buf,0x2e);
            if (pcVar5 != (char *)0x0) {
              uVar8 = (ulong)((uint)((ushort)local_d8[0].sa_data._0_2_ >> 8) |
                             ((ushort)local_d8[0].sa_data._0_2_ & 0xff00ff) << 8);
              goto LAB_00a255a0;
            }
          }
          else if (local_d8[0].sa_family == 2) {
            pcVar5 = (char *)((ulong)local_d8 | 4);
            goto LAB_00a25584;
          }
          *(undefined1 *)((long)param_1 + 0x1aa) = 0;
          param_1[0x3b] = 0;
          puVar3 = (undefined4 *)__errno();
          uVar10 = *puVar3;
          uVar4 = FUN_00a2afbc(param_1,uVar10);
          pcVar5 = "ssrem inet_ntop() failed with errno %d: %s";
        }
      }
      else {
        puVar3 = (undefined4 *)__errno();
        uVar10 = *puVar3;
        uVar4 = FUN_00a2afbc(param_1,uVar10);
        pcVar5 = "getsockname() failed with errno %d: %s";
      }
    }
    else {
      puVar3 = (undefined4 *)__errno();
      uVar10 = *puVar3;
      uVar4 = FUN_00a2afbc(param_1,uVar10);
      pcVar5 = "getpeername() failed with errno %d: %s";
    }
    FUN_00a38a08(lVar9,pcVar5,uVar10,uVar4);
  }
  else {
LAB_00a253e8:
    lVar11 = param_1[0x39];
    *(long *)(lVar9 + 0x8de6) = param_1[0x3a];
    *(long *)(lVar9 + 0x8dde) = lVar11;
    uVar4 = *(undefined8 *)((long)param_1 + 0x1ba);
    *(undefined8 *)(lVar9 + 0x8dd8) = *(undefined8 *)((long)param_1 + 0x1c2);
    *(undefined8 *)(lVar9 + 0x8dd0) = uVar4;
    uVar4 = *(undefined8 *)((long)param_1 + 0x1aa);
    *(undefined8 *)(lVar9 + 0x8dc8) = *(undefined8 *)((long)param_1 + 0x1b2);
    *(undefined8 *)(lVar9 + 0x8dc0) = uVar4;
    lVar9 = *param_1;
    uVar4 = *(undefined8 *)((long)param_1 + 0x1fe);
    *(undefined8 *)(lVar9 + 0x8e1e) = *(undefined8 *)((long)param_1 + 0x206);
    *(undefined8 *)(lVar9 + 0x8e16) = uVar4;
    lVar11 = param_1[0x3e];
    *(long *)(lVar9 + 0x8e10) = param_1[0x3f];
    *(long *)(lVar9 + 0x8e08) = lVar11;
    lVar11 = param_1[0x3c];
    *(long *)(lVar9 + 0x8e00) = param_1[0x3d];
    *(long *)(lVar9 + 0x8df8) = lVar11;
    puVar7 = (undefined8 *)param_1[0x80];
    lVar9 = *param_1;
    *(undefined8 *)(lVar9 + 0x8e30) = *puVar7;
    *(undefined4 *)(lVar9 + 0x8e38) = *(undefined4 *)(puVar7 + 0xf);
    *(long *)(lVar9 + 0x8df0) = param_1[0x3b];
    *(long *)(lVar9 + 0x8e28) = param_1[0x42];
  }
LAB_00a25474:
  if (*(long *)(lVar1 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

