
/* v8::internal::StackFrameIterator::Advance() */

void __thiscall v8::internal::StackFrameIterator::Advance(StackFrameIterator *this)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  StackFrameIterator *pSVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uVar1 = (**(code **)(**(long **)(this + 0x588) + 0x48))(*(long **)(this + 0x588),&local_60);
  plVar3 = *(long **)(this + 0x588);
  puVar5 = *(undefined8 **)(this + 0x590);
  uVar6 = plVar3[4];
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  if (iVar2 != 9) goto LAB_00f41750;
  do {
    puVar5 = (undefined8 *)*puVar5;
LAB_00f41750:
  } while ((long)puVar5 - 1U < uVar6);
  *(undefined8 **)(this + 0x590) = puVar5;
  switch(uVar1) {
  case 1:
    pSVar4 = this + 8;
    goto joined_r0x00f4179c;
  case 2:
    pSVar4 = this + 0x48;
joined_r0x00f4179c:
    if (pSVar4 == (StackFrameIterator *)0x0) goto LAB_00f41898;
    goto LAB_00f41884;
  case 3:
    pSVar4 = this + 0x88;
    break;
  case 4:
    pSVar4 = this + 200;
    break;
  case 5:
    pSVar4 = this + 0x108;
    break;
  case 6:
    pSVar4 = this + 0x148;
    break;
  case 7:
    pSVar4 = this + 0x188;
    break;
  case 8:
    pSVar4 = this + 0x1c8;
    break;
  case 9:
    pSVar4 = this + 0x208;
    break;
  case 10:
    pSVar4 = this + 0x248;
    break;
  case 0xb:
    pSVar4 = this + 0x288;
    break;
  case 0xc:
    pSVar4 = this + 0x2c8;
    break;
  case 0xd:
    pSVar4 = this + 0x308;
    break;
  case 0xe:
    pSVar4 = this + 0x348;
    break;
  case 0xf:
    pSVar4 = this + 0x388;
    break;
  case 0x10:
    pSVar4 = this + 0x3c8;
    break;
  case 0x11:
    pSVar4 = this + 0x408;
    break;
  case 0x12:
    pSVar4 = this + 0x448;
    break;
  case 0x13:
    pSVar4 = this + 0x488;
    break;
  case 0x14:
    pSVar4 = this + 0x4c8;
    break;
  case 0x15:
    pSVar4 = this + 0x508;
    break;
  case 0x16:
    pSVar4 = this + 0x548;
    break;
  default:
    pSVar4 = (StackFrameIterator *)0x0;
    goto LAB_00f41898;
  }
  if (pSVar4 != (StackFrameIterator *)0x0) {
LAB_00f41884:
    *(undefined8 *)(pSVar4 + 0x38) = local_40;
    *(undefined8 *)(pSVar4 + 0x30) = uStack_48;
    *(undefined8 *)(pSVar4 + 0x28) = uStack_50;
    *(undefined8 *)(pSVar4 + 0x20) = uStack_58;
    *(undefined8 *)(pSVar4 + 0x18) = local_60;
  }
LAB_00f41898:
  *(StackFrameIterator **)(this + 0x588) = pSVar4;
  return;
}

