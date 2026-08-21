
/* v8::internal::JSObject::IsApiWrapper() */

undefined8 __thiscall v8::internal::JSObject::IsApiWrapper(JSObject *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(ushort *)
                 ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) + 7);
  uVar1 = uVar2 - 0x410;
  if (((0x14 < uVar1) || ((1 << (ulong)(uVar1 & 0x1f) & 0x110c01U) == 0)) && (1 < uVar2 - 0xaa)) {
    return 0;
  }
  return 1;
}

