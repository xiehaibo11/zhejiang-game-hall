
/* v8::internal::Debug::PrepareStepInSuspendedGenerator() */

void __thiscall v8::internal::Debug::PrepareStepInSuspendedGenerator(Debug *this)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(this + 0x70);
  if ((int)uVar3 != 0) {
    if ((((this[10] == (Debug)0x0) && (this[8] != (Debug)0x0)) &&
        (pIVar1 = *(Isolate **)(this + 0x88), *(int *)(pIVar1 + 0xb80c) != 0x20)) &&
       ((*(long *)(this + 0x40) == 0 && (this[0xc] == (Debug)0x0)))) {
      this[0x4c] = (Debug)0x2;
      this[9] = (Debug)0x1;
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar3;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
        uVar3 = *puVar2;
      }
      pIVar1 = *(Isolate **)(this + 0x88);
      uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar3;
      }
      else {
        puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
      }
      FloodWithOneShot(this,puVar2,0);
      *(undefined8 *)(this + 0x70) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","has_suspended_generator()");
}

