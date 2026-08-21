
/* v8::internal::ObjectLiteralProperty::ObjectLiteralProperty(v8::internal::Expression*,
   v8::internal::Expression*, v8::internal::ObjectLiteralProperty::Kind, bool) */

void __thiscall
v8::internal::ObjectLiteralProperty::ObjectLiteralProperty
          (ObjectLiteralProperty *this,ulong param_1,undefined8 param_2,
          ObjectLiteralProperty param_4,ulong param_5)

{
  this[0x10] = param_4;
  *(ulong *)this = param_5 & 1 | param_1;
  *(undefined8 *)(this + 8) = param_2;
  this[0x11] = (ObjectLiteralProperty)0x1;
  return;
}

