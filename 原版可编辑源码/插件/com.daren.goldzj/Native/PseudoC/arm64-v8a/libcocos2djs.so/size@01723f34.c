
/* v8::internal::compiler::ObjectBoilerplateDescriptionRef::size() const */

int __thiscall
v8::internal::compiler::ObjectBoilerplateDescriptionRef::size(ObjectBoilerplateDescriptionRef *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(*(undefined8 **)this + 1) == 2) {
    iVar1 = *(int *)(*(long *)**(undefined8 **)this + 3) >> 1;
    iVar2 = iVar1 + -1;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    return iVar1 >> 1;
  }
  lVar3 = ObjectRef::data((ObjectRef *)this);
  if (*(int *)(lVar3 + 8) == 1) {
    if (*(short *)(*(long *)(lVar3 + 0x10) + 0x18) == 0x82) {
      return *(int *)(lVar3 + 0x18);
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsObjectBoilerplateDescription()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","kind() == kSerializedHeapObject");
}

