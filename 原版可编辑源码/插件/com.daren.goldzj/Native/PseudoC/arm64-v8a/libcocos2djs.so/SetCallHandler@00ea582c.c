
/* v8::FunctionTemplate::SetCallHandler(void (*)(v8::FunctionCallbackInfo<v8::Value> const&),
   v8::Local<v8::Value>, v8::SideEffectType) */

void __thiscall
v8::FunctionTemplate::SetCallHandler
          (FunctionTemplate *this,ulong param_1,ulong *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  Factory *this_00;
  ulong uVar8;
  ulong uVar9;
  Factory *pFVar10;
  Factory *pFVar11;
  ulong local_68;
  
  uVar2 = *(uint *)(*(ulong *)this + 0x27);
  this_00 = (Factory *)(*(ulong *)this & 0xffffffff00000000);
  if (((uVar2 & 1) != 0) &&
     (*(short *)(((ulong)this_00 | 7) + (ulong)*(uint *)(((ulong)this_00 | (ulong)uVar2) - 1)) ==
      0xa6)) {
    lVar3 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar3 != 0) {
      if (*(code **)(lVar3 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar3 + 0xb738))
                  ("v8::FunctionTemplate::SetCallHandler","FunctionTemplate already instantiated");
        *(undefined1 *)(lVar3 + 0xb6b9) = 1;
        this_00 = (Factory *)((ulong)*(uint *)(this + 4) << 0x20);
        goto LAB_00ea58cc;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::SetCallHandler",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea58cc:
  uVar1 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  uVar6 = *(undefined8 *)(this_00 + 0x95a0);
  pFVar11 = this_00 + 0x95a8;
  lVar3 = *(long *)pFVar11;
  pFVar10 = this_00 + 0x95b0;
  *(int *)pFVar10 = *(int *)pFVar10 + 1;
  puVar4 = (ulong *)internal::Factory::NewCallHandlerInfo(this_00,param_4 == 1);
  if (param_1 == 0) {
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this_00 + 0x95a0);
      if (puVar5 == *(ulong **)pFVar11) {
        puVar5 = (ulong *)internal::HandleScope::Extend((Isolate *)this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar5 + 1;
      *puVar5 = 0;
    }
    else {
      puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this_00 + 0x95b8),0);
    }
  }
  else {
    puVar5 = (ulong *)internal::Factory::NewForeign(this_00,param_1);
  }
  uVar9 = *puVar4;
  uVar8 = *puVar5;
  *(int *)(uVar9 + 3) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 3,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 3,uVar8);
    }
  }
  local_68 = *puVar4;
  uVar8 = internal::CallHandlerInfo::redirected_callback((CallHandlerInfo *)&local_68);
  if (uVar8 == 0) {
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(this_00 + 0x95a0);
      if (puVar5 == *(ulong **)pFVar11) {
        puVar5 = (ulong *)internal::HandleScope::Extend((Isolate *)this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar5 + 1;
      *puVar5 = 0;
    }
    else {
      puVar5 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this_00 + 0x95b8),0);
    }
  }
  else {
    puVar5 = (ulong *)internal::Factory::NewForeign(this_00,uVar8);
  }
  uVar9 = *puVar4;
  uVar8 = *puVar5;
  *(int *)(uVar9 + 7) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 7,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 7,uVar8);
    }
  }
  puVar5 = (ulong *)((ulong)this_00 | 0xa0);
  if (param_3 != (ulong *)0x0) {
    puVar5 = param_3;
  }
  uVar9 = *puVar4;
  uVar8 = *puVar5;
  *(int *)(uVar9 + 0xb) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0xb,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0xb,uVar8);
    }
  }
  uVar8 = *puVar4;
  uVar9 = *(ulong *)this;
  *(int *)(uVar9 + 0x17) = (int)uVar8;
  if ((uVar8 & 1) != 0) {
    uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar9,uVar9 + 0x17,uVar8);
      uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar9,uVar9 + 0x17,uVar8);
    }
  }
  if (this_00 != (Factory *)0x0) {
    *(undefined8 *)(this_00 + 0x95a0) = uVar6;
    *(int *)pFVar10 = *(int *)pFVar10 + -1;
    if (*(long *)pFVar11 != lVar3) {
      *(long *)pFVar11 = lVar3;
      internal::HandleScope::DeleteExtensions((Isolate *)this_00);
    }
  }
  *(undefined4 *)(this_00 + 0x2c60) = uVar1;
  return;
}

