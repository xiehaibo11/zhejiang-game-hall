
ulong * FUN_00ea45f0(ulong *param_1,int param_2,ulong param_3,undefined8 param_4)

{
  ulong *puVar1;
  long lVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  Isolate *pIVar9;
  
  uVar4 = *param_1;
  pIVar9 = (Isolate *)(uVar4 & 0xffffffff00000000);
  if (*(short *)(((ulong)pIVar9 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x8f) {
    if (param_2 < 0) {
      lVar2 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
      if (lVar2 != 0) {
        puVar8 = (undefined1 *)(lVar2 + 0xb6b9);
        pcVar6 = *(code **)(lVar2 + 0xb738);
        if (pcVar6 != (code *)0x0) {
          pcVar3 = "Negative index";
LAB_00ea47ac:
          (*pcVar6)(param_4,pcVar3);
          *puVar8 = 1;
          return (ulong *)0x0;
        }
      }
      pcVar3 = "Negative index";
    }
    else {
      uVar4 = (ulong)pIVar9 | (ulong)*(uint *)(uVar4 + 0x17);
      if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar1 = *(ulong **)(pIVar9 + 0x95a0);
        if (puVar1 == *(ulong **)(pIVar9 + 0x95a8)) {
          puVar1 = (ulong *)v8::internal::HandleScope::Extend(pIVar9);
        }
        *(ulong **)(pIVar9 + 0x95a0) = puVar1 + 1;
        *puVar1 = uVar4;
      }
      else {
        puVar1 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar4);
        uVar4 = *puVar1;
      }
      if (param_2 < *(int *)(uVar4 + 3) >> 1) {
        return puVar1;
      }
      if ((param_2 < 0x3fff) && ((param_3 & 1) != 0)) {
        puVar1 = (ulong *)v8::internal::EmbedderDataArray::EnsureCapacity(pIVar9,puVar1,param_2);
        uVar7 = *param_1;
        uVar4 = *puVar1;
        *(int *)(uVar7 + 0x17) = (int)uVar4;
        if ((uVar4 & 1) == 0) {
          return puVar1;
        }
        uVar5 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x17,uVar4);
          uVar5 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
        }
        if ((uVar5 & 0x18) == 0) {
          return puVar1;
        }
        if ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) != 0) {
          return puVar1;
        }
        v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x17,uVar4);
        return puVar1;
      }
      lVar2 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
      if (lVar2 != 0) {
        puVar8 = (undefined1 *)(lVar2 + 0xb6b9);
        pcVar6 = *(code **)(lVar2 + 0xb738);
        if (pcVar6 != (code *)0x0) {
          pcVar3 = "Index too large";
          goto LAB_00ea47ac;
        }
      }
      pcVar3 = "Index too large";
    }
  }
  else {
    lVar2 = v8::base::Thread::GetThreadLocal(v8::internal::Isolate::isolate_key_);
    if (lVar2 != 0) {
      puVar8 = (undefined1 *)(lVar2 + 0xb6b9);
      pcVar6 = *(code **)(lVar2 + 0xb738);
      if (pcVar6 != (code *)0x0) {
        pcVar3 = "Not a native context";
        goto LAB_00ea47ac;
      }
    }
    pcVar3 = "Not a native context";
  }
  v8::base::OS::PrintError("\n#\n# Fatal error in %s\n# %s\n#\n\n",param_4,pcVar3);
                    /* WARNING: Subroutine does not return */
  v8::base::OS::Abort();
}

