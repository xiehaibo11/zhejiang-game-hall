
/* v8::internal::compiler::JSNativeContextSpecialization::ReduceJSStoreNamedOwn(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::JSNativeContextSpecialization::ReduceJSStoreNamedOwn
          (JSNativeContextSpecialization *this,Node *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)StoreNamedOwnParametersOf(*(Operator **)param_1);
  uVar3 = NodeProperties::GetValueInput(param_1,1);
  if ((puVar2[1] == 0) || (*(int *)(puVar2 + 2) == -1)) {
    uVar3 = 0;
  }
  else {
    ObjectRef::ObjectRef((ObjectRef *)&local_80,*(undefined8 *)(this + 0x18),*puVar2,0);
    uVar4 = ObjectRef::IsName((ObjectRef *)&local_80);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsName()");
    }
    local_70[0] = 1;
    uStack_60 = uStack_78;
    local_68 = local_80;
    local_50 = *(undefined4 *)(puVar2 + 2);
    local_58 = puVar2[1];
    uVar3 = ReducePropertyAccess(this,param_1,0,local_70,uVar3,&local_58,2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

