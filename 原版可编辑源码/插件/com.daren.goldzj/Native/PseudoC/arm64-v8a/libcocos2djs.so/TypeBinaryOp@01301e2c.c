
/* v8::internal::compiler::Typer::Visitor::TypeBinaryOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Type (*)(v8::internal::compiler::Type, v8::internal::compiler::Type,
   v8::internal::compiler::Typer*)) */

undefined1 __thiscall
v8::internal::compiler::Typer::Visitor::TypeBinaryOp
          (Visitor *this,Node *param_1,_func_Type_Type_Type_Typer_ptr *param_2)

{
  Type TVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = NodeProperties::GetValueInput(param_1,0);
  lVar2 = *(long *)(lVar2 + 8);
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  lVar3 = NodeProperties::GetValueInput(param_1,1);
  lVar3 = *(long *)(lVar3 + 8);
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  if ((lVar2 != 1) && (lVar3 != 1)) {
                    /* WARNING: Could not recover jumptable at 0x01301ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TVar1 = (*param_2)((char)lVar2,(char)lVar3,*(Typer **)(this + 8));
    return TVar1;
  }
  return 1;
}

