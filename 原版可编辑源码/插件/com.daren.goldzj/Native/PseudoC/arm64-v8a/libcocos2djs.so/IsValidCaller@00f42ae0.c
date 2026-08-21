
/* v8::internal::SafeStackFrameIterator::IsValidCaller(v8::internal::StackFrame*) */

bool __thiscall
v8::internal::SafeStackFrameIterator::IsValidCaller
          (SafeStackFrameIterator *this,StackFrame *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  byte *pbVar4;
  ulong uVar5;
  SafeStackFrameIterator *pSVar6;
  ulong local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = (**(code **)(*(long *)param_1 + 8))(param_1);
  if ((iVar1 == 1) || (iVar1 = (**(code **)(*(long *)param_1 + 8))(param_1), iVar1 == 2)) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x18);
    if (uVar5 < *(ulong *)(this + 0x5a0)) {
      return false;
    }
    if (*(ulong *)(this + 0x5a8) < uVar5) {
      return false;
    }
    uVar5 = *(ulong *)(uVar5 - 0x10);
    if (uVar5 < *(ulong *)(this + 0x5a0)) {
      return false;
    }
    if (*(ulong *)(this + 0x5a8) < uVar5) {
      return false;
    }
    plVar3 = (long *)(uVar5 - 8);
    if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
      plVar3 = (long *)(*StackFrame::return_address_location_resolver_)();
    }
    if (*plVar3 == 0) {
      return false;
    }
  }
  else {
    iVar1 = (**(code **)(*(long *)param_1 + 8))(param_1);
    if ((iVar1 == 0x13) &&
       (pbVar4 = (byte *)(**(code **)(*(long *)param_1 + 0x90))(param_1,0), (*pbVar4 & 1) != 0)) {
      return false;
    }
  }
  (**(code **)(*(long *)param_1 + 0x40))(param_1,&local_50);
  if ((local_50 < *(ulong *)(this + 0x5a0)) || (*(ulong *)(this + 0x5a8) < local_50)) {
    return false;
  }
  if (uStack_48 < *(ulong *)(this + 0x5a0)) {
    return false;
  }
  if (uStack_48 <= *(ulong *)(this + 0x5a8)) {
    uVar2 = (**(code **)(*(long *)param_1 + 0x48))(param_1,&local_50);
    switch(uVar2) {
    case 1:
      pSVar6 = this + 8;
      break;
    case 2:
      pSVar6 = this + 0x48;
      break;
    case 3:
      pSVar6 = this + 0x88;
      break;
    case 4:
      pSVar6 = this + 200;
      break;
    case 5:
      pSVar6 = this + 0x108;
      break;
    case 6:
      pSVar6 = this + 0x148;
      break;
    case 7:
      pSVar6 = this + 0x188;
      break;
    case 8:
      pSVar6 = this + 0x1c8;
      break;
    case 9:
      pSVar6 = this + 0x208;
      break;
    case 10:
      pSVar6 = this + 0x248;
      break;
    case 0xb:
      pSVar6 = this + 0x288;
      break;
    case 0xc:
      pSVar6 = this + 0x2c8;
      break;
    case 0xd:
      pSVar6 = this + 0x308;
      break;
    case 0xe:
      pSVar6 = this + 0x348;
      break;
    case 0xf:
      pSVar6 = this + 0x388;
      break;
    case 0x10:
      pSVar6 = this + 0x3c8;
      break;
    case 0x11:
      pSVar6 = this + 0x408;
      break;
    case 0x12:
      pSVar6 = this + 0x448;
      break;
    case 0x13:
      pSVar6 = this + 0x488;
      break;
    case 0x14:
      pSVar6 = this + 0x4c8;
      break;
    case 0x15:
      pSVar6 = this + 0x508;
      break;
    case 0x16:
      pSVar6 = this + 0x548;
      break;
    default:
      pSVar6 = (SafeStackFrameIterator *)0x0;
    }
    return pSVar6 != (SafeStackFrameIterator *)0x0;
  }
  return false;
}

