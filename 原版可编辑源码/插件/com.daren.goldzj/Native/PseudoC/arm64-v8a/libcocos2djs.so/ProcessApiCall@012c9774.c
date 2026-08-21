
/* v8::internal::compiler::SerializerForBackgroundCompilation::ProcessApiCall(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::ZoneVector<v8::internal::compiler::Hints> const&) */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::ProcessApiCall
          (SerializerForBackgroundCompilation *this,ulong *param_2,long *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  ObjectRef aOStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  ObjectRef aOStack_90 [16];
  ObjectRef aOStack_80 [16];
  ObjectRef aOStack_70 [16];
  
  plVar9 = *(long **)this;
  uVar3 = Builtins::builtin_handle((Builtins *)(*plVar9 + 0x9e00),0x11);
  ObjectRef::ObjectRef(aOStack_70,plVar9,uVar3,1);
  plVar9 = *(long **)this;
  uVar3 = Builtins::builtin_handle((Builtins *)(*plVar9 + 0x9e00),0x12);
  ObjectRef::ObjectRef(aOStack_80,plVar9,uVar3,1);
  plVar9 = *(long **)this;
  uVar3 = Builtins::builtin_handle((Builtins *)(*plVar9 + 0x9e00),0x13);
  ObjectRef::ObjectRef(aOStack_90,plVar9,uVar3,1);
  uVar3 = *(undefined8 *)this;
  uVar10 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 3);
  pIVar4 = (Isolate *)**(undefined8 **)this;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar10;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar10);
  }
  ObjectRef::ObjectRef((ObjectRef *)&local_a0,uVar3,puVar5,0);
  uVar10 = ObjectRef::IsFunctionTemplateInfo((ObjectRef *)&local_a0);
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsFunctionTemplateInfo()");
  }
  uVar10 = FunctionTemplateInfoRef::has_call_code((FunctionTemplateInfoRef *)&local_a0);
  if ((uVar10 & 1) != 0) {
    FunctionTemplateInfoRef::SerializeCallCode((FunctionTemplateInfoRef *)&local_a0);
    ObjectRef::ObjectRef(aOStack_b0,*(undefined8 *)this,param_2,0);
    uVar10 = ObjectRef::IsSharedFunctionInfo(aOStack_b0);
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsSharedFunctionInfo()");
    }
    SharedFunctionInfoRef::SerializeFunctionTemplateInfo((SharedFunctionInfoRef *)aOStack_b0);
    uVar10 = FunctionTemplateInfoRef::accept_any_receiver((FunctionTemplateInfoRef *)&local_a0);
    if (((uVar10 & 1) == 0) ||
       (uVar10 = FunctionTemplateInfoRef::is_signature_undefined
                           ((FunctionTemplateInfoRef *)&local_a0), (uVar10 & 1) == 0)) {
      plVar9 = (long *)*param_3;
      if ((plVar9 != (long *)param_3[1]) &&
         (puVar6 = (undefined8 *)*plVar9, puVar6 != (undefined8 *)0x0)) {
        puVar11 = (undefined8 *)*puVar6;
        if (puVar11 != (undefined8 *)0x0) {
          do {
            uVar10 = *(ulong *)*puVar11;
            if ((uVar10 & 1) != 0) {
              uVar8 = uVar10 & 0xffffffff00000000;
              if ((int)uVar10 == *(int *)(uVar8 + 0xa0)) {
                lVar7 = *(long *)this;
                if (*(char *)(lVar7 + 0x18) != '\x01') {
                    /* WARNING: Subroutine does not return */
                  V8_Fatal("Check failed: %s.","storage_.is_populated_");
                }
                uStack_c8 = *(undefined8 *)(lVar7 + 0x28);
                local_d0 = *(undefined8 *)(lVar7 + 0x20);
                auVar12 = NativeContextRef::global_proxy_object((NativeContextRef *)&local_d0);
                local_c0 = auVar12;
                puVar5 = (ulong *)JSGlobalProxyRef::object((JSGlobalProxyRef *)local_c0);
                uVar1 = *(uint *)(*puVar5 - 1);
                puVar6 = *(undefined8 **)this;
                uVar8 = *puVar5 & 0xffffffff00000000;
              }
              else {
                if (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) < 0xa9)
                goto LAB_012c993c;
                uVar1 = *(uint *)(uVar10 - 1);
                puVar6 = *(undefined8 **)this;
              }
              uVar2 = uStack_98;
              uVar3 = local_a0;
              pIVar4 = (Isolate *)*puVar6;
              if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
                puVar5 = *(ulong **)(pIVar4 + 0x95a0);
                if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
                  puVar5 = (ulong *)HandleScope::Extend(pIVar4);
                }
                *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
                *puVar5 = uVar8 | uVar1;
              }
              else {
                puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),
                                             uVar8 | uVar1);
              }
              ProcessReceiverMapForApiCall(this,uVar3,uVar2,puVar5);
            }
LAB_012c993c:
            puVar11 = (undefined8 *)puVar11[1];
          } while (puVar11 != (undefined8 *)0x0);
          puVar6 = (undefined8 *)*plVar9;
          if (puVar6 == (undefined8 *)0x0) {
            return;
          }
        }
        for (puVar6 = (undefined8 *)puVar6[1]; puVar6 != (undefined8 *)0x0;
            puVar6 = (undefined8 *)puVar6[1]) {
          ProcessReceiverMapForApiCall(this,local_a0,uStack_98,*puVar6);
        }
      }
    }
  }
  return;
}

