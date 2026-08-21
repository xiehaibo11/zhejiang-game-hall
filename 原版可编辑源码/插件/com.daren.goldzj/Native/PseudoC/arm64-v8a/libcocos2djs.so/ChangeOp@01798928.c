
/* v8::internal::compiler::NodeProperties::ChangeOp(v8::internal::compiler::Node*,
   v8::internal::compiler::Operator const*) */

void v8::internal::compiler::NodeProperties::ChangeOp(Node *param_1,Operator *param_2)

{
  *(Operator **)param_1 = param_2;
  return;
}

