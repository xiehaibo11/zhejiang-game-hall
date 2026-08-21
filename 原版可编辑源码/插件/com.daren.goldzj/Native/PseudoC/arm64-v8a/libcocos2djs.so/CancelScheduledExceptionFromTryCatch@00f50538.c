
/* v8::internal::Isolate::CancelScheduledExceptionFromTryCatch(v8::TryCatch*) */

void __thiscall
v8::internal::Isolate::CancelScheduledExceptionFromTryCatch(Isolate *this,TryCatch *param_1)

{
  if (*(long *)(param_1 + 0x10) != *(long *)(this + 0x2c20)) {
    if (*(long *)(this + 0x2c08) != 0) goto LAB_00f50560;
    this[0x2c19] = (Isolate)0x0;
  }
  *(undefined8 *)(this + 0x2c20) = *(undefined8 *)(this + 0xa8);
LAB_00f50560:
  if (*(long *)(param_1 + 0x18) != *(long *)(this + 0x2c10)) {
    return;
  }
  *(undefined8 *)(this + 0x2c10) = *(undefined8 *)(this + 0xa8);
  return;
}

