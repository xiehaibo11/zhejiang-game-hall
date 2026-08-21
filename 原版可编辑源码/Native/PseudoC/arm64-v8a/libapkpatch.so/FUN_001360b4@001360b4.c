
undefined4
FUN_001360b4(long param_1,long param_2,undefined8 ****param_3,undefined8 *param_4,code **param_5,
            long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined4 uVar9;
  undefined8 ***pppuVar10;
  undefined8 ***pppuVar11;
  code *local_3e0;
  code *pcStack_3d8;
  code *local_3d0;
  code *pcStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  ulong *puStack_3a8;
  ulong *local_3a0;
  ulong *puStack_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 **local_380;
  ulong uStack_378;
  undefined8 **local_370;
  ulong uStack_368;
  undefined8 **local_360;
  ulong uStack_358;
  undefined8 **local_350;
  ulong uStack_348;
  ulong local_330;
  undefined8 **local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined1 local_310;
  undefined8 **local_308;
  undefined8 **ppuStack_300;
  undefined8 ***local_2f8;
  long lStack_2f0;
  ulong local_2e8;
  ulong uStack_2e0;
  undefined8 **local_2d8;
  undefined8 **ppuStack_2d0;
  undefined8 ***local_2c8;
  long lStack_2c0;
  ulong local_2b8;
  ulong uStack_2b0;
  undefined8 **local_2a8;
  undefined8 **ppuStack_2a0;
  undefined8 ***local_298;
  long lStack_290;
  ulong local_288;
  ulong uStack_280;
  ulong local_278;
  undefined8 **ppuStack_270;
  undefined8 ***local_268;
  long lStack_260;
  ulong local_258;
  ulong uStack_250;
  undefined8 ***local_248 [2];
  code *local_238;
  undefined8 *local_228;
  long local_220;
  undefined8 ***local_218;
  undefined8 **local_210;
  code *local_208;
  undefined8 *local_1f8;
  long local_1f0;
  undefined8 ***local_1e8;
  undefined8 **local_1e0;
  code *local_1d8;
  undefined8 *local_1c8;
  long local_1c0;
  undefined8 ***local_1b8;
  undefined8 **local_1b0;
  code *local_1a8;
  undefined8 *local_198;
  long local_190;
  long local_188;
  long local_180;
  int local_178;
  undefined1 auStack_174 [260];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lVar7 = 5;
  if (param_5 == (code **)0x0) {
    lVar7 = 6;
  }
  uVar1 = 0;
  if (lVar7 != 0) {
    uVar1 = (param_7 - param_6) / lVar7;
  }
  if (0x103 < uVar1) {
    pppuVar11 = param_3[1];
    iVar3 = FUN_00135c90(&local_188,&local_388);
    if (((iVar3 != 0) && (local_180 == *(long *)(param_2 + 8))) &&
       (local_188 == *(long *)(param_1 + 8))) {
      if (param_4 == (undefined8 *)0x0) {
        if (local_178 == 0) goto LAB_00136168;
      }
      else if ((local_178 == 0) || (iVar3 = (*(code *)*param_4)(auStack_174), iVar3 != 0)) {
LAB_00136168:
        lVar7 = 0x28;
        do {
          *(undefined8 *)((long)local_248 + lVar7) = 0;
          lVar7 = lVar7 + 0x30;
        } while (lVar7 != 0xe8);
        local_320 = 0;
        uStack_318 = 0;
        local_310 = 0;
        ppuStack_2d0 = (undefined8 ***)0x0;
        local_2d8 = (undefined8 ***)0x0;
        lStack_2c0 = 0;
        local_2c8 = (undefined8 ****)0x0;
        uStack_2b0 = 0;
        local_2b8 = 0;
        if (param_5 == (code **)0x0) {
          if (uStack_378 == 0) {
            pppuVar5 = (undefined8 ***)((long)local_380 + local_330);
            if ((!CARRY8((ulong)local_380,local_330)) &&
               (ppppuVar8 = param_3, local_328 = pppuVar5, pppuVar5 <= param_3[1])) {
LAB_0013635c:
              lStack_260 = param_6 + uVar1 * 5;
              local_278 = local_330;
              ppuStack_270 = pppuVar5;
              local_268 = ppppuVar8;
              local_258 = uVar1;
              uStack_250 = uVar1;
              goto LAB_001361a8;
            }
          }
          else {
            pppuVar10 = (undefined8 ***)(uStack_378 + local_330);
            if ((!CARRY8(uStack_378,local_330)) && (pppuVar10 <= param_3[1])) {
              local_248[0] = local_248;
              local_248[1] = (undefined8 ***)local_380;
              local_238 = FUN_00135c78;
              local_228 = param_4;
              local_220 = (*(code *)param_4[1])(param_4,local_380,param_3,local_330,pppuVar10);
              if (local_220 != 0) {
                local_330 = 0;
                pppuVar5 = local_248[1];
                ppppuVar8 = local_248;
                local_328 = pppuVar10;
                goto LAB_0013635c;
              }
            }
          }
LAB_001364b4:
          uVar4 = 0;
        }
        else {
LAB_001361a8:
          if (uStack_368 != 0) {
            pppuVar5 = (undefined8 ***)(uStack_368 + (long)local_328);
            if ((!CARRY8(uStack_368,(ulong)local_328)) && (pppuVar5 <= param_3[1])) {
              local_210 = local_370;
              local_208 = FUN_00135c78;
              local_218 = &local_218;
              local_1f8 = param_4;
              local_1f0 = (*(code *)param_4[1])(param_4,local_370,param_3,local_328);
              if (local_1f0 != 0) {
                local_328 = (undefined8 ***)0x0;
                pppuVar10 = (undefined8 ***)local_210;
                ppppuVar8 = &local_218;
                goto LAB_001362c8;
              }
            }
            goto LAB_001364b4;
          }
          pppuVar5 = (undefined8 ***)((long)local_370 + (long)local_328);
          if ((CARRY8((ulong)local_370,(ulong)local_328)) ||
             (pppuVar10 = pppuVar5, ppppuVar8 = param_3, param_3[1] < pppuVar5)) goto LAB_001364b4;
LAB_001362c8:
          local_308 = local_328;
          ppuStack_300 = pppuVar10;
          local_2f8 = ppppuVar8;
          lStack_2f0 = param_6;
          local_2e8 = uVar1;
          uStack_2e0 = uVar1;
          if (uStack_358 != 0) {
            pppuVar10 = (undefined8 ***)(uStack_358 + (long)pppuVar5);
            if ((!CARRY8(uStack_358,(ulong)pppuVar5)) && (pppuVar10 <= param_3[1])) {
              local_1e0 = local_360;
              local_1d8 = FUN_00135c78;
              local_1e8 = &local_1e8;
              local_1c8 = param_4;
              local_1c0 = (*(code *)param_4[1])(param_4,local_360,param_3,pppuVar5,pppuVar10);
              if (local_1c0 != 0) {
                pppuVar5 = (undefined8 ***)0x0;
                pppuVar6 = (undefined8 ***)local_1e0;
                ppppuVar8 = &local_1e8;
                goto LAB_00136390;
              }
            }
            goto LAB_001364b4;
          }
          pppuVar6 = (undefined8 ***)((long)local_360 + (long)pppuVar5);
          if ((CARRY8((ulong)local_360,(ulong)pppuVar5)) ||
             (ppppuVar8 = param_3, pppuVar10 = pppuVar6, param_3[1] < pppuVar6)) goto LAB_001364b4;
LAB_00136390:
          lStack_2c0 = param_6 + uVar1;
          local_2d8 = pppuVar5;
          ppuStack_2d0 = pppuVar6;
          local_2c8 = ppppuVar8;
          local_2b8 = uVar1;
          uStack_2b0 = uVar1;
          if (uStack_348 != 0) {
            pppuVar5 = (undefined8 ***)(uStack_348 + (long)pppuVar10);
            if ((!CARRY8(uStack_348,(ulong)pppuVar10)) && (pppuVar5 <= param_3[1])) {
              local_1b0 = local_350;
              local_1a8 = FUN_00135c78;
              local_1b8 = &local_1b8;
              local_198 = param_4;
              local_190 = (*(code *)param_4[1])(param_4,local_350,param_3,pppuVar10);
              if (local_190 != 0) {
                pppuVar10 = (undefined8 ***)0x0;
                pppuVar6 = (undefined8 ***)local_1b0;
                param_3 = &local_1b8;
                goto LAB_00136424;
              }
            }
            goto LAB_001364b4;
          }
          pppuVar6 = (undefined8 ***)((long)local_350 + (long)pppuVar10);
          if ((CARRY8((ulong)local_350,(ulong)pppuVar10)) ||
             (pppuVar5 = pppuVar6, param_3[1] < pppuVar6)) goto LAB_001364b4;
LAB_00136424:
          lStack_290 = param_6 + uVar1 * 2;
          local_2a8 = pppuVar10;
          ppuStack_2a0 = pppuVar6;
          local_298 = param_3;
          local_288 = uVar1;
          uStack_280 = uVar1;
          if (pppuVar5 != pppuVar11) goto LAB_001364b4;
          if (param_5 == (code **)0x0) {
            local_3e0 = FUN_00136c50;
            pcStack_3d8 = FUN_00136c58;
            local_3d0 = FUN_00136d78;
            pcStack_3c8 = FUN_00136dd8;
            puStack_3a8 = &local_278;
            local_3b0 = 0;
            param_5 = &local_3e0;
            local_390 = 1;
            local_3c0 = local_388;
            uStack_3b8 = 0;
            local_3a0 = puStack_3a8;
            puStack_398 = puStack_3a8;
          }
          uVar4 = FUN_001365ac(param_1,param_2,param_5,&local_2a8,&local_320,param_6 + uVar1 * 3,
                               uVar1);
        }
        lVar7 = 0x28;
        do {
          uVar9 = uVar4;
          if (*(long *)((long)local_248 + lVar7) != 0) {
            iVar3 = (*(code *)param_4[2])(param_4);
            uVar9 = 0;
            if (iVar3 != 0) {
              uVar9 = uVar4;
            }
            *(undefined8 *)((long)local_248 + lVar7) = 0;
          }
          lVar7 = lVar7 + 0x30;
          uVar4 = uVar9;
        } while (lVar7 != 0xe8);
        goto LAB_00136218;
      }
    }
  }
  uVar9 = 0;
LAB_00136218:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}

