
/* v8::internal::StackFrameIteratorBase::SingletonFor(v8::internal::StackFrame::Type) */

StackFrameIteratorBase * __thiscall
v8::internal::StackFrameIteratorBase::SingletonFor(StackFrameIteratorBase *this,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    return this + 8;
  case 2:
    return this + 0x48;
  case 3:
    return this + 0x88;
  case 4:
    return this + 200;
  case 5:
    return this + 0x108;
  case 6:
    return this + 0x148;
  case 7:
    return this + 0x188;
  case 8:
    return this + 0x1c8;
  case 9:
    return this + 0x208;
  case 10:
    return this + 0x248;
  case 0xb:
    return this + 0x288;
  case 0xc:
    return this + 0x2c8;
  case 0xd:
    return this + 0x308;
  case 0xe:
    return this + 0x348;
  case 0xf:
    return this + 0x388;
  case 0x10:
    return this + 0x3c8;
  case 0x11:
    return this + 0x408;
  case 0x12:
    return this + 0x448;
  case 0x13:
    return this + 0x488;
  case 0x14:
    return this + 0x4c8;
  case 0x15:
    return this + 0x508;
  case 0x16:
    return this + 0x548;
  default:
    return (StackFrameIteratorBase *)0x0;
  }
}

