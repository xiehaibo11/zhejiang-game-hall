
/* v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ThrowIfNotCallable(v8::internal::TNode<v8::internal::Object>,
   v8::internal::compiler::FrameState) */

void __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::ThrowIfNotCallable
          (IteratingArrayBuiltinReducerAssembler *this,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined **local_120;
  IteratingArrayBuiltinReducerAssembler *local_118;
  undefined8 *puStack_110;
  undefined1 *local_108;
  undefined ***local_100;
  IteratingArrayBuiltinReducerAssembler *local_f0;
  undefined8 uStack_e8;
  undefined2 local_e0;
  long alStack_d0 [4];
  long *local_b0;
  long alStack_a0 [4];
  long *local_80;
  undefined **local_70;
  IteratingArrayBuiltinReducerAssembler *local_68;
  undefined8 *puStack_60;
  undefined1 *local_58;
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_130 = param_3;
  uStack_128 = param_2;
  uStack_e8 = GraphAssembler::ObjectIsCallable();
  local_80 = (long *)0x0;
  local_b0 = (long *)0x0;
  puStack_110 = &uStack_128;
  local_e0 = 1;
  local_100 = &local_120;
  local_120 = &PTR_FUN_01ccd260;
  local_118 = this;
  local_108 = (undefined1 *)&local_130;
  local_f0 = this;
  local_70 = local_120;
  local_68 = this;
  puStack_60 = puStack_110;
  local_58 = (undefined1 *)&local_130;
  local_50 = &local_70;
  FUN_008feca4(&local_70,alStack_d0);
  if (&local_70 == local_50) {
    pcVar2 = (code *)(*local_50)[4];
LAB_016d8970:
    (*pcVar2)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_50)[5];
    goto LAB_016d8970;
  }
  local_e0 = CONCAT11(1,(undefined1)local_e0);
  JSCallReducerAssembler::IfBuilder0::Build((IfBuilder0 *)&local_f0);
  if (&local_120 == local_100) {
    pcVar2 = (code *)(*local_100)[4];
LAB_016d89ac:
    (*pcVar2)();
  }
  else if (local_100 != (undefined ***)0x0) {
    pcVar2 = (code *)(*local_100)[5];
    goto LAB_016d89ac;
  }
  if (alStack_a0 == local_80) {
    pcVar2 = *(code **)(*local_80 + 0x20);
LAB_016d89dc:
    (*pcVar2)();
  }
  else if (local_80 != (long *)0x0) {
    pcVar2 = *(code **)(*local_80 + 0x28);
    goto LAB_016d89dc;
  }
  if (alStack_d0 == local_b0) {
    pcVar2 = *(code **)(*local_b0 + 0x20);
  }
  else {
    if (local_b0 == (long *)0x0) goto LAB_016d8a10;
    pcVar2 = *(code **)(*local_b0 + 0x28);
  }
  (*pcVar2)();
LAB_016d8a10:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

