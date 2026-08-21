
/* v8::Proxy::IsRevoked() */

bool __thiscall v8::Proxy::IsRevoked(Proxy *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return *(ushort *)((uVar1 | 7) + (ulong)*(uint *)((uVar1 | *(uint *)(*(ulong *)this + 0xb)) - 1))
         < 0xa9;
}

