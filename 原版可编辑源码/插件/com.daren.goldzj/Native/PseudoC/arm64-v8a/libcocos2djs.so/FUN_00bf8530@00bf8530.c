
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bf8530(uint param_1,ushort param_2)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  ssize_t sVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint *puVar11;
  uint *puVar12;
  size_t sVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 auStack_78 [16];
  iovec local_68;
  msghdr local_58;
  undefined4 local_20;
  undefined4 uStack_1c;
  ulong local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  _local_20 = CONCAT44((uint)param_2,0x11);
  _local_20 = CONCAT26(0x301,_local_20);
  local_10 = 0;
  local_18 = (ulong)param_1;
  local_58.msg_namelen = 0;
  local_58.msg_name = (undefined1 *)0x10;
  sVar7 = sendto(param_1,&local_20,0x11,0,(sockaddr *)&local_58,0xc);
  if ((int)sVar7 < 0) {
LAB_00bf864c:
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)0x0;
    puVar15 = (undefined8 *)0x0;
    do {
      puVar12 = (uint *)0x0;
      sVar13 = 0x1000;
      while( true ) {
        uv__free(puVar12);
        puVar12 = (uint *)uv__malloc(sVar13);
        puVar11 = puVar12;
        sVar3 = sVar13;
        if (puVar12 == (uint *)0x0) goto LAB_00bf8644;
        while( true ) {
          local_68.iov_len = sVar3;
          local_68.iov_base = puVar11;
          local_58.msg_namelen = 0xc;
          local_58.msg_iovlen = 1;
          local_58.msg_control = (void *)0x0;
          local_58.msg_controllen = 0;
          local_58.msg_flags = 0;
          local_58.msg_name = auStack_78;
          local_58.msg_iov = &local_68;
          uVar8 = recvmsg(param_1,&local_58,0);
          uVar1 = (uint)uVar8;
          if (-1 < (int)uVar1) break;
          piVar9 = (int *)__errno();
          puVar11 = local_68.iov_base;
          sVar3 = local_68.iov_len;
          if (*piVar9 != 4) goto LAB_00bf863c;
        }
        uVar6 = local_58.msg_flags & 0x20;
        if (((uint)local_58.msg_flags >> 5 & 1) == 0) break;
        sVar13 = sVar13 << 1;
      }
      uVar5 = getpid();
      if (0xf < (int)uVar1) {
        uVar6 = *puVar12;
        if ((uVar6 <= uVar1) && (0xf < uVar6)) {
          uVar8 = uVar8 & 0xffffffff;
          puVar11 = puVar12;
          while( true ) {
            if ((uVar5 == puVar11[3]) && (param_1 == puVar11[2])) {
              if ((short)puVar11[1] == 3) {
                uVar6 = 1;
                goto LAB_00bf8738;
              }
              if ((short)puVar11[1] == 2) goto LAB_00bf863c;
            }
            uVar6 = uVar6 + 3 & 0xfffffffc;
            uVar2 = (int)uVar8 - uVar6;
            if (uVar2 < 0x10) break;
            puVar11 = (uint *)((long)puVar11 + (ulong)uVar6);
            uVar8 = (ulong)uVar2;
            uVar6 = *puVar11;
            if ((uVar2 < uVar6) || (uVar6 < 0x10)) break;
          }
        }
        uVar6 = 0;
      }
LAB_00bf8738:
      puVar10 = (undefined8 *)uv__malloc(0x18);
      if (puVar10 == (undefined8 *)0x0) {
        FUN_00bf84f0(puVar14);
        puVar14 = puVar10;
        break;
      }
      *puVar10 = 0;
      puVar10[1] = puVar12;
      *(uint *)(puVar10 + 2) = uVar1;
      puVar4 = puVar10;
      if (puVar14 != (undefined8 *)0x0) {
        *puVar15 = puVar10;
        puVar4 = puVar14;
      }
      puVar14 = puVar4;
      puVar15 = puVar10;
    } while (uVar6 == 0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar14);
LAB_00bf863c:
  uv__free(puVar12);
LAB_00bf8644:
  FUN_00bf84f0(puVar14);
  goto LAB_00bf864c;
}

