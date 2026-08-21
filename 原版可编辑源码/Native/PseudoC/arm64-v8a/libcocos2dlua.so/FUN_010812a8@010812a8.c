
/* WARNING: Removing unreachable block (ram,0x01083e18) */
/* WARNING: Removing unreachable block (ram,0x01083e20) */
/* WARNING: Removing unreachable block (ram,0x01083e28) */
/* WARNING: Removing unreachable block (ram,0x01083e40) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010812a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5,int param_6,int param_7,int *param_8)

{
  undefined8 **ppuVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  undefined8 **ppuVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  byte bVar15;
  ushort uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  int *piVar25;
  ulong uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  long *plVar29;
  short sVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  long lVar34;
  undefined1 uVar35;
  ushort uVar36;
  int iVar37;
  int iVar38;
  int *piVar39;
  undefined8 uVar40;
  int *piVar41;
  int iVar42;
  uint uVar43;
  uint uVar44;
  long lVar45;
  ulong uVar46;
  undefined8 uVar47;
  undefined8 *local_6380;
  undefined8 *local_6358;
  undefined8 **ppuStack_6350;
  undefined8 *local_6348;
  undefined8 uStack_6340;
  undefined1 auStack_4b2c [4];
  undefined8 *local_4b28;
  undefined8 local_4b20;
  undefined8 *local_4b18;
  undefined8 **local_4b10;
  undefined8 *local_4b08;
  char local_4b00;
  undefined1 local_4aff;
  undefined4 local_4afc;
  undefined8 *local_32f0;
  undefined8 **local_32e8;
  undefined8 *local_32e0;
  undefined1 uStack_32d8;
  undefined1 uStack_32d7;
  undefined4 local_32d4;
  undefined8 *local_1ac8;
  undefined8 **local_1ac0;
  undefined8 *local_1ab8;
  undefined1 uStack_1ab0;
  undefined1 uStack_1aaf;
  undefined4 local_1aac;
  undefined8 local_2a0;
  undefined8 **local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined2 local_240;
  undefined1 uStack_23e;
  undefined1 local_23d;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 ***local_228;
  int local_220;
  undefined8 *local_218;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  undefined1 auStack_200 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1c0;
  ulong local_1b8;
  char local_1b0;
  undefined8 local_168;
  undefined8 **local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char local_e4 [4];
  int local_e0;
  int local_dc;
  long local_d8;
  undefined8 **ppuStack_d0;
  undefined8 **local_c8;
  int local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 **local_98;
  undefined8 local_90;
  ulong uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar6 = tpidr_el0;
  lVar22 = *(long *)(lVar6 + 0x28);
  lVar45 = param_1[0x15];
  uVar47 = *param_1;
  iVar42 = *(int *)(*(long *)(lVar45 + 0x718) + 0x3f8);
  ppuVar1 = (undefined8 **)(param_1 + 1);
  uVar5 = *(undefined4 *)((long)param_1 + 0x34);
  uStack_110 = 0;
  local_118 = 0x14;
  local_108 = 10;
  uStack_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  uStack_150 = 0;
  local_158 = 0x14;
  local_148 = 10;
  uStack_138 = 0;
  local_140 = 0;
  local_130 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_168 = uVar47;
  local_160 = ppuVar1;
  local_128 = uVar47;
  local_120 = ppuVar1;
  local_e0 = param_7;
  local_dc = param_6;
  local_98 = ppuVar1;
  memset(&local_4b00,0,0x4998);
  local_288 = 0;
  uStack_290 = 0x10;
  local_280 = 10;
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_4b28 = param_1;
  local_4b20 = param_3;
  local_2a0 = uVar47;
  local_298 = ppuVar1;
  memset(&uStack_1ab0,0,0x1810);
  uVar35 = *(undefined1 *)(param_1 + 0x17);
  local_1ac8 = param_1;
  local_1ac0 = &local_1ac8;
  local_1ab8 = &local_2a0;
  uStack_1aaf = uVar35;
  local_1aac = uVar5;
  memset(&uStack_32d8,0,0x1810);
  local_32f0 = param_1;
  local_32e8 = &local_1ac8;
  local_32e0 = &local_2a0;
  uStack_32d7 = uVar35;
  local_32d4 = uVar5;
  memset(&local_4b00,0,0x1810);
  uStack_260 = *(undefined4 *)(param_1 + 5);
  local_230 = &local_168;
  uStack_25c = *(undefined4 *)(param_1 + 6);
  uStack_258 = *(undefined4 *)((long)param_1 + 0x34);
  local_228 = &local_98;
  uStack_248 = param_4[1];
  uStack_250 = *param_4;
  local_238 = &local_128;
  uStack_23e = *(undefined1 *)((long)param_1 + 0xb9);
  iStack_210 = *(int *)((long)param_1 + 0xe4);
  iStack_20c = *(int *)(param_1 + 0x1d);
  iStack_208 = -iStack_210;
  if (-1 < iStack_210) {
    iStack_208 = iStack_210;
  }
  local_e4[0] = '\0';
  iVar11 = -iStack_20c;
  if (-1 < iStack_20c) {
    iVar11 = iStack_20c;
  }
  if (iStack_208 <= iVar11) {
    iStack_208 = iVar11;
  }
  iStack_208 = iStack_208 << 1;
  uStack_204 = 0x199a;
  local_23d = 1;
  local_240 = 0;
  local_1b0 = '\0';
  *param_8 = *(int *)(*(long *)(lVar45 + 0x718) + 0x3f0) << 0x10;
  local_6358 = (undefined8 *)((ulong)local_6358 & 0xffffffff00000000);
  local_4b18 = param_1;
  local_4b10 = &local_1ac8;
  local_4b08 = &local_2a0;
  local_4aff = uVar35;
  local_4afc = uVar5;
  local_220 = param_7;
  local_218 = param_1 + 0x1e;
  puVar12 = (undefined8 *)ft_mem_qalloc(uVar47,0x198,&local_6358);
  if ((int)local_6358 == 0) {
    bVar9 = puVar12 == (undefined8 *)0x0;
    *puVar12 = uVar47;
    puVar12[1] = ppuVar1;
    puVar12[0x32] = puVar12 + 2;
  }
  else {
    if (puVar12 == (undefined8 *)0x0) {
      iVar11 = 0x40;
      bVar9 = true;
      local_6380 = (undefined8 *)0x0;
      iVar42 = *(int *)ppuVar1;
      goto joined_r0x01083f2c;
    }
    bVar9 = false;
  }
  local_6358 = (undefined8 *)((ulong)local_6358 & 0xffffffff00000000);
  local_6380 = (undefined8 *)ft_mem_realloc(uVar47,1,0,0x160,0,&local_6358);
  if ((int)local_6358 == 0) {
    uVar33 = 0xb;
  }
  else if (*(int *)ppuVar1 == 0) {
    uVar33 = 0;
    *(int *)ppuVar1 = 0x40;
  }
  else {
    uVar33 = 0;
  }
  uVar40 = param_2[2];
  local_6380[3] = param_2[3];
  local_6380[2] = uVar40;
  uVar40 = *param_2;
  local_6380[1] = param_2[1];
  *local_6380 = uVar40;
  if (*(int *)ppuVar1 == 0) {
    iVar42 = iVar42 * 0x10000;
    puVar2 = (uint *)(puVar12 + 0x32);
    piVar41 = (int *)(puVar12 + 2);
    iVar11 = 20000000;
    puVar28 = local_6380;
    iVar7 = 0;
LAB_01082194:
    pbVar3 = (byte *)puVar28[2];
    pbVar24 = (byte *)puVar28[3];
    if (pbVar24 < pbVar3) {
      pbVar23 = pbVar24 + 1;
      puVar28[3] = pbVar23;
      uVar44 = (uint)*pbVar24;
      iVar31 = *(int *)ppuVar1;
    }
    else {
      uVar44 = 0xe;
      if (iVar7 != 0) {
        uVar44 = 0xb;
      }
      iVar31 = *(int *)ppuVar1;
      pbVar23 = pbVar24;
    }
    if (iVar31 != 0) goto LAB_01083f54;
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) {
      iVar11 = 0x12;
      goto LAB_01083f50;
    }
    switch(uVar44) {
    case 0:
    case 2:
    case 9:
    case 0xd:
    case 0xf:
    case 0x10:
    case 0x11:
      break;
    case 1:
    case 0x12:
      if ((char)local_90 == '\0') {
        puVar13 = &local_128;
LAB_01082228:
        FUN_01084718(param_1,puVar12,puVar13,param_8,local_e4);
        if (*(char *)(param_1[0x15] + 0x5d9) != '\0') goto LAB_01083f34;
      }
      break;
    case 3:
    case 0x17:
      if ((char)local_90 == '\0') {
        puVar13 = &local_168;
        goto LAB_01082228;
      }
      break;
    case 4:
      piVar25 = *(int **)puVar2;
      if ((local_e4[0] == '\0') &&
         (uVar44 = (uint)((ulong)((long)piVar25 - (long)piVar41) >> 3), 1 < uVar44)) {
        if (uVar44 == 0) {
          piVar39 = (int *)puVar12[1];
          if ((piVar39 == (int *)0x0) || (*piVar39 != 0)) {
            iVar31 = 0;
          }
          else {
            *piVar39 = 0x82;
            iVar31 = 0;
          }
        }
        else if (*(int *)((long)puVar12 + 0x14) == 1) {
          iVar31 = *piVar41;
          if (iVar31 < 0) {
            iVar31 = -(0x2000 - iVar31 >> 0xe);
          }
          else {
            iVar31 = iVar31 + 0x2000 >> 0xe;
          }
        }
        else if (*(int *)((long)puVar12 + 0x14) == 2) {
          iVar31 = *piVar41 << 0x10;
        }
        else {
          iVar31 = *piVar41;
        }
        *param_8 = iVar31 + iVar42;
      }
      local_e4[0] = '\x01';
      if (*(char *)(param_1[0x15] + 0x5d9) == '\0') {
        if (piVar25 == piVar41) {
          piVar25 = (int *)puVar12[1];
          if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
            iVar31 = 0;
          }
          else {
            *piVar25 = 0xa1;
            iVar31 = 0;
          }
        }
        else {
          piVar39 = piVar25 + -2;
          *(int **)puVar2 = piVar39;
          if (piVar25[-1] == 1) {
            iVar31 = *piVar39;
            if (iVar31 < 0) {
              iVar31 = -(0x2000 - iVar31 >> 0xe);
            }
            else {
              iVar31 = iVar31 + 0x2000 >> 0xe;
            }
          }
          else if (piVar25[-1] == 2) {
            iVar31 = *piVar39 << 0x10;
          }
          else {
            iVar31 = *piVar39;
          }
        }
        uVar46 = (ulong)local_dc;
        uVar26 = (long)local_e0 + (long)iVar31;
        local_e0 = (int)uVar26;
        goto joined_r0x01081fe4;
      }
      goto LAB_01083f34;
    case 5:
      lVar34 = *(long *)puVar2;
      uVar44 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
      if (uVar44 != 0) {
        uVar20 = 1;
        while( true ) {
          uVar43 = uVar20 - 1;
          uVar18 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
          if (uVar43 < uVar18) {
            iVar31 = *(int *)((long)puVar12 + (ulong)uVar43 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar43 + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar31 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar31 = 0;
            }
          }
          local_dc = local_dc + iVar31;
          if (uVar20 < uVar18) {
            iVar31 = *(int *)((long)puVar12 + (ulong)uVar20 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar20 + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            iVar31 = 0;
            if (piVar25 != (int *)0x0) {
              if (*piVar25 == 0) {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
              else {
                iVar31 = 0;
              }
            }
          }
          local_e0 = local_e0 + iVar31;
          FUN_01084968(&local_4b28,local_dc);
          if (uVar44 <= uVar20 + 1) break;
          lVar34 = *(long *)puVar2;
          uVar20 = uVar20 + 2;
        }
      }
      goto LAB_01083bf4;
    case 6:
    case 7:
      lVar34 = *(long *)puVar2;
      uVar26 = lVar34 - (long)piVar41;
      if ((int)(uVar26 >> 3) != 0) {
        bVar10 = uVar44 == 6;
        uVar46 = 0;
        piVar25 = piVar41;
        do {
          if (uVar46 < ((ulong)(lVar34 - (long)piVar41) >> 3 & 0xffffffff)) {
            if (piVar25[1] == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (piVar25[1] == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
joined_r0x010822d4:
            if (!bVar10) goto LAB_01082308;
LAB_010822d8:
            local_dc = local_dc + iVar31;
          }
          else {
            piVar39 = (int *)puVar12[1];
            if ((piVar39 == (int *)0x0) || (*piVar39 != 0)) {
              iVar31 = 0;
              goto joined_r0x010822d4;
            }
            *piVar39 = 0x82;
            iVar31 = 0;
            if (bVar10) {
              iVar31 = 0;
              goto LAB_010822d8;
            }
LAB_01082308:
            local_e0 = local_e0 + iVar31;
          }
          FUN_01084968(&local_4b28,local_dc,local_e0);
          if ((uVar26 >> 3 & 0xffffffff) - 1 == uVar46) break;
          lVar34 = *(long *)puVar2;
          uVar46 = uVar46 + 1;
          bVar10 = (bool)(bVar10 ^ 1);
          piVar25 = piVar25 + 2;
        } while( true );
      }
      goto LAB_01083bf4;
    case 8:
    case 0x18:
      lVar34 = *(long *)puVar2;
      uVar20 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
      if (uVar20 < 6) {
        uVar43 = 0;
      }
      else {
        uVar43 = 6;
        while( true ) {
          uVar18 = uVar43 - 6;
          uVar19 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
          if (uVar18 < uVar19) {
            iVar31 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar31 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar31 = 0;
            }
          }
          uVar18 = uVar43 - 5;
          if (uVar18 < uVar19) {
            iVar17 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar17 == 1) {
              iVar17 = *piVar25;
              if (iVar17 < 0) {
                iVar17 = -(0x2000 - iVar17 >> 0xe);
              }
              else {
                iVar17 = iVar17 + 0x2000 >> 0xe;
              }
            }
            else if (iVar17 == 2) {
              iVar17 = *piVar25 << 0x10;
            }
            else {
              iVar17 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar17 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar17 = 0;
            }
          }
          uVar18 = uVar43 - 4;
          if (uVar18 < uVar19) {
            iVar38 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar38 == 1) {
              iVar38 = *piVar25;
              if (iVar38 < 0) {
                iVar38 = -(0x2000 - iVar38 >> 0xe);
              }
              else {
                iVar38 = iVar38 + 0x2000 >> 0xe;
              }
            }
            else if (iVar38 == 2) {
              iVar38 = *piVar25 << 0x10;
            }
            else {
              iVar38 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar38 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar38 = 0;
            }
          }
          uVar18 = uVar43 - 3;
          if (uVar18 < uVar19) {
            iVar37 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar37 == 1) {
              iVar37 = *piVar25;
              if (iVar37 < 0) {
                iVar37 = -(0x2000 - iVar37 >> 0xe);
              }
              else {
                iVar37 = iVar37 + 0x2000 >> 0xe;
              }
            }
            else if (iVar37 == 2) {
              iVar37 = *piVar25 << 0x10;
            }
            else {
              iVar37 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar37 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar37 = 0;
            }
          }
          uVar18 = uVar43 - 2;
          if (uVar18 < uVar19) {
            iVar32 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar32 == 1) {
              iVar32 = *piVar25;
              if (iVar32 < 0) {
                iVar32 = -(0x2000 - iVar32 >> 0xe);
              }
              else {
                iVar32 = iVar32 + 0x2000 >> 0xe;
              }
            }
            else if (iVar32 == 2) {
              iVar32 = *piVar25 << 0x10;
            }
            else {
              iVar32 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar32 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar32 = 0;
            }
          }
          uVar18 = uVar43 - 1;
          iVar32 = iVar32 + iVar38 + local_dc + iVar31;
          if (uVar18 < uVar19) {
            iVar31 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar31 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar31 = 0;
            }
          }
          iVar31 = iVar31 + iVar37 + local_e0 + iVar17;
          FUN_01084adc(&local_4b28);
          local_e0 = iVar31;
          local_dc = iVar32;
          if (uVar20 < uVar43 + 6) break;
          lVar34 = *(long *)puVar2;
          uVar43 = uVar43 + 6;
        }
      }
      if (uVar44 == 0x18) {
        uVar44 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
        if (uVar43 < uVar44) {
          iVar31 = *(int *)((long)puVar12 + (ulong)uVar43 * 8 + 0x14);
          piVar25 = (int *)(puVar12 + (ulong)uVar43 + 2);
          if (iVar31 == 1) {
            iVar31 = *piVar25;
            if (iVar31 < 0) {
              iVar31 = -(0x2000 - iVar31 >> 0xe);
            }
            else {
              iVar31 = iVar31 + 0x2000 >> 0xe;
            }
          }
          else if (iVar31 == 2) {
            iVar31 = *piVar25 << 0x10;
          }
          else {
            iVar31 = *piVar25;
          }
        }
        else {
          piVar25 = (int *)puVar12[1];
          if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
            iVar31 = 0;
          }
          else {
            *piVar25 = 0x82;
            iVar31 = 0;
          }
        }
        uVar43 = uVar43 | 1;
        local_dc = local_dc + iVar31;
        if (uVar43 < uVar44) {
          iVar31 = *(int *)((long)puVar12 + (ulong)uVar43 * 8 + 0x14);
          piVar25 = (int *)(puVar12 + (ulong)uVar43 + 2);
          if (iVar31 == 1) {
            iVar31 = *piVar25;
            if (iVar31 < 0) {
              iVar31 = -(0x2000 - iVar31 >> 0xe);
            }
            else {
              iVar31 = iVar31 + 0x2000 >> 0xe;
            }
          }
          else if (iVar31 == 2) {
            iVar31 = *piVar25 << 0x10;
          }
          else {
            iVar31 = *piVar25;
          }
        }
        else {
          piVar25 = (int *)puVar12[1];
          iVar31 = 0;
          if (piVar25 != (int *)0x0) {
            if (*piVar25 == 0) {
              *piVar25 = 0x82;
              iVar31 = 0;
            }
            else {
              iVar31 = 0;
            }
          }
        }
        local_e0 = local_e0 + iVar31;
        FUN_01084968(&local_4b28,local_dc);
      }
      *(int **)puVar2 = piVar41;
      goto LAB_01082194;
    case 10:
    case 0x1d:
      if (10 < iVar7) goto LAB_01083df4;
      uVar26 = (ulong)(iVar7 + 1);
      if (uVar33 <= uVar26) {
        uVar26 = 0;
        *(int *)ppuVar1 = 0x82;
      }
      piVar25 = *(int **)puVar2;
      puVar28 = local_6380 + uVar26 * 4;
      if (piVar25 == piVar41) {
        piVar25 = (int *)puVar12[1];
        if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) goto LAB_01083844;
        iVar31 = 0xa1;
LAB_01081880:
        iVar17 = 0;
        *piVar25 = iVar31;
      }
      else if (piVar25[-1] == 2) {
        *(int **)puVar2 = piVar25 + -2;
        iVar17 = piVar25[-2];
      }
      else {
        piVar25 = (int *)puVar12[1];
        if ((piVar25 != (int *)0x0) && (*piVar25 == 0)) {
          iVar31 = 0xa0;
          goto LAB_01081880;
        }
LAB_01083844:
        iVar17 = 0;
      }
      puVar28[1] = 0;
      *puVar28 = 0;
      puVar28[3] = 0;
      puVar28[2] = 0;
      if (uVar44 == 0x1d) {
        uVar44 = *(int *)(lVar45 + 0x6ec) + iVar17;
        if (*(uint *)(lVar45 + 0x6e4) <= uVar44) goto LAB_01083df4;
        lVar34 = *(long *)(lVar45 + 0x6f8);
      }
      else {
        uVar44 = *(int *)(lVar45 + 0x6e8) + iVar17;
        if (*(uint *)(lVar45 + 0x6e0) <= uVar44) goto LAB_01083df4;
        lVar34 = *(long *)(lVar45 + 0x6f0);
      }
      uVar40 = *(undefined8 *)(lVar34 + (ulong)uVar44 * 8);
      puVar28[3] = uVar40;
      puVar28[1] = uVar40;
      puVar28[2] = *(undefined8 *)(lVar34 + (ulong)(uVar44 + 1) * 8);
      iVar7 = iVar7 + 1;
      goto LAB_01082194;
    case 0xb:
      if (iVar7 < 1) {
LAB_01083df4:
        iVar11 = 0x12;
        goto LAB_01083f38;
      }
      uVar26 = (ulong)(iVar7 + -1);
      if (uVar33 <= uVar26) {
        uVar26 = 0;
        *(int *)ppuVar1 = 0x82;
      }
      puVar28 = local_6380 + uVar26 * 4;
      iVar7 = iVar7 + -1;
      goto LAB_01082194;
    case 0xc:
      if (pbVar23 < pbVar3) {
        puVar28[3] = pbVar23 + 1;
        bVar15 = *pbVar23;
      }
      else {
        piVar25 = (int *)*puVar28;
        if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
          bVar15 = 0;
        }
        else {
          *piVar25 = 0x55;
          bVar15 = 0;
        }
      }
      switch(bVar15) {
      case 0x22:
        puVar14 = &UNK_0145ede0;
        goto LAB_01081a0c;
      case 0x23:
        FUN_01084cc8(puVar12,&local_dc,&local_e0,&local_4b28,&DAT_0145edec,0);
        break;
      case 0x24:
        puVar14 = &DAT_0145edf8;
LAB_01081a0c:
        uVar40 = 0;
LAB_01081a34:
        FUN_01084cc8(puVar12,&local_dc,&local_e0,&local_4b28,puVar14,uVar40);
        goto LAB_01082194;
      case 0x25:
        uVar40 = 1;
        puVar14 = &DAT_0145ee04;
        goto LAB_01081a34;
      }
      break;
    case 0xe:
      goto switchD_010821e0_caseD_e;
    case 0x13:
    case 0x14:
      if (((char)local_90 == '\0') || ((uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3) < 2)) {
        FUN_01084718(param_1,puVar12,&local_168,param_8,local_e4);
        if (*(char *)(param_1[0x15] + 0x5d9) != '\0') goto LAB_01083f34;
        if (uVar44 == 0x13) {
          uVar26 = local_140 + local_100;
          if (uVar26 < 0x61) {
            local_80 = uVar26 + 7 >> 3;
            local_90 = CONCAT62(local_90._2_6_,0x101);
            uStack_88 = uVar26;
            if ((uVar26 != 0) && (local_80 != 0)) {
              uVar26 = 0;
              do {
                puVar4 = (undefined1 *)puVar28[3];
                if (puVar4 < (undefined1 *)puVar28[2]) {
                  puVar28[3] = puVar4 + 1;
                  uVar35 = *puVar4;
                }
                else {
                  piVar25 = (int *)*puVar28;
                  if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                    uVar35 = 0;
                  }
                  else {
                    *piVar25 = 0x55;
                    uVar35 = 0;
                  }
                }
                *(undefined1 *)((long)&uStack_78 + uVar26) = uVar35;
                uVar26 = uVar26 + 1;
              } while (uVar26 < local_80);
            }
          }
          else if ((local_98 != (undefined8 **)0x0) && (*(int *)local_98 == 0)) {
            *(int *)local_98 = 0x12;
          }
        }
        else {
                    /* catch() { ... } // from try @ 01083bd0 with catch @ 01083c50 */
          memset(&uStack_6340,0,0x1810);
          uStack_b8 = 0;
          local_c0 = 0;
          local_a8 = 0;
          uStack_b0 = 0;
          local_a0 = 0;
          uStack_6340._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x17),(undefined1)uStack_6340);
          uVar26 = local_140 + local_100;
          uStack_6340 = (undefined8 **)CONCAT44(uVar5,(undefined4)uStack_6340);
          if (uVar26 < 0x61) {
            uStack_b0 = uVar26 + 7 >> 3;
            local_c0 = 0x101;
            uStack_b8 = uVar26;
            if ((uVar26 != 0) && (uStack_b0 != 0)) {
              uVar26 = 0;
              do {
                puVar4 = (undefined1 *)puVar28[3];
                if (puVar4 < (undefined1 *)puVar28[2]) {
                  puVar28[3] = puVar4 + 1;
                  uVar35 = *puVar4;
                }
                else {
                  piVar25 = (int *)*puVar28;
                  if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                    uVar35 = 0;
                  }
                  else {
                    *piVar25 = 0x55;
                    uVar35 = 0;
                  }
                }
                *(undefined1 *)((long)&local_a8 + uVar26) = uVar35;
                uVar26 = uVar26 + 1;
              } while (uVar26 < uStack_b0);
            }
          }
          else if (*(int *)ppuVar1 == 0) {
            *(int *)ppuVar1 = 0x12;
          }
          local_6358 = param_1;
          ppuStack_6350 = &local_1ac8;
          local_6348 = &local_2a0;
          local_c8 = ppuVar1;
          FUN_010850c0(&local_6358,&local_128,&local_168,&local_c8,0,0);
        }
      }
      break;
    case 0x15:
      piVar25 = *(int **)puVar2;
      if ((local_e4[0] == '\0') &&
         (uVar44 = (uint)((ulong)((long)piVar25 - (long)piVar41) >> 3), 2 < uVar44)) {
        if (uVar44 == 0) {
          piVar39 = (int *)puVar12[1];
          if ((piVar39 == (int *)0x0) || (*piVar39 != 0)) {
            iVar31 = 0;
          }
          else {
            *piVar39 = 0x82;
            iVar31 = 0;
          }
        }
        else {
                    /* try { // try from 01082c78 to 01182c97 has its CatchHandler @ 01082c78
                       catch() { ... } // from try @ 01082c78 with catch @ 01082c78
                       catch() { ... } // from try @ 01082ca4 with catch @ 01082c78 */
          if (*(int *)((long)puVar12 + 0x14) == 1) {
            iVar31 = *piVar41;
            if (iVar31 < 0) {
              iVar31 = -(0x2000 - iVar31 >> 0xe);
            }
            else {
              iVar31 = iVar31 + 0x2000 >> 0xe;
            }
          }
          else if (*(int *)((long)puVar12 + 0x14) == 2) {
            iVar31 = *piVar41 << 0x10;
          }
          else {
            iVar31 = *piVar41;
          }
        }
        *param_8 = iVar31 + iVar42;
      }
      local_e4[0] = '\x01';
      if (*(char *)(param_1[0x15] + 0x5d9) == '\0') {
        if (piVar25 == piVar41) {
          piVar25 = (int *)puVar12[1];
          if ((piVar25 != (int *)0x0) && (*piVar25 == 0)) {
            *piVar25 = 0xa1;
          }
          piVar25 = (int *)puVar12[1];
          if (piVar25 == (int *)0x0) {
            iVar31 = 0;
          }
          else {
LAB_01081e38:
            if (*piVar25 == 0) {
              *piVar25 = 0xa1;
              iVar31 = 0;
            }
            else {
              iVar31 = 0;
            }
          }
        }
        else {
          piVar39 = piVar25 + -2;
          *(int **)puVar2 = piVar39;
          if (piVar25[-1] == 1) {
            iVar31 = *piVar39;
            if (iVar31 < 0) {
              iVar31 = -(0x2000 - iVar31 >> 0xe);
            }
            else {
              iVar31 = iVar31 + 0x2000 >> 0xe;
            }
          }
          else if (piVar25[-1] == 2) {
            iVar31 = *piVar39 << 0x10;
          }
          else {
            iVar31 = *piVar39;
          }
          local_e0 = local_e0 + iVar31;
          if (piVar39 == piVar41) {
            piVar25 = (int *)puVar12[1];
            iVar31 = 0;
            if (piVar25 != (int *)0x0) goto LAB_01081e38;
          }
          else {
            piVar39 = piVar25 + -4;
            *(int **)puVar2 = piVar39;
            if (piVar25[-3] == 1) {
              iVar31 = *piVar39;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (piVar25[-3] == 2) {
              iVar31 = *piVar39 << 0x10;
            }
            else {
              iVar31 = *piVar39;
            }
          }
        }
        iVar17 = local_e0;
        lVar34 = (long)local_dc;
        local_dc = (int)(lVar34 + iVar31);
        if ((char)local_240 != '\0') {
          FUN_01084968(&local_4b28,local_1c0 & 0xffffffff,local_1b8 & 0xffffffff);
          if (local_1b0 != '\0') {
            FUN_01086160(&local_4b28,&local_4b18,auStack_200,local_1f0,local_1e8,1);
          }
                    /* WARNING: Ignoring partial resolution of indirect */
          local_240._0_1_ = 0;
          local_1b0 = '\0';
        }
        uVar46 = lVar34 + iVar31;
        uVar26 = (long)iVar17;
        goto LAB_01082074;
      }
      goto LAB_01083f34;
    case 0x16:
      piVar25 = *(int **)puVar2;
                    /* try { // try from 01082c98 to 01182ca3 has its CatchHandler @ 01082cb0 */
                    /* try { // try from 01082ca4 to 01182cc3 has its CatchHandler @ 01082c78 */
      if ((local_e4[0] == '\0') &&
         (uVar44 = (uint)((ulong)((long)piVar25 - (long)piVar41) >> 3), 1 < uVar44)) {
                    /* catch() { ... } // from try @ 01082c98 with catch @ 01082cb0 */
        if (uVar44 == 0) {
          piVar39 = (int *)puVar12[1];
          if ((piVar39 == (int *)0x0) || (*piVar39 != 0)) {
            iVar31 = 0;
          }
          else {
            *piVar39 = 0x82;
            iVar31 = 0;
          }
        }
        else if (*(int *)((long)puVar12 + 0x14) == 1) {
          iVar31 = *piVar41;
          if (iVar31 < 0) {
            iVar31 = -(0x2000 - iVar31 >> 0xe);
          }
          else {
            iVar31 = iVar31 + 0x2000 >> 0xe;
          }
        }
        else if (*(int *)((long)puVar12 + 0x14) == 2) {
          iVar31 = *piVar41 << 0x10;
        }
        else {
          iVar31 = *piVar41;
        }
        *param_8 = iVar31 + iVar42;
      }
      local_e4[0] = '\x01';
      if (*(char *)(param_1[0x15] + 0x5d9) != '\0') goto LAB_01083f34;
      if (piVar25 == piVar41) {
        piVar25 = (int *)puVar12[1];
        if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
          iVar31 = 0;
        }
        else {
          *piVar25 = 0xa1;
          iVar31 = 0;
        }
      }
      else {
        piVar39 = piVar25 + -2;
        *(int **)puVar2 = piVar39;
        if (piVar25[-1] == 1) {
          iVar31 = *piVar39;
          if (iVar31 < 0) {
            iVar31 = -(0x2000 - iVar31 >> 0xe);
          }
          else {
            iVar31 = iVar31 + 0x2000 >> 0xe;
          }
        }
        else if (piVar25[-1] == 2) {
          iVar31 = *piVar39 << 0x10;
        }
        else {
          iVar31 = *piVar39;
        }
      }
      uVar26 = (ulong)local_e0;
      uVar46 = (long)local_dc + (long)iVar31;
      local_dc = (int)uVar46;
