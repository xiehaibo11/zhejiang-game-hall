
/* v8::internal::interpreter::BytecodeGenerator::AllocateTopLevelRegisters() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::AllocateTopLevelRegisters(BytecodeGenerator *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  uVar2 = FunctionLiteral::kind(*(FunctionLiteral **)(*(long *)(this + 0x1d0) + 0x10));
  if (((uVar2 & 0xff) - 10 < 7) || ((uVar2 & 0xff) - 1 < 2)) {
    lVar5 = *(long *)(*(long *)(*(long *)(this + 0x1e0) + 0xd8) + 8);
  }
  else {
    lVar5 = *(long *)(*(long *)(this + 0x1e0) + 0xc0);
    if (lVar5 == 0) {
      return;
    }
  }
  if ((*(ushort *)(lVar5 + 0x28) & 0x380) == 0x100) {
    iVar3 = BytecodeArrayBuilder::Local
                      ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(lVar5 + 0x20));
  }
  else {
    iVar3 = *(int *)(this + 0x118);
    iVar1 = *(int *)(this + 0x11c);
    plVar4 = *(long **)(this + 0x120);
    if (iVar1 <= iVar3 + 1) {
      iVar1 = iVar3 + 1;
    }
    *(int *)(this + 0x118) = iVar3 + 1;
    *(int *)(this + 0x11c) = iVar1;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,iVar3);
    }
  }
  *(int *)(this + 0x308) = iVar3;
  return;
}

