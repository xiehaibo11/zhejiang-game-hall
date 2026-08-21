
/* v8::internal::compiler::TypedOptimization::TryReduceStringComparisonOfStringFromSingleCharCodeToConstant(v8::internal::compiler::Node*,
   v8::internal::compiler::StringRef const&, bool) */

undefined8 __thiscall
v8::internal::compiler::TypedOptimization::
TryReduceStringComparisonOfStringFromSingleCharCodeToConstant
          (TypedOptimization *this,Node *param_1,StringRef *param_2,bool param_3)

{
  int iVar1;
  JSGraph *this_00;
  undefined8 uVar2;
  
  if (*(ushort *)(*(long *)param_1 + 0x10) - 0x7a < 2) {
    iVar1 = StringRef::length(param_2);
    if (iVar1 != 0) {
      return 0;
    }
    this_00 = *(JSGraph **)(this + 0x18);
    if (param_3) {
      uVar2 = JSGraph::TrueConstant(this_00);
      return uVar2;
    }
  }
  else {
    if (*(ushort *)(*(long *)param_1 + 0x10) != 0x79) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    iVar1 = StringRef::length(param_2);
    if (iVar1 == 1) {
      return 0;
    }
    this_00 = *(JSGraph **)(this + 0x18);
  }
  uVar2 = JSGraph::FalseConstant(this_00);
  return uVar2;
}

