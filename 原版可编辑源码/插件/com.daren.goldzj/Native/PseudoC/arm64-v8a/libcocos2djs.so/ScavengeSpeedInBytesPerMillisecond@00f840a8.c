
/* v8::internal::GCTracer::ScavengeSpeedInBytesPerMillisecond(v8::internal::ScavengeSpeedMode) const
    */

undefined1  [16] __thiscall
v8::internal::GCTracer::ScavengeSpeedInBytesPerMillisecond(GCTracer *this,int param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  double dVar6;
  
  if (param_2 == 0) {
    iVar3 = *(int *)(this + 0xbe4);
    if (iVar3 < 1) goto LAB_00f84170;
    uVar2 = 0;
    dVar6 = 0.0;
    iVar1 = iVar3 + *(int *)(this + 0xbe0) + -1;
    iVar4 = iVar3 + *(int *)(this + 0xbe0) + -0xb;
    if (iVar1 < 10) {
      iVar4 = iVar1;
    }
    do {
      iVar1 = 9;
      if (iVar4 != 0) {
        iVar1 = iVar4 + -1;
      }
      iVar3 = iVar3 + -1;
      dVar6 = dVar6 + *(double *)(this + (long)iVar4 * 0x10 + 0xb48);
      uVar2 = *(long *)(this + (long)iVar4 * 0x10 + 0xb40) + uVar2;
      iVar4 = iVar1;
    } while (iVar3 != 0);
  }
  else {
    iVar3 = *(int *)(this + 0xc8c);
    if (iVar3 < 1) {
LAB_00f84170:
      return ZEXT816(0);
    }
    uVar2 = 0;
    dVar6 = 0.0;
    iVar1 = iVar3 + *(int *)(this + 0xc88) + -1;
    iVar4 = iVar3 + *(int *)(this + 0xc88) + -0xb;
    if (iVar1 < 10) {
      iVar4 = iVar1;
    }
    do {
      iVar1 = 9;
      if (iVar4 != 0) {
        iVar1 = iVar4 + -1;
      }
      iVar3 = iVar3 + -1;
      dVar6 = dVar6 + *(double *)(this + (long)iVar4 * 0x10 + 0xbf0);
      uVar2 = *(long *)(this + (long)iVar4 * 0x10 + 0xbe8) + uVar2;
      iVar4 = iVar1;
    } while (iVar3 != 0);
  }
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

