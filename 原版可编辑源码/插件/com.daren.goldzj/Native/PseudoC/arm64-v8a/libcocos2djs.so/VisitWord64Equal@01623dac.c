
/* v8::internal::compiler::InstructionSelector::VisitWord64Equal(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitWord64Equal
          (InstructionSelector *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  aBStack_c0 [8];
  Node *local_b8;
  long local_98;
  char local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined4 local_70;
  Node *local_68;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_88[0] = 5;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_68 = param_1;
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher(aBStack_c0,param_1);
  if ((local_90 == '\0') || (local_98 != 0)) {
LAB_01623e4c:
    uVar4 = 0x68;
    uVar5 = 0;
    local_b8 = param_1;
  }
  else {
    uVar2 = CanCover(this,param_1,local_b8);
    if ((uVar2 & 1) == 0) goto LAB_01623e4c;
    if (*(short *)(*(long *)local_b8 + 0x10) != 0x13b) {
      uVar2 = GetVirtualRegister(this,local_b8);
      MarkAsUsed(this,local_b8);
      uVar3 = GetVirtualRegister(this,local_b8);
      MarkAsUsed(this,local_b8);
      EmitWithContinuation
                (this,0x6c,(uVar2 & 0xffffffff) << 3 | 0x5800000001,
                 (uVar3 & 0xffffffff) << 3 | 0x5800000001,local_88);
      goto LAB_01623e64;
    }
    uVar4 = 0x6c;
    uVar5 = 4;
  }
  FUN_01622744(this,local_b8,uVar4,local_88,uVar5);
LAB_01623e64:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

