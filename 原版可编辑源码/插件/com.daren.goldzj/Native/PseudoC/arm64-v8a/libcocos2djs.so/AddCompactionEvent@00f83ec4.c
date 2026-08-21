
/* v8::internal::GCTracer::AddCompactionEvent(double, unsigned long) */

void __thiscall
v8::internal::GCTracer::AddCompactionEvent(GCTracer *this,double param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xd34);
  if (iVar1 == 10) {
    iVar1 = *(int *)(this + 0xd30);
    *(int *)(this + 0xd30) = iVar1 + 1;
    *(ulong *)(this + (long)iVar1 * 0x10 + 0xc90) = param_2;
    *(double *)(this + (long)iVar1 * 0x10 + 0xc98) = param_1;
    if (*(int *)(this + 0xd30) == 10) {
      *(undefined4 *)(this + 0xd30) = 0;
      return;
    }
  }
  else {
    *(int *)(this + 0xd34) = iVar1 + 1;
    *(ulong *)(this + (long)iVar1 * 0x10 + 0xc90) = param_2;
    *(double *)(this + (long)iVar1 * 0x10 + 0xc98) = param_1;
  }
  return;
}

