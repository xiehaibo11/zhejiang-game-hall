
/* v8::internal::Factory::NewOffHeapTrampolineFor(v8::internal::Handle<v8::internal::Code>, unsigned
   long) */

ulong * __thiscall
v8::internal::Factory::NewOffHeapTrampolineFor(Factory *this,ulong *param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  MemoryChunk *this_00;
  ulong uVar10;
  
  lVar5 = Isolate::embedded_blob((Isolate *)this);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(isolate()->embedded_blob()) != nullptr");
  }
  iVar4 = Isolate::embedded_blob_size((Isolate *)this);
  if (iVar4 != 0) {
    uVar6 = Builtins::IsIsolateIndependentBuiltin(*param_2);
    if ((uVar6 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Builtins::IsIsolateIndependentBuiltin(*code)");
    }
    bVar3 = Builtins::CodeObjectIsExecutable(*(int *)(*param_2 + 0x27));
    puVar7 = (ulong *)Builtins::GenerateOffHeapTrampolineFor
                                ((Isolate *)this,param_3,
                                 *(int *)((*param_2 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(*param_2 + 0xf)) + 7),(bool)(bVar3 & 1));
    this_00 = (MemoryChunk *)(*puVar7 & 0xfffffffffffc0000);
    if ((*(char *)(*(long *)(this_00 + 0x18) + 0x168) == '\0') || (((byte)this_00[8] & 1) == 0)) {
      bVar2 = false;
    }
    else {
      MemoryChunk::SetReadAndWritable(this_00);
      bVar2 = true;
    }
    uVar1 = *(uint *)(*param_2 + 0x17);
    if (((uVar1 & 0x3e) == 10) || ((uVar1 >> 6 & 1) != 0)) {
      uVar9 = uVar1 >> 7 & 0xffffff;
      if (uVar9 == 0xffffff) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","0 <= stack_slots && stack_slots < StackSlotsField::kMax");
      }
    }
    else {
      uVar9 = 0;
    }
    *(uint *)(*puVar7 + 0x17) = uVar1 & 0x7f | uVar9 << 7 | 0x80000000;
    lVar5 = 0x460;
    if ((bVar3 & 1) == 0) {
      lVar5 = 0x3c0;
    }
    *(undefined4 *)(*puVar7 + 0x27) = *(undefined4 *)(*param_2 + 0x27);
    *(undefined4 *)(*puVar7 + 0x1b) = *(undefined4 *)(*param_2 + 0x1b);
    *(undefined4 *)(*puVar7 + 0x1f) = *(undefined4 *)(*param_2 + 0x1f);
    *(undefined4 *)(*puVar7 + 0x23) = *(undefined4 *)(*param_2 + 0x23);
    uVar6 = *(ulong *)(this + lVar5);
    uVar10 = *puVar7;
    *(int *)(uVar10 + 3) = (int)uVar6;
    if ((uVar6 & 1) != 0) {
      uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar10,uVar10 + 3,uVar6);
        uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar10 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar10,uVar10 + 3,uVar6);
      }
    }
    if (bVar2) {
      if (FLAG_jitless == '\0') {
        MemoryChunk::SetReadAndExecutable(this_00);
      }
      else {
        MemoryChunk::SetReadable(this_00);
      }
    }
    return puVar7;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","0 != isolate()->embedded_blob_size()");
}

