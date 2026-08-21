
/* v8::internal::compiler::NodeMarkerBase::NodeMarkerBase(v8::internal::compiler::Graph*, unsigned
   int) */

void __thiscall
v8::internal::compiler::NodeMarkerBase::NodeMarkerBase
          (NodeMarkerBase *this,Graph *param_1,uint param_2)

{
  int iVar1;
  
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + param_2;
  *(uint *)(this + 4) = iVar1 + param_2;
  return;
}

