
/* se::Object::clearPrivateData(bool) */

void __thiscall se::Object::clearPrivateData(Object *this,bool param_1)

{
  if (*(void **)(this + 0x40) != (void *)0x0) {
    if (param_1) {
      NativePtrToObjectMap::erase(*(void **)(this + 0x40));
    }
    internal::clearPrivate(DAT_01d371a8,(ObjectWrap *)(this + 0x18));
    *(undefined8 *)(this + 0x40) = 0;
  }
  return;
}

