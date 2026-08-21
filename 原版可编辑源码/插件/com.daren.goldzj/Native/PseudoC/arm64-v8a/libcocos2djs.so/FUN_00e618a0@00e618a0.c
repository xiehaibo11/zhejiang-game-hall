
int FUN_00e618a0(long param_1,long param_2,undefined8 param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  short sVar2;
  undefined2 uVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  long *plVar26;
  long *plVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long local_33c0;
  long *plStack_33b8;
  undefined8 *local_33b0;
  long *plStack_33a8;
  undefined8 local_33a0;
  ulong uStack_3398;
  ulong local_3390;
  ulong uStack_3388;
  ulong uStack_3380;
  long local_3378;
  long lStack_3370;
  ulong uStack_3368;
  undefined8 uStack_3360;
  ulong local_3358;
  undefined8 local_3350;
  undefined8 uStack_3348;
  undefined8 local_3340;
  ulong local_3338;
  undefined8 local_3328;
  int local_32f0;
  long local_32e8;
  byte bStack_1f30;
  long local_1f20;
  long local_1f18;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  ulong local_98;
  undefined8 local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong local_78;
  long local_70 [2];
  
  uVar21 = **(undefined8 **)(param_1 + 8);
  memset(&local_3340,0,0x1430);
  local_3350 = 0;
  plStack_33a8 = (long *)0x0;
  uStack_3398 = 0;
  local_33a0 = 0;
  uStack_3368 = 0;
  lStack_3370 = 0;
  local_3358 = 0;
  uStack_3360 = 0;
  uStack_3388 = 0;
  local_3390 = 0;
  local_3378 = 0;
  uStack_3380 = 0;
  lVar22 = *(long *)(param_2 + 8);
  lVar18 = *(long *)(lVar22 + 0xa0);
  uStack_3348 = uVar21;
  if (lVar18 == 0) {
    iVar7 = 0x24;
    goto LAB_00e620b8;
  }
  lVar19 = *(long *)(lVar22 + 0x98);
  lVar10 = *(long *)(lVar18 + 0x50);
  plVar27 = *(long **)(lVar19 + 0x128);
  lVar24 = *plVar27;
  lStack_b8 = *(long *)(lVar10 + 0x18);
  if (lStack_b8 == 0) {
    uVar5 = param_5 >> 0x10 & 0xf;
LAB_00e6195c:
    uVar14 = uVar5;
    *(uint *)(lVar10 + 8) = uVar14;
    uVar9 = *(undefined8 *)(lVar18 + 0x40);
    uVar21 = *(undefined8 *)(lVar18 + 0x38);
    uVar29 = *(undefined8 *)(lVar18 + 0x20);
    uVar28 = *(undefined8 *)(lVar18 + 0x18);
    uVar31 = *(undefined8 *)(lVar18 + 0x30);
    uVar30 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined8 *)(lVar10 + 0x40) = *(undefined8 *)(lVar18 + 0x48);
    *(undefined8 *)(lVar10 + 0x18) = uVar29;
    *(undefined8 *)(lVar10 + 0x10) = uVar28;
    *(undefined8 *)(lVar10 + 0x28) = uVar31;
    *(undefined8 *)(lVar10 + 0x20) = uVar30;
    *(undefined8 *)(lVar10 + 0x38) = uVar9;
    *(undefined8 *)(lVar10 + 0x30) = uVar21;
    lStack_b8 = *(long *)(lVar10 + 0x18);
  }
  else {
    uVar14 = *(uint *)(lVar10 + 8);
    uVar5 = param_5 >> 0x10 & 0xf;
    if (uVar14 != uVar5) goto LAB_00e6195c;
  }
  local_b0 = *(long *)(lVar10 + 0x20);
  local_a0 = 0;
  local_98 = (ulong)uVar14;
  lStack_a8 = 0;
  plStack_33b8 = *(long **)(lVar22 + 0xd8);
  local_33c0 = lVar22;
  local_33b0 = &uStack_3348;
  local_c0 = lVar22;
  if (plStack_33b8 == (long *)0x0) {
    iVar7 = FUN_00e66f10(lVar22,(ulong)&local_33c0 | 8,param_1);
    if (iVar7 != 0) goto LAB_00e620b8;
    *(long **)(lVar22 + 0xd8) = plStack_33b8;
    *(code **)(lVar22 + 0xe0) = FUN_00e67534;
  }
  plVar6 = plStack_33b8;
  uVar11 = local_90 >> 0x20;
  local_90 = local_90 & 0xffffffff00000000;
  uVar15 = (ulong)param_4;
  if ((ulong)plStack_33b8[1] <= uVar15) {
    iVar7 = 6;
    local_90 = CONCAT44((int)uVar11,6);
    goto LAB_00e620b8;
  }
  uVar11 = (ulong)*(ushort *)(plStack_33b8[2] + uVar15 * 2) & 0x3fff;
  puVar25 = (&PTR_DAT_01c97340)[uVar11];
  plVar26 = plStack_33b8 + uVar11 + 4;
  plVar16 = (long *)*plVar26;
  if (plVar16 == (long *)0x0) {
    puVar20 = (&PTR_DAT_01c97148)[*(uint *)(puVar25 + 4)];
    uVar21 = *(undefined8 *)(*plStack_33b8 + 0xb8);
    plVar16 = (long *)FUN_00e1388c(uVar21,*(undefined8 *)(puVar20 + 8),&local_90);
    iVar7 = (int)local_90;
    if ((int)local_90 != 0) goto LAB_00e620b8;
    *plVar16 = (long)puVar25;
    plVar16[8] = (long)plVar6;
    if (*(code **)(puVar20 + 0x10) != (code *)0x0) {
      iVar7 = (**(code **)(puVar20 + 0x10))(plVar16,*plVar6);
      local_90 = CONCAT44(local_90._4_4_,iVar7);
      if (iVar7 != 0) {
        if (*(code **)(puVar20 + 0x20) != (code *)0x0) {
          (**(code **)(puVar20 + 0x20))(plVar16);
        }
        FUN_00e139fc(uVar21,plVar16);
        iVar7 = (int)local_90;
        if ((int)local_90 != 0) goto LAB_00e620b8;
        plVar16 = (long *)0x0;
        goto LAB_00e619fc;
      }
    }
    *plVar26 = (long)plVar16;
  }
