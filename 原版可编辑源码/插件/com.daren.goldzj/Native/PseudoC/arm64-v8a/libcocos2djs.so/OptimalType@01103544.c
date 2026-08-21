
/* v8::internal::Object::OptimalType(v8::internal::Isolate*, v8::internal::Representation) */

void __thiscall v8::internal::Object::OptimalType(Object *this,Isolate *param_1,char param_3)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if (param_3 == '\0') {
    FieldType::None(param_1);
    return;
  }
  if (((param_3 == '\x03') && (FLAG_track_field_types != '\0')) &&
     (uVar3 = *(ulong *)this, (uVar3 & 1) != 0)) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
      uVar1 = *(uint *)(uVar3 + 0xb);
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
      uVar3 = *puVar2;
      uVar1 = *(uint *)(uVar3 + 0xb);
    }
    if (((uVar1 >> 0x19 & 1) == 0) && (0xa8 < *(ushort *)(uVar3 + 7))) {
      FieldType::Class(puVar2,param_1);
      return;
    }
  }
  FieldType::Any(param_1);
  return;
}

