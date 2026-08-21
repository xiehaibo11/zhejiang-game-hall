
/* v8::internal::compiler::JSCallReducerAssembler::JSCallRuntime2(v8::internal::Runtime::FunctionId,
   v8::internal::TNode<v8::internal::Object>, v8::internal::TNode<v8::internal::Object>,
   v8::internal::compiler::FrameState) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducerAssembler::JSCallRuntime2
          (JSCallReducerAssembler *this,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_8c = param_2;
  local_88 = param_5;
  local_80 = param_4;
  uStack_78 = param_3;
  local_50 = operator_new(0x30);
  *local_50 = (long)&PTR_FUN_01ccd450;
  local_50[1] = (long)this;
  local_50[2] = (long)&local_8c;
  local_50[3] = (long)&uStack_78;
  local_50[4] = (long)&local_80;
  local_50[5] = (long)&local_88;
  uVar2 = MayThrow(this,(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_016d71cc;
    pcVar3 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar3)(local_50);
LAB_016d71cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

