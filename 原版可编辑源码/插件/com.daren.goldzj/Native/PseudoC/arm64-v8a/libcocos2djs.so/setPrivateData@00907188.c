
/* se::Object::setPrivateData(void*) */

void __thiscall se::Object::setPrivateData(Object *this,void *param_1)

{
  internal::setPrivate
            (DAT_01d371a8,(ObjectWrap *)(this + 0x18),param_1,(PrivateData **)(this + 0x50));
  NativePtrToObjectMap::emplace(param_1,this);
  *(void **)(this + 0x40) = param_1;
  return;
}

