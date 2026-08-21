
void FUN_014b901c(Factory *param_1,undefined8 param_2,char *param_3,undefined4 param_4,ulong param_5
                 ,ulong *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  char *local_a8;
  size_t sStack_a0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  sStack_a0 = strlen(param_3);
  local_a8 = param_3;
  uVar2 = v8::internal::Factory::InternalizeUtf8String(param_1,(Vector *)&local_a8);
  lVar3 = v8::internal::Name::ToFunctionName(param_1,uVar2);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  v8::internal::NewFunctionArgs::ForBuiltinWithoutPrototype
            ((NewFunctionArgs *)&local_a8,lVar3,param_4,0);
  puVar4 = (ulong *)v8::internal::Factory::NewFunction(param_1,(NewFunctionArgs *)&local_a8);
  uVar7 = -((param_5 & 0xffffffff) >> 0x1f) & 0xfffffffe00000000 | (param_5 & 0xffffffff) << 1;
  uVar6 = *puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb);
  *(uint *)(uVar6 + 0x1b) = *(uint *)(uVar6 + 0x1b) | 0x20;
  *(undefined2 *)((*puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb)) + 0x15) = 0xffff;
  *(undefined2 *)((*puVar4 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar4 + 0xb)) + 0x13) = 1;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(param_1 + 0x95a0);
    if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
      puVar5 = (ulong *)v8::internal::HandleScope::Extend((Isolate *)param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar7);
  }
  v8::internal::JSObject::AddProperty(param_1,puVar4,param_1 + 0xb20,puVar5,0);
  uVar6 = *param_6;
  if (((uVar6 & 1) != 0) &&
     (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0x40)) {
    v8::internal::JSObject::AddProperty(param_1,puVar4,param_1 + 0xb28,param_6,0);
  }
  v8::internal::JSObject::AddProperty(param_1,param_2,lVar3,puVar4,0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

