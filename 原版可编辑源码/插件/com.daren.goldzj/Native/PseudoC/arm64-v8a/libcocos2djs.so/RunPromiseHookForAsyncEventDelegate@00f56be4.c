
/* v8::internal::Isolate::RunPromiseHookForAsyncEventDelegate(v8::PromiseHookType,
   v8::internal::Handle<v8::internal::JSPromise>) */

void __thiscall
v8::internal::Isolate::RunPromiseHookForAsyncEventDelegate(Isolate *this,int param_2,ulong *param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong uVar15;
  void *local_628;
  void *local_620;
  undefined8 uStack_618;
  ulong local_610;
  ulong local_608 [177];
  JavaScriptFrame *local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((param_2 == 1) || (*(long *)(this + 0xc710) == 0)) goto LAB_00f56ed0;
  if (param_2 == 3) {
    local_608[0] = *param_3;
    iVar4 = JSPromise::async_task_id((JSPromise *)local_608);
    if (iVar4 == 0) goto LAB_00f56ed0;
    local_608[0] = *param_3;
    plVar13 = *(long **)(this + 0xc710);
    uVar5 = JSPromise::async_task_id((JSPromise *)local_608);
    lVar9 = *plVar13;
    uVar8 = 4;
  }
  else {
    if (param_2 != 2) {
      StackFrameIterator::StackFrameIterator((StackFrameIterator *)local_608,this);
      if (local_80 != (JavaScriptFrame *)0x0) {
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)local_608);
      }
      bVar3 = false;
      uVar5 = 0;
      do {
        if (local_80 == (JavaScriptFrame *)0x0) break;
        local_620 = (void *)0x0;
        uStack_618 = 0;
        local_628 = (void *)0x0;
        JavaScriptFrame::GetFunctions(local_80,(vector *)&local_628);
        if ((long)local_620 - (long)local_628 != 0) {
          uVar10 = (long)local_620 - (long)local_628 >> 3;
          lVar9 = -1;
          uVar15 = 1;
          do {
            puVar14 = *(ulong **)((long)local_628 + (uVar10 + lVar9) * 8);
            uVar10 = *puVar14;
            uVar12 = uVar10 & 0xffffffff00000000;
            uVar11 = uVar12 | *(uint *)(uVar10 + 0xf);
            if (*(short *)((uVar12 | 7) + (ulong)*(uint *)(uVar11 - 1)) == 0x5b) {
              uVar11 = uVar12 | *(uint *)(uVar11 + 0xb);
            }
            if (((uVar11 & 1) == 0) ||
               ((int)uVar11 != *(int *)((uVar11 & 0xffffffff00000000) + 0xa0))) {
              local_610 = uVar11;
              uVar10 = Script::IsUserJavaScript((Script *)&local_610);
              if ((uVar10 & 1) != 0) {
                if (bVar3) {
                  local_610 = *param_3;
                  iVar4 = JSPromise::async_task_id((JSPromise *)&local_610);
                  if (iVar4 == 0) {
                    local_610 = *param_3;
                    iVar4 = *(int *)(this + 0xc71c);
                    *(int *)(this + 0xc71c) = iVar4 + 1;
                    JSPromise::set_async_task_id((JSPromise *)&local_610,iVar4 + 1);
                  }
                  local_610 = *param_3;
                  plVar13 = *(long **)(this + 0xc710);
                  uVar6 = JSPromise::async_task_id((JSPromise *)&local_610);
                  uVar7 = Debug::IsBlackboxed(*(Debug **)(this + 0xb6c8),puVar14);
                  (**(code **)(*plVar13 + 0x10))(plVar13,uVar5,uVar6,uVar7 & 1);
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                bVar2 = true;
                goto joined_r0x00f56ec8;
              }
              uVar10 = *puVar14;
            }
            if ((*(uint *)(uVar10 + 3) & 1) == 0) {
              if ((*(uint *)(*puVar14 + 3) & 0xfffffffe) == 0x3a0) {
                bVar3 = true;
                uVar6 = 0;
              }
              else if ((*(uint *)(*puVar14 + 3) & 0xfffffffe) == 0x3a2) {
                bVar3 = true;
                uVar6 = 1;
              }
              else {
                bVar3 = (*(uint *)(*puVar14 + 3) & 0xfffffffe) == 0x3b0;
                uVar6 = 2;
                if (!bVar3) {
                  uVar6 = uVar5;
                }
              }
            }
            else {
              bVar3 = false;
              uVar6 = uVar5;
            }
            uVar5 = uVar6;
            uVar15 = uVar15 + 1;
            lVar9 = lVar9 + -1;
            uVar10 = (long)local_620 - (long)local_628 >> 3;
          } while (uVar15 <= uVar10);
        }
        JavaScriptFrameIterator::Advance((JavaScriptFrameIterator *)local_608);
        bVar2 = false;
joined_r0x00f56ec8:
        if (local_628 != (void *)0x0) {
          local_620 = local_628;
          operator_delete(local_628);
        }
      } while (!bVar2);
      goto LAB_00f56ed0;
    }
    local_608[0] = *param_3;
    iVar4 = JSPromise::async_task_id((JSPromise *)local_608);
    if (iVar4 == 0) goto LAB_00f56ed0;
    local_608[0] = *param_3;
    plVar13 = *(long **)(this + 0xc710);
    uVar5 = JSPromise::async_task_id((JSPromise *)local_608);
    lVar9 = *plVar13;
    uVar8 = 3;
  }
  (**(code **)(lVar9 + 0x10))(plVar13,uVar8,uVar5,0);
LAB_00f56ed0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

