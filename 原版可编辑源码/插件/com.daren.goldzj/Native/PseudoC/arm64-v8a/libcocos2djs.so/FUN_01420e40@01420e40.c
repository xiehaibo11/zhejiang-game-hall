
void FUN_01420e40(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar10;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar11;
  ulong extraout_x10;
  ulong extraout_x10_00;
  undefined8 uVar12;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x13;
  ulong extraout_x13_00;
  int iVar13;
  long unaff_x26;
  ulong unaff_x30;
  undefined1 auVar14 [16];
  ulong in_stack_00000000;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  puVar4 = &local_70;
  local_68 = param_2 + (param_3 - param_2 >> 1);
  local_38 = param_4;
  local_70 = param_2;
  local_60 = param_3;
  local_40 = param_1;
  local_58 = param_5;
  uVar7 = local_68;
  if (1 < local_68 - param_2) {
    puVar4 = &local_80;
    local_78 = 0;
    local_80 = in_stack_00000000;
    unaff_x30 = 0x1420ec4;
    FUN_01420e40(param_3,param_4,param_2,local_68,param_1);
    param_1 = local_50;
    param_2 = local_80;
    param_3 = local_70;
    param_4 = local_48;
    param_5 = local_68;
    uVar7 = local_78;
  }
  puVar5 = puVar4;
  if (1 < param_3 - uVar7) {
    puVar5 = puVar4 + -2;
    puVar4[-1] = 0;
    puVar4[-2] = puVar4[0xe];
    unaff_x30 = 0x1420f28;
    FUN_01420e40(param_2,param_4,uVar7,param_3,param_1);
    param_4 = puVar4[5];
    param_1 = puVar4[4];
    param_5 = puVar4[1];
    param_3 = *puVar4;
    uVar7 = puVar4[-1];
    param_2 = puVar4[-2];
  }
  uVar6 = *(ulong *)(unaff_x26 + 0xa0);
  uVar12 = 0;
  uVar9 = param_2;
  uVar10 = param_3;
  uVar11 = uVar7;
  uVar8 = param_4;
  do {
    puVar5[9] = uVar9;
    puVar5[8] = uVar7;
    *puVar5 = param_2;
    if (uVar10 <= uVar9) {
      return;
    }
    if (param_2 < uVar11) {
      if (uVar7 < uVar10) {
        iVar13 = 1;
        goto LAB_01420fa4;
      }
      if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0,0x14211fc);
        (*pcVar3)();
      }
      if ((ulong)((long)((ulong)*(uint *)(param_1 + 3) << 0x20) >> 0x21) <= param_2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0,0x1421200);
        (*pcVar3)();
      }
      uVar2 = *(uint *)(param_1 + param_2 * 4 + 7);
      lVar1 = uVar9 * 4 + 7;
      param_2 = param_2 + 1;
      *(uint *)(uVar8 + lVar1) = uVar2;
      if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
          ((uVar2 & 1) != 0)) &&
         (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar2 & 0xfffffffffffc0000) + 8) >> 1 & 1) != 0
         )) {
        puVar5[-4] = param_3;
        puVar5[-3] = param_4;
        puVar5[-2] = param_5;
        puVar5[-1] = unaff_x30;
        puVar5[-6] = uVar6;
        puVar5[-5] = param_2;
        FUN_0133eb00(uVar8,uVar8 + lVar1,0,2);
        param_3 = puVar5[-4];
        param_4 = puVar5[-3];
        uVar6 = puVar5[-6];
        param_2 = puVar5[-5];
        param_5 = puVar5[-2];
        unaff_x30 = puVar5[-1];
        uVar10 = extraout_x9;
        uVar11 = extraout_x10;
        uVar12 = extraout_x11;
        uVar8 = extraout_x12;
        param_1 = extraout_x13;
      }
    }
    else {
      iVar13 = (int)uVar12;
LAB_01420fa4:
      if (iVar13 == 0) {
        if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x14211b4);
          (*pcVar3)();
        }
        if ((ulong)((long)((ulong)*(uint *)(param_1 + 3) << 0x20) >> 0x21) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x14211b8);
          (*pcVar3)();
        }
        uVar2 = *(uint *)(param_1 + uVar7 * 4 + 7);
        lVar1 = uVar9 * 4 + 7;
        uVar7 = uVar7 + 1;
        *(uint *)(uVar8 + lVar1) = uVar2;
        if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
            ((uVar2 & 1) != 0)) &&
           (((uint)*(undefined8 *)((unaff_x26 + (ulong)uVar2 & 0xfffffffffffc0000) + 8) >> 1 & 1) !=
            0)) {
          puVar5[-4] = param_3;
          puVar5[-3] = param_4;
          puVar5[-2] = param_5;
          puVar5[-1] = unaff_x30;
          puVar5[-6] = uVar6;
          puVar5[-5] = param_2;
          FUN_0133eb00(uVar8,uVar8 + lVar1,0,2);
          param_3 = puVar5[-4];
          param_4 = puVar5[-3];
          uVar6 = puVar5[-6];
          param_5 = puVar5[-2];
          unaff_x30 = puVar5[-1];
          param_2 = extraout_x8_01;
          uVar10 = extraout_x9_00;
          uVar11 = extraout_x10_00;
          uVar12 = extraout_x11_00;
          uVar8 = extraout_x12_00;
          param_1 = extraout_x13_00;
        }
      }
      else {
        uVar9 = (long)((ulong)*(uint *)(param_1 + 3) << 0x20) >> 0x21;
        if (uVar9 <= param_2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x14211bc);
          (*pcVar3)();
        }
        uVar10 = unaff_x26 + (ulong)*(uint *)(param_1 + param_2 * 4 + 7);
        puVar5[5] = uVar10;
        if (uVar9 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0,0x14211c0);
          (*pcVar3)();
        }
        uVar7 = unaff_x26 + (ulong)*(uint *)(param_1 + uVar7 * 4 + 7);
        puVar5[-1] = 0;
        puVar5[-3] = uVar10;
        puVar5[-2] = uVar6;
        puVar5[-4] = uVar7;
        puVar5[4] = uVar7;
        unaff_x30 = 0x1421060;
        auVar14 = FUN_0133fb80(2,puVar5[0xe]);
        if (((auVar14._0_8_ & 1) != 0) &&
           (*(int *)(auVar14._0_8_ - 1) != (int)*(undefined8 *)(unaff_x26 + 0x140))) {
          unaff_x30 = 0x1421218;
          auVar14 = thunk_FUN_01349c30();
        }
        uVar7 = auVar14._0_8_;
        if ((*(uint *)(unaff_x26 + (ulong)*(uint *)(puVar5[-1] + 0xb) + 0x1b) >> 2 & 1) != 0) {
          puVar5[-6] = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x373);
          puVar5[-5] = 0x62;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
        }
        if (((uVar7 & 1) != 0) && (NAN(*(double *)(uVar7 + 3)))) {
          uVar7 = 0;
        }
        if ((uVar7 & 1) == 0) {
          if (0 < (int)uVar7) goto LAB_014210a8;
LAB_014210ec:
          uVar8 = puVar5[3];
          uVar9 = puVar5[5];
          if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x14211c8);
            (*pcVar3)();
          }
          lVar1 = uVar9 * 4 + 7;
          uVar6 = puVar5[1];
          *(int *)(uVar8 + lVar1) = (int)uVar6;
          if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar6 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar6 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
               1 & 1) != 0)) {
            puVar5[-8] = param_3;
            puVar5[-7] = param_4;
            puVar5[-6] = param_5;
            puVar5[-5] = unaff_x30;
            puVar5[-10] = uVar7;
            puVar5[-9] = auVar14._8_8_;
            FUN_0133eb00(uVar8,uVar8 + lVar1,0,2);
            param_3 = puVar5[-8];
            param_4 = puVar5[-7];
            param_5 = puVar5[-6];
            unaff_x30 = puVar5[-5];
            uVar9 = extraout_x8;
          }
          param_2 = puVar5[-4] + 1;
          uVar7 = puVar5[4];
        }
        else {
          if (*(double *)(uVar7 + 3) <= 0.0) goto LAB_014210ec;
LAB_014210a8:
          uVar8 = puVar5[3];
          uVar9 = puVar5[5];
          if ((ulong)((long)((ulong)*(uint *)(uVar8 + 3) << 0x20) >> 0x21) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(0,0x14211c4);
            (*pcVar3)();
          }
          lVar1 = uVar9 * 4 + 7;
          uVar6 = *puVar5;
          *(int *)(uVar8 + lVar1) = (int)uVar6;
          if (((((uint)*(undefined8 *)((uVar8 & 0xfffffffffffc0000) + 8) >> 2 & 1) != 0) &&
              ((uVar6 & 1) != 0)) &&
             (((uint)*(undefined8 *)((unaff_x26 + (uVar6 & 0xffffffff) & 0xfffffffffffc0000) + 8) >>
               1 & 1) != 0)) {
            puVar5[-8] = param_3;
            puVar5[-7] = param_4;
            puVar5[-6] = param_5;
            puVar5[-5] = unaff_x30;
            puVar5[-10] = uVar7;
            puVar5[-9] = auVar14._8_8_;
            FUN_0133eb00(uVar8,uVar8 + lVar1,0,2);
            param_3 = puVar5[-8];
            param_4 = puVar5[-7];
            param_5 = puVar5[-6];
            unaff_x30 = puVar5[-5];
            uVar9 = extraout_x8_00;
          }
          uVar7 = puVar5[4] + 1;
          param_2 = puVar5[-4];
        }
        uVar11 = puVar5[-3];
        uVar10 = puVar5[-2];
        uVar6 = *(ulong *)(unaff_x26 + 0xa0);
        param_1 = puVar5[2];
        uVar12 = 0;
        puVar5 = puVar5 + -4;
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

