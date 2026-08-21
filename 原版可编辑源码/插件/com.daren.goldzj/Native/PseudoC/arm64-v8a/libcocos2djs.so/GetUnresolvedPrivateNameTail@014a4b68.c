
/* v8::internal::ClassScope::GetUnresolvedPrivateNameTail() */

undefined8 __thiscall v8::internal::ClassScope::GetUnresolvedPrivateNameTail(ClassScope *this)

{
  if ((*(ulong *)(this + 0x88) & 0xfffffffffffffff8) != 0) {
    return *(undefined8 *)((*(ulong *)(this + 0x88) & 0xfffffffffffffff8) + 8);
  }
  return 0;
}

