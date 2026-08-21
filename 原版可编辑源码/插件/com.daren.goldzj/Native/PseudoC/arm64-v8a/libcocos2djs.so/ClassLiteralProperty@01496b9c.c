
/* v8::internal::ClassLiteralProperty::ClassLiteralProperty(v8::internal::Expression*,
   v8::internal::Expression*, v8::internal::ClassLiteralProperty::Kind, bool, bool, bool) */

void __thiscall
v8::internal::ClassLiteralProperty::ClassLiteralProperty
          (ClassLiteralProperty *this,ulong param_1,undefined8 param_2,ClassLiteralProperty param_4,
          byte param_5,ulong param_6,byte param_7)

{
  this[0x10] = param_4;
  this[0x11] = (ClassLiteralProperty)(param_5 & 1);
  this[0x12] = (ClassLiteralProperty)(param_7 & 1);
  *(ulong *)this = param_6 & 1 | param_1;
  *(undefined8 *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

