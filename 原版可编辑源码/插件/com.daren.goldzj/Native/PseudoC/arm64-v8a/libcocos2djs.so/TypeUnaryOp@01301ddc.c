
/* v8::internal::compiler::Typer::Visitor::TypeUnaryOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Type (*)(v8::internal::compiler::Type, v8::internal::compiler::Typer*))
    */

undefined1 __thiscall
v8::internal::compiler::Typer::Visitor::TypeUnaryOp
          (Visitor *this,Node *param_1,_func_Type_Type_Typer_ptr *param_2)

{
  Type TVar1;
  long lVar2;
  
  lVar2 = NodeProperties::GetValueInput(param_1,0);
  if (*(ulong *)(lVar2 + 8) < 2) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x01301e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (*param_2)((char)*(ulong *)(lVar2 + 8),*(Typer **)(this + 8));
  return TVar1;
}

