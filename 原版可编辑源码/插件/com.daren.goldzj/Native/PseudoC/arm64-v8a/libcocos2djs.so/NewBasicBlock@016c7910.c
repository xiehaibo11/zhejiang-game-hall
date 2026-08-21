
/* v8::internal::compiler::GraphAssembler::NewBasicBlock(bool) */

long __thiscall
v8::internal::compiler::GraphAssembler::NewBasicBlock(GraphAssembler *this,bool param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(this + 0x30);
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = Schedule::NewBasicBlock(*(Schedule **)(lVar3 + 0x28));
    if (param_1) {
      uVar2 = 1;
    }
    else {
      uVar2 = *(undefined1 *)(lVar3 + 0x88);
    }
    *(undefined1 *)(lVar1 + 8) = uVar2;
  }
  return lVar1;
}

