
/* v8::internal::Factory::NewJSMessageObject(v8::internal::MessageTemplate,
   v8::internal::Handle<v8::internal::Object>, int, int,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>, int,
   v8::internal::Handle<v8::internal::Script>, v8::internal::Handle<v8::internal::Object>) */

ulong * __thiscall
v8::internal::Factory::NewJSMessageObject
          (Factory *this,int param_2,ulong *param_3,int param_4,int param_5,ulong *param_6,
          int param_7,ulong *param_8,ulong *param_9)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  
  lVar7 = *(long *)(this + 0x8938);
  lVar2 = *(long *)(lVar7 + 0x68);
  uVar6 = (ulong)*(byte *)(*(long *)(this + 0xe80) + 3) * 4;
  if ((((ulong)(*(long *)(lVar7 + 0x70) - lVar2) < uVar6) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar4 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar6,0,1,0);
  }
  else {
    uVar4 = lVar2 + 1;
    *(ulong *)(lVar7 + 0x68) = lVar2 + uVar6;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar2,uVar6,1,1);
  }
  *(undefined4 *)(uVar4 - 1) = *(undefined4 *)(this + 0xe80);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(this + 0x95a0);
    if (puVar5 == *(ulong **)(this + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar4;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar4);
    uVar4 = *puVar5;
  }
  *(undefined4 *)(uVar4 + 3) = *(undefined4 *)(this + 0x168);
  uVar6 = *puVar5;
  uVar4 = uVar6 & 0xffffffff00000000;
  bVar3 = *(byte *)((uVar4 | *(uint *)(uVar6 - 1)) + 10);
  if (((bVar3 < 0x30) || (bVar1 = bVar3 & 0xf8, bVar1 == 0x78)) || ((byte)((bVar3 >> 3) - 6) < 6)) {
    puVar9 = (undefined4 *)(uVar4 + 0x168);
  }
  else if (bVar1 == 0x68) {
    puVar9 = (undefined4 *)(uVar4 + 0x3e0);
  }
  else if ((byte)((bVar3 >> 3) - 0x11) < 0xb) {
    puVar9 = (undefined4 *)(uVar4 + 0x3c0);
  }
  else {
    if (bVar1 != 0x60) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    puVar9 = (undefined4 *)(uVar4 + 1000);
  }
  *(undefined4 *)(uVar6 + 7) = *puVar9;
  *(undefined4 *)(*puVar5 + 7) = *(undefined4 *)(this + 0x168);
  *(int *)(*puVar5 + 0xb) = param_2 << 1;
  uVar4 = *puVar5;
  uVar6 = *param_3;
  *(int *)(uVar4 + 0xf) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xf,uVar6);
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xf,uVar6);
    }
  }
  *(int *)(*puVar5 + 0x23) = param_4 << 1;
  *(int *)(*puVar5 + 0x27) = param_5 << 1;
  uVar4 = *puVar5;
  uVar6 = *param_8;
  *(int *)(uVar4 + 0x13) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x13,uVar6);
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x13,uVar6);
      uVar6 = *puVar5;
      goto joined_r0x00f7c70c;
    }
  }
  uVar6 = *puVar5;
joined_r0x00f7c70c:
  if (param_4 < 0) {
    *(int *)(uVar6 + 0x1f) = param_7 << 1;
    uVar6 = *puVar5;
    if (param_6 == (ulong *)0x0) {
      uVar4 = *(ulong *)(this + 0xa0);
      *(int *)(uVar6 + 0x1b) = (int)uVar4;
    }
    else {
      uVar4 = *param_6;
      *(int *)(uVar6 + 0x1b) = (int)uVar4;
    }
    if ((uVar4 & 1) != 0) {
      uVar8 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x1b,uVar4);
        uVar8 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x1b,uVar4);
      }
    }
  }
  else {
    uVar4 = *(ulong *)(this + 0xa0);
    *(int *)(uVar6 + 0x1b) = (int)uVar4;
    if ((uVar4 & 1) != 0) {
      uVar8 = *(ulong *)((uVar4 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar8 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar6,uVar6 + 0x1b,uVar4);
        uVar8 = *(ulong *)(uVar4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar6 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 0x1b,uVar4);
      }
    }
    *(undefined4 *)(*puVar5 + 0x1f) = 0;
  }
  uVar4 = *puVar5;
  uVar6 = *param_9;
  *(int *)(uVar4 + 0x17) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar8 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x17,uVar6);
      uVar8 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x17,uVar6);
    }
  }
  *(undefined4 *)(*puVar5 + 0x2b) = 0x10;
  return puVar5;
}

