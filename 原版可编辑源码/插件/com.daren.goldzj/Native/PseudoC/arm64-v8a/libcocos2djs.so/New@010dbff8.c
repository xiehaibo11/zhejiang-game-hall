
/* v8::internal::JSDate::New(v8::internal::Handle<v8::internal::JSFunction>,
   v8::internal::Handle<v8::internal::JSReceiver>, double) */

undefined8 * v8::internal::JSDate::New(double param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  undefined8 local_38;
  
  uVar1 = *(uint *)(param_2 + 4);
  puVar2 = (undefined8 *)JSObject::New(param_2,param_3,0);
  if (puVar2 != (undefined8 *)0x0) {
    dVar4 = NAN;
    if ((-8.64e+15 <= param_1) && (param_1 <= 8.64e+15)) {
      if ((param_1 != 0.0) && ((ABS(param_1) != INFINITY && (!NAN(ABS(param_1)))))) {
        param_1 = (double)(long)param_1;
      }
      dVar4 = param_1 + 0.0;
    }
    puVar3 = (undefined8 *)
             Factory::NewNumber<(v8::internal::AllocationType)0>
                       ((Factory *)((ulong)uVar1 << 0x20),dVar4);
    local_38 = *puVar2;
    SetValue((JSDate *)&local_38,*puVar3,NAN(dVar4));
  }
  return puVar2;
}

