
void FUN_014ee13c(Cancelable *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_01cc6bc0;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_01cc6bf0;
  v8::internal::Cancelable::~Cancelable(param_1);
  operator_delete(param_1);
  return;
}

