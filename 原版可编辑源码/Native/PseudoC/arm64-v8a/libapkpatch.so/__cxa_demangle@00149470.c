
void * __cxa_demangle(byte *param_1,void *param_2,ulong *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  size_t sVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  void *pvVar14;
  ulong uVar15;
  void *local_13e8;
  ulong local_13e0;
  size_t local_13d8;
  undefined8 local_13d0;
  long local_13c8;
  byte *local_13c0;
  byte *local_13b8;
  undefined8 *local_13b0;
  undefined8 *puStack_13a8;
  undefined8 **local_13a0;
  undefined8 local_1398;
  undefined8 uStack_1390;
  undefined8 local_1388;
  undefined8 uStack_1380;
  undefined8 local_1378;
  undefined8 uStack_1370;
  undefined8 local_1368;
  undefined8 uStack_1360;
  undefined8 local_1358;
  undefined8 uStack_1350;
  undefined8 local_1348;
  undefined8 uStack_1340;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined8 local_1328;
  undefined8 uStack_1320;
  undefined8 local_1318;
  undefined8 uStack_1310;
  undefined8 local_1308;
  undefined8 uStack_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined8 local_12e8;
  undefined8 uStack_12e0;
  undefined8 local_12d8;
  undefined8 uStack_12d0;
  undefined8 local_12c8;
  undefined8 uStack_12c0;
  undefined8 local_12b8;
  undefined8 uStack_12b0;
  undefined8 local_12a8;
  undefined8 uStack_12a0;
  undefined8 *local_1298;
  undefined8 *puStack_1290;
  undefined8 **local_1288;
  undefined8 local_1280;
  undefined8 uStack_1278;
  undefined8 uStack_1270;
  undefined8 uStack_1268;
  undefined8 local_1260;
  undefined8 uStack_1258;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 local_1240;
  undefined8 uStack_1238;
  undefined8 uStack_1230;
  undefined8 uStack_1228;
  undefined8 local_1220;
  undefined8 uStack_1218;
  undefined8 uStack_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined8 uStack_11f0;
  undefined8 uStack_11e8;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined8 uStack_11d0;
  undefined8 uStack_11c8;
  undefined8 local_11c0;
  undefined8 uStack_11b8;
  undefined8 uStack_11b0;
  undefined8 uStack_11a8;
  undefined8 local_11a0;
  undefined8 uStack_1198;
  undefined8 uStack_1190;
  undefined8 uStack_1188;
  undefined8 *local_1180;
  undefined8 *local_1178;
  undefined8 **local_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 *local_1128;
  undefined8 *local_1120;
  undefined8 **local_1118;
  undefined8 local_1110;
  undefined8 uStack_1108;
  undefined8 uStack_1100;
  undefined8 uStack_10f8;
  undefined8 *local_10f0;
  undefined8 *local_10e8;
  undefined2 *local_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined2 local_10b8 [4];
  undefined8 local_10b0;
  undefined8 local_10a8;
  undefined4 local_10a0;
  long local_1090;
  undefined8 uStack_1088;
  long *local_90;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (byte *)0x0) || ((param_2 != (void *)0x0 && (param_3 == (ulong *)0x0)))) {
    pvVar14 = (void *)0x0;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0xfffffffd;
    }
    goto LAB_00149a98;
  }
  sVar3 = strlen((char *)param_1);
  local_13b8 = param_1 + sVar3;
  uStack_12b0 = 0;
  local_12b8 = 0;
  uStack_1130 = 0;
  local_1138 = 0;
  uStack_1390 = 0;
  local_1398 = 0;
  uStack_1380 = 0;
  local_1388 = 0;
  uStack_1370 = 0;
  local_1378 = 0;
  uStack_1360 = 0;
  local_1368 = 0;
  uStack_1350 = 0;
  local_1358 = 0;
  uStack_1340 = 0;
  local_1348 = 0;
  uStack_1330 = 0;
  local_1338 = 0;
  uStack_1320 = 0;
  local_1328 = 0;
  uStack_1310 = 0;
  local_1318 = 0;
  uStack_1300 = 0;
  local_1308 = 0;
  uStack_12f0 = 0;
  local_12f8 = 0;
  uStack_12e0 = 0;
  local_12e8 = 0;
  uStack_12d0 = 0;
  local_12d8 = 0;
  uStack_12c0 = 0;
  local_12c8 = 0;
  uStack_1278 = 0;
  local_1280 = 0;
  uStack_1268 = 0;
  uStack_1270 = 0;
  uStack_1258 = 0;
  local_1260 = 0;
  uStack_1248 = 0;
  uStack_1250 = 0;
  uStack_1238 = 0;
  local_1240 = 0;
  uStack_1228 = 0;
  uStack_1230 = 0;
  uStack_1218 = 0;
  local_1220 = 0;
  uStack_1208 = 0;
  uStack_1210 = 0;
  uStack_11f8 = 0;
  local_1200 = 0;
  uStack_11e8 = 0;
  uStack_11f0 = 0;
  uStack_11d8 = 0;
  local_11e0 = 0;
  uStack_11c8 = 0;
  uStack_11d0 = 0;
  uStack_11b8 = 0;
  local_11c0 = 0;
  uStack_11a8 = 0;
  uStack_11b0 = 0;
  uStack_1198 = 0;
  local_11a0 = 0;
  uStack_1188 = 0;
  uStack_1190 = 0;
  uStack_1108 = 0;
  local_1110 = 0;
  uStack_10f8 = 0;
  uStack_1100 = 0;
  uStack_1088 = 0;
  local_1090 = 0;
  uStack_1140 = 0;
  local_1148 = 0;
  uStack_12a0 = 0;
  local_12a8 = 0;
  uStack_1150 = 0;
  local_1158 = 0;
  uStack_1160 = 0;
  local_1168 = 0;
  uStack_10c0 = 0;
  local_10c8 = 0;
  uStack_10d0 = 0;
  local_10d8 = 0;
  local_1288 = &local_1180;
  local_1170 = &local_1128;
  local_10b8[0] = 1;
  local_10b0 = 0xffffffffffffffff;
  local_1118 = &local_10f0;
  local_10e0 = local_10b8;
  local_13a0 = &local_1298;
  local_10a0 = 0;
  local_10a8 = 0;
  local_13e8 = (void *)0x0;
  local_13e0 = 0;
  local_13d8 = 0;
  local_13d0 = 0xffffffffffffffff;
  local_13b0 = &local_1398;
  puStack_13a8 = &local_1398;
  local_1298 = &local_1280;
  puStack_1290 = &local_1280;
  local_1180 = &local_1168;
  local_1178 = &local_1168;
  local_1128 = &local_1110;
  local_1120 = &local_1110;
  local_10f0 = &local_10d8;
  local_10e8 = &local_10d8;
  local_90 = &local_1090;
  if ((sVar3 < 2) || (*param_1 != 0x5f)) {
LAB_00149710:
    local_13c0 = param_1;
    plVar4 = (long *)FUN_0014a548(&local_13c0);
    if (local_13b8 == local_13c0) {
LAB_00149924:
      if (plVar4 != (long *)0x0) goto LAB_0014992c;
    }
LAB_00149724:
    uVar6 = 0xfffffffe;
    pvVar14 = (void *)0x0;
    uVar15 = local_13e0;
  }
  else {
    if (param_1[1] != 0x5a) {
      if ((sVar3 < 3) || (param_1[1] != 0x5f)) goto LAB_00149710;
      if (param_1[2] == 0x5a) {
        lVar7 = 3;
        goto LAB_0014965c;
      }
      if (sVar3 < 4) goto LAB_00149710;
      if ((param_1[2] == 0x5f) && (param_1[3] == 0x5a)) {
        lVar7 = 4;
      }
      else {
        if ((sVar3 < 5) || (((param_1[2] != 0x5f || (param_1[3] != 0x5f)) || (param_1[4] != 0x5a))))
        goto LAB_00149710;
        lVar7 = 5;
      }
      local_13c0 = param_1 + lVar7;
      local_13c8 = FUN_00149bec(&local_13c0);
      if (((((local_13c8 == 0) || ((ulong)((long)local_13b8 - (long)local_13c0) < 0xd)) ||
           ((*local_13c0 != 0x5f || ((local_13c0[1] != 0x62 || (local_13c0[2] != 0x6c)))))) ||
          (local_13c0[3] != 0x6f)) ||
         ((((((local_13c0[4] != 99 || (local_13c0[5] != 0x6b)) || (local_13c0[6] != 0x5f)) ||
            ((local_13c0[7] != 0x69 || (local_13c0[8] != 0x6e)))) ||
           ((local_13c0[9] != 0x76 || ((local_13c0[10] != 0x6f || (local_13c0[0xb] != 0x6b)))))) ||
          (local_13c0[0xc] != 0x65)))) goto LAB_00149724;
      pbVar10 = local_13c0 + 0xd;
      if (pbVar10 != local_13b8) {
        bVar1 = *pbVar10;
        if (bVar1 == 0x5f) {
          pbVar10 = local_13c0 + 0xe;
        }
        local_13c0 = pbVar10;
        if (local_13b8 == pbVar10) {
          pbVar11 = (byte *)0x0;
          pbVar12 = local_13b8;
          pbVar13 = (byte *)0x0;
        }
        else if (*pbVar10 - 0x30 < 10) {
          do {
            local_13c0 = local_13c0 + 1;
            pbVar11 = pbVar10;
            pbVar12 = local_13b8;
            pbVar13 = local_13b8;
            if (local_13c0 == local_13b8) break;
            pbVar12 = local_13c0;
            pbVar13 = local_13c0;
          } while (*local_13c0 - 0x30 < 10);
        }
        else {
          pbVar11 = (byte *)0x0;
          pbVar12 = pbVar10;
          pbVar13 = (byte *)0x0;
        }
        if ((bVar1 == 0x5f) && (pbVar11 == pbVar13)) goto LAB_00149724;
        pbVar10 = local_13c0;
        if (local_13b8 != pbVar12) {
          if (*pbVar12 != 0x2e) goto LAB_00149724;
          local_13c0 = local_13b8;
          pbVar10 = local_13c0;
        }
      }
      local_13c0 = pbVar10;
      plVar4 = (long *)FUN_0014a4a0(&local_13c0,"invocation function for block in ",&local_13c8);
      goto LAB_00149924;
    }
    lVar7 = 2;
LAB_0014965c:
    local_13c0 = param_1 + lVar7;
    plVar4 = (long *)FUN_00149bec(&local_13c0);
    plVar8 = local_90;
    pbVar11 = local_13b8;
    pbVar10 = local_13c0;
    if (plVar4 == (long *)0x0) goto LAB_00149724;
    if (local_13b8 != local_13c0) {
      if (*local_13c0 != 0x2e) goto LAB_00149724;
      lVar7 = local_90[1];
      if (0xfef < lVar7 + 0x30U) {
        plVar5 = malloc(0x1000);
        if (plVar5 == (long *)0x0) goto LAB_00149b00;
        lVar7 = 0;
        *plVar5 = (long)plVar8;
        plVar5[1] = 0;
        local_90 = plVar5;
      }
      local_90[1] = lVar7 + 0x30;
      plVar8 = (long *)((long)local_90 + lVar7 + 0x10);
      *plVar8 = (long)&PTR_FUN_00168b50;
      *(undefined4 *)((long)local_90 + lVar7 + 0x18) = 0x1010101;
      *(long **)((long)local_90 + lVar7 + 0x20) = plVar4;
      *(byte **)((long)local_90 + lVar7 + 0x28) = pbVar10;
      *(byte **)((long)local_90 + lVar7 + 0x30) = pbVar11;
      local_13c0 = local_13b8;
      plVar4 = plVar8;
    }
LAB_0014992c:
    if (param_2 == (void *)0x0) {
      uVar15 = 0x400;
      param_2 = malloc(0x400);
      if (param_2 == (void *)0x0) {
        uVar6 = 0xffffffff;
        pvVar14 = (void *)0x0;
        uVar15 = local_13e0;
        goto joined_r0x00149aec;
      }
    }
    else {
      uVar15 = *param_3;
    }
    local_13e0 = 0;
    local_13e8 = param_2;
    local_13d8 = uVar15;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_13e8);
    if (*(char *)((long)plVar4 + 9) != '\x01') {
      (**(code **)(*plVar4 + 0x28))(plVar4,&local_13e8);
    }
    uVar15 = local_13e0 + 1;
    if (local_13d8 <= uVar15) {
      uVar9 = local_13d8 << 1;
      local_13d8 = uVar15;
      if (uVar15 <= uVar9) {
        local_13d8 = uVar9;
      }
      local_13e8 = realloc(local_13e8,local_13d8);
      if (local_13e8 == (void *)0x0) {
LAB_00149b00:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      uVar15 = local_13e0 + 1;
    }
    *(undefined1 *)((long)local_13e8 + local_13e0) = 0;
    if (param_3 != (ulong *)0x0) {
      *param_3 = uVar15;
    }
    uVar6 = 0;
    pvVar14 = local_13e8;
  }
joined_r0x00149aec:
  local_13e0 = uVar15;
  plVar4 = local_90;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar6;
  }
  while (local_90 = plVar4, local_90 != (long *)0x0) {
    while (plVar4 = (long *)*local_90, &local_1090 != local_90) {
      plVar4 = local_90;
      local_90 = (long *)*local_90;
      free(plVar4);
      if (local_90 == (long *)0x0) goto LAB_00149a3c;
    }
  }
LAB_00149a3c:
  local_1090 = 0;
  uStack_1088 = 0;
  local_90 = &local_1090;
  if (local_10f0 != &local_10d8) {
    free(local_10f0);
  }
  if (local_1128 != &local_1110) {
    free(local_1128);
  }
  if (local_1180 != &local_1168) {
    free(local_1180);
  }
  if (local_1298 != &local_1280) {
    free(local_1298);
  }
  if (local_13b0 != &local_1398) {
    free(local_13b0);
  }
LAB_00149a98:
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar14;
}

