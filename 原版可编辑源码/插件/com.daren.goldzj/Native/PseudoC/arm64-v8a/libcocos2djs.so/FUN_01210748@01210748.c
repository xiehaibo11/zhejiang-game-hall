
void FUN_01210748(Cancelable *param_1)

{
  v8::internal::Cancelable::~Cancelable(param_1);
  operator_delete(param_1);
  return;
}

