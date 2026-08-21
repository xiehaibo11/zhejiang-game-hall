
/* v8::FunctionTemplate::InstanceTemplate() */

ulong * __thiscall v8::FunctionTemplate::InstanceTemplate(FunctionTemplate *this)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  
  if (this != (FunctionTemplate *)0x0) {
    uVar1 = *(uint *)(this + 4);
    pIVar9 = (Isolate *)((ulong)uVar1 << 0x20);
    uVar2 = *(undefined4 *)(pIVar9 + 0x2c60);
    *(undefined4 *)(pIVar9 + 0x2c60) = 5;
    uVar8 = *(ulong *)this & 0xffffffff00000000;
    uVar3 = *(uint *)(*(ulong *)this + 0x23);
    uVar6 = *(ulong *)(uVar8 + 0xa0);
    if (uVar3 != (uint)uVar6) {
      uVar6 = (ulong)*(uint *)((uVar8 | uVar3) + 0x17);
    }
    if (((uVar6 & 1) != 0) && ((int)uVar6 == *(int *)(pIVar9 + 0xa0))) {
      puVar4 = (ulong *)FUN_00ea4e0c(pIVar9,this,0);
      if (*(int *)(*(long *)this + 0x23) == *(int *)(pIVar9 + 0xa0)) {
        uVar6 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(pIVar9,this);
      }
      else {
        uVar6 = CONCAT44(uVar1,*(int *)(*(long *)this + 0x23));
      }
      uVar8 = *puVar4;
      *(int *)(uVar6 + 0x17) = (int)uVar8;
      if ((uVar8 & 1) != 0) {
        uVar7 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar7 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x17,uVar8);
          uVar7 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x17,uVar8);
        }
      }
    }
    uVar6 = *(ulong *)this & 0xffffffff00000000;
    uVar1 = *(uint *)(*(ulong *)this + 0x23);
    uVar8 = *(ulong *)(uVar6 + 0xa0);
    if (uVar1 != (uint)uVar8) {
      uVar8 = uVar6 | *(uint *)((uVar6 | uVar1) + 0x17);
    }
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar4 = (ulong *)internal::HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar8;
    }
    else {
      puVar4 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar8);
    }
    *(undefined4 *)(pIVar9 + 0x2c60) = uVar2;
    return puVar4;
  }
  lVar5 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar5 != 0) {
    if (*(code **)(lVar5 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar5 + 0xb738))
                ("v8::FunctionTemplate::InstanceTemplate()","Reading from empty handle");
      *(undefined1 *)(lVar5 + 0xb6b9) = 1;
      return (ulong *)0x0;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::InstanceTemplate()",
             "Reading from empty handle");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

