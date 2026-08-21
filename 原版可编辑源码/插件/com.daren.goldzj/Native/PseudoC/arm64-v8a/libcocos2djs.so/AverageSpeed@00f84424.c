
/* v8::internal::GCTracer::AverageSpeed(v8::base::RingBuffer<std::__ndk1::pair<unsigned long,
   double> > const&, std::__ndk1::pair<unsigned long, double> const&, double) */

undefined1  [16]
v8::internal::GCTracer::AverageSpeed(RingBuffer *param_1,pair *param_2,double param_3)

{
  int iVar1;
  ulong uVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  
  iVar4 = *(int *)(param_1 + 0xa4);
  uVar2 = *(ulong *)param_2;
  dVar7 = *(double *)(param_2 + 8);
  if (0 < iVar4) {
    iVar1 = iVar4 + *(int *)(param_1 + 0xa0) + -1;
    dVar3 = dVar7;
    iVar5 = iVar4 + *(int *)(param_1 + 0xa0) + -0xb;
    if (iVar1 < 10) {
      iVar5 = iVar1;
    }
    do {
      lVar6 = *(long *)(param_1 + (long)iVar5 * 0x10);
      dVar7 = *(double *)(param_1 + (long)iVar5 * 0x10 + 8) + dVar3;
      if (param_3 != 0.0 && param_3 <= dVar3) {
        lVar6 = 0;
        dVar7 = dVar3;
      }
      iVar1 = 9;
      if (iVar5 != 0) {
        iVar1 = iVar5 + -1;
      }
      iVar4 = iVar4 + -1;
      uVar2 = lVar6 + uVar2;
      dVar3 = dVar7;
      iVar5 = iVar1;
    } while (iVar4 != 0);
  }
  if (dVar7 != 0.0) {
    dVar7 = (double)uVar2 / dVar7;
    if (1073741824.0 <= dVar7) {
      dVar7 = 1073741824.0;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar7;
    return auVar8;
  }
  return ZEXT816(0);
}

