
ulong * FUN_0155a730(Isolate *param_1,ulong *param_2,int param_3,long param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Isolate *local_90;
  ulong local_88;
  ulong *local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar6 = *param_2;
  pIVar7 = (Isolate *)(uVar6 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0xab) {
    local_90 = *(Isolate **)(pIVar7 + 0x2bc8);
    iVar2 = v8::internal::Context::global_object((Context *)&local_90);
    local_80 = (ulong *)0x0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_90 = pIVar7;
    local_88 = uVar6;
    v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_90);
    if ((int)local_88 == iVar2) goto LAB_0155a854;
LAB_0155a7e0:
    uVar6 = *(ulong *)(param_1 + 0x2bc8);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(param_1 + 0x95a0);
      if (puVar5 == *(ulong **)(param_1 + 0x95a8)) {
        puVar5 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar6;
    }
    else {
      puVar5 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    uVar6 = v8::internal::Isolate::MayAccess(param_1,puVar5,param_2);
    if (((uVar6 & 1) != 0) ||
       (v8::internal::Isolate::ReportFailedAccessCheck(param_1,param_2),
       *(int *)(param_1 + 0x2c20) == *(int *)(param_1 + 0xa8))) goto LAB_0155a854;
    v8::internal::Isolate::PromoteScheduledException(param_1);
  }
  else {
    if ((*(byte *)(((ulong)pIVar7 | 9) + (ulong)*(uint *)(uVar6 - 1)) >> 5 & 1) != 0)
    goto LAB_0155a7e0;
LAB_0155a854:
    local_88 = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_90 = param_1;
    local_80 = param_2;
    if (param_2 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","!handle_.is_null()");
    }
    v8::internal::PrototypeIterator::Advance((PrototypeIterator *)&local_90);
    puVar5 = local_80;
    uVar6 = *local_80;
    if (((uVar6 & 1) != 0) &&
       (0xa8 < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1))))
    goto LAB_0155a8e8;
    uVar4 = 0x54;
    if (param_3 != 0) {
      uVar4 = 0x55;
    }
    if (param_4 == 0) {
      param_4 = v8::internal::Factory::SizeToString((Factory *)param_1,(ulong)param_5,true);
    }
    puVar3 = (undefined8 *)
             v8::internal::Factory::NewTypeError((Factory *)param_1,uVar4,param_4,puVar5,0);
    v8::internal::Isolate::Throw(param_1,*puVar3,0);
  }
  puVar5 = (ulong *)0x0;
LAB_0155a8e8:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}

