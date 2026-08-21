
/* v8::internal::JSRegExp::MarkTierUpForNextExec() */

void __thiscall v8::internal::JSRegExp::MarkTierUpForNextExec(JSRegExp *this)

{
  *(undefined4 *)
   ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb)) + 0x2f) = 0;
  return;
}

