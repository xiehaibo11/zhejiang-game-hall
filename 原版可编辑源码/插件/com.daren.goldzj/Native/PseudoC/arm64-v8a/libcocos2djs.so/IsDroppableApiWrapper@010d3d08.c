
/* v8::internal::JSObject::IsDroppableApiWrapper() */

bool __thiscall v8::internal::JSObject::IsDroppableApiWrapper(JSObject *this)

{
  short sVar1;
  
  sVar1 = *(short *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) +
                    7);
  return sVar1 == 0x420 || sVar1 == 0x410;
}

