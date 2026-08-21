
/* v8::internal::FrameArrayBuilder::AppendPromiseAllFrame(v8::internal::Handle<v8::internal::Context>,
   int) */

void __thiscall
v8::internal::FrameArrayBuilder::AppendPromiseAllFrame
          (FrameArrayBuilder *this,ulong *param_2,undefined4 param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  if (*(int *)(**(long **)(this + 0x20) + 7) >> 1 < *(int *)(this + 0xc)) {
    pIVar1 = *(Isolate **)this;
    uVar6 = *param_2 & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(*param_2 - 1)) + 0x13);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar6;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar6);
      uVar6 = *puVar2;
    }
    pIVar1 = *(Isolate **)this;
    uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + 0x38b);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar6);
    }
    uVar6 = IsVisibleInStackTrace(this,puVar3);
    if ((uVar6 & 1) != 0) {
      pIVar1 = *(Isolate **)this;
      uVar6 = *puVar2 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar2 + 0x393);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar6;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar6);
      }
      pIVar1 = *(Isolate **)this;
      uVar6 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0x17);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar6);
      }
      uVar5 = FrameArray::AppendJSFrame
                        (*(undefined8 *)(this + 0x20),puVar2,puVar3,puVar4,param_3,0xc0,
                         *(long *)this + 0x168);
      *(undefined8 *)(this + 0x20) = uVar5;
    }
  }
  return;
}

