
/* v8::internal::JSTypedArray::element_size() */

undefined8 __thiscall v8::internal::JSTypedArray::element_size(JSTypedArray *this)

{
  uint uVar1;
  
  uVar1 = (*(byte *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) +
                    10) >> 3) + 0xf;
  if ((uVar1 & 0x1f) < 0xb) {
    return *(undefined8 *)(&DAT_019d6ab0 + ((long)((ulong)uVar1 << 0x3b) >> 0x3b) * 8);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

