
/* v8::internal::JSTypedArray::type() */

undefined4 __thiscall v8::internal::JSTypedArray::type(JSTypedArray *this)

{
  uint uVar1;
  
  uVar1 = (*(byte *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1)) +
                    10) >> 3) + 0xf;
  if ((uVar1 & 0x1f) < 0xb) {
    return *(undefined4 *)(&DAT_019d6a80 + ((long)((ulong)uVar1 << 0x3b) >> 0x3b) * 4);
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

