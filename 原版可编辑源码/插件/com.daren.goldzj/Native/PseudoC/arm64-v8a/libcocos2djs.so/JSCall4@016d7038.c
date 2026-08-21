
/* v8::internal::compiler::JSCallReducerAssembler::JSCall4(v8::internal::TNode<v8::internal::Object>,
   v8::internal::TNode<v8::internal::Object>, v8::internal::TNode<v8::internal::Object>,
   v8::internal::TNode<v8::internal::Object>, v8::internal::TNode<v8::internal::Object>,
   v8::internal::TNode<v8::internal::Object>, v8::internal::compiler::FrameState) */

undefined8 __thiscall
v8::internal::compiler::JSCallReducerAssembler::JSCall4
          (JSCallReducerAssembler *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a8 = param_8;
  local_a0 = param_7;
  uStack_98 = param_6;
  local_90 = param_5;
  uStack_88 = param_4;
  local_80 = param_3;
  uStack_78 = param_2;
  lVar2 = CallParametersOf((Operator *)**(undefined8 **)(this + 0x38));
  local_50 = operator_new(0x50);
  local_50[2] = lVar2;
  local_50[3] = (long)&uStack_78;
  local_50[4] = (long)&local_80;
  local_50[5] = (long)&uStack_88;
  local_50[6] = (long)&local_90;
  local_50[7] = (long)&uStack_98;
  *local_50 = (long)&PTR_FUN_01ccd408;
  local_50[1] = (long)this;
  local_50[8] = (long)&local_a0;
  local_50[9] = (long)&local_a8;
  uVar3 = MayThrow(this,(function *)alStack_70);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_016d7100;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)(local_50);
LAB_016d7100:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

