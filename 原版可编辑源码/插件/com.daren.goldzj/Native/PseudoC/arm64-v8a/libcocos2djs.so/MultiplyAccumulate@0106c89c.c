
/* v8::internal::MutableBigInt::MultiplyAccumulate(v8::internal::Handle<v8::internal::BigIntBase>,
   unsigned long, v8::internal::Handle<v8::internal::MutableBigInt>, int) */

void v8::internal::MutableBigInt::MultiplyAccumulate
               (long *param_1,ulong param_2,long *param_3,int param_4)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((param_2 != 0) && (lVar10 = *param_1, (*(uint *)(lVar10 + 3) & 0x7ffffffe) != 0)) {
    uVar9 = 0;
    uVar8 = 0;
    uVar5 = 0;
    uVar7 = 0;
    do {
      lVar12 = (long)(int)((param_4 << 3 | 7U) + (int)uVar9);
      uVar13 = *(ulong *)(*param_3 + lVar12);
      uVar14 = *(ulong *)(lVar10 + (uVar9 & 0xfffffff8 | 7));
      uVar8 = uVar8 + 1;
      bVar4 = CARRY8(uVar13,uVar7);
      uVar13 = uVar13 + uVar7;
      uVar1 = uVar13 + uVar5;
      uVar11 = uVar14 * param_2;
      *(ulong *)(*param_3 + lVar12) = uVar1 + uVar11;
      lVar10 = *param_1;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar14;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_2;
      uVar7 = SUB168(auVar2 * auVar3,8);
      uVar5 = (ulong)CARRY8(uVar13,uVar5) + (ulong)bVar4 + (ulong)CARRY8(uVar1,uVar11);
      uVar9 = uVar9 + 8;
    } while (uVar8 < ((ulong)(*(uint *)(lVar10 + 3) >> 1) & 0x3fffffff));
    if (uVar5 != 0 || uVar7 != 0) {
      iVar6 = (param_4 + (int)uVar8) * 8;
      uVar13 = (long)iVar6 | 7;
      uVar8 = *(ulong *)(*param_3 + uVar13);
      uVar9 = uVar8 + uVar7;
      uVar8 = (ulong)CARRY8(uVar9,uVar5) + (ulong)CARRY8(uVar8,uVar7);
      *(ulong *)(*param_3 + uVar13) = uVar9 + uVar5;
      if (uVar8 != 0) {
        iVar6 = iVar6 + 0xf;
        do {
          lVar12 = (long)iVar6;
          iVar6 = iVar6 + 8;
          uVar9 = *(ulong *)(*param_3 + lVar12);
          lVar10 = uVar9 + uVar8;
          uVar8 = (ulong)CARRY8(uVar9,uVar8);
          *(long *)(*param_3 + lVar12) = lVar10;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}

