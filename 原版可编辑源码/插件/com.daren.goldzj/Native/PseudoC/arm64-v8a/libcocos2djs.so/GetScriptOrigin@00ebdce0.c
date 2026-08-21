
/* v8::Function::GetScriptOrigin() const */

void v8::Function::GetScriptOrigin(void)

{
  ulong *in_x0;
  Isolate *pIVar1;
  ulong *puVar2;
  undefined8 *in_x8;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *in_x0;
  pIVar1 = (Isolate *)(uVar5 & 0xffffffff00000000);
  uVar4 = (ulong)pIVar1 | 7;
  if (*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x439) {
    uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(uVar5 + 0xb)) + 0xf);
    if (*(short *)(uVar4 + *(uint *)(uVar3 - 1)) == 0x5b) {
      uVar3 = (ulong)pIVar1 | (ulong)*(uint *)(uVar3 + 0xb);
    }
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x65) {
      uVar5 = (ulong)pIVar1 |
              (ulong)*(uint *)(((ulong)pIVar1 | (ulong)*(uint *)(uVar5 + 0xb)) + 0xf);
      if (*(short *)(uVar4 + *(uint *)(uVar5 - 1)) == 0x5b) {
        uVar5 = (ulong)pIVar1 | (ulong)*(uint *)(uVar5 + 0xb);
      }
      if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar2 = *(ulong **)(pIVar1 + 0x95a0);
        if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
          puVar2 = (ulong *)internal::HandleScope::Extend(pIVar1);
        }
        *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
        *puVar2 = uVar5;
      }
      else {
        puVar2 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar5);
      }
      FUN_00ead49c((ulong)*(uint *)((long)in_x0 + 4) << 0x20,puVar2);
      return;
    }
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  *(undefined4 *)(in_x8 + 3) = 0;
  in_x8[2] = 0;
  in_x8[5] = 0;
  in_x8[6] = 0;
  in_x8[4] = 0;
  return;
}

