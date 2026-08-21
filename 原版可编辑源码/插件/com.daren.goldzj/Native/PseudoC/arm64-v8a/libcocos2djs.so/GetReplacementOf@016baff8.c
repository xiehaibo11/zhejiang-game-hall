
/* v8::internal::compiler::EscapeAnalysisResult::GetReplacementOf(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::EscapeAnalysisResult::GetReplacementOf
          (EscapeAnalysisResult *this,Node *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *this_00;
  ulong uVar5;
  
  lVar2 = *(long *)this;
  this_00 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)(lVar2 + 0x40);
  lVar1 = *(long *)this_00;
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar4 = *(long *)(lVar2 + 0x48) - lVar1 >> 3;
  if (uVar4 <= uVar5) {
    uVar3 = (ulong)((int)uVar5 + 1);
    if (uVar4 < uVar3) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__append(this_00,uVar3 - uVar4);
      lVar1 = *(long *)this_00;
    }
    else if (uVar4 != uVar3) {
      *(ulong *)(lVar2 + 0x48) = lVar1 + uVar3 * 8;
    }
  }
  return *(undefined8 *)(lVar1 + uVar5 * 8);
}

