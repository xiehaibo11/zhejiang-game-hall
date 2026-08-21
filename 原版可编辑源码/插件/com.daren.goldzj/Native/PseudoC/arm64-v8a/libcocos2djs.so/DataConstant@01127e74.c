
/* v8::internal::Descriptor::DataConstant(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, int, v8::internal::Handle<v8::internal::Object>,
   v8::internal::PropertyAttributes) */

void __thiscall
v8::internal::Descriptor::DataConstant
          (undefined8 *param_1_00,Descriptor *this,undefined8 param_1,int param_4,undefined8 param_5
          ,int param_6)

{
  ulong uVar1;
  ulong *puVar2;
  
  uVar1 = FieldType::Any();
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(this + 0x95a0);
    if (puVar2 == *(ulong **)(this + 0x95a8)) {
      puVar2 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar1;
  }
  else {
    puVar2 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar1);
  }
  *param_1_00 = param_1;
  *(undefined4 *)(param_1_00 + 1) = 1;
  param_1_00[2] = puVar2;
  *(uint *)(param_1_00 + 3) = param_4 << 0x13 | param_6 << 3 | 0x104;
  return;
}

