
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::SafeStackFrameIterator::SafeStackFrameIterator(v8::internal::Isolate*, unsigned
   long, unsigned long, unsigned long, unsigned long, unsigned long) */

void __thiscall
v8::internal::SafeStackFrameIterator::SafeStackFrameIterator
          (SafeStackFrameIterator *this,Isolate *param_1,ulong param_2,ulong param_3,ulong param_4,
          ulong param_5,ulong param_6)

{
  undefined1 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  SafeStackFrameIterator *pSVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_90;
  ulong uStack_88;
  SafeStackFrameIterator *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  ulong uStack_58;
  
  StackFrameIteratorBase::StackFrameIteratorBase((StackFrameIteratorBase *)this,param_1,false);
  *(ulong *)(this + 0x5a0) = param_4;
  *(ulong *)(this + 0x5a8) = param_6;
  *(undefined4 *)(this + 0x5b0) = 0;
  *(undefined8 *)(this + 0x5b8) = 0;
  uVar6 = *(undefined8 *)(param_1 + 0x2c58);
  *(ulong *)(this + 0x5c8) = param_5;
  *(undefined8 *)(this + 0x5c0) = uVar6;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = (SafeStackFrameIterator *)0x0;
  if (param_1[0x8838] == (Isolate)0x0) goto switchD_00f421d0_default;
  uVar7 = *(ulong *)(param_1 + 0x38);
  if (uVar7 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x2c28);
    if ((((uVar7 < param_4) || (param_6 < uVar7)) ||
        (uVar8 = *(ulong *)(uVar7 - 0x10), uVar8 < param_4)) || (param_6 < uVar8)) {
LAB_00f4201c:
      if (param_3 < *(ulong *)(this + 0x5a0)) {
        return;
      }
      if (*(ulong *)(this + 0x5a8) < param_3) {
        return;
      }
      pSVar5 = (SafeStackFrameIterator *)(param_3 + 8);
      local_90 = param_4;
      uStack_88 = param_3;
      if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
        pSVar5 = (SafeStackFrameIterator *)(*StackFrame::return_address_location_resolver_)();
      }
      local_80 = pSVar5;
      lVar4 = Isolate::CurrentEmbeddedBlob();
      if (lVar4 == 0) {
LAB_00f42138:
        uVar1 = true;
      }
      else {
        uVar6 = Isolate::CurrentEmbeddedBlob();
        uStack_58 = Isolate::CurrentEmbeddedBlobSize();
        uStack_58 = uStack_58 & 0xffffffff;
        local_60 = uVar6;
        uVar7 = EmbeddedData::InstructionStartOfBytecodeHandlers((EmbeddedData *)&local_60);
        if ((param_2 < uVar7) ||
           (uVar7 = EmbeddedData::InstructionEndOfBytecodeHandlers((EmbeddedData *)&local_60),
           uVar7 <= param_2)) goto LAB_00f42138;
        puVar9 = (ulong *)(param_3 - 8);
        if ((puVar9 < *(ulong **)(this + 0x5a0)) ||
           ((*(ulong **)(this + 0x5a8) < puVar9 || ((*puVar9 & 0x1ffffffff) == 0x1a))))
        goto LAB_00f42138;
        pSVar5 = this + 0x5c8;
        if (*(long *)(this + 0x5c8) == 0) {
          if (param_4 < *(ulong **)(this + 0x5a0)) {
            pSVar5 = (SafeStackFrameIterator *)0x0;
          }
          else {
            pSVar5 = (SafeStackFrameIterator *)0x0;
            if (param_4 <= *(ulong **)(this + 0x5a8)) {
              pSVar5 = (SafeStackFrameIterator *)param_4;
            }
          }
        }
        uVar7 = FUN_00f42354(param_1,*(undefined8 *)pSVar5,&local_90);
        if ((uVar7 & 1) == 0) goto LAB_00f42138;
        uVar1 = false;
        local_80 = pSVar5;
      }
      if ((*(ulong *)(this + 0x5a0) <= param_3 - 0x10) &&
         (param_3 - 0x10 <= *(ulong *)(this + 0x5a8))) {
        iVar2 = StackFrame::ComputeType((StackFrameIteratorBase *)this,(State *)&local_90);
        *(int *)(this + 0x5b0) = iVar2;
        uVar1 = uVar1 | iVar2 != 0xc;
        if ((*(ulong *)(param_3 - 8) & 1) != 0) {
          *(ulong *)(this + 0x5b8) = *(ulong *)(param_3 - 8);
        }
        goto LAB_00f421b0;
      }
      *(undefined4 *)(this + 0x5b0) = 0;
switchD_00f421d0_caseD_4:
      uVar7 = uStack_88;
      goto joined_r0x00f42160;
    }
    plVar3 = (long *)(uVar8 - 8);
    if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
      plVar3 = (long *)(*StackFrame::return_address_location_resolver_)();
    }
    if ((*plVar3 == 0) || (*(ulong *)(param_1 + 0x2c30) <= uVar7)) goto LAB_00f4201c;
    uVar7 = *(ulong *)(param_1 + 0x2c28);
    if (uVar7 == 0) {
      iVar2 = 0;
    }
    else {
      if ((*(ulong *)(uVar7 - 8) & 1) == 0) {
        iVar2 = (int)(*(ulong *)(uVar7 - 8) >> 1);
        if ((iVar2 == 3) || (iVar2 == 0x15)) goto LAB_00f420dc;
        if (iVar2 != 10) goto LAB_00f420d8;
        local_90 = uVar7 - 0x10;
        iVar2 = 10;
      }
      else {
LAB_00f420d8:
        iVar2 = 3;
LAB_00f420dc:
        local_90 = *(ulong *)(uVar7 - 0x10);
      }
      pSVar5 = (SafeStackFrameIterator *)(local_90 - 8);
      uStack_88 = uVar7;
      if (StackFrame::return_address_location_resolver_ != (code *)0x0) {
        pSVar5 = (SafeStackFrameIterator *)(*StackFrame::return_address_location_resolver_)();
      }
      uStack_78 = 0;
      local_70 = 0;
      local_80 = pSVar5;
    }
    *(int *)(this + 0x5b0) = iVar2;
    uVar1 = true;