joined_r0x01081fe4:
      local_e4[0] = '\x01';
      if ((char)local_240 != '\0') {
        local_e4[0] = '\x01';
        FUN_01084968(&local_4b28,local_1c0 & 0xffffffff,local_1b8 & 0xffffffff);
        if (local_1b0 != '\0') {
          FUN_01086160(&local_4b28,&local_4b18,auStack_200,local_1f0,local_1e8,1);
        }
                    /* WARNING: Ignoring partial resolution of indirect */
        local_240._0_1_ = 0;
        local_1b0 = '\0';
      }
LAB_01082074:
      local_1b8 = uVar26;
      local_1c0 = uVar46;
      local_23d = 1;
      local_1e0 = local_1c0;
      local_1d8 = local_1b8;
      if ((local_4b00 == '\0') || (*(char *)((long)local_228 + 9) != '\0')) {
        FUN_010850c0(&local_4b18,local_238,local_230,local_228,local_220,0);
      }
      memcpy(&local_32f0,&local_4b18,0x1828);
      break;
    case 0x19:
      lVar34 = *(long *)puVar2;
      uVar44 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
      if (uVar44 < 7) {
        uVar20 = 0;
        if (uVar44 != 0) goto LAB_01083898;
      }
      else {
        uVar20 = 2;
        while( true ) {
          uVar43 = uVar20 - 2;
          uVar18 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
          if (uVar43 < uVar18) {
            iVar31 = *(int *)((long)puVar12 + (ulong)uVar43 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar43 + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar31 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar31 = 0;
            }
          }
          local_dc = local_dc + iVar31;
          if (uVar20 - 1 < uVar18) {
            iVar31 = *(int *)((long)puVar12 + (ulong)(uVar20 - 1) * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)(uVar20 - 1) + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            iVar31 = 0;
            if (piVar25 != (int *)0x0) {
              if (*piVar25 == 0) {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
              else {
                iVar31 = 0;
              }
            }
          }
          local_e0 = local_e0 + iVar31;
          FUN_01084968(&local_4b28,local_dc);
          if (uVar44 <= uVar20 + 6) break;
          lVar34 = *(long *)puVar2;
          uVar20 = uVar20 + 2;
        }
        for (; uVar20 < uVar44; uVar20 = uVar20 + 6) {
LAB_01083898:
          uVar43 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
          if (uVar20 < uVar43) {
            iVar31 = *(int *)((long)puVar12 + (ulong)uVar20 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar20 + 2);
            if (iVar31 == 1) {
              iVar31 = *piVar25;
              if (iVar31 < 0) {
                iVar31 = -(0x2000 - iVar31 >> 0xe);
              }
              else {
                iVar31 = iVar31 + 0x2000 >> 0xe;
              }
            }
            else if (iVar31 == 2) {
              iVar31 = *piVar25 << 0x10;
            }
            else {
              iVar31 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar31 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar31 = 0;
            }
          }
          uVar18 = uVar20 + 1;
          if (uVar18 < uVar43) {
            iVar17 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar17 == 1) {
              iVar17 = *piVar25;
              if (iVar17 < 0) {
                iVar17 = -(0x2000 - iVar17 >> 0xe);
              }
              else {
                iVar17 = iVar17 + 0x2000 >> 0xe;
              }
            }
            else if (iVar17 == 2) {
              iVar17 = *piVar25 << 0x10;
            }
            else {
              iVar17 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar17 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar17 = 0;
            }
          }
          if (uVar20 + 2 < uVar43) {
            iVar38 = *(int *)((long)puVar12 + (ulong)(uVar20 + 2) * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)(uVar20 + 2) + 2);
            if (iVar38 == 1) {
              iVar38 = *piVar25;
              if (iVar38 < 0) {
                iVar38 = -(0x2000 - iVar38 >> 0xe);
              }
              else {
                iVar38 = iVar38 + 0x2000 >> 0xe;
              }
            }
            else if (iVar38 == 2) {
              iVar38 = *piVar25 << 0x10;
            }
            else {
              iVar38 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar38 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar38 = 0;
            }
          }
          iVar31 = local_dc + iVar31;
          iVar17 = local_e0 + iVar17;
          if (uVar20 + 3 < uVar43) {
            iVar37 = *(int *)((long)puVar12 + (ulong)(uVar20 + 3) * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)(uVar20 + 3) + 2);
            if (iVar37 == 1) {
              iVar37 = *piVar25;
              if (iVar37 < 0) {
                iVar37 = -(0x2000 - iVar37 >> 0xe);
              }
              else {
                iVar37 = iVar37 + 0x2000 >> 0xe;
              }
            }
            else if (iVar37 == 2) {
              iVar37 = *piVar25 << 0x10;
            }
            else {
              iVar37 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar37 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar37 = 0;
            }
          }
                    /* try { // try from 01083ac8 to 01183bcf has its CatchHandler @ 01083ac8
                       catch() { ... } // from try @ 01083ac8 with catch @ 01083ac8
                       catch() { ... } // from try @ 01083bdc with catch @ 01083ac8 */
          if (uVar20 + 4 < uVar43) {
            iVar32 = *(int *)((long)puVar12 + (ulong)(uVar20 + 4) * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)(uVar20 + 4) + 2);
            if (iVar32 == 1) {
              iVar32 = *piVar25;
              if (iVar32 < 0) {
                iVar32 = -(0x2000 - iVar32 >> 0xe);
              }
              else {
                iVar32 = iVar32 + 0x2000 >> 0xe;
              }
            }
            else if (iVar32 == 2) {
              iVar32 = *piVar25 << 0x10;
            }
            else {
              iVar32 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar32 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar32 = 0;
            }
          }
          if (uVar20 + 5 < uVar43) {
            iVar21 = *(int *)((long)puVar12 + (ulong)(uVar20 + 5) * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)(uVar20 + 5) + 2);
            if (iVar21 == 1) {
              iVar21 = *piVar25;
              if (iVar21 < 0) {
                iVar21 = -(0x2000 - iVar21 >> 0xe);
              }
              else {
                iVar21 = iVar21 + 0x2000 >> 0xe;
              }
            }
            else if (iVar21 == 2) {
              iVar21 = *piVar25 << 0x10;
            }
            else {
              iVar21 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar21 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar21 = 0;
            }
          }
                    /* try { // try from 01083bd0 to 01183bdb has its CatchHandler @ 01083c50 */
                    /* try { // try from 01083bdc to 01183c53 has its CatchHandler @ 01083ac8 */
          FUN_01084adc(&local_4b28);
          local_e0 = iVar21 + iVar37 + iVar17;
          local_dc = iVar32 + iVar38 + iVar31;
        }
      }
      goto LAB_01083bf4;
    case 0x1a:
      uVar44 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
      if (uVar44 != 0) {
        uVar20 = 0;
        do {
          if ((uVar44 - uVar20 & 1) == 0) {
            lVar34 = *(long *)puVar2;
            iVar31 = local_dc;
          }
          else {
            lVar34 = *(long *)puVar2;
            if (uVar20 < (uint)((ulong)(lVar34 - (long)piVar41) >> 3)) {
              iVar31 = *(int *)((long)puVar12 + (ulong)uVar20 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar20 + 2);
              if (iVar31 == 1) {
                iVar31 = *piVar25;
                if (iVar31 < 0) {
                  iVar31 = -(0x2000 - iVar31 >> 0xe);
                }
                else {
                  iVar31 = iVar31 + 0x2000 >> 0xe;
                }
              }
              else if (iVar31 == 2) {
                iVar31 = *piVar25 << 0x10;
              }
              else {
                iVar31 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar31 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
            }
            uVar20 = uVar20 + 1;
            iVar31 = local_dc + iVar31;
          }
          uVar43 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
          if (uVar20 < uVar43) {
            iVar17 = *(int *)((long)puVar12 + (ulong)uVar20 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar20 + 2);
            if (iVar17 == 1) {
              iVar17 = *piVar25;
              if (iVar17 < 0) {
                iVar17 = -(0x2000 - iVar17 >> 0xe);
              }
              else {
                iVar17 = iVar17 + 0x2000 >> 0xe;
              }
            }
            else if (iVar17 == 2) {
              iVar17 = *piVar25 << 0x10;
            }
            else {
              iVar17 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar17 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar17 = 0;
            }
          }
          uVar18 = uVar20 + 1;
          if (uVar18 < uVar43) {
            iVar38 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar38 == 1) {
              iVar38 = *piVar25;
              if (iVar38 < 0) {
                iVar38 = -(0x2000 - iVar38 >> 0xe);
              }
              else {
                iVar38 = iVar38 + 0x2000 >> 0xe;
              }
            }
            else if (iVar38 == 2) {
              iVar38 = *piVar25 << 0x10;
            }
            else {
              iVar38 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar38 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar38 = 0;
            }
          }
          uVar18 = uVar20 + 2;
          if (uVar18 < uVar43) {
            iVar37 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar37 == 1) {
              iVar37 = *piVar25;
              if (iVar37 < 0) {
                iVar37 = -(0x2000 - iVar37 >> 0xe);
              }
              else {
                iVar37 = iVar37 + 0x2000 >> 0xe;
              }
            }
            else if (iVar37 == 2) {
              iVar37 = *piVar25 << 0x10;
            }
            else {
              iVar37 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar37 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar37 = 0;
            }
          }
          iVar38 = iVar38 + iVar31;
          uVar18 = uVar20 + 3;
          iVar37 = iVar37 + local_e0 + iVar17;
          if (uVar18 < uVar43) {
            iVar32 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar32 == 1) {
              iVar32 = *piVar25;
              if (iVar32 < 0) {
                iVar32 = -(0x2000 - iVar32 >> 0xe);
              }
              else {
                iVar32 = iVar32 + 0x2000 >> 0xe;
              }
            }
            else if (iVar32 == 2) {
              iVar32 = *piVar25 << 0x10;
            }
            else {
              iVar32 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar32 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar32 = 0;
            }
          }
          iVar32 = iVar32 + iVar37;
          FUN_01084adc(&local_4b28,iVar31,local_e0 + iVar17,iVar38,iVar37,iVar38,iVar32);
          uVar20 = uVar20 + 4;
          local_e0 = iVar32;
          local_dc = iVar38;
        } while (uVar20 < uVar44);
      }
      goto LAB_01083bf4;
    case 0x1b:
      uVar44 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
      if (uVar44 != 0) {
        uVar20 = 0;
        do {
          if ((uVar44 - uVar20 & 1) == 0) {
            lVar34 = *(long *)puVar2;
            iVar31 = local_e0;
          }
          else {
            lVar34 = *(long *)puVar2;
            if (uVar20 < (uint)((ulong)(lVar34 - (long)piVar41) >> 3)) {
              iVar31 = *(int *)((long)puVar12 + (ulong)uVar20 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar20 + 2);
              if (iVar31 == 1) {
                iVar31 = *piVar25;
                if (iVar31 < 0) {
                  iVar31 = -(0x2000 - iVar31 >> 0xe);
                }
                else {
                  iVar31 = iVar31 + 0x2000 >> 0xe;
                }
              }
              else if (iVar31 == 2) {
                iVar31 = *piVar25 << 0x10;
              }
              else {
                iVar31 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar31 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
            }
            uVar20 = uVar20 + 1;
            iVar31 = local_e0 + iVar31;
          }
          uVar43 = (uint)((ulong)(lVar34 - (long)piVar41) >> 3);
          if (uVar20 < uVar43) {
            iVar17 = *(int *)((long)puVar12 + (ulong)uVar20 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar20 + 2);
            if (iVar17 == 1) {
              iVar17 = *piVar25;
              if (iVar17 < 0) {
                iVar17 = -(0x2000 - iVar17 >> 0xe);
              }
              else {
                iVar17 = iVar17 + 0x2000 >> 0xe;
              }
            }
            else if (iVar17 == 2) {
              iVar17 = *piVar25 << 0x10;
            }
            else {
              iVar17 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar17 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar17 = 0;
            }
          }
          uVar18 = uVar20 + 1;
          if (uVar18 < uVar43) {
            iVar38 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar38 == 1) {
              iVar38 = *piVar25;
              if (iVar38 < 0) {
                iVar38 = -(0x2000 - iVar38 >> 0xe);
              }
              else {
                iVar38 = iVar38 + 0x2000 >> 0xe;
              }
            }
            else if (iVar38 == 2) {
              iVar38 = *piVar25 << 0x10;
            }
            else {
              iVar38 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar38 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar38 = 0;
            }
          }
          uVar18 = uVar20 + 2;
          if (uVar18 < uVar43) {
            iVar37 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar37 == 1) {
              iVar37 = *piVar25;
              if (iVar37 < 0) {
                iVar37 = -(0x2000 - iVar37 >> 0xe);
              }
              else {
                iVar37 = iVar37 + 0x2000 >> 0xe;
              }
            }
            else if (iVar37 == 2) {
              iVar37 = *piVar25 << 0x10;
            }
            else {
              iVar37 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar37 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar37 = 0;
            }
          }
          uVar18 = uVar20 + 3;
          if (uVar18 < uVar43) {
            iVar32 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
            piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
            if (iVar32 == 1) {
              iVar32 = *piVar25;
              if (iVar32 < 0) {
                iVar32 = -(0x2000 - iVar32 >> 0xe);
              }
              else {
                iVar32 = iVar32 + 0x2000 >> 0xe;
              }
            }
            else if (iVar32 == 2) {
              iVar32 = *piVar25 << 0x10;
            }
            else {
              iVar32 = *piVar25;
            }
          }
          else {
            piVar25 = (int *)puVar12[1];
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              iVar32 = 0;
            }
            else {
              *piVar25 = 0x82;
              iVar32 = 0;
            }
          }
          iVar32 = iVar32 + iVar38 + local_dc + iVar17;
          FUN_01084adc(&local_4b28);
          uVar20 = uVar20 + 4;
          local_e0 = iVar37 + iVar31;
          local_dc = iVar32;
        } while (uVar20 < uVar44);
      }
      goto LAB_01083bf4;
    case 0x1c:
      if (pbVar23 < pbVar3) {
        pbVar24 = pbVar23 + 1;
        puVar28[3] = pbVar24;
        uVar36 = (ushort)*pbVar23;
        pbVar23 = pbVar24;
        uVar16 = uVar36;
        if (pbVar3 <= pbVar24) goto LAB_01083c20;
LAB_0108346c:
        uVar36 = uVar16;
        puVar28[3] = pbVar23 + 1;
        uVar16 = (ushort)*pbVar23;
      }
      else {
        piVar25 = (int *)*puVar28;
        if ((piVar25 != (int *)0x0) && (*piVar25 == 0)) {
          *piVar25 = 0x55;
          uVar16 = 0;
          if (pbVar3 <= pbVar23) {
            uVar36 = 0;
            goto LAB_01083c20;
          }
          goto LAB_0108346c;
        }
        uVar36 = 0;
        uVar16 = 0;
        if (pbVar23 < pbVar3) goto LAB_0108346c;
LAB_01083c20:
        piVar25 = (int *)*puVar28;
        if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
          uVar16 = 0;
        }
        else {
          *piVar25 = 0x55;
          uVar16 = 0;
        }
      }
      puVar27 = *(uint **)puVar2;
      if (puVar27 == puVar2) {
LAB_0108216c:
        piVar25 = (int *)puVar12[1];
joined_r0x01082180:
        if ((piVar25 != (int *)0x0) && (*piVar25 == 0)) {
          *piVar25 = 0x82;
        }
      }
      else {
        *puVar27 = (int)(short)(uVar16 | uVar36 << 8);
        puVar27[1] = 2;
        *(uint **)puVar2 = puVar27 + 2;
      }
      goto LAB_01082194;
    case 0x1e:
    case 0x1f:
      uVar20 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
      if (uVar20 != 0) {
        bVar10 = uVar44 == 0x1f;
        uVar44 = 0;
        do {
          if (bVar10) {
            uVar43 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
            if (uVar44 < uVar43) {
              iVar31 = *(int *)((long)puVar12 + (ulong)uVar44 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar44 + 2);
              if (iVar31 == 1) {
                iVar31 = *piVar25;
                if (iVar31 < 0) {
                  iVar17 = -(0x2000 - iVar31 >> 0xe);
                }
                else {
                  iVar17 = iVar31 + 0x2000 >> 0xe;
                }
              }
              else if (iVar31 == 2) {
                iVar17 = *piVar25 << 0x10;
              }
              else {
                iVar17 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar17 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar17 = 0;
              }
            }
            uVar18 = uVar44 + 1;
            if (uVar18 < uVar43) {
              iVar31 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
              if (iVar31 == 1) {
                iVar31 = *piVar25;
                if (iVar31 < 0) {
                  iVar31 = -(0x2000 - iVar31 >> 0xe);
                }
                else {
                  iVar31 = iVar31 + 0x2000 >> 0xe;
                }
              }
              else if (iVar31 == 2) {
                iVar31 = *piVar25 << 0x10;
              }
              else {
                iVar31 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar31 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
            }
            uVar18 = uVar44 + 2;
            if (uVar18 < uVar43) {
              iVar38 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
              if (iVar38 == 1) {
                iVar38 = *piVar25;
                if (iVar38 < 0) {
                  iVar37 = -(0x2000 - iVar38 >> 0xe);
                }
                else {
                  iVar37 = iVar38 + 0x2000 >> 0xe;
                }
              }
              else if (iVar38 == 2) {
                iVar37 = *piVar25 << 0x10;
              }
              else {
                iVar37 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar37 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar37 = 0;
              }
            }
            iVar31 = iVar31 + local_dc + iVar17;
            uVar18 = uVar44 + 3;
            if (uVar18 < uVar43) {
              iVar17 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
              if (iVar17 == 1) {
                iVar17 = *piVar25;
                if (iVar17 < 0) {
                  iVar38 = -(0x2000 - iVar17 >> 0xe);
                }
                else {
                  iVar38 = iVar17 + 0x2000 >> 0xe;
                }
              }
              else if (iVar17 == 2) {
                iVar38 = *piVar25 << 0x10;
              }
              else {
                iVar38 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar38 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar38 = 0;
              }
            }
            iVar38 = iVar38 + iVar37 + local_e0;
            if (uVar20 - uVar44 == 5) {
              uVar18 = uVar44 + 4;
              if (uVar18 < uVar43) {
                iVar17 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
                piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
                if (iVar17 == 1) {
                  iVar17 = *piVar25;
                  if (iVar17 < 0) {
                    iVar17 = -(0x2000 - iVar17 >> 0xe);
                  }
                  else {
                    iVar17 = iVar17 + 0x2000 >> 0xe;
                  }
                }
                else if (iVar17 == 2) {
                  iVar17 = *piVar25 << 0x10;
                }
                else {
                  iVar17 = *piVar25;
                }
              }
              else {
                piVar25 = (int *)puVar12[1];
                if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                  iVar17 = 0;
                }
                else {
                  *piVar25 = 0x82;
                  iVar17 = 0;
                }
              }
              bVar10 = false;
              iVar31 = iVar17 + iVar31;
LAB_010829f0:
              uVar44 = uVar44 + 1;
            }
            else {
              bVar10 = false;
            }
          }
          else {
            uVar43 = (uint)((ulong)(*(long *)puVar2 - (long)piVar41) >> 3);
            if (uVar44 < uVar43) {
              iVar31 = *(int *)((long)puVar12 + (ulong)uVar44 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar44 + 2);
              if (iVar31 == 1) {
                iVar31 = *piVar25;
                if (iVar31 < 0) {
                  iVar31 = -(0x2000 - iVar31 >> 0xe);
                }
                else {
                  iVar31 = iVar31 + 0x2000 >> 0xe;
                }
              }
              else if (iVar31 == 2) {
                iVar31 = *piVar25 << 0x10;
              }
              else {
                iVar31 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar31 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
            }
            uVar18 = uVar44 + 1;
            if (uVar18 < uVar43) {
              iVar17 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
              if (iVar17 == 1) {
                iVar17 = *piVar25;
                if (iVar17 < 0) {
                  iVar17 = -(0x2000 - iVar17 >> 0xe);
                }
                else {
                  iVar17 = iVar17 + 0x2000 >> 0xe;
                }
              }
              else if (iVar17 == 2) {
                iVar17 = *piVar25 << 0x10;
              }
              else {
                iVar17 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar17 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar17 = 0;
              }
            }
            uVar18 = uVar44 + 2;
            if (uVar18 < uVar43) {
              iVar38 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
              if (iVar38 == 1) {
                iVar38 = *piVar25;
                if (iVar38 < 0) {
                  iVar38 = -(0x2000 - iVar38 >> 0xe);
                }
                else {
                  iVar38 = iVar38 + 0x2000 >> 0xe;
                }
              }
              else if (iVar38 == 2) {
                iVar38 = *piVar25 << 0x10;
              }
              else {
                iVar38 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar38 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar38 = 0;
              }
            }
            uVar18 = uVar44 + 3;
            iVar38 = iVar38 + local_e0 + iVar31;
            if (uVar18 < uVar43) {
              iVar31 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
              piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
              if (iVar31 == 1) {
                iVar31 = *piVar25;
                if (iVar31 < 0) {
                  iVar31 = -(0x2000 - iVar31 >> 0xe);
                }
                else {
                  iVar31 = iVar31 + 0x2000 >> 0xe;
                }
              }
              else if (iVar31 == 2) {
                iVar31 = *piVar25 << 0x10;
              }
              else {
                iVar31 = *piVar25;
              }
            }
            else {
              piVar25 = (int *)puVar12[1];
              if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                iVar31 = 0;
              }
              else {
                *piVar25 = 0x82;
                iVar31 = 0;
              }
            }
            iVar31 = iVar31 + iVar17 + local_dc;
            if (uVar20 - uVar44 == 5) {
              uVar18 = uVar44 + 4;
              if (uVar18 < uVar43) {
                iVar17 = *(int *)((long)puVar12 + (ulong)uVar18 * 8 + 0x14);
                piVar25 = (int *)(puVar12 + (ulong)uVar18 + 2);
                if (iVar17 == 1) {
                  iVar17 = *piVar25;
                  if (iVar17 < 0) {
                    iVar17 = -(0x2000 - iVar17 >> 0xe);
                  }
                  else {
                    iVar17 = iVar17 + 0x2000 >> 0xe;
                  }
                }
                else if (iVar17 == 2) {
                  iVar17 = *piVar25 << 0x10;
                }
                else {
                  iVar17 = *piVar25;
                }
              }
              else {
                piVar25 = (int *)puVar12[1];
                if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
                  iVar17 = 0;
                }
                else {
                  *piVar25 = 0x82;
                  iVar17 = 0;
                }
              }
              iVar38 = iVar17 + iVar38;
              bVar10 = true;
              goto LAB_010829f0;
            }
            bVar10 = true;
          }
          FUN_01084adc(&local_4b28);
          uVar44 = uVar44 + 4;
          local_e0 = iVar38;
          local_dc = iVar31;
        } while (uVar44 < uVar20);
      }
