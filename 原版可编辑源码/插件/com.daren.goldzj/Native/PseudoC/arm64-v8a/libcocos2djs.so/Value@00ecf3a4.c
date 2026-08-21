
/* v8::String::Value::Value(v8::Isolate*, v8::Local<v8::Value>) */

void __thiscall v8::String::Value::Value(Value *this,Isolate *param_1,Value *param_3)

{
  Isolate *pIVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  String *this_00;
  ushort *puVar10;
  long *plVar11;
  ulong uVar12;
  Isolate *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  byte local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  if (param_3 == (Value *)0x0) goto LAB_00ecf530;
  uVar5 = *(undefined4 *)(param_1 + 0x2c60);
  pIVar1 = param_1 + 0x95a0;
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar3 = *(ulong **)pIVar1;
  puVar4 = *(ulong **)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  uVar12 = *(ulong *)(param_1 + 0x2bc8);
  if ((int)uVar12 == 0) {
LAB_00ecf444:
    puVar9 = (ulong *)0x0;
LAB_00ecf448:
    local_70 = 6;
  }
  else {
    uVar6 = *(uint *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 0x13);
    if (uVar6 == 0) goto LAB_00ecf444;
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)uVar6;
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) != (CanonicalHandleScope *)0x0) {
      puVar9 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar12);
      goto LAB_00ecf448;
    }
    puVar9 = puVar3;
    if (puVar4 == puVar3) {
      puVar9 = (ulong *)internal::HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar9 + 1;
    *puVar9 = uVar12;
    local_70 = local_70 & 0xe0 | 6;
  }
  uStack_90 = *(undefined8 *)(param_1 + 0x2bb8);
  local_88 = *(undefined8 *)(param_1 + 0xa8);
  local_98 = param_1;
  uStack_80 = local_88;
  local_78 = internal::GetCurrentStackPosition();
  internal::Isolate::RegisterTryCatchHandler(param_1,(TryCatch *)&local_98);
  this_00 = (String *)v8::Value::ToString(param_3,puVar9);
  if (this_00 != (String *)0x0) {
    iVar7 = *(int *)(*(long *)this_00 + 7);
    *(int *)(this + 8) = iVar7;
    uVar12 = (long)iVar7 + 1;
    uVar2 = uVar12 * 2;
    if (CARRY8(uVar12,uVar12)) {
      uVar2 = 0xffffffffffffffff;
    }
    puVar10 = operator_new__(uVar2,(nothrow_t *)&std::nothrow);
    if (puVar10 == (ushort *)0x0) {
      plVar11 = (long *)internal::V8::GetCurrentPlatform();
      (**(code **)(*plVar11 + 0x18))();
      puVar10 = operator_new__(uVar2,(nothrow_t *)&std::nothrow);
      if (puVar10 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
        internal::FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
    }
    *(ushort **)this = puVar10;
    Write(this_00,(Isolate *)param_1,puVar10,0,-1,0);
  }
  TryCatch::~TryCatch((TryCatch *)&local_98);
  *(ulong **)pIVar1 = puVar3;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(ulong **)(param_1 + 0x95a8) != puVar4) {
    *(ulong **)(param_1 + 0x95a8) = puVar4;
    internal::HandleScope::DeleteExtensions(param_1);
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar5;
LAB_00ecf530:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

