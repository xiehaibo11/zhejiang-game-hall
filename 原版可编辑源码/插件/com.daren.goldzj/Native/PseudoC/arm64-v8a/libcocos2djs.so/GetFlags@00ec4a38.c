
/* v8::RegExp::GetFlags() const */

int __thiscall v8::RegExp::GetFlags(RegExp *this)

{
  return *(int *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)) +
                 0xf) >> 1;
}

