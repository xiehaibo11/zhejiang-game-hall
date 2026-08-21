
/* v8::String::Utf8Value::Utf8Value(v8::Isolate*, v8::Local<v8::Value>) */

void __thiscall v8::String::Utf8Value::Utf8Value(Utf8Value *this,Isolate *param_1,Value *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  ulong *puVar8;
  String *this_00;
  char *pcVar9;
  long *plVar10;
  ulong uVar11;
  Isolate *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  byte local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  if (param_3 == (Value *)0x0) goto LAB_00ecf320;
  uVar4 = *(undefined4 *)(param_1 + 0x2c60);
  pIVar1 = param_1 + 0x95a0;
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar11 = *(ulong *)(param_1 + 0x2bc8);
  if ((int)uVar11 == 0) {
LAB_00ecf238:
    puVar8 = (ulong *)0x0;
LAB_00ecf23c:
    local_70 = 6;
  }
  else {
    uVar5 = *(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 0x13);
    if (uVar5 == 0) goto LAB_00ecf238;
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)uVar5;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar8 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar11);
      goto LAB_00ecf23c;
    }
    puVar8 = puVar2;
    if (puVar3 == puVar2) {
      puVar8 = (ulong *)internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar8 + 1;
    *puVar8 = uVar11;
    local_70 = local_70 & 0xe0 | 6;
  }
  uStack_90 = *(undefined8 *)(param_1 + 0x2bb8);
  local_88 = *(undefined8 *)(param_1 + 0xa8);
  local_98 = param_1;
  uStack_80 = local_88;
  local_78 = internal::GetCurrentStackPosition();
  internal::Isolate::RegisterTryCatchHandler(param_1,(TryCatch *)&local_98);
  this_00 = (String *)v8::Value::ToString(param_3,puVar8);
  if (this_00 != (String *)0x0) {
    iVar7 = Utf8Length(this_00,(Isolate *)param_1);
    *(int *)(this + 8) = iVar7;
    pcVar9 = operator_new__((long)(iVar7 + 1),(nothrow_t *)&std::nothrow);
    if (pcVar9 == (char *)0x0) {
      plVar10 = (long *)internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar10 + 0x18))();
      pcVar9 = operator_new__((long)(iVar7 + 1),(nothrow_t *)&std::nothrow);
      if (pcVar9 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
        internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    *(char **)this = pcVar9;
    WriteUtf8(this_00,(Isolate *)param_1,pcVar9,-1,(int *)0x0,0);
  }
  TryCatch::~TryCatch((TryCatch *)&local_98);
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar3) {
    *(ulong **)(param_1 + 0x95a8) = puVar3;
    internal::HandleScope::DeleteExtensions(param_1);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar4;
LAB_00ecf320:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

