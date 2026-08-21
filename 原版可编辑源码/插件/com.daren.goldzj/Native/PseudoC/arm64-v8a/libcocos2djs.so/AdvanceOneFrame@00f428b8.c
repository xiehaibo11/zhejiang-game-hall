
/* v8::internal::SafeStackFrameIterator::AdvanceOneFrame() */

void __thiscall v8::internal::SafeStackFrameIterator::AdvanceOneFrame(SafeStackFrameIterator *this)

{
  SafeStackFrameIterator *pSVar1;
  undefined4 uVar2;
  ulong uVar3;
  StackFrame *pSVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  pSVar4 = *(StackFrame **)(this + 0x588);
  uVar5 = *(ulong *)(pSVar4 + 0x18);
  if ((((*(ulong *)(this + 0x5a0) <= uVar5) && (uVar5 <= *(ulong *)(this + 0x5a8))) &&
      (uVar6 = *(ulong *)(pSVar4 + 0x20), *(ulong *)(this + 0x5a0) <= uVar6)) &&
     ((uVar6 <= *(ulong *)(this + 0x5a8) && (uVar3 = IsValidCaller(this,pSVar4), (uVar3 & 1) != 0)))
     ) {
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uVar2 = (**(code **)(**(long **)(this + 0x588) + 0x48))(*(long **)(this + 0x588),&local_60);
    switch(uVar2) {
    case 1:
      pSVar1 = this + 8;
      break;
    case 2:
      pSVar1 = this + 0x48;
      break;
    case 3:
      pSVar1 = this + 0x88;
      break;
    case 4:
      pSVar1 = this + 200;
      break;
    case 5:
      pSVar1 = this + 0x108;
      break;
    case 6:
      pSVar1 = this + 0x148;
      break;
    case 7:
      pSVar1 = this + 0x188;
      break;
    case 8:
      pSVar1 = this + 0x1c8;
      break;
    case 9:
      pSVar1 = this + 0x208;
      break;
    case 10:
      pSVar1 = this + 0x248;
      break;
    case 0xb:
      pSVar1 = this + 0x288;
      break;
    case 0xc:
      pSVar1 = this + 0x2c8;
      break;
    case 0xd:
      pSVar1 = this + 0x308;
      break;
    case 0xe:
      pSVar1 = this + 0x348;
      break;
    case 0xf:
      pSVar1 = this + 0x388;
      break;
    case 0x10:
      pSVar1 = this + 0x3c8;
      break;
    case 0x11:
      pSVar1 = this + 0x408;
      break;
    case 0x12:
      pSVar1 = this + 0x448;
      break;
    case 0x13:
      pSVar1 = this + 0x488;
      break;
    case 0x14:
      pSVar1 = this + 0x4c8;
      break;
    case 0x15:
      pSVar1 = this + 0x508;
      break;
    case 0x16:
      pSVar1 = this + 0x548;
      break;
    default:
      goto switchD_00f42950_default;
    }
    if (pSVar1 != (SafeStackFrameIterator *)0x0) {
      *(undefined8 *)(pSVar1 + 0x38) = local_40;
      *(undefined8 *)(pSVar1 + 0x30) = uStack_48;
      *(undefined8 *)(pSVar1 + 0x28) = uStack_50;
      *(undefined8 *)(pSVar1 + 0x20) = uStack_58;
      *(undefined8 *)(pSVar1 + 0x18) = local_60;
      *(SafeStackFrameIterator **)(this + 0x588) = pSVar1;
      if ((uVar5 < *(ulong *)(pSVar1 + 0x18)) && (uVar6 < *(ulong *)(pSVar1 + 0x20))) {
        return;
      }
    }
  }
switchD_00f42950_default:
  *(undefined8 *)(this + 0x588) = 0;
  return;
}

