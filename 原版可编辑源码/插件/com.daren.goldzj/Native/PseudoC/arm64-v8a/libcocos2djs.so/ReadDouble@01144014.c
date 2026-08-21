
/* v8::internal::ValueDeserializer::ReadDouble(double*) */

undefined8 __thiscall
v8::internal::ValueDeserializer::ReadDouble(ValueDeserializer *this,double *param_1)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  
  pdVar2 = *(double **)(this + 0x10);
  if ((double *)(*(long *)(this + 0x18) - 8U) < pdVar2) {
    return 0;
  }
  dVar3 = *pdVar2;
  *(double **)(this + 0x10) = pdVar2 + 1;
  dVar1 = NAN;
  if (!NAN(dVar3)) {
    dVar1 = dVar3;
  }
  *param_1 = dVar1;
  return 1;
}

