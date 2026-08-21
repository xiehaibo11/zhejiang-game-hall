
/* v8::internal::JavaScriptFrame::Summarize(std::__ndk1::vector<v8::internal::FrameSummary,
   std::__ndk1::allocator<v8::internal::FrameSummary> >*) const */

void __thiscall v8::internal::JavaScriptFrame::Summarize(JavaScriptFrame *this,vector *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
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
  ulong local_58;
  
  lVar3 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  local_58 = *(ulong *)(lVar3 + 8);
  uVar9 = **(undefined8 **)(this + 0x28);
  if (*(int *)(local_58 + 0x17) < 0) {
    iVar1 = Code::OffHeapInstructionStart((Code *)&local_58);
  }
  else {
    iVar1 = (int)local_58 + 0x3f;
  }
  uVar11 = local_58;
  pIVar4 = *(Isolate **)(this + 0x10);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar11;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),local_58);
  }
  puVar6 = (undefined8 *)GetParameters(this);
  uVar10 = *(undefined8 *)(this + 0x10);
  uVar7 = (**(code **)(*(long *)this + 0x50))(this);
  uVar8 = (**(code **)(*(long *)this + 0x98))(this);
  uVar11 = *puVar5;
  uVar2 = (**(code **)(*(long *)this + 0x80))(this);
  FrameSummary::JavaScriptFrameSummary::JavaScriptFrameSummary
            ((JavaScriptFrameSummary *)&local_c8,uVar10,uVar7,uVar8,uVar11,(int)uVar9 - iVar1,
             uVar2 & 1,*puVar6);
  local_60 = local_98;
  uStack_78 = uStack_b0;
  local_80 = local_b8;
  uStack_68 = uStack_a0;
  uStack_70 = local_a8;
  uStack_88 = uStack_c0;
  local_90 = local_c8;
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
    puVar6[6] = local_98;
    puVar6[3] = uStack_b0;
    puVar6[2] = local_b8;
    puVar6[5] = uStack_a0;
    puVar6[4] = local_a8;
    puVar6[1] = uStack_c0;
    *puVar6 = local_c8;
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

