
/* WARNING: Removing unreachable block (ram,0x01838b18) */

void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,int *param_4)

{
  long lVar1;
  byte bVar2;
  size_t sVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  void *local_1380;
  ulong local_1378;
  size_t local_1370;
  undefined8 local_1368;
  byte *local_1360;
  byte *local_1358;
  undefined1 *local_1350;
  undefined1 *puStack_1348;
  undefined1 **local_1340;
  undefined1 auStack_1338 [256];
  undefined1 *local_1238;
  undefined1 *puStack_1230;
  undefined1 **local_1228;
  undefined1 auStack_1220 [256];
  undefined1 *local_1120;
  undefined1 *local_1118;
  undefined1 **local_1110;
  undefined1 auStack_1108 [64];
  undefined1 *local_10c8;
  undefined1 *local_10c0;
  undefined2 *local_10b8;
  undefined1 auStack_10b0 [32];
  undefined2 local_1090;
  undefined1 local_108e;
  long local_1080;
  undefined8 local_1078;
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    param_2 = (void *)0x0;
    if (param_4 != (int *)0x0) {
      *param_4 = -3;
    }
    goto LAB_01838ccc;
  }
  sVar3 = strlen((char *)param_1);
  local_1358 = param_1 + sVar3;
  local_1340 = &local_1238;
  local_1110 = &local_10c8;
  local_10b8 = &local_1090;
  local_1228 = &local_1120;
  local_1090 = 1;
  local_108e = 0;
  local_1078 = 0;
  local_1080 = 0;
  local_1368 = 0xffffffffffffffff;
  local_1350 = auStack_1338;
  puStack_1348 = auStack_1338;
  local_1238 = auStack_1220;
  puStack_1230 = auStack_1220;
  local_1120 = auStack_1108;
  local_1118 = auStack_1108;
  local_10c8 = auStack_10b0;
  local_10c0 = auStack_10b0;
  local_80 = &local_1080;
  if ((sVar3 < 2) || (*param_1 != 0x5f)) {
LAB_018389f0:
    local_1360 = param_1;
    plVar4 = (long *)FUN_01839ba0(&local_1360);
    if (local_1358 == local_1360) {
joined_r0x018388ac:
      if (plVar4 != (long *)0x0) goto LAB_01838a0c;
    }
LAB_01838c40:
    iVar7 = -2;
  }
  else {
    if (param_1[1] == 0x5a) {
      local_1360 = param_1 + 2;
      plVar4 = (long *)FUN_01838d94(&local_1360);
      plVar10 = local_80;
      pbVar13 = local_1358;
      pbVar11 = local_1360;
      if (plVar4 != (long *)0x0) {
        if (local_1358 != local_1360) {
          if (*local_1360 != 0x2e) goto LAB_01838c40;
          plVar6 = local_80 + 1;
          lVar9 = *plVar6;
          if (0xfef < lVar9 + 0x30U) {
            plVar5 = malloc(0x1000);
            if (plVar5 == (long *)0x0) goto LAB_01838d08;
            lVar9 = 0;
            *plVar5 = (long)plVar10;
            plVar6 = plVar5 + 1;
            *plVar6 = 0;
            local_80 = plVar5;
          }
          *plVar6 = lVar9 + 0x30;
          plVar10 = (long *)((long)local_80 + lVar9 + 0x10);
          *plVar10 = (long)&PTR_FUN_01ce1110;
          *(undefined4 *)((long)local_80 + lVar9 + 0x18) = 0x1010101;
          *(long **)((long)local_80 + lVar9 + 0x20) = plVar4;
          *(byte **)((long)local_80 + lVar9 + 0x28) = pbVar11;
          *(byte **)((long)local_80 + lVar9 + 0x30) = pbVar13;
          plVar4 = plVar10;
          local_1360 = local_1358;
        }
        goto joined_r0x018388ac;
      }
      goto LAB_01838c40;
    }
    if ((((sVar3 < 4) || (param_1[1] != 0x5f)) || (param_1[2] != 0x5f)) || (param_1[3] != 0x5a))
    goto LAB_018389f0;
    local_1360 = param_1 + 4;
    lVar9 = FUN_01838d94(&local_1360);
    plVar4 = local_80;
    if (((((lVar9 == 0) || ((ulong)((long)local_1358 - (long)local_1360) < 0xd)) ||
         ((*local_1360 != 0x5f || ((local_1360[1] != 0x62 || (local_1360[2] != 0x6c)))))) ||
        ((local_1360[3] != 0x6f ||
         ((((local_1360[4] != 99 || (local_1360[5] != 0x6b)) || (local_1360[6] != 0x5f)) ||
          ((local_1360[7] != 0x69 || (local_1360[8] != 0x6e)))))))) ||
       (((local_1360[9] != 0x76 || ((local_1360[10] != 0x6f || (local_1360[0xb] != 0x6b)))) ||
        (local_1360[0xc] != 0x65)))) goto LAB_01838c40;
    pbVar11 = local_1360 + 0xd;
    pbVar13 = pbVar11;
    if (pbVar11 == local_1358) {
LAB_01838bb4:
      local_1360 = pbVar13;
      if (local_1358 != pbVar11) goto LAB_01838c40;
    }
    else {
      if (*pbVar11 == 0x5f) {
        pbVar11 = local_1360 + 0xe;
        bVar2 = 1;
        if (local_1358 == pbVar11) goto LAB_018389e0;
LAB_01838b2c:
        local_1360 = pbVar11;
        if (*pbVar11 - 0x30 < 10) {
          do {
            local_1360 = local_1360 + 1;
            pbVar13 = pbVar11;
            pbVar14 = local_1358;
            pbVar15 = local_1358;
            if (local_1358 == local_1360) break;
            pbVar14 = local_1360;
            pbVar15 = local_1360;
          } while (*local_1360 - 0x30 < 10);
        }
        else {
          pbVar13 = (byte *)0x0;
          pbVar14 = pbVar11;
          pbVar15 = (byte *)0x0;
        }
      }
      else {
        bVar2 = 0;
        if (local_1358 != pbVar11) goto LAB_01838b2c;
LAB_018389e0:
        pbVar13 = (byte *)0x0;
        pbVar14 = local_1358;
        pbVar15 = (byte *)0x0;
        local_1360 = pbVar11;
      }
      if ((bool)(bVar2 & pbVar13 == pbVar15)) goto LAB_01838c40;
      pbVar11 = pbVar14;
      pbVar13 = local_1360;
      if ((local_1358 == local_1360) || (*local_1360 != 0x2e)) goto LAB_01838bb4;
      local_1360 = local_1358;
    }
    plVar10 = local_80 + 1;
    lVar12 = *plVar10;
    if (0xfef < lVar12 + 0x30U) {
      plVar6 = malloc(0x1000);
      if (plVar6 == (long *)0x0) goto LAB_01838d08;
      lVar12 = 0;
      *plVar6 = (long)plVar4;
      plVar10 = plVar6 + 1;
      *plVar10 = 0;
      local_80 = plVar6;
    }
    *plVar10 = lVar12 + 0x30;
    plVar4 = (long *)((long)local_80 + lVar12 + 0x10);
    *plVar4 = (long)&PTR_FUN_01cdfa40;
    *(undefined4 *)((long)local_80 + lVar12 + 0x18) = 0x1010114;
    *(char **)((long)local_80 + lVar12 + 0x28) = "";
    *(char **)((long)local_80 + lVar12 + 0x20) = "invocation function for block in ";
    *(long *)((long)local_80 + lVar12 + 0x30) = lVar9;
    if (plVar4 == (long *)0x0) goto LAB_01838c40;
LAB_01838a0c:
    if (param_2 == (void *)0x0) {
      uVar16 = 0x400;
      param_2 = malloc(0x400);
      if (param_2 != (void *)0x0) goto LAB_01838a3c;
      iVar7 = -1;
    }
    else {
      uVar16 = *param_3;
LAB_01838a3c:
      local_1378 = 0;
      local_1380 = param_2;
      local_1370 = uVar16;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_1380);
      if (*(char *)((long)plVar4 + 9) != '\x01') {
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_1380);
      }
      uVar16 = local_1378 + 1;
      if (local_1370 <= uVar16) {
        uVar8 = local_1370 << 1;
        local_1370 = uVar16;
        if (uVar16 <= uVar8) {
          local_1370 = uVar8;
        }
        local_1380 = realloc(local_1380,local_1370);
        if (local_1380 == (void *)0x0) {
LAB_01838d08:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        uVar16 = local_1378 + 1;
      }
      *(undefined1 *)((long)local_1380 + local_1378) = 0;
      if (param_3 != (ulong *)0x0) {
        *param_3 = uVar16;
      }
      iVar7 = 0;
      local_1378 = uVar16;
      param_2 = local_1380;
    }
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar7;
  }
  plVar4 = local_80;
  if (iVar7 != 0) {
    param_2 = (void *)0x0;
  }
  while (local_80 = plVar4, local_80 != (long *)0x0) {
    while (plVar4 = (long *)*local_80, &local_1080 != local_80) {
      plVar4 = local_80;
      local_80 = (long *)*local_80;
      free(plVar4);
      if (local_80 == (long *)0x0) goto LAB_01838c84;
    }
  }
LAB_01838c84:
  local_1080 = 0;
  local_1078 = 0;
  local_80 = &local_1080;
  if (local_10c8 != auStack_10b0) {
    free(local_10c8);
  }
  if (local_1120 != auStack_1108) {
    free(local_1120);
  }
  if (local_1238 != auStack_1220) {
    free(local_1238);
  }
  if (local_1350 != auStack_1338) {
    free(local_1350);
  }
LAB_01838ccc:
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

