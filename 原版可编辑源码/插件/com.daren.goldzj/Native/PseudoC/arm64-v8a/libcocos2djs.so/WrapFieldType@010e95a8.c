
/* v8::internal::Map::WrapFieldType(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FieldType>) */

undefined1  [16] v8::internal::Map::WrapFieldType(Isolate *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  ulong local_38;
  
  local_38 = *param_2;
  uVar1 = FieldType::IsClass((FieldType *)&local_38);
  if ((uVar1 & 1) == 0) {
    uVar2 = 1;
  }
  else {
    local_38 = *param_2;
    uVar1 = FieldType::AsClass((FieldType *)&local_38);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      param_2 = *(ulong **)(param_1 + 0x95a0);
      if (param_2 == *(ulong **)(param_1 + 0x95a8)) {
        param_2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = param_2 + 1;
      *param_2 = uVar1;
    }
    else {
      param_2 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar1);
    }
    uVar2 = 0;
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}