LAB_01083bf4:
      *(int **)puVar2 = piVar41;
      goto LAB_01082194;
    default:
      if (uVar44 < 0xf7) {
        puVar27 = *(uint **)puVar2;
        if (puVar27 == puVar2) {
LAB_01082178:
          piVar25 = (int *)puVar12[1];
          goto joined_r0x01082180;
        }
        *puVar27 = uVar44 - 0x8b;
        puVar27[1] = 2;
        *(uint **)puVar2 = puVar27 + 2;
      }
      else if (uVar44 < 0xfb) {
        if (pbVar23 < pbVar3) {
          puVar28[3] = pbVar23 + 1;
          uVar20 = (uint)*pbVar23;
        }
        else {
          piVar25 = (int *)*puVar28;
          if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
            uVar20 = 0;
          }
          else {
            *piVar25 = 0x55;
            uVar20 = 0;
          }
        }
        puVar27 = *(uint **)puVar2;
        if (puVar27 == puVar2) goto LAB_01082178;
        uVar44 = (uVar20 | uVar44 * 0x100 - 0xf700) + 0x6c;
LAB_010820ec:
        *puVar27 = uVar44;
        puVar27[1] = 2;
        *(uint **)puVar2 = puVar27 + 2;
      }
      else {
        if (uVar44 != 0xff) {
          if (pbVar23 < pbVar3) {
            puVar28[3] = pbVar23 + 1;
            uVar20 = (uint)*pbVar23;
          }
          else {
            piVar25 = (int *)*puVar28;
            if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
              uVar20 = 0;
            }
            else {
              *piVar25 = 0x55;
              uVar20 = 0;
            }
          }
          puVar27 = *(uint **)puVar2;
          if (puVar27 != puVar2) {
            uVar44 = -(uVar20 | uVar44 * 0x100 - 0xfb00) - 0x6c;
            goto LAB_010820ec;
          }
          goto LAB_01082178;
        }
        if (pbVar23 < pbVar3) {
          pbVar24 = pbVar23 + 1;
          puVar28[3] = pbVar24;
          uVar44 = (uint)*pbVar23;
          pbVar23 = pbVar24;
          if (pbVar3 <= pbVar24) goto LAB_01081b3c;
LAB_01082104:
          pbVar23 = pbVar24 + 1;
          puVar28[3] = pbVar23;
          uVar20 = (uint)*pbVar24;
joined_r0x01081b54:
          if (pbVar3 <= pbVar23) goto LAB_01081b58;
LAB_0108211c:
          puVar28[3] = pbVar23 + 1;
          uVar43 = (uint)*pbVar23;
          pbVar23 = pbVar23 + 1;
joined_r0x01082130:
          if (pbVar3 <= pbVar23) goto LAB_01081b74;
LAB_01082134:
          puVar28[3] = pbVar23 + 1;
          uVar18 = (uint)*pbVar23;
        }
        else {
          piVar25 = (int *)*puVar28;
          pbVar24 = pbVar23;
          if ((piVar25 != (int *)0x0) && (*piVar25 == 0)) {
            *piVar25 = 0x55;
            uVar44 = 0;
            if (pbVar3 <= pbVar23) goto LAB_01081b3c;
            uVar44 = 0;
            goto LAB_01082104;
          }
          uVar44 = 0;
          if (pbVar23 < pbVar3) goto LAB_01082104;
LAB_01081b3c:
          piVar25 = (int *)*puVar28;
          if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
            uVar20 = 0;
            goto joined_r0x01081b54;
          }
          *piVar25 = 0x55;
          uVar20 = 0;
          if (pbVar23 < pbVar3) {
            uVar20 = 0;
            goto LAB_0108211c;
          }
