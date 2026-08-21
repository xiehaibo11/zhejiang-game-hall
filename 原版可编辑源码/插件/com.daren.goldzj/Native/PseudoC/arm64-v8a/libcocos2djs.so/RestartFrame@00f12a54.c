
/* v8::internal::LiveEdit::RestartFrame(v8::internal::JavaScriptFrame*) */

byte v8::internal::LiveEdit::RestartFrame(JavaScriptFrame *param_1)

{
  undefined8 *puVar1;
  Isolate *pIVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  JavaScriptFrame *this;
  byte unaff_w23;
  undefined8 *local_628;
  undefined8 *local_620;
  undefined8 uStack_618;
  StackFrameIterator aSStack_610 [1416];
  JavaScriptFrame *local_88;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pIVar2 = *(Isolate **)(param_1 + 0x10) + 0xb6c8;
  iVar3 = *(int *)(*(long *)pIVar2 + 0x48);
  StackFrameIterator::StackFrameIterator(aSStack_610,*(Isolate **)(param_1 + 0x10));
  if (local_88 == (JavaScriptFrame *)0x0) {
LAB_00f12c30:
    unaff_w23 = 0;
LAB_00f12c34:
    if (*(long *)(lVar4 + 0x28) == local_70) {
      return unaff_w23 & 1;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  if (iVar3 == 0) goto LAB_00f12b04;
LAB_00f12b0c:
  this = local_88;
  iVar7 = (**(code **)(*(long *)local_88 + 0x38))(local_88);
  bVar6 = iVar3 == iVar7;
  do {
    if (*(long *)(this + 0x20) == *(long *)(param_1 + 0x20)) {
      if (!bVar6) goto LAB_00f12c30;
      Debug::ScheduleFrameRestart(*(Debug **)pIVar2,(StackFrame *)this);
      unaff_w23 = 1;
      goto LAB_00f12c34;
    }
    if (bVar6) {
      iVar7 = (**(code **)(*(long *)this + 8))(this);
      if ((iVar7 == 3) || (iVar7 = (**(code **)(*(long *)this + 8))(this), iVar7 == 0x15))
      goto LAB_00f12c30;
      uVar8 = (**(code **)(*(long *)this + 8))(this);
      if ((uVar8 < 0x15) && ((1 << (ulong)(uVar8 & 0x1f) & 0x119010U) != 0)) {
        local_620 = (undefined8 *)0x0;
        uStack_618 = 0;
        local_628 = (undefined8 *)0x0;
        JavaScriptFrame::GetFunctions(this,(vector *)&local_628);
        for (puVar1 = local_628; puVar1 != local_620; puVar1 = puVar1 + 1) {
          uVar8 = *(uint *)(*(long *)*puVar1 + 0x1b) & 0x1f;
          unaff_w23 = unaff_w23 & (1 < (uVar8 - 1 & 0xff) && 6 < (uVar8 - 10 & 0xff));
          if ((uVar8 < 0x11) && ((1 << (ulong)uVar8 & 0x1fc06U) != 0)) {
            bVar5 = true;
            goto joined_r0x00f12c10;
          }
        }
        bVar5 = false;
joined_r0x00f12c10:
        if (local_628 != (undefined8 *)0x0) {
          local_620 = local_628;
          operator_delete(local_628);
        }
        if (bVar5) goto LAB_00f12c34;
      }
    }
    StackFrameIterator::Advance(aSStack_610);
    if (local_88 == (JavaScriptFrame *)0x0) goto LAB_00f12c30;
    if (!bVar6) goto LAB_00f12b0c;
LAB_00f12b04:
    bVar6 = true;
    this = local_88;
  } while( true );
}

