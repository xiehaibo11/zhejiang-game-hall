
/* v8::internal::wasm::LiftoffAssembler::CacheState::InitMerge(v8::internal::wasm::LiftoffAssembler::CacheState
   const&, unsigned int, unsigned int, unsigned int) */

void v8::internal::wasm::LiftoffAssembler::CacheState::InitMerge
               (CacheState *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcVar9;
  ulong uVar10;
  ulong in_x4;
  ulong uVar11;
  ulong in_x5;
  ulong uVar12;
  byte *pbVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  
  uVar10 = (ulong)param_4;
  uVar12 = (ulong)param_3;
  plVar8 = (long *)(ulong)param_2;
  lVar4 = *plVar8;
  lVar5 = plVar8[1];
  lVar18 = *(long *)param_1;
  uVar1 = (int)in_x4 + param_3;
  uVar19 = (ulong)(uVar1 + param_4);
  uVar11 = in_x4;
  if ((ulong)((*(long *)(param_1 + 0x10) - lVar18 >> 2) * -0x5555555555555555) < uVar19) {
    base::SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul>::Grow
              ((SmallVector<v8::internal::wasm::LiftoffAssembler::VarState,8ul> *)param_1,uVar19);
    lVar18 = *(long *)param_1;
  }
  *(ulong *)(param_1 + 8) = lVar18 + uVar19 * 0xc;
  pcVar20 = (char *)*plVar8;
  uVar6 = (int)((ulong)(lVar5 - lVar4) >> 2) * -0x55555555 - (uVar1 + param_4);
  uVar19 = (ulong)uVar6;
  if (param_3 == 0) {
    uVar21 = 0;
  }
  else {
    uVar7 = ((ulong)param_3 * 0xc - 0xc) / 0xc + 1;
    if (uVar7 < 2) {
      uVar21 = 0;
      pcVar9 = pcVar20;
    }
    else {
      uVar15 = uVar7 & 0x3ffffffffffffffe;
      uVar17 = 0;
      uVar21 = 0;
      pbVar13 = (byte *)(pcVar20 + 0x10);
      pcVar9 = pcVar20 + uVar15 * 0xc;
      uVar16 = uVar15;
      do {
        if (pbVar13[-0x10] == 1) {
          uVar12 = (ulong)pbVar13[-0xc];
        }
        if (pbVar13[-4] == 1) {
          uVar10 = (ulong)*pbVar13;
        }
        uVar12 = 1L << (uVar12 & 0x3f);
        uVar10 = 1L << (uVar10 & 0x3f);
        uVar3 = uVar12;
        if (pbVar13[-0x10] != 1) {
          uVar3 = 0;
        }
        uVar2 = uVar10;
        if (pbVar13[-4] != 1) {
          uVar2 = 0;
        }
        uVar17 = uVar17 | uVar3;
        uVar16 = uVar16 - 2;
        uVar21 = uVar21 | uVar2;
        pbVar13 = pbVar13 + 0x18;
      } while (uVar16 != 0);
      uVar21 = uVar21 | uVar17;
      if (uVar7 == uVar15) goto LAB_017eabb0;
    }
    do {
      if (*pcVar9 == '\x01') {
        uVar21 = 1L << ((ulong)(byte)pcVar9[4] & 0x3f) | uVar21;
      }
      pcVar9 = pcVar9 + 0xc;
    } while (pcVar20 + (ulong)param_3 * 0xc != pcVar9);
  }
LAB_017eabb0:
  uVar12 = (ulong)uVar1;
  pcVar9 = pcVar20 + uVar19 * 0xc + (ulong)uVar1 * 0xc;
  if (param_4 != 0) {
    uVar10 = ((ulong)param_4 * 0xc - 0xc) / 0xc + 1;
    pcVar14 = pcVar9;
    if (1 < uVar10) {
      uVar17 = uVar10 & 0x3ffffffffffffffe;
      uVar16 = 0;
      pbVar13 = (byte *)(pcVar20 + (uVar12 + uVar19) * 0xc + 0x10);
      uVar7 = uVar17;
      do {
        if (pbVar13[-0x10] == 1) {
          uVar11 = (ulong)pbVar13[-0xc];
        }
        if (pbVar13[-4] == 1) {
          in_x5 = (ulong)*pbVar13;
        }
        uVar11 = 1L << (uVar11 & 0x3f);
        in_x5 = 1L << (in_x5 & 0x3f);
        uVar15 = uVar11;
        if (pbVar13[-0x10] != 1) {
          uVar15 = 0;
        }
        uVar3 = in_x5;
        if (pbVar13[-4] != 1) {
          uVar3 = 0;
        }
        uVar21 = uVar21 | uVar15;
        uVar7 = uVar7 - 2;
        uVar16 = uVar16 | uVar3;
        pbVar13 = pbVar13 + 0x18;
      } while (uVar7 != 0);
      uVar21 = uVar16 | uVar21;
      pcVar14 = pcVar9 + uVar17 * 0xc;
      if (uVar10 == uVar17) goto LAB_017eacc4;
    }
    pbVar13 = (byte *)(pcVar14 + 4);
    pcVar14 = pcVar20 + ((param_4 + uVar12 + uVar19) * 0xc - (long)pcVar14);
    do {
      if (pbVar13[-4] == 1) {
        uVar21 = 1L << ((ulong)*pbVar13 & 0x3f) | uVar21;
      }
      pcVar14 = pcVar14 + -0xc;
      pbVar13 = pbVar13 + 0xc;
    } while (pcVar14 != (char *)0x0);
  }
LAB_017eacc4:
  FUN_017ead50(param_1,pcVar9,lVar18 + uVar12 * 0xc,param_4,uVar6 == 0,0,0,uVar21);
  FUN_017ead50(param_1,pcVar20,lVar18,param_3,1,0,0,uVar21);
  FUN_017ead50(param_1,pcVar20 + (ulong)param_3 * 0xc,lVar18 + (ulong)param_3 * 0xc,
               in_x4 & 0xffffffff,1,1,1,uVar21);
  return;
}

