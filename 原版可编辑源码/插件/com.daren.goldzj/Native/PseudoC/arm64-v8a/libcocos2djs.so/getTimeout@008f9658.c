
/* XMLHttpRequest::getTimeout() const */

long __thiscall XMLHttpRequest::getTimeout(XMLHttpRequest *this)

{
  return (long)(*(float *)(*(long *)(this + 0x250) + 0xb0) * 1000.0);
}

