
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::StackFrameIteratorBase::SingletonFor(v8::internal::StackFrame::Type,
   v8::internal::StackFrame::State*) */

StackFrameIteratorBase * __thiscall
v8::internal::StackFrameIteratorBase::SingletonFor
          (StackFrameIteratorBase *this,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  switch(param_2) {
  case 1:
    this = this + 8;
    goto joined_r0x00f418f8;
  case 2:
    this = this + 0x48;
joined_r0x00f418f8:
    if (this == (StackFrameIteratorBase *)0x0) {
      return (StackFrameIteratorBase *)0x0;
    }
    goto LAB_00f419e0;
  case 3:
    this = this + 0x88;
    break;
  case 4:
    this = this + 200;
    break;
  case 5:
    this = this + 0x108;
    break;
  case 6:
    this = this + 0x148;
    break;
  case 7:
    this = this + 0x188;
    break;
  case 8:
    this = this + 0x1c8;
    break;
  case 9:
    this = this + 0x208;
    break;
  case 10:
    this = this + 0x248;
    break;
  case 0xb:
    this = this + 0x288;
    break;
  case 0xc:
    this = this + 0x2c8;
    break;
  case 0xd:
    this = this + 0x308;
    break;
  case 0xe:
    this = this + 0x348;
    break;
  case 0xf:
    this = this + 0x388;
    break;
  case 0x10:
    this = this + 0x3c8;
    break;
  case 0x11:
    this = this + 0x408;
    break;
  case 0x12:
    this = this + 0x448;
    break;
  case 0x13:
    this = this + 0x488;
    break;
  case 0x14:
    this = this + 0x4c8;
    break;
  case 0x15:
    this = this + 0x508;
    break;
  case 0x16:
    this = this + 0x548;
    break;
  default:
    return (StackFrameIteratorBase *)0x0;
  }
  if (this != (StackFrameIteratorBase *)0x0) {
LAB_00f419e0:
    uVar4 = param_3[1];
    uVar3 = *param_3;
    uVar2 = param_3[3];
    uVar1 = param_3[2];
    *(undefined8 *)(this + 0x38) = param_3[4];
    *(undefined8 *)(this + 0x30) = uVar2;
    *(undefined8 *)(this + 0x28) = uVar1;
    *(undefined8 *)(this + 0x20) = uVar4;
    *(undefined8 *)(this + 0x18) = uVar3;
  }
  return this;
}

