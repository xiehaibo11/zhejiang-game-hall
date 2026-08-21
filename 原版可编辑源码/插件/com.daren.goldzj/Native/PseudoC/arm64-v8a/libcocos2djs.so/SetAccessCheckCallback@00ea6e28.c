
/* v8::ObjectTemplate::SetAccessCheckCallback(bool (*)(v8::Local<v8::Context>,
   v8::Local<v8::Object>, v8::Local<v8::Value>), v8::Local<v8::Value>) */

void __thiscall
v8::ObjectTemplate::SetAccessCheckCallback(ObjectTemplate *this,ulong param_1,ulong *param_3)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  Factory *this_00;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar4 = *(uint *)(this + 4);
  uVar11 = (ulong)uVar4;
  this_00 = (Factory *)(uVar11 << 0x20);
  piVar1 = (int *)(uVar11 << 0x20 | 0x95b0);
  uVar5 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  plVar2 = (long *)(uVar11 << 0x20 | 0x95a8);
  puVar3 = (undefined8 *)(uVar11 << 0x20 | 0x95a0);
  lVar12 = *plVar2;
  uVar14 = *puVar3;
  *piVar1 = *piVar1 + 1;
  puVar7 = (ulong *)FUN_00ea6c84(this_00,this);
  uVar6 = *(uint *)(*puVar7 + 0x27);
  if (((uVar6 & 1) != 0) &&
     (uVar11 = *puVar7 & 0xffffffff00000000,
     *(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar6) - 1)) == 0xa6)) {
    lVar8 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar8 != 0) {
      if (*(code **)(lVar8 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar8 + 0xb738))
                  ("v8::ObjectTemplate::SetAccessCheckCallback",
                   "FunctionTemplate already instantiated");
        *(undefined1 *)(lVar8 + 0xb6b9) = 1;
        goto LAB_00ea6f0c;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ObjectTemplate::SetAccessCheckCallback",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea6f0c:
  puVar9 = (ulong *)internal::Factory::NewStruct(this_00,0x50,1);
  if (param_1 == 0) {
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(this_00 + 0x95a0);
      if (puVar10 == (ulong *)*plVar2) {
        puVar10 = (ulong *)internal::HandleScope::Extend((Isolate *)this_00);
      }
      *(ulong **)(this_00 + 0x95a0) = puVar10 + 1;
      *puVar10 = 0;
    }
    else {
      puVar10 = (ulong *)internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this_00 + 0x95b8),0);
    }
  }
  else {
    puVar10 = (ulong *)internal::Factory::NewForeign(this_00,param_1);
  }
  uVar15 = *puVar9;
  uVar11 = *puVar10;
  *(int *)(uVar15 + 3) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar15,uVar15 + 3,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar15,uVar15 + 3,uVar11);
    }
  }
  *(undefined4 *)(*puVar9 + 7) = 0;
  puVar10 = (ulong *)((ulong)this_00 | 0xa0);
  if (param_3 != (ulong *)0x0) {
    puVar10 = param_3;
  }
  *(undefined4 *)(*puVar9 + 0xb) = 0;
  uVar15 = *puVar9;
  uVar11 = *puVar10;
  *(int *)(uVar15 + 0xf) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar13 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar15,uVar15 + 0xf,uVar11);
      uVar13 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar15 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar15,uVar15 + 0xf,uVar11);
    }
  }
  if (*(int *)(*puVar7 + 0x23) == *(int *)(this_00 + 0xa0)) {
    uVar11 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(this_00,puVar7);
  }
  else {
    uVar11 = CONCAT44(uVar4,*(int *)(*puVar7 + 0x23));
  }
  uVar15 = *puVar9;
  *(int *)(uVar11 + 0x1f) = (int)uVar15;
  if ((uVar15 & 1) != 0) {
    uVar13 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar13 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 0x1f,uVar15);
      uVar13 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar13 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0x1f,uVar15);
    }
  }
  *(uint *)(*puVar7 + 0x2b) = *(uint *)(*puVar7 + 0x2b) & 0xfffffffe | 4;
  *puVar3 = uVar14;
  *piVar1 = *piVar1 + -1;
  if (*plVar2 != lVar12) {
    *plVar2 = lVar12;
    internal::HandleScope::DeleteExtensions((Isolate *)this_00);
  }
  *(undefined4 *)(this_00 + 0x2c60) = uVar5;
  return;
}

