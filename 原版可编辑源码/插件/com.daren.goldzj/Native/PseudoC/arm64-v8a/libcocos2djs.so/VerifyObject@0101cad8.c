
/* v8::internal::MapSpace::VerifyObject(v8::internal::HeapObject) */

void __thiscall v8::internal::MapSpace::VerifyObject(undefined8 param_1,ulong param_2)

{
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0xa2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","object.IsMap()");
}

