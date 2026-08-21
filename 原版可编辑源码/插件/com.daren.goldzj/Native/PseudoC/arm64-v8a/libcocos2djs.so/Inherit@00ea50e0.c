
/* v8::FunctionTemplate::Inherit(v8::Local<v8::FunctionTemplate>) */

void __thiscall v8::FunctionTemplate::Inherit(FunctionTemplate *this,ulong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)(*(ulong *)this + 0x27);
  uVar7 = *(ulong *)this & 0xffffffff00000000;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar7 | 7) + (ulong)*(uint *)((uVar7 | uVar2) - 1)) == 0xa6)) {
    lVar3 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar3 != 0) {
      if (*(code **)(lVar3 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar3 + 0xb738))
                  ("v8::FunctionTemplate::Inherit","FunctionTemplate already instantiated");
        *(undefined1 *)(lVar3 + 0xb6b9) = 1;
        uVar7 = (ulong)*(uint *)(this + 4) << 0x20;
        goto LAB_00ea516c;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::Inherit",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea516c:
  uVar1 = *(undefined4 *)(uVar7 + 0x2c60);
  *(undefined4 *)(uVar7 + 0x2c60) = 5;
  uVar6 = *(ulong *)this & 0xffffffff00000000;
  uVar2 = *(uint *)(*(ulong *)this + 0x23);
  uVar5 = *(ulong *)(uVar6 + 0xa0);
  if (uVar2 != (uint)uVar5) {
    uVar5 = (ulong)*(uint *)((uVar6 | uVar2) + 7);
  }
  if (((uVar5 & 1) != 0) && ((uint)uVar5 == *(uint *)(uVar7 + 0xa0))) {
    if (uVar2 == (uint)uVar5) {
      uVar5 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(uVar7,this);
    }
    else {
      uVar5 = uVar7 | uVar2;
    }
    uVar6 = *param_2;
    *(int *)(uVar5 + 0xb) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar6);
        uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar6);
      }
    }
    *(undefined4 *)(uVar7 + 0x2c60) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","info->GetPrototypeProviderTemplate().IsUndefined(i_isolate)");
}

