
void FUN_0147f360(undefined8 *param_1,Isolate *param_2,ulong *param_3)

{
  byte bVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_1 = param_2;
  bVar1 = *(byte *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1)) + 9);
  param_1[2] = param_3;
  *(byte *)(param_1 + 1) = bVar1 >> 5 & 1;
  if ((bVar1 >> 5 & 1) == 0) {
    return;
  }
  uVar4 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 - 1);
  if (*(CanonicalHandleScope **)(param_2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar2 = *(ulong **)(param_2 + 0x95a0);
    if (puVar2 == *(ulong **)(param_2 + 0x95a8)) {
      puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_2);
    }
    *(ulong **)(param_2 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar4;
  }
  else {
    puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_2 + 0x95b8),uVar4);
  }
  plVar3 = (long *)v8::internal::Map::Copy(param_2,puVar2,"DisableAccessChecks");
  *(byte *)(*plVar3 + 9) = *(byte *)(*plVar3 + 9) & 0xdf;
  v8::internal::JSObject::MigrateToMap(param_2,param_3,plVar3,0);
  return;
}

