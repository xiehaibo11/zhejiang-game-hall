
/* v8::internal::GCTracer::AverageSpeed(v8::base::RingBuffer<std::__ndk1::pair<unsigned long,
   double> > const&) */

undefined1  [16] v8::internal::GCTracer::AverageSpeed(RingBuffer *param_1)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
  iVar3 = *(int *)(param_1 + 0xa4);
  if (iVar3 < 1) {
    return ZEXT816(0);
  }
  uVar2 = 0;
  dVar6 = 0.0;
  iVar1 = iVar3 + *(int *)(param_1 + 0xa0) + -1;
  iVar4 = iVar3 + *(int *)(param_1 + 0xa0) + -0xb;
  if (iVar1 < 10) {
    iVar4 = iVar1;
  }
  do {
    iVar1 = 9;
    if (iVar4 != 0) {
      iVar1 = iVar4 + -1;
    }
    iVar3 = iVar3 + -1;
    dVar6 = dVar6 + *(double *)(param_1 + (long)iVar4 * 0x10 + 8);
    uVar2 = *(long *)(param_1 + (long)iVar4 * 0x10) + uVar2;
    iVar4 = iVar1;
  } while (iVar3 != 0);
  if (dVar6 != 0.0) {
    dVar6 = (double)uVar2 / dVar6;
    if (1073741824.0 <= dVar6) {
      dVar6 = 1073741824.0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar6;
    return auVar5;
  }
  return ZEXT816(0);
}

