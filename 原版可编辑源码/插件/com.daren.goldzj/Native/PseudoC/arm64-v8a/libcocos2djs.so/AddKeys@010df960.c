
/* v8::internal::KeyAccumulator::AddKeys(v8::internal::Handle<v8::internal::FixedArray>,
   v8::internal::AddKeyConversion) */

undefined8 __thiscall
v8::internal::KeyAccumulator::AddKeys(KeyAccumulator *this,ulong *param_2,undefined4 param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  uVar4 = *param_2;
  uVar1 = *(uint *)(uVar4 + 3);
  if (1 < (int)uVar1) {
    iVar5 = 0;
    uVar6 = 1;
    while( true ) {
      pIVar2 = *(Isolate **)this;
      uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)iVar5 + 7);
      if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar3 = *(ulong **)(pIVar2 + 0x95a0);
        if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
          puVar3 = (ulong *)HandleScope::Extend(pIVar2);
        }
        *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
        *puVar3 = uVar4;
      }
      else {
        puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
      }
      uVar4 = AddKey(this,puVar3,param_3);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (uVar1 >> 1 <= uVar6) break;
      uVar4 = *param_2;
      iVar5 = iVar5 + 4;
      uVar6 = uVar6 + 1;
    }
  }
  return 1;
}

