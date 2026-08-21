
/* v8::internal::JSObject::AllCanWrite(v8::internal::LookupIterator*) */

undefined8 v8::internal::JSObject::AllCanWrite(LookupIterator *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  do {
    if (*(int *)(param_1 + 4) == 5) {
      puVar1 = (ulong *)LookupIterator::GetAccessors();
      uVar2 = *puVar1;
      if ((((uVar2 & 1) != 0) &&
          (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x51)) &&
         ((*(byte *)(uVar2 + 7) >> 2 & 1) != 0)) {
        return 1;
      }
    }
    else if (*(int *)(param_1 + 4) - 3U < 2) {
      return 0;
    }
    LookupIterator::Next(param_1);
  } while( true );
}

