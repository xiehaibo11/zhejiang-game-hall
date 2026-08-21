
/* v8::debug::GeneratorObject::Cast(v8::Local<v8::Value>) */

void v8::debug::GeneratorObject::Cast(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 & 1) != 0) &&
     (*(ushort *)((uVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar1 - 1)) - 0x417 < 3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","value->IsGeneratorObject()");
}

