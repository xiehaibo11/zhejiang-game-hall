
/* v8::internal::compiler::InstructionSelector::VisitDeoptimizeUnless(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitDeoptimizeUnless
          (InstructionSelector *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  Node *pNVar4;
  uint uVar5;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined6 local_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined1 *)DeoptimizeParametersOf(*(Operator **)param_1);
  local_88 = *puVar3;
  local_87 = puVar3[1];
  uStack_40 = (undefined6)((ulong)*(undefined8 *)(puVar3 + 0x10) >> 0x10);
  uStack_48 = (undefined6)*(undefined8 *)(puVar3 + 10);
  uStack_42 = (undefined2)((ulong)*(undefined8 *)(puVar3 + 10) >> 0x30);
  local_50 = (undefined6)*(undefined8 *)(puVar3 + 2);
  uStack_4a = (undefined2)((ulong)*(undefined8 *)(puVar3 + 2) >> 0x30);
  iVar1 = *(int *)(this + 0x16c);
  if (iVar1 == 0) {
    if (puVar3[0x18] != '\x02') {
LAB_0163fa74:
      pNVar4 = param_1 + 0x20;
      uVar5 = *(uint *)(param_1 + 0x14) & 0xf000000;
      if (uVar5 == 0xf000000) {
        pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
      }
      local_70 = *(undefined8 *)(pNVar4 + 8);
      local_90 = 4;
      goto LAB_0163faa8;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    if (puVar3[0x18] == '\0') goto LAB_0163fa74;
  }
  pNVar4 = param_1 + 0x20;
  uVar5 = *(uint *)(param_1 + 0x14) & 0xf000000;
  if (uVar5 == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  local_70 = *(undefined8 *)(pNVar4 + 8);
  local_90 = 3;
LAB_0163faa8:
  uStack_78 = CONCAT62(uStack_40,uStack_42);
  local_80 = CONCAT62(uStack_48,uStack_4a);
  pNVar4 = param_1 + 0x20;
  if (uVar5 == 0xf000000) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  VisitWordCompareZero(this,param_1,*(Node **)pNVar4,(FlagsContinuation *)&local_90);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

