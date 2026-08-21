
/* v8::internal::ObjectLiteralProperty::ObjectLiteralProperty(v8::internal::AstValueFactory*,
   v8::internal::Expression*, v8::internal::Expression*, bool) */

void __thiscall
v8::internal::ObjectLiteralProperty::ObjectLiteralProperty
          (ObjectLiteralProperty *this,AstValueFactory *param_1,Expression *param_2,
          Expression *param_3,bool param_4)

{
  *(ulong *)this = (ulong)param_4 | (ulong)param_2;
  *(Expression **)(this + 8) = param_3;
  this[0x11] = (ObjectLiteralProperty)0x1;
  if (!param_4) {
    if ((*(uint *)(param_2 + 4) & 0x3f) != 0x29) {
      param_2 = (Expression *)0x0;
    }
    if (((*(uint *)(param_2 + 4) & 0x780) == 0x180) &&
       (*(long *)(param_2 + 8) == *(long *)(*(long *)(param_1 + 0x38) + 0x198))) {
      this[0x10] = (ObjectLiteralProperty)0x5;
      return;
    }
  }
  if ((param_3 != (Expression *)0x0) && ((*(uint *)(param_3 + 4) + 0x2b & 0x3f) < 3)) {
    this[0x10] = (ObjectLiteralProperty)0x2;
    return;
  }
  if ((*(uint *)(param_3 + 4) & 0x3f) == 0x29) {
    this[0x10] = (ObjectLiteralProperty)0x0;
    return;
  }
  this[0x10] = (ObjectLiteralProperty)0x1;
  return;
}

