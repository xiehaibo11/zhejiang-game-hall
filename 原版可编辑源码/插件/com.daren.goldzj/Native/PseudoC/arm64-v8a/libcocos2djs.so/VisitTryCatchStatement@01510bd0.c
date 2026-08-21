
/* v8::internal::interpreter::BytecodeGenerator::VisitTryCatchStatement(v8::internal::TryCatchStatement*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitTryCatchStatement
          (BytecodeGenerator *this,TryCatchStatement *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  AstNode *pAVar7;
  undefined8 uVar8;
  TryCatchStatement **local_b8;
  BytecodeGenerator *pBStack_b0;
  int *local_a8;
  int local_9c;
  undefined **local_98;
  BytecodeGenerator *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined **local_78;
  BytecodeArrayBuilder *pBStack_70;
  undefined4 local_68;
  int iStack_64;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  TryCatchStatement *pTStack_48;
  TryCatchStatement *local_28;
  
  local_9c = *(int *)(this + 0x338);
  iVar1 = local_9c;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  local_b8 = &local_28;
  *(int *)(this + 0x338) = iVar1;
  local_a8 = &local_9c;
  if (param_1 == (TryCatchStatement *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(this + 0x208);
  }
  local_78 = &PTR__TryCatchBuilder_01cc7168;
  pBStack_b0 = this;
  pBStack_70 = (BytecodeArrayBuilder *)(this + 0x18);
  local_28 = param_1;
  local_68 = HandlerTableBuilder::NewHandlerEntry((HandlerTableBuilder *)(this + 0xf0));
  local_60 = 0;
  local_58 = 0xffffffffffffffff;
  iVar2 = *(int *)(this + 0x118);
  iVar3 = *(int *)(this + 0x11c);
  plVar5 = *(long **)(this + 0x120);
  if (iVar3 <= iVar2 + 1) {
    iVar3 = iVar2 + 1;
  }
  *(int *)(this + 0x118) = iVar2 + 1;
  *(int *)(this + 0x11c) = iVar3;
  iStack_64 = iVar1;
  local_50 = uVar8;
  pTStack_48 = param_1;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5,iVar2);
  }
  uVar4 = Register::current_context();
  BytecodeArrayBuilder::MoveRegister((BytecodeArrayBuilder *)(this + 0x18),uVar4,iVar2);
  TryCatchBuilder::BeginTry((TryCatchBuilder *)&local_78,iVar2);
  uStack_80 = *(undefined8 *)(this + 0x2f8);
  local_88 = *(undefined8 *)(this + 0x2f0);
  local_98 = &PTR__ControlScope_01cc70e0;
  *(undefined ****)(this + 0x2f0) = &local_98;
  local_90 = this;
  if (this[8] == (BytecodeGenerator)0x0) {
    pAVar7 = *(AstNode **)(local_28 + 8);
    uVar6 = GetCurrentStackPosition();
    if (uVar6 < *(ulong *)this) {
      this[8] = (BytecodeGenerator)0x1;
    }
    else {
      VisitNoStackOverflowCheck(this,pAVar7);
    }
  }
  *(int *)(this + 0x338) = local_9c;
  local_98 = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(local_90 + 0x2f0) = local_88;
  TryCatchBuilder::EndTry((TryCatchBuilder *)&local_78);
  FUN_0152128c(&local_b8,iVar2);
  TryCatchBuilder::EndCatch((TryCatchBuilder *)&local_78);
  TryCatchBuilder::~TryCatchBuilder((TryCatchBuilder *)&local_78);
  return;
}

