
/* v8::internal::JSFinalizationGroup::JSFinalizationGroupVerify(v8::internal::Isolate*) */

void __thiscall
v8::internal::JSFinalizationGroup::JSFinalizationGroupVerify
          (JSFinalizationGroup *this,Isolate *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(short *)((*(ulong *)this & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*(ulong *)this - 1))
      != 0x42a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSFinalizationGroup()");
  }
  JSObject::JSObjectVerify((JSObject *)this,param_1);
  uVar1 = *(uint *)(*(ulong *)this + 0xf);
  if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","p.IsHeapObject()");
  }
  uVar6 = *(ulong *)this & 0xffffffff00000000 | (ulong)uVar1;
  uVar3 = ReadOnlyHeap::Contains(uVar6);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = Heap::Contains((Heap *)(param_1 + 0x8850),uVar6), (uVar3 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
  }
  uVar6 = *(ulong *)this;
  uVar1 = *(uint *)(param_1 + 0xa0);
  uVar3 = uVar6 & 0xffffffff00000000;
  uVar5 = uVar3 | *(uint *)(uVar6 + 0x13);
  if ((*(uint *)(uVar6 + 0x13) != uVar1) &&
     (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar5 - 1)) != 0xa8)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "active_cells().IsUndefined(isolate) || active_cells().IsWeakCell()");
  }
  uVar4 = uVar3 | 7;
  if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0xa8) && (*(uint *)(uVar5 + 0xf) != uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","WeakCell::cast(active_cells()).prev().IsUndefined(isolate)");
  }
  uVar5 = uVar3 | *(uint *)(uVar6 + 0x17);
  if ((*(uint *)(uVar6 + 0x17) != uVar1) && (*(short *)(uVar4 + *(uint *)(uVar5 - 1)) != 0xa8)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "cleared_cells().IsUndefined(isolate) || cleared_cells().IsWeakCell()");
  }
  if ((*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0xa8) && (*(uint *)(uVar5 + 0xf) != uVar1)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","WeakCell::cast(cleared_cells()).prev().IsUndefined(isolate)");
  }
  uVar2 = *(uint *)(uVar6 + 0x1f);
  if (((uVar2 & 1) != 0) &&
     ((uVar2 == uVar1 || (*(short *)(uVar4 + *(uint *)((uVar3 | uVar2) - 1)) == 0x42a)))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","next().IsUndefined(isolate) || next().IsJSFinalizationGroup()");
}

