
/* v8::internal::compiler::SparseInputMask::IterateOverInputs(v8::internal::compiler::Node*) */

void v8::internal::compiler::SparseInputMask::IterateOverInputs(Node *param_1)

{
  undefined4 uVar1;
  undefined8 in_x1;
  undefined4 *in_x8;
  
  uVar1 = *(undefined4 *)param_1;
  *(undefined8 *)(in_x8 + 2) = in_x1;
  in_x8[4] = 0;
  *in_x8 = uVar1;
  return;
}

