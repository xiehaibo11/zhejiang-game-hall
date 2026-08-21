
/* v8::internal::compiler::ValueNumberingReducer::ReplaceIfTypesMatch(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::ValueNumberingReducer::ReplaceIfTypesMatch
          (ValueNumberingReducer *this,Node *param_1,Node *param_2)

{
  ulong uVar1;
  long lVar2;
  long local_30;
  long local_28;
  
  local_28 = *(long *)(param_2 + 8);
  if ((((local_28 != 0) && (lVar2 = *(long *)(param_1 + 8), lVar2 != 0)) && (local_28 != lVar2)) &&
     (local_30 = lVar2, uVar1 = Type::SlowIs((Type *)&local_28,lVar2), (uVar1 & 1) == 0)) {
    if ((lVar2 == local_28) ||
       (uVar1 = Type::SlowIs((Type *)&local_30), lVar2 = local_30, (uVar1 & 1) != 0)) {
      *(long *)(param_2 + 8) = lVar2;
    }
    else {
      param_2 = (Node *)0x0;
    }
  }
  return param_2;
}

