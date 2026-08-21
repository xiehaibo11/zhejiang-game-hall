
void FUN_008ff0fc(long param_1)

{
  Object *this;
  
  if (*(char *)(*(long *)(param_1 + 8) + 0x269) != '\0') {
    __android_log_print(3,"jswrapper","XMLHttpRequest (%p) onloadend after restart ScriptEngine.\n")
    ;
    cocos2d::Ref::release(*(Ref **)(param_1 + 8));
    return;
  }
  FUN_008feba4(param_1 + 0x10,"onloadend");
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x20));
  se::Object::unroot(this);
  return;
}

