
/* se::Object::unroot() */

void __thiscall se::Object::unroot(Object *this)

{
  int iVar1;
  
  if ((*(int *)(this + 0x38) != 0) &&
     (iVar1 = *(int *)(this + 0x38) + -1, *(int *)(this + 0x38) = iVar1, iVar1 == 0)) {
    ObjectWrap::unref((ObjectWrap *)(this + 0x18));
    return;
  }
  return;
}

