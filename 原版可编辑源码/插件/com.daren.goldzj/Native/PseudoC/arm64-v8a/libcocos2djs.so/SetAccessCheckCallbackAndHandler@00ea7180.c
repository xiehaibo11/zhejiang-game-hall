
/* v8::ObjectTemplate::SetAccessCheckCallbackAndHandler(bool (*)(v8::Local<v8::Context>,
   v8::Local<v8::Object>, v8::Local<v8::Value>), v8::NamedPropertyHandlerConfiguration const&,
   v8::IndexedPropertyHandlerConfiguration const&, v8::Local<v8::Value>) */

void __thiscall
v8::ObjectTemplate::SetAccessCheckCallbackAndHandler
          (ObjectTemplate *this,ulong param_1,undefined8 *param_2,undefined8 *param_3,ulong *param_5
          )

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  Factory *this_00;
  ulong uVar14;
  long lVar15;
  
  uVar4 = *(uint *)(this + 4);
  uVar11 = (ulong)uVar4;
  this_00 = (Factory *)(uVar11 << 0x20);
  puVar1 = (undefined8 *)(uVar11 << 0x20 | 0x95a0);
  uVar5 = *(undefined4 *)(this_00 + 0x2c60);
  *(undefined4 *)(this_00 + 0x2c60) = 5;
  uVar13 = *puVar1;
  piVar2 = (int *)(uVar11 << 0x20 | 0x95b0);
  plVar3 = (long *)(uVar11 << 0x20 | 0x95a8);
  lVar15 = *plVar3;
  *piVar2 = *piVar2 + 1;
  puVar7 = (ulong *)FUN_00ea6c84(this_00,this);
  uVar6 = *(uint *)(*puVar7 + 0x27);
  if (((uVar6 & 1) != 0) &&
     (uVar11 = *puVar7 & 0xffffffff00000000,
     *(short *)((uVar11 | 7) + (ulong)*(uint *)((uVar11 | uVar6) - 1)) == 0xa6)) {
    lVar8 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar8 != 0) {
      if (*(code **)(lVar8 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar8 + 0xb738))
                  ("v8::ObjectTemplate::SetAccessCheckCallbackWithHandler",
                   "FunctionTemplate already instantiated");
        *(undefined1 *)(lVar8 + 0xb6b9) = 1;
        goto LAB_00ea7268;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n",
               "v8::ObjectTemplate::SetAccessCheckCallbackWithHandler",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea7268:
  puVar9 = (ulong *)internal::Factory::NewStruct(this_00,0x50,1);
  if (param_1 == 0) {
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar10 = *(ulong **)(this_00 + 0x95a0);
      if (puVar10 == (ulong *)*plVar3) {
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
  uVar14 = *puVar9;
  uVar11 = *puVar10;
  *(int *)(uVar14 + 3) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 3,uVar11);
      uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 3,uVar11);
    }
  }
  puVar10 = (ulong *)FUN_00ea75dc(this_00,*param_2,param_2[1],param_2[2],param_2[6],param_2[3],
                                  param_2[4],param_2[5],param_2[7],*(undefined4 *)(param_2 + 8));
  uVar14 = *puVar9;
  uVar11 = *puVar10;
  *(int *)(uVar14 + 7) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar11);
      uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar11);
    }
  }
  puVar10 = (ulong *)FUN_00ea7ab8(this_00,*param_3,param_3[1],param_3[2],param_3[6],param_3[3],
                                  param_3[4],param_3[5],param_3[7],*(undefined4 *)(param_3 + 8));
  uVar14 = *puVar9;
  uVar11 = *puVar10;
  *(int *)(uVar14 + 0xb) = (int)uVar11;
  if ((uVar11 & 1) != 0) {
    uVar12 = *(ulong *)((uVar11 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 0xb,uVar11);
      uVar12 = *(ulong *)(uVar11 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 0xb,uVar11);
    }
  }
  uVar11 = *puVar9;
  puVar10 = (ulong *)((ulong)this_00 | 0xa0);
  if (param_5 != (ulong *)0x0) {
    puVar10 = param_5;
  }
  uVar14 = *puVar10;
  *(int *)(uVar11 + 0xf) = (int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar12 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xf,uVar14);
      uVar12 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xf,uVar14);
    }
  }
  if (*(int *)(*puVar7 + 0x23) == *(int *)(this_00 + 0xa0)) {
    uVar11 = internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(this_00,puVar7);
  }
  else {
    uVar11 = CONCAT44(uVar4,*(int *)(*puVar7 + 0x23));
  }
  uVar14 = *puVar9;
  *(int *)(uVar11 + 0x1f) = (int)uVar14;
  if ((uVar14 & 1) != 0) {
    uVar12 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar12 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar11,uVar11 + 0x1f,uVar14);
      uVar12 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0x1f,uVar14);
    }
  }
  *(uint *)(*puVar7 + 0x2b) = *(uint *)(*puVar7 + 0x2b) & 0xfffffffe | 4;
  *puVar1 = uVar13;
  *piVar2 = *piVar2 + -1;
  if (*plVar3 != lVar15) {
    *plVar3 = lVar15;
    internal::HandleScope::DeleteExtensions((Isolate *)this_00);
  }
  *(undefined4 *)(this_00 + 0x2c60) = uVar5;
  return;
}

