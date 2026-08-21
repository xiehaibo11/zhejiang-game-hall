
void FUN_014ee288(undefined8 *param_1)

{
  Cancelable *this;
  
  this = (Cancelable *)(param_1 + -4);
  *(undefined ***)this = &PTR_FUN_01cc6bc0;
  *param_1 = &PTR_FUN_01cc6bf0;
  v8::internal::Cancelable::~Cancelable(this);
  operator_delete(this);
  return;
}