LAB_00f421b0:
    switch(iVar2) {
    case 1:
      pSVar5 = this + 8;
      break;
    case 2:
      pSVar5 = this + 0x48;
      break;
    case 3:
      pSVar5 = this + 0x88;
      break;
    case 4:
      goto switchD_00f421d0_caseD_4;
    case 5:
      pSVar5 = this + 0x108;
      break;
    case 6:
      pSVar5 = this + 0x148;
      break;
    case 7:
      pSVar5 = this + 0x188;
      break;
    case 8:
      pSVar5 = this + 0x1c8;
      break;
    case 9:
      pSVar5 = this + 0x208;
      break;
    case 10:
      pSVar5 = this + 0x248;
      break;
    case 0xb:
      pSVar5 = this + 0x288;
      break;
    case 0xc:
      pSVar5 = this + 0x2c8;
      break;
    case 0xd:
      pSVar5 = this + 0x308;
      break;
    case 0xe:
      pSVar5 = this + 0x348;
      break;
    case 0xf:
      pSVar5 = this + 0x388;
      break;
    case 0x10:
      pSVar5 = this + 0x3c8;
      break;
    case 0x11:
      pSVar5 = this + 0x408;
      break;
    case 0x12:
      pSVar5 = this + 0x448;
      break;
    case 0x13:
      pSVar5 = this + 0x488;
      break;
    case 0x14:
      pSVar5 = this + 0x4c8;
      break;
    case 0x15:
      pSVar5 = this + 0x508;
      break;
    case 0x16:
      pSVar5 = this + 0x548;
      break;
    default:
      goto switchD_00f421d0_default;
    }
  }
  else {
    local_80 = (SafeStackFrameIterator *)(param_1 + 0x40);
    uVar1 = false;
    *(undefined4 *)(this + 0x5b0) = 4;
    local_90 = param_4;
joined_r0x00f42160:
    pSVar5 = this + 200;
    uStack_88 = uVar7;
  }
  if (pSVar5 != (SafeStackFrameIterator *)0x0) {
    *(undefined8 *)((long)pSVar5 + 0x38) = local_70;
    *(undefined8 *)((long)pSVar5 + 0x30) = uStack_78;
    *(SafeStackFrameIterator **)((long)pSVar5 + 0x28) = local_80;
    *(ulong *)((long)pSVar5 + 0x20) = uStack_88;
    *(ulong *)((long)pSVar5 + 0x18) = local_90;
    *(SafeStackFrameIterator **)(this + 0x588) = pSVar5;
    if (!(bool)uVar1) {
      return;
    }
    Advance(this);
    return;
  }
switchD_00f421d0_default:
  *(undefined8 *)(this + 0x588) = 0;
  return;
}

