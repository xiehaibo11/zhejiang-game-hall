
/* v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyTest(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::PropertyAccessInfo const&) */

void v8::internal::compiler::JSNativeContextSpecialization::BuildPropertyTest
               (Node *param_1,Node *param_2,PropertyAccessInfo *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  int *in_x3;
  undefined8 *in_x8;
  CompilationDependencies *pCVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (*(long *)(in_x3 + 0x16) != 0) {
    pCVar3 = *(CompilationDependencies **)(param_1 + 0x38);
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_68,*(undefined8 *)(param_1 + 0x18),*(long *)(in_x3 + 0x16),0);
    uVar1 = ObjectRef::IsJSObject((ObjectRef *)&local_68);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsJSObject()");
    }
    local_58[0] = 1;
    uStack_48 = uStack_60;
    local_50 = local_68;
    CompilationDependencies::
    DependOnStablePrototypeChains<v8::internal::ZoneVector<v8::internal::Handle<v8::internal::Map>>>
              (pCVar3,in_x3 + 2,1,local_58);
  }
  if (*in_x3 == 1) {
    uVar2 = JSGraph::FalseConstant(*(JSGraph **)(param_1 + 0x10));
  }
  else {
    uVar2 = JSGraph::TrueConstant(*(JSGraph **)(param_1 + 0x10));
  }
  *in_x8 = uVar2;
  in_x8[1] = param_2;
  in_x8[2] = param_3;
  return;
}

