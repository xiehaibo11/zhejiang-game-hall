
/* v8::internal::Object::ConvertToInteger(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

void v8::internal::Object::ConvertToInteger(Factory *param_1,undefined8 param_2)

{
  ulong *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = (ulong *)ConvertToNumberOrNumeric(param_1,param_2,0);
  if ((puVar1 != (ulong *)0x0) && ((*puVar1 & 1) != 0)) {
    dVar2 = *(double *)(*puVar1 + 3);
    if (NAN(dVar2)) {
      dVar3 = 0.0;
    }
    else {
      dVar3 = dVar2;
      if (((dVar2 != 0.0) && (ABS(dVar2) != INFINITY)) && (!NAN(ABS(dVar2)))) {
        dVar3 = (double)(long)dVar2;
        if (dVar2 < 0.0) {
          dVar3 = (double)(long)dVar2;
        }
      }
    }
    Factory::NewNumber<(v8::internal::AllocationType)0>(param_1,dVar3);
    return;
  }
  return;
}

