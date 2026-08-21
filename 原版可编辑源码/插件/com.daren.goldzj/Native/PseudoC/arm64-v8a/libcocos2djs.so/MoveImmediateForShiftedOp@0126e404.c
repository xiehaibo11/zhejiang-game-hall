
/* v8::internal::TurboAssembler::MoveImmediateForShiftedOp(v8::internal::Register const&, long,
   v8::internal::PreShiftImmMode) */

void v8::internal::TurboAssembler::MoveImmediateForShiftedOp
               (undefined1 *param_1_00,TurboAssembler *param_1,Register *param_2,ulong param_4,
               int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar4 = TryOneInstrMoveImmediate(param_1,param_2,param_4);
  if ((uVar4 & 1) == 0) {
    uVar6 = ((uint)param_4 & 0xaaaaaaaa) >> 1 | ((uint)param_4 & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar3 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar4 = (param_4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (param_4 & 0x5555555555555555) << 1;
    uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
    uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar6 = (uint)LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20);
    if (iVar1 != 0x40) {
      uVar6 = (uint)LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
    }
    uVar3 = uVar6;
    if (3 < uVar6) {
      uVar3 = 4;
    }
    if (param_5 != 1) {
      uVar3 = uVar6;
    }
    uVar4 = CountLeadingZeros(param_4,iVar1);
    if (param_5 != 0) {
      uVar6 = (uint)uVar4;
      uVar5 = TryOneInstrMoveImmediate(param_1,param_2,(long)param_4 >> ((ulong)uVar3 & 0x3f));
      if ((uVar5 & 1) != 0) {
        uVar7 = 0;
        uVar6 = uVar3;
        goto LAB_0126e4e4;
      }
      if ((param_5 == 2) &&
         (uVar4 = TryOneInstrMoveImmediate
                            (param_1,param_2,
                             param_4 << (uVar4 & 0x3f) | -1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU
                            ), (uVar4 & 1) != 0)) {
        uVar7 = 1;
        goto LAB_0126e4e4;
      }
    }
    Mov(param_1,param_2,param_4);
  }
  uVar7 = 0;
  uVar6 = 0;
LAB_0126e4e4:
  uVar8 = *(undefined8 *)param_2;
  uVar2 = *(undefined4 *)(param_2 + 8);
  *param_1_00 = 0;
  param_1_00[8] = 0;
  *(undefined8 *)(param_1_00 + 0x20) = 0;
  param_1_00[0x28] = 0x13;
  *(undefined8 *)(param_1_00 + 0x30) = uVar8;
  *(undefined4 *)(param_1_00 + 0x38) = uVar2;
  *(undefined4 *)(param_1_00 + 0x3c) = uVar7;
  *(undefined4 *)(param_1_00 + 0x40) = 0xffffffff;
  *(uint *)(param_1_00 + 0x44) = uVar6;
  return;
}