LAB_01081b58:
          piVar25 = (int *)*puVar28;
          if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
            uVar43 = 0;
            goto joined_r0x01082130;
          }
          *piVar25 = 0x55;
          uVar43 = 0;
          if (pbVar23 < pbVar3) {
            uVar43 = 0;
            goto LAB_01082134;
          }
LAB_01081b74:
          piVar25 = (int *)*puVar28;
          if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
            uVar18 = 0;
          }
          else {
            *piVar25 = 0x55;
            uVar18 = 0;
          }
        }
        puVar27 = *(uint **)puVar2;
        if (puVar27 == puVar2) goto LAB_0108216c;
        *puVar27 = uVar44 << 0x18 | uVar20 << 0x10 | uVar43 << 8 | uVar18;
        puVar27[1] = 0;
        *(uint **)puVar2 = puVar27 + 2;
      }
      goto LAB_01082194;
    }
    *(int **)puVar2 = piVar41;
    goto LAB_01082194;
  }
  goto LAB_01083f54;
switchD_010821e0_caseD_e:
  piVar25 = *(int **)puVar2;
  iVar11 = (int)((ulong)((long)piVar25 - (long)piVar41) >> 3);
  if (((iVar11 == 1) || (iVar11 == 5)) && (local_e4[0] == '\0')) {
    if (*(int *)((long)puVar12 + 0x14) == 1) {
      iVar11 = *piVar41;
      if (iVar11 < 0) {
        iVar11 = -(0x2000 - iVar11 >> 0xe);
      }
      else {
        iVar11 = iVar11 + 0x2000 >> 0xe;
      }
    }
    else if (*(int *)((long)puVar12 + 0x14) == 2) {
      iVar11 = *piVar41 << 0x10;
    }
    else {
      iVar11 = *piVar41;
    }
    *param_8 = iVar11 + iVar42;
  }
  local_e4[0] = '\x01';
  if (*(char *)(param_1[0x15] + 0x5d9) == '\0') {
    if ((char)local_240 != '\0') {
      FUN_01084968(&local_4b28,local_1c0 & 0xffffffff,local_1b8 & 0xffffffff);
      if (local_1b0 != '\0') {
        FUN_01086160(&local_4b28,&local_4b18,auStack_200,local_1f0,local_1e8,1);
      }
      local_23d = 1;
                    /* WARNING: Ignoring partial resolution of indirect */
      local_240._0_1_ = 0;
      local_1b0 = '\0';
      piVar25 = *(int **)puVar2;
    }
    if (1 < (uint)((ulong)((long)piVar25 - (long)piVar41) >> 3)) {
      if (param_5 != '\0') {
        iVar11 = 0x12;
        goto LAB_01083f20;
      }
      if (piVar25 == piVar41) {
        piVar39 = (int *)puVar12[1];
        if ((piVar39 == (int *)0x0) || (*piVar39 != 0)) goto LAB_0108405c;
        iVar42 = 0xa1;
LAB_01084288:
        uVar44 = 0;
        *piVar39 = iVar42;
        if (piVar25 == piVar41) goto LAB_0108401c;
LAB_01084068:
        if (piVar25[-1] == 2) {
          *(int **)puVar2 = piVar25 + -2;
          uVar20 = piVar25[-2];
          piVar25 = piVar25 + -2;
        }
        else {
          piVar39 = (int *)puVar12[1];
          if ((piVar39 != (int *)0x0) && (*piVar39 == 0)) {
            iVar42 = 0xa0;
            goto LAB_0108429c;
          }
LAB_010840b4:
          uVar20 = 0;
        }
        piVar39 = piVar25;
        if (piVar25 != piVar41) goto LAB_010840c0;
LAB_0108408c:
        piVar25 = (int *)puVar12[1];
        if ((piVar25 == (int *)0x0) || (*piVar25 != 0)) {
          local_e0 = 0;
        }
        else {
          *piVar25 = 0xa1;
          local_e0 = 0;
        }
      }
      else {
        if (piVar25[-1] == 2) {
          *(int **)puVar2 = piVar25 + -2;
          uVar44 = piVar25[-2];
          piVar25 = piVar25 + -2;
        }
        else {
          piVar39 = (int *)puVar12[1];
          if ((piVar39 != (int *)0x0) && (*piVar39 == 0)) {
            iVar42 = 0xa0;
            goto LAB_01084288;
          }
LAB_0108405c:
          uVar44 = 0;
        }
        if (piVar25 != piVar41) goto LAB_01084068;
LAB_0108401c:
        piVar39 = (int *)puVar12[1];
        if ((piVar39 == (int *)0x0) || (*piVar39 != 0)) goto LAB_010840b4;
        iVar42 = 0xa1;
LAB_0108429c:
        uVar20 = 0;
        *piVar39 = iVar42;
        piVar39 = piVar25;
        if (piVar25 == piVar41) goto LAB_0108408c;
LAB_010840c0:
        piVar39 = piVar25 + -2;
        *(int **)puVar2 = piVar39;
        if (piVar25[-1] == 1) {
          iVar42 = *piVar39;
          if (iVar42 < 0) {
            local_e0 = -(0x2000 - iVar42 >> 0xe);
          }
          else {
            local_e0 = iVar42 + 0x2000 >> 0xe;
          }
        }
        else if (piVar25[-1] == 2) {
          local_e0 = *piVar39 << 0x10;
        }
        else {
          local_e0 = *piVar39;
        }
      }
      if (piVar39 == piVar41) {
        piVar41 = (int *)puVar12[1];
        if (piVar41 == (int *)0x0) {
          local_dc = 0;
        }
        else if (*piVar41 == 0) {
          *piVar41 = 0xa1;
          local_dc = 0;
        }
        else {
          local_dc = 0;
        }
      }
      else {
        piVar41 = piVar39 + -2;
        *(int **)puVar2 = piVar41;
        if (piVar39[-1] == 1) {
          iVar42 = *piVar41;
          if (iVar42 < 0) {
            local_dc = -(0x2000 - iVar42 >> 0xe);
          }
          else {
            local_dc = iVar42 + 0x2000 >> 0xe;
          }
        }
        else if (piVar39[-1] == 2) {
          local_dc = *piVar41 << 0x10;
        }
        else {
          local_dc = *piVar41;
        }
      }
      uStack_6340 = (undefined8 **)0x0;
      local_6348 = (undefined8 *)0x0;
      iVar11 = 0x12;
      ppuStack_6350 = (undefined8 **)0x0;
      local_6358 = (undefined8 *)0x0;
      if (uVar44 < 0x100) {
        lVar34 = *(long *)(lVar45 + 0x98);
        if (*(long *)(lVar34 + 0x4f0) != 0) {
          if (uVar44 < 0x100) {
            sVar30 = (&DAT_0145ee10)[uVar44];
            uVar44 = *(uint *)(lVar34 + 0x14);
          }
          else {
            sVar30 = 0;
            uVar44 = *(uint *)(lVar34 + 0x14);
          }
          if (uVar44 != 0) {
            uVar33 = 0;
            do {
              if (*(short *)(*(long *)(lVar34 + 0x4f0) + uVar33 * 2) == sVar30) {
                if (-1 < (int)uVar33) {
                  puVar28 = *(undefined8 **)(*(long *)(*(long *)(lVar45 + 8) + 0xf0) + 0x60);
                  if (puVar28 == (undefined8 *)0x0) {
                    iVar11 = FUN_01080bdc(*(long *)(*(long *)(lVar45 + 8) + 0x428) + 0x508,uVar33,
                                          &ppuStack_d0,&local_d8);
                    ppuVar8 = ppuStack_d0;
                  }
                  else {
                    iVar11 = (**(code **)*puVar28)(puVar28[1],uVar33,&local_c8);
                    local_d8 = (long)local_c0;
                    ppuVar8 = local_c8;
                  }
                  ppuStack_d0 = ppuVar8;
                  if (iVar11 != 0) goto LAB_01083f20;
                  lVar34 = (long)ppuVar8 + local_d8;
                  ppuStack_6350 = ppuVar8;
                  local_6348 = (undefined8 *)lVar34;
                  uStack_6340 = ppuVar8;
                  FUN_010812a8(param_1,&local_6358,param_3,param_4,1,local_dc,local_e0,auStack_4b2c)
                  ;
                  plVar29 = *(long **)(*(long *)(*(long *)(lVar45 + 8) + 0xf0) + 0x60);
                  if (plVar29 == (long *)0x0) {
                    lVar34 = *(long *)(*(long *)(lVar45 + 8) + 0x428);
                    if (*(long *)(lVar34 + 0x538) == 0) {
                      FT_Stream_ReleaseFrame(*(undefined8 *)(lVar34 + 0x508),&ppuStack_6350);
                    }
                  }
                  else {
                    local_c0 = (int)lVar34 - (int)ppuVar8;
                    local_c8 = ppuVar8;
                    (**(code **)(*plVar29 + 8))(plVar29[1],&local_c8);
                  }
                  uStack_6340 = (undefined8 **)0x0;
                  local_6348 = (undefined8 *)0x0;
                  iVar11 = 0x12;
                  ppuStack_6350 = (undefined8 **)0x0;
                  local_6358 = (undefined8 *)0x0;
                  if (0xff < uVar20) goto LAB_01083f20;
                  lVar34 = *(long *)(lVar45 + 0x98);
                  if (*(long *)(lVar34 + 0x4f0) == 0) goto LAB_01083f20;
                  if (uVar20 < 0x100) {
                    sVar30 = (&DAT_0145ee10)[uVar20];
                    uVar44 = *(uint *)(lVar34 + 0x14);
                  }
                  else {
                    sVar30 = 0;
                    uVar44 = *(uint *)(lVar34 + 0x14);
                  }
                  if (uVar44 == 0) goto LAB_01084410;
                  uVar33 = 0;
                  goto LAB_010843bc;
                }
                break;
              }
              uVar43 = (int)uVar33 + 1;
              uVar33 = (ulong)uVar43;
            } while (uVar43 < uVar44);
          }
          iVar11 = 0x12;
        }
      }
      goto LAB_01083f20;
    }
  }
