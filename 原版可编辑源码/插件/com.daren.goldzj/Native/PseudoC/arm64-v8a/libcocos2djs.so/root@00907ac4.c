
/* se::Object::root() */

void __thiscall se::Object::root(Object *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 == 0) {
    ObjectWrap::ref((ObjectWrap *)(this + 0x18));
    iVar1 = *(int *)(this + 0x38);
  }
  *(int *)(this + 0x38) = iVar1 + 1;
  return;
}

