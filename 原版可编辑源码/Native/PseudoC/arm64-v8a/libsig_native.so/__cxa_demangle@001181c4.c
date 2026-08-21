
/* WARNING: Removing unreachable block (ram,0x00118680) */
/* WARNING: Type propagation algorithm not settling */

void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,int *param_4)

{
  long lVar1;
  byte bVar2;
  size_t sVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  void *local_1380;
  ulong local_1378;
  size_t local_1370;
  undefined8 local_1368;
  byte *local_1360;
  byte *local_1358;
  undefined1 *local_1350;
  undefined1 *local_1348;
  undefined1 **ppuStack_1340;
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
  undefined8 uStack_1078;
  long *local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    param_2 = (void *)0x0;
    if (param_4 != (int *)0x0) {
      *param_4 = -3;
    }
    goto LAB_00118624;
  }
  sVar3 = strlen((char *)param_1);
  local_1358 = param_1 + sVar3;
  ppuStack_1340 = &local_1238;
  uStack_1078 = 0;
  local_1080 = 0;
  local_1228 = &local_1120;
  local_1090 = 1;
  local_1110 = &local_10c8;
  local_10b8 = &local_1090;
  local_108e = 0;
  local_1368 = 0xffffffffffffffff;
  local_1360 = param_1;
  local_1350 = auStack_1338;
  local_1348 = auStack_1338;
  local_1238 = auStack_1220;
  puStack_1230 = auStack_1220;
  local_1120 = auStack_1108;
  local_1118 = auStack_1108;
  local_10c8 = auStack_10b0;
  local_10c0 = auStack_10b0;
  local_80 = &local_1080;
  uVar4 = __strlen_chk(&DAT_0012eda1,3);
  if ((ulong)((long)local_1358 - (long)local_1360) < uVar4) {
LAB_00118300:
    uVar4 = __strlen_chk(&DAT_0012eda0,4);
    if (uVar4 <= (ulong)((long)local_1358 - (long)local_1360)) {
      if (uVar4 != 0) {
        pbVar12 = &DAT_0012eda0;
        uVar11 = uVar4;
        pbVar14 = local_1360;
        do {
          if (*pbVar12 != *pbVar14) goto LAB_00118418;
          pbVar12 = pbVar12 + 1;
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar11 != 0);
      }
      goto LAB_00118354;
    }
LAB_00118418:
    uVar4 = __strlen_chk(&DAT_0012ed9f,5);
    if ((ulong)((long)local_1358 - (long)local_1360) < uVar4) {
LAB_00118470:
      uVar4 = __strlen_chk(&DAT_0012ed9e,6);
      if (uVar4 <= (ulong)((long)local_1358 - (long)local_1360)) {
        if (uVar4 != 0) {
          pbVar12 = &DAT_0012ed9e;
          uVar11 = uVar4;
          pbVar14 = local_1360;
          do {
            if (*pbVar12 != *pbVar14) goto LAB_00118578;
            pbVar12 = pbVar12 + 1;
            uVar11 = uVar11 - 1;
            pbVar14 = pbVar14 + 1;
          } while (uVar11 != 0);
        }
        goto LAB_001184c4;
      }
LAB_00118578:
      plVar6 = (long *)FUN_00119448(&local_1360);
      if ((local_1358 != local_1360) || (plVar6 == (long *)0x0)) goto LAB_00118594;
LAB_0011840c:
      if (param_2 == (void *)0x0) goto LAB_001187ac;
LAB_00118410:
      uVar4 = *param_3;
    }
    else {
      if (uVar4 != 0) {
        pbVar12 = &DAT_0012ed9f;
        uVar11 = uVar4;
        pbVar14 = local_1360;
        do {
          if (*pbVar12 != *pbVar14) goto LAB_00118470;
          pbVar12 = pbVar12 + 1;
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar11 != 0);
      }
LAB_001184c4:
      local_1360 = local_1360 + uVar4;
      lVar10 = FUN_00118900(&local_1360);
      if ((lVar10 == 0) ||
         (uVar4 = __strlen_chk("_block_invoke",0xe), plVar6 = local_80,
         (ulong)((long)local_1358 - (long)local_1360) < uVar4)) goto LAB_00118594;
      if (uVar4 != 0) {
        pcVar13 = "_block_invoke";
        uVar11 = uVar4;
        pbVar12 = local_1360;
        do {
          if (*pcVar13 != *pbVar12) goto LAB_00118594;
          pcVar13 = pcVar13 + 1;
          uVar11 = uVar11 - 1;
          pbVar12 = pbVar12 + 1;
        } while (uVar11 != 0);
      }
      pbVar12 = local_1360 + uVar4;
      local_1360 = pbVar12;
      if (pbVar12 != local_1358) {
        if (*pbVar12 == 0x5f) {
          pbVar12 = pbVar12 + 1;
          bVar2 = 1;
          if (local_1358 != pbVar12) goto LAB_00118694;
LAB_00118568:
          pbVar14 = (byte *)0x0;
          pbVar15 = local_1358;
          pbVar16 = (byte *)0x0;
          local_1360 = pbVar12;
        }
        else {
          bVar2 = 0;
          if (local_1358 == pbVar12) goto LAB_00118568;
LAB_00118694:
          local_1360 = pbVar12;
          if (*pbVar12 - 0x30 < 10) {
            do {
              local_1360 = local_1360 + 1;
              pbVar14 = pbVar12;
              pbVar15 = local_1358;
              pbVar16 = local_1358;
              if (local_1358 == local_1360) break;
              pbVar15 = local_1360;
              pbVar16 = local_1360;
            } while (*local_1360 - 0x30 < 10);
          }
          else {
            pbVar14 = (byte *)0x0;
            pbVar15 = pbVar12;
            pbVar16 = (byte *)0x0;
          }
        }
        if (!(bool)(bVar2 & pbVar14 == pbVar16)) {
          pbVar12 = pbVar15;
          if ((local_1358 == local_1360) || (*local_1360 != 0x2e)) goto LAB_0011871c;
          local_1360 = local_1358;
          goto LAB_00118724;
        }
        goto LAB_00118594;
      }
LAB_0011871c:
      if (local_1358 != pbVar12) goto LAB_00118594;
LAB_00118724:
      lVar17 = local_80[1];
      if (0xfef < lVar17 + 0x30U) {
        plVar7 = malloc(0x1000);
        if (plVar7 == (long *)0x0) goto LAB_00118870;
        lVar17 = 0;
        *plVar7 = (long)plVar6;
        plVar7[1] = 0;
        local_80 = plVar7;
      }
      plVar7 = local_80;
      local_80[1] = lVar17 + 0x30;
      lVar8 = __strlen_chk("invocation function for block in ",0x22);
      plVar6 = (long *)((long)plVar7 + lVar17 + 0x10);
      *(char **)((long)plVar7 + lVar17 + 0x20) = "invocation function for block in ";
      *(char **)((long)plVar7 + lVar17 + 0x28) = "invocation function for block in " + lVar8;
      *(undefined4 *)((long)plVar7 + lVar17 + 0x18) = 0x1010114;
      *plVar6 = (long)&PTR_FUN_00136ec8;
      *(long *)((long)plVar7 + lVar17 + 0x30) = lVar10;
      if (param_2 != (void *)0x0) goto LAB_00118410;
LAB_001187ac:
      uVar4 = 0x400;
      param_2 = malloc(0x400);
      if (param_2 == (void *)0x0) {
        iVar9 = -1;
        uVar4 = local_1378;
        goto joined_r0x00118668;
      }
    }
    local_1378 = 0;
    local_1380 = param_2;
    local_1370 = uVar4;
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_1380);
    if (*(char *)((long)plVar6 + 9) != '\x01') {
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_1380);
    }
    uVar4 = local_1378 + 1;
    if (local_1370 <= uVar4) {
      uVar11 = local_1370 << 1;
      local_1370 = uVar4;
      if (uVar4 <= uVar11) {
        local_1370 = uVar11;
      }
      local_1380 = realloc(local_1380,local_1370);
      if (local_1380 == (void *)0x0) {
LAB_00118870:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      uVar4 = local_1378 + 1;
    }
    *(undefined1 *)((long)local_1380 + local_1378) = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar4;
    }
    iVar9 = 0;
    param_2 = local_1380;
  }
  else {
    if (uVar4 != 0) {
      pbVar12 = &DAT_0012eda1;
      uVar11 = uVar4;
      pbVar14 = local_1360;
      do {
        if (*pbVar12 != *pbVar14) goto LAB_00118300;
        pbVar12 = pbVar12 + 1;
        uVar11 = uVar11 - 1;
        pbVar14 = pbVar14 + 1;
      } while (uVar11 != 0);
    }
LAB_00118354:
    local_1360 = local_1360 + uVar4;
    plVar5 = (long *)FUN_00118900(&local_1360);
    plVar7 = local_80;
    pbVar14 = local_1358;
    pbVar12 = local_1360;
    if (plVar5 != (long *)0x0) {
      plVar6 = plVar5;
      if (local_1358 != local_1360) {
        if (*local_1360 == 0x2e) {
          lVar10 = local_80[1];
          if (0xfef < lVar10 + 0x30U) {
            plVar6 = malloc(0x1000);
            if (plVar6 == (long *)0x0) goto LAB_00118870;
            lVar10 = 0;
            *plVar6 = (long)plVar7;
            plVar6[1] = 0;
            local_80 = plVar6;
          }
          local_80[1] = lVar10 + 0x30;
          plVar6 = (long *)((long)local_80 + lVar10 + 0x10);
          *plVar6 = (long)&PTR_FUN_00138608;
          *(undefined4 *)((long)local_80 + lVar10 + 0x18) = 0x1010101;
          *(long **)((long)local_80 + lVar10 + 0x20) = plVar5;
          *(byte **)((long)local_80 + lVar10 + 0x28) = pbVar12;
          *(byte **)((long)local_80 + lVar10 + 0x30) = pbVar14;
          local_1360 = local_1358;
          goto LAB_001183fc;
        }
        iVar9 = -2;
        uVar4 = local_1378;
        goto joined_r0x00118668;
      }
LAB_001183fc:
      if (plVar6 != (long *)0x0) goto LAB_0011840c;
    }
LAB_00118594:
    iVar9 = -2;
    uVar4 = local_1378;
  }
joined_r0x00118668:
  if (param_4 != (int *)0x0) {
    *param_4 = iVar9;
  }
  local_1378 = uVar4;
  plVar6 = local_80;
  if (iVar9 != 0) {
    param_2 = (void *)0x0;
  }
  while (local_80 = plVar6, local_80 != (long *)0x0) {
    while (plVar6 = (long *)*local_80, &local_1080 != local_80) {
      plVar6 = local_80;
      local_80 = (long *)*local_80;
      free(plVar6);
      if (local_80 == (long *)0x0) goto LAB_001185d8;
    }
  }
LAB_001185d8:
  local_1080 = 0;
  uStack_1078 = 0;
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
LAB_00118624:
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_2;
}

