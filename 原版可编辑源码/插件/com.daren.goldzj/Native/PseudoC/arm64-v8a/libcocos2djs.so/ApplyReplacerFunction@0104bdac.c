
/* v8::internal::JsonStringifier::ApplyReplacerFunction(v8::internal::Handle<v8::internal::Object>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Object>) */

ulong * __thiscall
v8::internal::JsonStringifier::ApplyReplacerFunction
          (JsonStringifier *this,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  byte *local_60;
  undefined8 uStack_58;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_3;
  pIVar6 = *(Isolate **)this;
  pIVar1 = pIVar6 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(pIVar6 + 0x95a8);
  *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + 1;
  if ((*param_3 & 1) == 0) {
    auVar8 = Factory::NumberToString(*(Factory **)this,param_3,1);
  }
  local_60 = auVar8._0_8_;
  uStack_58 = param_2;
  uVar4 = CurrentHolder(this,auVar8._8_8_,param_4);
  puVar5 = (ulong *)Execution::Call(*(undefined8 *)this,*(undefined8 *)(this + 0x40),uVar4,2,
                                    &local_60);
  if (puVar5 == (ulong *)0x0) {
    if (pIVar6 != (Isolate *)0x0) {
      *(long *)pIVar1 = lVar2;
      *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
      if (*(long *)(pIVar6 + 0x95a8) != lVar3) {
        *(long *)(pIVar6 + 0x95a8) = lVar3;
        HandleScope::DeleteExtensions(pIVar6);
      }
    }
    puVar5 = (ulong *)0x0;
  }
  else {
    uVar7 = *puVar5;
    *(long *)pIVar1 = lVar2;
    *(int *)(pIVar6 + 0x95b0) = *(int *)(pIVar6 + 0x95b0) + -1;
    if (*(long *)(pIVar6 + 0x95a8) != lVar3) {
      *(long *)(pIVar6 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(pIVar6);
    }
    if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)pIVar1;
      if (puVar5 == *(ulong **)(pIVar6 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar6);
      }
      *(ulong **)pIVar1 = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar7);
    }
    *(undefined4 *)(pIVar6 + 0x95b0) = *(undefined4 *)(pIVar6 + 0x95b0);
  }
  return puVar5;
}

