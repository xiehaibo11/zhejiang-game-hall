
/* v8::internal::compiler::CodeGenerator::IsNextInAssemblyOrder(v8::internal::compiler::RpoNumber)
   const */

bool __thiscall
v8::internal::compiler::CodeGenerator::IsNextInAssemblyOrder(CodeGenerator *this,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = **(long **)(*(long *)(this + 0x28) + 0x10);
  uVar2 = (*(long **)(*(long *)(this + 0x28) + 0x10))[1] - lVar1 >> 3;
  if (((ulong)(long)*(int *)(this + 0xb8) < uVar2) && ((ulong)(long)param_2 < uVar2)) {
    return *(int *)(*(long *)(lVar1 + (long)*(int *)(this + 0xb8) * 8) + 0x60) + 1 ==
           *(int *)(*(long *)(lVar1 + (long)param_2 * 8) + 0x60);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

