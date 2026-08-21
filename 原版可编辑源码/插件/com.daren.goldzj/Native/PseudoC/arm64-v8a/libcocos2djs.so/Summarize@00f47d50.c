
/* v8::internal::InterpretedFrame::Summarize(std::__ndk1::vector<v8::internal::FrameSummary,
   std::__ndk1::allocator<v8::internal::FrameSummary> >*) const */

void __thiscall v8::internal::InterpretedFrame::Summarize(InterpretedFrame *this,vector *param_1)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar3 = (ulong *)(**(code **)(*(long *)this + 0x90))(this,0xfffffffe);
  pIVar4 = *(Isolate **)(this + 0x10);
  uVar9 = *puVar3;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar9;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar9);
  }
  puVar5 = (undefined8 *)JavaScriptFrame::GetParameters((JavaScriptFrame *)this);
  uVar10 = *(undefined8 *)(this + 0x10);
  uVar6 = (**(code **)(*(long *)this + 0x50))(this);
  uVar7 = (**(code **)(*(long *)this + 0x98))(this);
  uVar9 = *puVar3;
  piVar8 = (int *)(**(code **)(*(long *)this + 0x90))(this,0xffffffff);
  iVar1 = *piVar8;
  uVar2 = (**(code **)(*(long *)this + 0x80))(this);
  FrameSummary::JavaScriptFrameSummary::JavaScriptFrameSummary
            ((JavaScriptFrameSummary *)&local_c8,uVar10,uVar6,uVar7,uVar9,(iVar1 >> 1) + -0x21,
             uVar2 & 1,*puVar5);
  local_60 = local_98;
  uStack_78 = uStack_b0;
  local_80 = local_b8;
  uStack_68 = uStack_a0;
  uStack_70 = local_a8;
  uStack_88 = uStack_c0;
  local_90 = local_c8;
  puVar5 = *(undefined8 **)(param_1 + 8);
  if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
    puVar5[6] = local_98;
    puVar5[3] = uStack_b0;
    puVar5[2] = local_b8;
    puVar5[5] = uStack_a0;
    puVar5[4] = local_a8;
    puVar5[1] = uStack_c0;
    *puVar5 = local_c8;
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x38;
  }
  else {
    std::__ndk1::
    vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>::
    __push_back_slow_path<v8::internal::FrameSummary>
              ((vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>
                *)param_1,(FrameSummary *)&local_90);
  }
  if ((uint)uStack_88 < 3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

