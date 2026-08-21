
/* v8::internal::RegExpCompiler::Assemble(v8::internal::Isolate*,
   v8::internal::RegExpMacroAssembler*, v8::internal::RegExpNode*, int,
   v8::internal::Handle<v8::internal::String>) */

void v8::internal::RegExpCompiler::Assemble
               (undefined8 *param_1_00,long param_1,long param_2,long *param_3,long *param_5,
               undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  char *pcVar6;
  ulong local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_72;
  undefined1 local_6e;
  undefined8 local_6c;
  undefined1 local_64;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  *(long **)(param_1 + 0x28) = param_3;
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_58 = (long *)0x0;
  *(long ***)(param_1 + 0x18) = &local_58;
  local_28 = 0;
  (**(code **)(*param_3 + 0x120))(param_3,&local_28);
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_7e = 0;
  local_7a = 0;
  local_78 = 0;
  local_74 = 0;
  local_72 = 0;
  local_6e = 0;
  local_6c = 0;
  local_64 = 0;
  local_80 = 0;
  local_60 = 0xffffffff00000064;
  (**(code **)(*param_5 + 0x18))(param_5,param_1,local_b8);
  (**(code **)(**(long **)(param_1 + 0x28) + 0x40))(*(long **)(param_1 + 0x28),&local_28);
  (**(code **)(**(long **)(param_1 + 0x28) + 0xd0))();
  while (local_58 != local_50) {
    local_50 = local_50 + -1;
    plVar2 = (long *)*local_50;
    *(undefined1 *)(plVar2 + 3) = 0;
    if (-1 < (int)plVar2[2]) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_1,local_b8);
    }
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x31) == '\0') {
    puVar3 = (ulong *)(**(code **)(*plVar2 + 0xd8))(plVar2,param_7);
    local_c0 = *puVar3;
    iVar1 = HeapObject::SizeFromMap
                      ((HeapObject *)&local_c0,
                       local_c0 & 0xffffffff00000000 | (ulong)*(uint *)(local_c0 - 1));
    pcVar6 = (char *)0x0;
    *(long *)(param_2 + 0xc760) = *(long *)(param_2 + 0xc760) + (long)iVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    uVar4 = *puVar3;
    uVar5 = *(undefined4 *)(param_1 + 8);
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    uVar4 = 0;
    uVar5 = 0;
    pcVar6 = "RegExp too big";
  }
  *param_1_00 = pcVar6;
  param_1_00[1] = uVar4;
  *(undefined4 *)(param_1_00 + 2) = uVar5;
  if (local_58 != (long *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  return;
}

