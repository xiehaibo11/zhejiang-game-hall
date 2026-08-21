
/* v8::internal::Deoptimizer::PrintFunctionName() */

void __thiscall v8::internal::Deoptimizer::PrintFunctionName(Deoptimizer *this)

{
  undefined8 uVar1;
  ulong uVar2;
  __sFILE *p_Var3;
  
  uVar2 = *(ulong *)(this + 8);
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x439)) {
    Object::ShortPrint((Object *)(this + 8),*(__sFILE **)(**(long **)(this + 0x110) + 0x90));
    return;
  }
  p_Var3 = *(__sFILE **)(**(long **)(this + 0x110) + 0x90);
  uVar1 = Code::Kind2String(*(uint *)(*(long *)(this + 0x10) + 0x17) >> 1 & 0x1f);
  PrintF(p_Var3,"%s",uVar1);
  return;
}

