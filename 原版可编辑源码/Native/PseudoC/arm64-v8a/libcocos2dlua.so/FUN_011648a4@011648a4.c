
void FUN_011648a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  uVar4 = *(undefined8 *)(param_2 + 0x68);
  uVar25 = *(undefined4 *)(param_2 + 0x48);
  uVar17 = *(undefined4 *)(param_2 + 0x4c);
  uVar16 = *(undefined4 *)(param_2 + 0x50);
  uVar15 = *(undefined4 *)(param_2 + 0x54);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  cVar3 = cpConstraintIsPinJoint();
  if (cVar3 == '\0') {
    cVar3 = cpConstraintIsSlideJoint(param_1);
    if (cVar3 == '\0') {
      cVar3 = cpConstraintIsPivotJoint(param_1);
      if (cVar3 != '\0') {
        fVar10 = *(float *)(lVar2 + 0x4c);
        fVar12 = *(float *)(lVar2 + 0x50);
        fVar18 = *(float *)(lVar2 + 0x5c);
        fVar31 = *(float *)(lVar2 + 0x60);
        fVar21 = *(float *)(param_1 + 0x60);
        fVar7 = *(float *)(param_1 + 100);
        fVar27 = *(float *)(lVar2 + 0x54);
        fVar32 = *(float *)(lVar2 + 0x58);
        (**(code **)(param_2 + 0x20))
                  (0x40a00000,
                   *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x4c) * *(float *)(param_1 + 0x58)
                   + *(float *)(lVar1 + 0x54) * *(float *)(param_1 + 0x5c),
                   *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x50) * *(float *)(param_1 + 0x58)
                   + *(float *)(lVar1 + 0x58) * *(float *)(param_1 + 0x5c),uVar25,uVar17,uVar16,
                   uVar15,uVar4);
                    /* WARNING: Could not recover jumptable at 0x01164b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2 + 0x20))
                  (0x40a00000,fVar18 + fVar10 * fVar21 + fVar27 * fVar7,
                   fVar31 + fVar12 * fVar21 + fVar32 * fVar7,uVar25,uVar17,uVar16,uVar15,uVar4);
        return;
      }
      cVar3 = cpConstraintIsGrooveJoint(param_1);
      if (cVar3 == '\0') {
        cVar3 = cpConstraintIsDampedSpring(param_1);
        if (cVar3 == '\0') {
          return;
        }
        uVar25 = *(undefined4 *)(param_2 + 0x48);
        uVar4 = *(undefined8 *)(param_2 + 0x68);
        uVar17 = *(undefined4 *)(param_2 + 0x4c);
        uVar16 = *(undefined4 *)(param_2 + 0x50);
        uVar15 = *(undefined4 *)(param_2 + 0x54);
        fVar22 = *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x4c) * *(float *)(param_1 + 0x58) +
                 *(float *)(lVar1 + 0x54) * *(float *)(param_1 + 0x5c);
        fVar19 = *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x50) * *(float *)(param_1 + 0x58) +
                 *(float *)(lVar1 + 0x58) * *(float *)(param_1 + 0x5c);
        fVar24 = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x4c) * *(float *)(param_1 + 0x60) +
                 *(float *)(lVar2 + 0x54) * *(float *)(param_1 + 100);
        fVar26 = *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x50) * *(float *)(param_1 + 0x60) +
                 *(float *)(lVar2 + 0x58) * *(float *)(param_1 + 100);
        (**(code **)(param_2 + 0x20))(0x40a00000,fVar22,fVar19,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 0x20))(0x40a00000,fVar24,fVar26,uVar25,uVar17,uVar16,uVar15,uVar4);
        fVar7 = fVar26 - fVar19;
        fVar6 = fVar24 - fVar22;
        fVar31 = 1.0 / SQRT(fVar7 * fVar7 + fVar6 * fVar6);
        fVar27 = fVar31 * fVar7;
        fVar31 = fVar31 * fVar6;
        fVar38 = fVar22 + fVar6 * 0.2;
        fVar18 = fVar22 + fVar6 * 0.8;
        fVar13 = fVar19 + fVar7 * 0.2;
        fVar21 = fVar19 + fVar7 * 0.8;
        fVar36 = (fVar22 + fVar6 * 0.25) - fVar27 * 3.0;
        fVar28 = fVar19 + fVar7 * 0.25 + fVar31 * 3.0;
        fVar23 = (fVar22 + fVar6 * 0.7) - fVar27 * -3.0;
        fVar20 = fVar19 + fVar7 * 0.7 + fVar31 * -3.0;
        fVar5 = fVar27 * -6.0;
        fVar8 = fVar31 * -6.0;
        fVar27 = fVar27 * 6.0;
        fVar29 = (fVar22 + fVar6 * 0.5) - fVar5;
        fVar10 = fVar19 + fVar7 * 0.5 + fVar8;
        fVar9 = (fVar22 + fVar6 * 0.3) - fVar5;
        fVar37 = (fVar22 + fVar6 * 0.4) - fVar5;
        fVar5 = (fVar22 + fVar6 * 0.6) - fVar5;
        fVar14 = (fVar22 + fVar6 * 0.75) - fVar27;
        fVar31 = fVar31 * 6.0;
        fVar32 = fVar19 + fVar7 * 0.3 + fVar8;
        fVar39 = fVar19 + fVar7 * 0.4 + fVar8;
        fVar8 = fVar19 + fVar7 * 0.6 + fVar8;
        fVar12 = (fVar22 + fVar6 * 0.35) - fVar27;
        fVar30 = (fVar22 + fVar6 * 0.45) - fVar27;
        fVar34 = (fVar22 + fVar6 * 0.55) - fVar27;
        fVar27 = (fVar22 + fVar6 * 0.65) - fVar27;
        fVar35 = fVar19 + fVar7 * 0.75 + fVar31;
        fVar11 = fVar19 + fVar7 * 0.35 + fVar31;
        fVar6 = fVar19 + fVar7 * 0.65 + fVar31;
        fVar33 = fVar19 + fVar7 * 0.45 + fVar31;
        fVar31 = fVar19 + fVar7 * 0.55 + fVar31;
        (**(code **)(param_2 + 8))(fVar22,fVar19,fVar38,fVar13,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar38,fVar13,fVar36,fVar28,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar36,fVar28,fVar9,fVar32,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar9,fVar32,fVar12,fVar11,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar12,fVar11,fVar37,fVar39,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar37,fVar39,fVar30,fVar33,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar30,fVar33,fVar29,fVar10,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar29,fVar10,fVar34,fVar31,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar34,fVar31,fVar5,fVar8,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar5,fVar8,fVar27,fVar6,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar27,fVar6,fVar23,fVar20,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar23,fVar20,fVar14,fVar35,uVar25,uVar17,uVar16,uVar15,uVar4);
        (**(code **)(param_2 + 8))(fVar14,fVar35,fVar18,fVar21,uVar25,uVar17,uVar16,uVar15,uVar4);
        UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
        goto LAB_01164a64;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x20);
      fVar18 = *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x4c) * *(float *)(param_1 + 0x60) +
               *(float *)(lVar1 + 0x54) * *(float *)(param_1 + 100);
      fVar21 = *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x50) * *(float *)(param_1 + 0x60) +
               *(float *)(lVar1 + 0x58) * *(float *)(param_1 + 100);
      fVar24 = *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x4c) * *(float *)(param_1 + 0x68) +
               *(float *)(lVar1 + 0x54) * *(float *)(param_1 + 0x6c);
      fVar26 = *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x50) * *(float *)(param_1 + 0x68) +
               *(float *)(lVar1 + 0x58) * *(float *)(param_1 + 0x6c);
      fVar7 = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x4c) * *(float *)(param_1 + 0x70) +
              *(float *)(lVar2 + 0x54) * *(float *)(param_1 + 0x74);
      fVar10 = *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x50) * *(float *)(param_1 + 0x70) +
               *(float *)(lVar2 + 0x58) * *(float *)(param_1 + 0x74);
    }
    else {
      fVar18 = *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x4c) * *(float *)(param_1 + 0x58) +
               *(float *)(lVar1 + 0x54) * *(float *)(param_1 + 0x5c);
      fVar21 = *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x50) * *(float *)(param_1 + 0x58) +
               *(float *)(lVar1 + 0x58) * *(float *)(param_1 + 0x5c);
      fVar24 = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x4c) * *(float *)(param_1 + 0x60) +
               *(float *)(lVar2 + 0x54) * *(float *)(param_1 + 100);
      fVar26 = *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x50) * *(float *)(param_1 + 0x60) +
               *(float *)(lVar2 + 0x58) * *(float *)(param_1 + 100);
      (**(code **)(param_2 + 0x20))(0x40a00000,fVar18,fVar21,uVar25,uVar17,uVar16,uVar15,uVar4);
      UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x20);
      fVar7 = fVar24;
      fVar10 = fVar26;
    }
    (*UNRECOVERED_JUMPTABLE)(0x40a00000,fVar7,fVar10,uVar25,uVar17,uVar16,uVar15,uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
  }
  else {
    fVar18 = *(float *)(lVar1 + 0x5c) + *(float *)(lVar1 + 0x4c) * *(float *)(param_1 + 0x58) +
             *(float *)(lVar1 + 0x54) * *(float *)(param_1 + 0x5c);
    fVar21 = *(float *)(lVar1 + 0x60) + *(float *)(lVar1 + 0x50) * *(float *)(param_1 + 0x58) +
             *(float *)(lVar1 + 0x58) * *(float *)(param_1 + 0x5c);
    fVar24 = *(float *)(lVar2 + 0x5c) + *(float *)(lVar2 + 0x4c) * *(float *)(param_1 + 0x60) +
             *(float *)(lVar2 + 0x54) * *(float *)(param_1 + 100);
    fVar26 = *(float *)(lVar2 + 0x60) + *(float *)(lVar2 + 0x50) * *(float *)(param_1 + 0x60) +
             *(float *)(lVar2 + 0x58) * *(float *)(param_1 + 100);
    (**(code **)(param_2 + 0x20))(0x40a00000,fVar18,fVar21,uVar25,uVar17,uVar16,uVar15,uVar4);
    (**(code **)(param_2 + 0x20))(0x40a00000,fVar24,fVar26,uVar25,uVar17,uVar16,uVar15,uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 8);
  }
LAB_01164a64:
                    /* WARNING: Could not recover jumptable at 0x01164a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(fVar18,fVar21,fVar24,fVar26,uVar25,uVar17,uVar16,uVar15,uVar4);
  return;
}

