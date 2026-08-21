
/* v8::internal::JSObject::NormalizeProperties(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, v8::internal::PropertyNormalizationMode, int, char
   const*) */

void v8::internal::JSObject::NormalizeProperties
               (Isolate *param_1,ulong *param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = *param_2;
  if ((*(uint *)((uVar3 & 0xffffffff00000000 | 0xb) + (ulong)*(uint *)(uVar3 - 1)) >> 0x15 & 1) == 0
     ) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar3;
    }
    else {
      puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar3);
      uVar3 = *puVar1;
    }
    uVar2 = Map::Normalize(param_1,puVar1,*(byte *)(uVar3 + 10) >> 3,param_3,param_5);
    MigrateToMap(param_1,param_2,uVar2,param_4);
    return;
  }
  return;
}

