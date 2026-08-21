
/* v8::internal::GCTracer::AddAllocation(double) */

void __thiscall v8::internal::GCTracer::AddAllocation(GCTracer *this,double param_1)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = *(double *)(this + 0xaf0);
  *(double *)(this + 0xad0) = param_1;
  if (0.0 < dVar3) {
    iVar1 = *(int *)(this + 0xf2c);
    if (iVar1 == 10) {
      iVar1 = *(int *)(this + 0xf28);
      *(int *)(this + 0xf28) = iVar1 + 1;
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xe88) = *(undefined8 *)(this + 0xaf8);
      *(double *)(this + (long)iVar1 * 0x10 + 0xe90) = dVar3;
      if (*(int *)(this + 0xf28) == 10) {
        *(undefined4 *)(this + 0xf28) = 0;
      }
    }
    else {
      *(int *)(this + 0xf2c) = iVar1 + 1;
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xe88) = *(undefined8 *)(this + 0xaf8);
      *(double *)(this + (long)iVar1 * 0x10 + 0xe90) = dVar3;
    }
    iVar1 = *(int *)(this + 0xfd4);
    uVar2 = *(undefined8 *)(this + 0xaf0);
    if (iVar1 == 10) {
      iVar1 = *(int *)(this + 0xfd0);
      *(int *)(this + 0xfd0) = iVar1 + 1;
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xf30) = *(undefined8 *)(this + 0xb00);
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xf38) = uVar2;
      if (*(int *)(this + 0xfd0) == 10) {
        *(undefined4 *)(this + 0xfd0) = 0;
      }
    }
    else {
      *(int *)(this + 0xfd4) = iVar1 + 1;
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xf30) = *(undefined8 *)(this + 0xb00);
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xf38) = uVar2;
    }
    iVar1 = *(int *)(this + 0x107c);
    uVar2 = *(undefined8 *)(this + 0xaf0);
    if (iVar1 == 10) {
      iVar1 = *(int *)(this + 0x1078);
      *(int *)(this + 0x1078) = iVar1 + 1;
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xfd8) = *(undefined8 *)(this + 0xb08);
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xfe0) = uVar2;
      if (*(int *)(this + 0x1078) == 10) {
        *(undefined4 *)(this + 0x1078) = 0;
      }
    }
    else {
      *(int *)(this + 0x107c) = iVar1 + 1;
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xfd8) = *(undefined8 *)(this + 0xb08);
      *(undefined8 *)(this + (long)iVar1 * 0x10 + 0xfe0) = uVar2;
    }
  }
  *(undefined8 *)(this + 0xaf8) = 0;
  *(undefined8 *)(this + 0xaf0) = 0;
  *(undefined8 *)(this + 0xb08) = 0;
  *(undefined8 *)(this + 0xb00) = 0;
  return;
}

