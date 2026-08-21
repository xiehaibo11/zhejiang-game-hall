
void FUN_00f9de24(long param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,ulong *param_5)

{
  Isolate *pIVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  
  for (; param_4 < param_5; param_4 = param_4 + 1) {
    pIVar1 = *(Isolate **)(param_1 + 8);
    plVar2 = *(long **)(param_1 + 0x10);
    uVar4 = *param_4;
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,puVar3);
  }
  return;
}

