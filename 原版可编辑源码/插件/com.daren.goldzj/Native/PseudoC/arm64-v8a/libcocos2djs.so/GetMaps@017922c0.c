
/* v8::internal::compiler::MapInference::GetMaps() */

MapInference * __thiscall v8::internal::compiler::MapInference::GetMaps(MapInference *this)

{
  if (*(long *)(this + 0x10) != *(long *)(this + 0x18)) {
    if (*(int *)(this + 0x28) == 1) {
      *(undefined4 *)(this + 0x28) = 2;
    }
    return this + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","HaveMaps()");
}

