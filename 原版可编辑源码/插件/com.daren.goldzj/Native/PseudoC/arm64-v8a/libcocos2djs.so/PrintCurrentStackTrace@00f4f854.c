
/* v8::internal::Isolate::PrintCurrentStackTrace(__sFILE*) */

void __thiscall v8::internal::Isolate::PrintCurrentStackTrace(Isolate *this,__sFILE *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  IncrementalStringBuilder aIStack_78 [40];
  undefined8 local_38;
  
  puVar1 = (ulong *)FUN_00f4d738(this,this + 0xa0,0x200000000,
                                 (ulong)FLAG_async_stack_traces << 0x30 | 0x100000001);
  IncrementalStringBuilder::IncrementalStringBuilder(aIStack_78,this);
  uVar4 = *puVar1;
  if (1 < *(int *)(uVar4 + 3)) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)iVar5 + 7);
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(this + 0x95a0);
        if (puVar2 == *(ulong **)(this + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(this);
        }
        *(ulong **)(this + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar4;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
      }
      SerializeStackTraceFrame(this,puVar2,aIStack_78);
      uVar4 = *puVar1;
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (lVar6 < *(int *)(uVar4 + 3) >> 1);
  }
  puVar3 = (undefined8 *)IncrementalStringBuilder::Finish(aIStack_78);
  if (puVar3 != (undefined8 *)0x0) {
    local_38 = *puVar3;
    String::PrintOn((String *)&local_38,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

