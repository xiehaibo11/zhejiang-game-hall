
void FUN_008feb38(long param_1)

{
  Object *this;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x269) != '\0') {
    return;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x10));
  se::Object::root(this);
  FUN_008feba4(param_1 + 0x20,"onloadstart");
  return;
}

