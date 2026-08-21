
/* v8::internal::compiler::SerializerForBackgroundCompilation::bytecode_array() const */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::bytecode_array
          (SerializerForBackgroundCompilation *this)

{
  ulong *puVar1;
  ulong uVar2;
  Isolate *pIVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = *(ulong *)**(undefined8 **)(this + 0x28);
  uVar4 = uVar2 & 0xffffffff00000000;
  uVar7 = uVar4 | *(uint *)(uVar2 + 0xf);
  uVar6 = uVar4 | 7;
  if ((*(short *)(uVar6 + *(uint *)(uVar7 - 1)) == 0x5b) &&
     (*(short *)(uVar6 + *(uint *)((uVar4 | *(uint *)(uVar7 + 0x13)) - 1)) == 0x86)) {
    uVar5 = *(uint *)(uVar7 + 0xf);
  }
  else {
    uVar5 = *(uint *)(uVar2 + 3);
    if (((uVar5 & 1) == 0) || (*(short *)(uVar6 + *(uint *)((uVar4 | uVar5) - 1)) != 0x86)) {
      uVar5 = *(uint *)((uVar4 | *(uint *)(uVar2 + 3)) + 3);
    }
    else {
      uVar5 = *(uint *)(uVar2 + 3);
    }
  }
  pIVar3 = (Isolate *)**(undefined8 **)this;
  if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(pIVar3 + 0x95a0);
    if (puVar1 == *(ulong **)(pIVar3 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(pIVar3);
    }
    *(ulong **)(pIVar3 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4 | uVar5;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar4 | uVar5);
  }
  return;
}

