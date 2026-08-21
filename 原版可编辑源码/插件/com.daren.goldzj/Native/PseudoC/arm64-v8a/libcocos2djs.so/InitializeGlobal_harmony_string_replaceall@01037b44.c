
/* v8::internal::Genesis::InitializeGlobal_harmony_string_replaceall() */

void __thiscall v8::internal::Genesis::InitializeGlobal_harmony_string_replaceall(Genesis *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (FLAG_harmony_string_replaceall != '\0') {
    pIVar1 = *(Isolate **)this;
    uVar4 = **(ulong **)(this + 0x10) & 0xffffffff00000000 |
            (ulong)*(uint *)(**(ulong **)(this + 0x10) + 0x30b);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
      uVar4 = *puVar2;
    }
    uVar3 = uVar4 & 0xffffffff00000000;
    uVar4 = uVar3 | *(uint *)(uVar4 + 0x1b);
    if (*(short *)((uVar3 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0xa2) {
      uVar4 = uVar3 | *(uint *)(uVar4 + 0xf);
    }
    pIVar1 = *(Isolate **)this;
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar4);
    }
    FUN_01029064(*(undefined8 *)this,puVar2,"replaceAll",0x371,2,1,2);
    return;
  }
  return;
}

