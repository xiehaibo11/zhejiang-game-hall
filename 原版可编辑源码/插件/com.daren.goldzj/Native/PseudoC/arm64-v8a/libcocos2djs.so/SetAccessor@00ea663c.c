
/* v8::ObjectTemplate::SetAccessor(v8::Local<v8::String>, void (*)(v8::Local<v8::String>,
   v8::PropertyCallbackInfo<v8::Value> const&), void (*)(v8::Local<v8::String>,
   v8::Local<v8::Value>, v8::PropertyCallbackInfo<void> const&), v8::Local<v8::Value>,
   v8::AccessControl, v8::PropertyAttribute, v8::Local<v8::AccessorSignature>, v8::SideEffectType,
   v8::SideEffectType) */

void v8::ObjectTemplate::SetAccessor(long param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  int in_w6;
  undefined8 uVar7;
  Isolate *pIVar8;
  long lVar9;
  int in_stack_00000000;
  int in_stack_00000008;
  
  uVar4 = *(uint *)(param_1 + 4);
  pIVar8 = (Isolate *)((ulong)uVar4 << 0x20);
  puVar1 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
  uVar5 = *(undefined4 *)(pIVar8 + 0x2c60);
  *(undefined4 *)(pIVar8 + 0x2c60) = 5;
  uVar7 = *puVar1;
  piVar2 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
  plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
  lVar9 = *plVar3;
  *piVar2 = *piVar2 + 1;
  plVar6 = (long *)FUN_00ed7110(pIVar8);
  *(uint *)(*plVar6 + 7) = *(uint *)(*plVar6 + 7) & 0xffffe3fe | in_w6 << 10;
  *(uint *)(*plVar6 + 7) = *(uint *)(*plVar6 + 7) & 0xffffff3e | in_stack_00000000 << 6;
  if (in_stack_00000008 != 1) {
    *(uint *)(*plVar6 + 7) = *(uint *)(*plVar6 + 7) & 0xfffffcfe | in_stack_00000008 << 8;
    internal::ApiNatives::AddNativeDataProperty(pIVar8,param_1,plVar6);
    if (uVar4 != 0) {
      *puVar1 = uVar7;
      *piVar2 = *piVar2 + -1;
      if (*plVar3 != lVar9) {
        *plVar3 = lVar9;
        internal::HandleScope::DeleteExtensions(pIVar8);
      }
    }
    *(undefined4 *)(pIVar8 + 0x2c60) = uVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","value != SideEffectType::kHasNoSideEffect");
}

