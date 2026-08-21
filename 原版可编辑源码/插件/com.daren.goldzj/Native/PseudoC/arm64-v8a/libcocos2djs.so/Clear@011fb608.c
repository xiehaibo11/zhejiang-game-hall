
/* v8::internal::IdentityMapBase::Clear() */

void __thiscall v8::internal::IdentityMapBase::Clear(IdentityMapBase *this)

{
  if (*(long *)(this + 0x28) != 0) {
    Heap::UnregisterStrongRoots(*(Heap **)(this + 0x10));
    (**(code **)(*(long *)this + 0x18))(this,*(undefined8 *)(this + 0x28));
    (**(code **)(*(long *)this + 0x18))(this,*(undefined8 *)(this + 0x30));
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x2c) = 0;
  }
  return;
}