LAB_00e619fc:
  puVar25 = (&PTR_DAT_01c97148)[*(uint *)(*plVar16 + 4)];
  plStack_33a8 = plVar16;
  if (*(code **)(puVar25 + 0x18) == (code *)0x0) {
    plVar16[6] = local_98;
    plVar16[5] = local_a0;
    plVar16[4] = lStack_a8;
    plVar16[3] = local_b0;
    plVar16[2] = lStack_b8;
    plVar16[1] = local_c0;
    pcVar12 = *(code **)(puVar25 + 0x30);
  }
  else {
    (**(code **)(puVar25 + 0x18))(plVar16,&local_c0);
    pcVar12 = *(code **)(puVar25 + 0x30);
  }
  if (((pcVar12 != (code *)0x0) && (iVar7 = (*pcVar12)(&uStack_3348,plVar16), iVar7 != 0)) ||
     (iVar7 = FT_Load_Glyph(lVar22,param_4,param_5 & 0xfffffffb | 0x2801), plVar6 = plStack_33b8,
     iVar7 != 0)) goto LAB_00e620b8;
  if (((int)local_98 == 1) &&
     ((cVar4 = *(char *)(*(long *)(lVar22 + 0xf0) + 0x70), cVar4 == '\0' ||
      ((cVar4 < '\0' && (*(char *)(param_1 + 0x21) == '\0')))))) {
    lVar18 = *(long *)(lVar22 + 0x98);
    lVar23 = *(long *)(*(long *)(lVar22 + 0xa0) + 0x50);
    local_d0 = 0;
    local_70[0] = 0;
    uVar1 = *(ushort *)(lVar22 + 0x88);
    sVar2 = *(short *)(lVar23 + 0x10);
    lVar10 = plStack_33b8[0x58];
    uVar21 = FT_DivFix(0x3e80000);
    uStack_88 = 0;
    local_90 = 0x10000;
    local_78 = 0x10000;
    uStack_80 = 0;
    if ((*(short *)(lVar22 + 0x88) != 0) &&
       (*(code **)((&PTR_DAT_01c97148)[*(uint *)(*plVar16 + 4)] + 0x28) != (code *)0x0)) {
      (**(code **)((&PTR_DAT_01c97148)[*(uint *)(*plVar16 + 4)] + 0x28))(plVar16,local_70,&local_d0)
      ;
      if ((sVar2 == (short)lVar10) && ((local_d0 < 1 || (local_d0 == plVar6[0x59])))) {
LAB_00e61ca4:
        if ((0 < local_70[0]) && (local_70[0] != plVar6[0x5a])) goto LAB_00e61cc0;
      }
      else {
        iVar7 = FUN_00e675d0(plStack_33b8[0x5e],*(undefined2 *)(lVar22 + 0x88),
                             *(undefined2 *)(*(long *)(lVar22 + 0xa0) + 0x18));
        uVar9 = FT_MulFix(iVar7 << 0x10,*(undefined8 *)(lVar23 + 0x18));
        iVar7 = FT_DivFix(uVar9,uVar21);
        plVar6[0x59] = local_d0;
        uVar3 = *(undefined2 *)(lVar23 + 0x10);
        plVar6[0x5b] = (long)(short)((uint)(iVar7 + 0x8000) >> 0x10);
        *(undefined2 *)(plVar6 + 0x58) = uVar3;
        if (sVar2 == (short)lVar10) goto LAB_00e61ca4;
LAB_00e61cc0:
        iVar7 = FUN_00e675d0(plStack_33b8[0x5e],*(undefined2 *)(lVar22 + 0x88),
                             *(undefined2 *)(*(long *)(lVar22 + 0xa0) + 0x18),local_70[0]);
        uVar9 = FT_MulFix((ulong)(uint)(iVar7 << 0x10),*(undefined8 *)(lVar23 + 0x20));
        iVar8 = FT_DivFix(uVar9,uVar21);
        plVar6[0x5a] = local_70[0];
        uVar3 = *(undefined2 *)(lVar23 + 0x10);
        plVar6[0x5c] = (long)(short)((uint)(iVar8 + 0x8000) >> 0x10);
        *(undefined2 *)(plVar6 + 0x58) = uVar3;
        lVar22 = FT_DivFix(((ulong)uVar1 * 0x10000 + -0x80000) - (ulong)(uint)(iVar7 << 0x10));
        plVar6[0x5d] = lVar22;
      }
      lVar18 = lVar18 + 200;
      FT_Outline_EmboldenXY(lVar18,plVar6[0x5b],plVar6[0x5c]);
      local_78 = plVar6[0x5d];
      FT_Outline_Transform(lVar18,&local_90);
    }
  }
  local_33a0 = CONCAT71(local_33a0._1_7_,*(char *)((long)plVar27 + 0xc));
  if (*(char *)((long)plVar27 + 0xc) != '\0') {
    local_3390 = plVar27[3];
    uStack_3398 = plVar27[2];
    uStack_3380 = plVar27[5];
    uStack_3388 = plVar27[4];
    lStack_3370 = plVar27[7];
    local_3378 = plVar27[6];
    local_90 = uStack_3398;
    uStack_88 = local_3390;
    uStack_80 = uStack_3388;
    local_78 = uStack_3380;
    iVar7 = FT_Matrix_Invert(&local_90);
    if (iVar7 == 0) {
      FT_Vector_Transform(&local_3378,&local_90);
    }
  }
  if (*(int *)(lVar19 + 0x90) == 0x6f75746c) {
    if ((char)local_33a0 != '\0') {
      FT_Outline_Translate(lVar19 + 200,local_3378,lStack_3370);
    }
    uStack_3368 = local_3338;
    uStack_3360 = local_3328;
    lVar18 = FT_MulFix(*(undefined8 *)(lVar19 + 0x50),local_3340);
    local_3358 = local_3338 + lVar18;
    local_3350 = local_3328;
    if (*(short *)(lVar19 + 0xca) == 0) {
      iVar7 = 0;
    }
    else {
      if ((*(code **)(puVar25 + 0x38) != (code *)0x0) &&
         (iVar7 = (**(code **)(puVar25 + 0x38))(param_4,&uStack_3348,lVar24 + 0x18,plVar16),
         iVar7 != 0)) goto LAB_00e620b8;
      if ((int)local_98 == 1) {
        uVar17 = uStack_3368;
        uVar13 = local_3358;
        uStack_3368 = uStack_3368 + 0x20 & 0xffffffffffffffc0;
        local_3358 = local_3358 + 0x20 & 0xffffffffffffffc0;
LAB_00e61f00:
        lVar18 = uStack_3368 - uVar17;
        lVar22 = local_3358 - uVar13;
      }
      else {
        if ((1 < local_32f0) && ((bStack_1f30 >> 2 & 1) == 0)) {
          lVar10 = local_32e8 + (long)local_32f0 * 0x58;
          lVar18 = *(long *)(local_32e8 + 8);
          lVar22 = *(long *)(lVar10 + -0x48);
          uVar13 = *(long *)(local_32e8 + 0x10) - lVar18;
          lVar10 = local_3358 - *(long *)(lVar10 + -0x50);
          uVar11 = lVar22 + lVar10;
          uVar17 = uVar13 - 8;
          if (0x17 < lVar18) {
            uVar17 = uVar13;
          }
          uVar13 = uVar11 + 8;
          if (0x17 < lVar10) {
            uVar13 = uVar11;
          }
          uStack_3368 = uVar17 + 0x20 & 0xffffffffffffffc0;
          local_3358 = uVar13 + 0x20 & 0xffffffffffffffc0;
          if ((0 < lVar18) && (*(long *)(local_32e8 + 0x10) <= (long)uStack_3368)) {
            uStack_3368 = uStack_3368 - 0x40;
          }
          if ((0 < lVar10) && ((long)local_3358 <= lVar22)) {
            local_3358 = local_3358 + 0x40;
          }
          goto LAB_00e61f00;
        }
        uVar11 = uStack_3368 + local_1f20 + 0x20 & 0xffffffffffffffc0;
        lVar18 = uVar11 - uStack_3368;
        uVar17 = local_3358 + local_1f18 + 0x20 & 0xffffffffffffffc0;
        lVar22 = uVar17 - local_3358;
        uStack_3368 = uVar11;
        local_3358 = uVar17;
      }
      iVar7 = 0;
      *(long *)(lVar19 + 0x110) = lVar18;
      *(long *)(lVar19 + 0x118) = lVar22;
    }
  }
  else {
    iVar7 = 7;
  }
  lVar18 = *(long *)(lVar19 + 0x60);
  lVar22 = *(long *)(lVar19 + 0x48);
  local_d0 = FT_MulFix(*(long *)(lVar19 + 0x58) - *(long *)(lVar19 + 0x40),plVar16[2]);
  lStack_c8 = FT_MulFix(lVar18 - lVar22,plVar16[3]);
  lVar24 = lVar24 + 0x18;
  if ((char)local_33a0 != '\0') {
    FT_Outline_Transform(lVar24,&uStack_3398);
    FT_Vector_Transform(&local_d0,&uStack_3398);
  }
  if (uStack_3368 != 0) {
    FT_Outline_Translate(lVar24,-uStack_3368,0);
  }
  FT_Outline_Get_CBox(lVar24,&local_90);
  local_90 = local_90 & 0xffffffffffffffc0;
  uStack_88 = uStack_88 & 0xffffffffffffffc0;
  uStack_80 = uStack_80 + 0x3f & 0xffffffffffffffc0;
  local_78 = local_78 + 0x3f & 0xffffffffffffffc0;
  *(ulong *)(lVar19 + 0x38) = local_78 - uStack_88;
  *(ulong *)(lVar19 + 0x30) = uStack_80 - local_90;
  *(ulong *)(lVar19 + 0x48) = local_78;
  *(ulong *)(lVar19 + 0x40) = local_90;
  *(ulong *)(lVar19 + 0x60) = lStack_c8 + local_78 & 0xffffffffffffffc0;
  *(ulong *)(lVar19 + 0x58) = local_d0 + local_90 & 0xffffffffffffffc0;
  if (((int)local_98 == 1) ||
     (((*(byte *)(*(long *)(lVar19 + 8) + 0x10) >> 2 & 1) == 0 &&
      ((((ulong)plStack_33b8[1] <= uVar15 || (-1 < *(short *)(plStack_33b8[2] + uVar15 * 2))) ||
       ((char)plVar16[7] == '\0')))))) {
    if (*(long *)(lVar19 + 0x50) != 0) {
      *(ulong *)(lVar19 + 0x50) = local_3358 - uStack_3368;
    }
  }
  else {
    uVar21 = FT_MulFix(*(undefined8 *)(lVar19 + 0x50),plVar16[2]);
    *(undefined8 *)(lVar19 + 0x50) = uVar21;
    *(undefined8 *)(lVar19 + 0x110) = 0;
    *(undefined8 *)(lVar19 + 0x118) = 0;
  }
  lVar18 = FT_MulFix(*(undefined8 *)(lVar19 + 0x68),plVar16[3]);
  *(ulong *)(lVar19 + 0x68) = lVar18 + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar19 + 0x50) = *(long *)(lVar19 + 0x50) + 0x20U & 0xffffffffffffffc0;
  *(undefined4 *)(lVar19 + 0x90) = 0x6f75746c;
LAB_00e620b8:
  local_33c0 = 0;
  plStack_33b8 = (long *)0x0;
  local_33b0 = (undefined8 *)0x0;
  FUN_00e639fc(&uStack_3348);
  return iVar7;
}

