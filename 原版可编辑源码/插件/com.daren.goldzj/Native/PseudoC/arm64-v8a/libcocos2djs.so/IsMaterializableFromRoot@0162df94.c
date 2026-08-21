
/* v8::internal::compiler::CodeGenerator::IsMaterializableFromRoot(v8::internal::Handle<v8::internal::HeapObject>,
   v8::internal::RootIndex*) */

bool __thiscall
v8::internal::compiler::CodeGenerator::IsMaterializableFromRoot
          (CodeGenerator *this,ulong param_2,undefined2 *param_3)

{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  
  if ((*(byte *)(**(long **)(this + 0x20) + 0x48) >> 2 & 1) == 0) {
    return false;
  }
  bVar3 = false;
  if ((param_2 < *(long *)(this + 0x10) + 0x1010U) &&
     (uVar1 = *(long *)(this + 0x10) + 0x80, uVar1 <= param_2)) {
    uVar2 = (int)param_2 - (int)uVar1;
    bVar3 = (uVar2 >> 3 & 0xffff) < 0x1d7;
    *param_3 = (short)(uVar2 >> 3);
  }
  return bVar3;
}

