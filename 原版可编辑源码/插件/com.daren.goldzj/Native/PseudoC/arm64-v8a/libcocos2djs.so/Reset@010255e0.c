
/* v8::internal::ICInfo::Reset() */

void __thiscall v8::internal::ICInfo::Reset(ICInfo *this)

{
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
    **(undefined1 **)(this + 0x10) = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0xffffffffffffffff;
  *(undefined2 *)(this + 0x38) = 0;
  if (((byte)this[0x40] & 1) == 0) {
    *(undefined2 *)(this + 0x40) = 0;
  }
  else {
    **(undefined1 **)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x48) = 0;
  }
  *(undefined8 *)(this + 0x58) = 0;
  this[0x60] = (ICInfo)0x0;
  *(undefined4 *)(this + 100) = 0;
  if (((byte)this[0x68] & 1) == 0) {
    *(undefined2 *)(this + 0x68) = 0;
    return;
  }
  **(undefined1 **)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  return;
}

