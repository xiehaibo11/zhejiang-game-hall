
/* v8::internal::compiler::JSContextSpecialization::SimplifyJSStoreContext(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, unsigned long) */

Node * __thiscall
v8::internal::compiler::JSContextSpecialization::SimplifyJSStoreContext
          (JSContextSpecialization *this,Node *param_1,Node *param_2,ulong param_3)

{
  long lVar1;
  Node *pNVar2;
  Operator *pOVar3;
  
  lVar1 = ContextAccessOf(*(Operator **)param_1);
  if ((*(ushort *)(lVar1 + 2) == param_3) &&
     (pNVar2 = (Node *)NodeProperties::GetContextInput(param_1), pNVar2 == param_2)) {
    param_1 = (Node *)0x0;
  }
  else {
    pOVar3 = (Operator *)
             JSOperatorBuilder::StoreContext
                       (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),param_3,
                        (ulong)*(uint *)(lVar1 + 4));
    NodeProperties::ReplaceContextInput(param_1,param_2);
    NodeProperties::ChangeOp(param_1,pOVar3);
  }
  return param_1;
}

