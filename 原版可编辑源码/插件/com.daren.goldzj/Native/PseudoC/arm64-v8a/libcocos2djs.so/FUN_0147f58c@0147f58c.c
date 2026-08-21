
undefined8
FUN_0147f58c(Isolate *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,ulong *param_5,
            undefined4 param_6)

{
  Isolate *pIVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong local_58;
  
  uVar6 = *param_4;
  pIVar1 = param_1 + 0x95a0;
  if ((uVar6 & 1) == 0) {
LAB_0147f680:
    uVar6 = *param_5;
    if ((uVar6 & 1) != 0) {
      uVar5 = uVar6 & 0xffffffff00000000 | 7;
      if (((*(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0x4e) &&
          ((*(uint *)(uVar6 + 0x27) & 1) != 0)) &&
         ((uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x27),
          *(short *)(uVar5 + *(uint *)(uVar6 - 1)) == 0xa6 &&
          (local_58 = uVar6,
          uVar6 = v8::internal::SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_58),
          (uVar6 & 1) != 0)))) {
        uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
        uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
        if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar2 = *(ulong **)pIVar1;
          if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
            puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
          }
          *(ulong **)pIVar1 = puVar2 + 1;
          *puVar2 = uVar6;
        }
        else {
          puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
        }
        param_5 = (ulong *)FUN_0147cb10(param_1,puVar2,param_5,0);
        if (param_5 == (ulong *)0x0) goto LAB_0147f774;
      }
    }
    lVar3 = v8::internal::JSObject::DefineAccessor(param_2,param_3,param_4,param_5,param_6);
    uVar4 = 0;
    if (lVar3 != 0) {
      uVar4 = param_2;
    }
  }
  else {
    uVar5 = uVar6 & 0xffffffff00000000 | 7;
    if ((((*(short *)(uVar5 + *(uint *)(uVar6 - 1)) != 0x4e) || ((*(uint *)(uVar6 + 0x27) & 1) == 0)
         ) || (uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x27),
              *(short *)(uVar5 + *(uint *)(uVar6 - 1)) != 0xa6)) ||
       (local_58 = uVar6,
       uVar6 = v8::internal::SharedFunctionInfo::BreakAtEntry((SharedFunctionInfo *)&local_58),
       (uVar6 & 1) == 0)) goto LAB_0147f680;
    uVar6 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)v8::internal::HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar6);
    }
    param_4 = (ulong *)FUN_0147cb10(param_1,puVar2,param_4,0);
    if (param_4 != (ulong *)0x0) goto LAB_0147f680;
LAB_0147f774:
    uVar4 = 0;
  }
  return uVar4;
}

