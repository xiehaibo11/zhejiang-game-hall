
/* v8::internal::MutableBigInt::InternalMultiplyAdd(v8::internal::BigIntBase, unsigned long,
   unsigned long, int, v8::internal::MutableBigInt) */

void v8::internal::MutableBigInt::InternalMultiplyAdd
               (long param_1,ulong param_2,ulong param_3,uint param_4,long param_5)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((int)param_4 < 1) {
    uVar8 = 0;
  }
  else {
    uVar4 = 0;
    uVar7 = 0;
    do {
      uVar9 = uVar4 & 0xfffffff8 | 7;
      uVar10 = *(ulong *)(uVar9 + param_1);
      uVar4 = uVar4 + 8;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar10;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2;
      uVar8 = SUB168(auVar2 * auVar3,8);
      uVar10 = uVar10 * param_2;
      uVar1 = uVar10 + uVar7;
      lVar5 = uVar1 + param_3;
      param_3 = (ulong)CARRY8(uVar1,param_3) + (ulong)CARRY8(uVar10,uVar7);
      *(long *)(uVar9 + param_5) = lVar5;
      uVar7 = uVar8;
    } while ((ulong)param_4 * 8 - uVar4 != 0);
  }
  if ((int)param_4 < (int)(*(uint *)(param_5 + 3) >> 1 & 0x3fffffff)) {
    *(ulong *)(((long)(int)(param_4 * 8) | 7U) + param_5) = param_3 + uVar8;
    if ((int)(param_4 + 1) < (int)(*(uint *)(param_5 + 3) >> 1 & 0x3fffffff)) {
      lVar5 = (long)(int)param_4 + 1;
      iVar6 = param_4 * 8 + 0xf;
      do {
        *(undefined8 *)(param_5 + iVar6) = 0;
        lVar5 = lVar5 + 1;
        iVar6 = iVar6 + 8;
      } while (lVar5 < (long)((ulong)(*(uint *)(param_5 + 3) >> 1) & 0x3fffffff));
    }
  }
  else if (param_3 + uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","carry + high == 0");
  }
  return;
}