LAB_01083f34:
  iVar11 = 0;
LAB_01083f38:
  iVar42 = *(int *)ppuVar1;
  goto joined_r0x01083f2c;
  while (uVar20 = (int)uVar33 + 1, uVar33 = (ulong)uVar20, uVar20 < uVar44) {
LAB_010843bc:
    if (*(short *)(*(long *)(lVar34 + 0x4f0) + uVar33 * 2) == sVar30) {
      if (-1 < (int)uVar33) {
        puVar28 = *(undefined8 **)(*(long *)(*(long *)(lVar45 + 8) + 0xf0) + 0x60);
        if (puVar28 == (undefined8 *)0x0) {
          iVar11 = FUN_01080bdc(*(long *)(*(long *)(lVar45 + 8) + 0x428) + 0x508,uVar33,&ppuStack_d0
                                ,&local_d8);
        }
        else {
          iVar11 = (**(code **)*puVar28)(puVar28[1],uVar33,&local_c8);
          local_d8 = (long)local_c0;
          ppuStack_d0 = local_c8;
        }
        if (iVar11 == 0) {
          local_6348 = (undefined8 *)((long)ppuStack_d0 + local_d8);
          ppuStack_6350 = ppuStack_d0;
          uStack_6340 = ppuStack_d0;
          FUN_010812a8(param_1,&local_6358,param_3,param_4,1,0,0,auStack_4b2c);
          plVar29 = *(long **)(*(long *)(*(long *)(lVar45 + 8) + 0xf0) + 0x60);
          if (plVar29 == (long *)0x0) {
            lVar45 = *(long *)(*(long *)(lVar45 + 8) + 0x428);
            if (*(long *)(lVar45 + 0x538) == 0) {
              FT_Stream_ReleaseFrame(*(undefined8 *)(lVar45 + 0x508),&ppuStack_6350);
            }
          }
          else {
            local_c0 = (int)local_6348 - (int)ppuStack_6350;
            local_c8 = ppuStack_6350;
            (**(code **)(*plVar29 + 8))(plVar29[1],&local_c8);
          }
          iVar11 = 0;
        }
        goto LAB_01083f20;
      }
      break;
    }
  }
LAB_01084410:
  iVar11 = 0x12;
LAB_01083f20:
  iVar42 = *(int *)ppuVar1;
joined_r0x01083f2c:
  if (iVar42 == 0) {
LAB_01083f50:
    *(int *)ppuVar1 = iVar11;
  }
LAB_01083f54:
  local_288 = 0;
  local_278 = 0;
  local_270 = 0;
  ft_mem_free(local_2a0,local_268);
  uStack_150 = 0;
  local_268 = 0;
  ft_mem_free(local_168,local_130);
  uStack_110 = 0;
  local_130 = 0;
  ft_mem_free(local_128,local_f0);
  local_f0 = 0;
  ft_mem_free(uVar47,local_6380);
  if (!bVar9) {
    ft_mem_free(*puVar12,puVar12);
  }
  if (*(long *)(lVar6 + 0x28) != lVar22) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

