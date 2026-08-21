
/* v8::Message::GetScriptOrigin() const */

void v8::Message::GetScriptOrigin(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulong *in_x0;
  CanonicalHandleScope *this;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)((long)in_x0 + 4);
  pIVar4 = (Isolate *)((ulong)uVar1 << 0x20);
  uVar2 = *(undefined4 *)(pIVar4 + 0x2c60);
  *(undefined4 *)(pIVar4 + 0x2c60) = 5;
  this = *(CanonicalHandleScope **)((ulong)uVar1 << 0x20 | 0x95b8);
  uVar5 = *in_x0 & 0xffffffff00000000 | (ulong)*(uint *)(*in_x0 + 0x13);
  if (this == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)internal::HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)internal::CanonicalHandleScope::Lookup(this,uVar5);
  }
  FUN_00ead49c(pIVar4,puVar3);
  *(undefined4 *)(pIVar4 + 0x2c60) = uVar2;
  return;
}

