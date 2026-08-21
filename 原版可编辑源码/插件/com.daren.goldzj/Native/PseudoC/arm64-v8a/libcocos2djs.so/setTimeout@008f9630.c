
/* XMLHttpRequest::setTimeout(unsigned long) */

void __thiscall XMLHttpRequest::setTimeout(XMLHttpRequest *this,ulong param_1)

{
  *(ulong *)(this + 600) = param_1;
  *(float *)(*(long *)(this + 0x250) + 0xb0) = (float)param_1 / 1000.0 + 2.0;
  return;
}

