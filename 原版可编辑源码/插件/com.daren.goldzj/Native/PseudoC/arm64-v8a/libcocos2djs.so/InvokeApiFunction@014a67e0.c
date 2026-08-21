
/* v8::internal::Builtins::InvokeApiFunction(v8::internal::Isolate*, bool,
   v8::internal::Handle<v8::internal::HeapObject>, v8::internal::Handle<v8::internal::Object>, int,
   v8::internal::Handle<v8::internal::Object>*, v8::internal::Handle<v8::internal::HeapObject>) */

undefined8
v8::internal::Builtins::InvokeApiFunction
          (Isolate *param_1,ulong param_2,ulong *param_3,ulong *param_4,uint param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  uint uVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined **local_1c8;
  Isolate *local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  ulong *puStack_1a8;
  undefined8 local_1a0 [32];
  RuntimeCallStats *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = (RuntimeCallStats *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_a0 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_a0,(ulong)&local_a0 | 8,0x95);
  }
  if (((param_2 & 1) == 0) &&
     ((uVar4 = *param_4, (uVar4 & 1) == 0 ||
      (*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)))) {
    uVar4 = *param_3;
    if (((*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x4e) ||
        ((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) >> 6 & 1)
         == 0)) &&
       (param_4 = (ulong *)Object::ConvertReceiver(param_1,param_4), param_4 == (ulong *)0x0)) {
      uVar5 = 0;
      goto joined_r0x014a6a64;
    }
  }
  uVar6 = *param_3;
  uVar4 = uVar6 & 0xffffffff00000000;
  puVar2 = param_3;
  if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar6 - 1)) != 0x4e) {
    uVar4 = uVar4 | *(uint *)((uVar4 | *(uint *)(uVar6 + 0xb)) + 3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(param_1 + 0x95a0);
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    }
  }
  uVar1 = param_5 + 5;
  if ((int)uVar1 < 0x21) {
    puVar3 = local_1a0;
  }
  else {
    puVar3 = operator_new__((ulong)uVar1 << 3);
  }
  puStack_1a8 = puVar3 + (int)(param_5 + 4);
  *puStack_1a8 = *param_4;
  if (0 < (int)param_5) {
    uVar4 = (ulong)param_5;
    puVar7 = puVar3 + (int)(param_5 + 3);
    do {
      uVar4 = uVar4 - 1;
      *puVar7 = *(undefined8 *)*param_6;
      puVar7 = puVar7 + -1;
      param_6 = param_6 + 1;
    } while (uVar4 != 0);
  }
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  local_1b0 = (long)(int)uVar1;
  puVar3[2] = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  puVar3[3] = uVar5;
  puVar3[1] = *param_3;
  *puVar3 = *param_7;
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb790);
  *(undefined ****)(param_1 + 0xb790) = &local_1c8;
  local_1c8 = &PTR__Relocatable_01cc42b0;
  local_1c0 = param_1;
  if ((param_2 & 1) == 0) {
    uVar5 = FUN_014a6d98(param_1,param_3,param_7,puVar2);
  }
  else {
    uVar5 = FUN_014a6aa4();
  }
  local_1c8 = &PTR__Relocatable_01cacc40;
  *(undefined8 *)(local_1c0 + 0xb790) = uStack_1b8;
  if (puVar3 != local_1a0) {
    operator_delete__(puVar3);
  }
joined_r0x014a6a64:
  if (local_a0 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_a0,(RuntimeCallTimer *)((ulong)&local_a0 | 8));
  }
  return uVar5;
}

