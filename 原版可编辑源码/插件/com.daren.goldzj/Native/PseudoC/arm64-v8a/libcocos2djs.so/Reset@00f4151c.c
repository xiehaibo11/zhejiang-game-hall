
/* v8::internal::StackFrameIterator::Reset(v8::internal::ThreadLocalTop*) */

void __thiscall
v8::internal::StackFrameIterator::Reset(StackFrameIterator *this,ThreadLocalTop *param_1)

{
  long lVar1;
  StackFrameIterator *pSVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  lVar3 = *(long *)(param_1 + 0x70);
  if (lVar3 == 0) {
    pSVar2 = (StackFrameIterator *)0x0;
    *(undefined8 *)(this + 0x590) = *(undefined8 *)(param_1 + 0x78);
    goto LAB_00f416d0;
  }
  if ((*(ulong *)(lVar3 + -8) & 1) == 0) {
    iVar5 = (int)(*(ulong *)(lVar3 + -8) >> 1);
    if ((iVar5 == 3) || (iVar5 == 0x15)) goto LAB_00f4157c;
    if (iVar5 != 10) goto LAB_00f41578;
    lVar4 = lVar3 + -0x10;
    iVar5 = 10;
  }
  else {
LAB_00f41578:
    iVar5 = 3;
LAB_00f4157c:
    lVar4 = *(long *)(lVar3 + -0x10);
  }
  lVar1 = lVar4 + -8;
  if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
    lVar1 = (*StackFrame::return_address_location_resolver_)();
  }
  *(undefined8 *)(this + 0x590) = *(undefined8 *)(param_1 + 0x78);
  switch(iVar5) {
  case 3:
    pSVar2 = this + 0x88;
    break;
  case 4:
    pSVar2 = this + 200;
    goto joined_r0x00f415fc;
  case 5:
    pSVar2 = this + 0x108;
joined_r0x00f415fc:
    if (pSVar2 == (StackFrameIterator *)0x0) goto LAB_00f416d0;
    goto LAB_00f416c0;
  case 6:
    pSVar2 = this + 0x148;
    break;
  case 7:
    pSVar2 = this + 0x188;
    break;
  case 8:
    pSVar2 = this + 0x1c8;
    break;
  case 9:
    pSVar2 = this + 0x208;
    break;
  case 10:
    pSVar2 = this + 0x248;
    break;
  case 0xb:
    pSVar2 = this + 0x288;
    break;
  case 0xc:
    pSVar2 = this + 0x2c8;
    break;
  case 0xd:
    pSVar2 = this + 0x308;
    break;
  case 0xe:
    pSVar2 = this + 0x348;
    break;
  case 0xf:
    pSVar2 = this + 0x388;
    break;
  case 0x10:
    pSVar2 = this + 0x3c8;
    break;
  case 0x11:
    pSVar2 = this + 0x408;
    break;
  case 0x12:
    pSVar2 = this + 0x448;
    break;
  case 0x13:
    pSVar2 = this + 0x488;
    break;
  case 0x14:
    pSVar2 = this + 0x4c8;
    break;
  case 0x15:
    pSVar2 = this + 0x508;
    break;
  default:
    pSVar2 = (StackFrameIterator *)0x0;
    goto LAB_00f416d0;
  }
  if (pSVar2 != (StackFrameIterator *)0x0) {
LAB_00f416c0:
    *(long *)(pSVar2 + 0x18) = lVar4;
    *(long *)(pSVar2 + 0x20) = lVar3;
    *(long *)(pSVar2 + 0x28) = lVar1;
    *(undefined8 *)(pSVar2 + 0x38) = 0;
    *(undefined8 *)(pSVar2 + 0x30) = 0;
  }
LAB_00f416d0:
  *(StackFrameIterator **)(this + 0x588) = pSVar2;
  return;
}

