
/* v8::internal::Map::UnwrapFieldType(v8::internal::MaybeObject) */

void v8::internal::Map::UnwrapFieldType(ulong param_1)

{
  if ((uint)param_1 == 3) {
    FieldType::None();
    return;
  }
  if ((~(uint)param_1 & 3) == 0) {
    param_1 = param_1 & 0xfffffffffffffffd;
  }
  FieldType::cast(param_1);
  return;
}

