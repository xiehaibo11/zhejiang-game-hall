
/* v8::internal::ValueDeserializer::ReadDouble() */

undefined8 __thiscall v8::internal::ValueDeserializer::ReadDouble(ValueDeserializer *this)

{
  double *pdVar1;
  double dVar2;
  
  pdVar1 = *(double **)(this + 0x10);
  if ((double *)(*(long *)(this + 0x18) + -8) < pdVar1) {
    return 0;
  }
  dVar2 = *pdVar1;
  *(double **)(this + 0x10) = pdVar1 + 1;
  if (!NAN(dVar2)) {
    return 1;
  }
  return 1;
}

