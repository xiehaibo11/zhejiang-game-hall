
/* v8::internal::compiler::MapInference::SetNeedGuardIfUnreliable() */

void __thiscall v8::internal::compiler::MapInference::SetNeedGuardIfUnreliable(MapInference *this)

{
  if (*(long *)(this + 0x10) != *(long *)(this + 0x18)) {
    if (*(int *)(this + 0x28) == 1) {
      *(undefined4 *)(this + 0x28) = 2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","HaveMaps()");
}

