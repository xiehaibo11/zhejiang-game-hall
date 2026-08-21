
/* v8::internal::KeyAccumulator::AddKeysFromJSProxy(v8::internal::Handle<v8::internal::JSProxy>,
   v8::internal::Handle<v8::internal::FixedArray>) */

undefined8 __thiscall
v8::internal::KeyAccumulator::AddKeysFromJSProxy
          (KeyAccumulator *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  Isolate *pIVar2;
  ulong *puVar3;
  ulong uVar4;
  KeyAccumulator KVar5;
  int iVar6;
  ulong uVar7;
  
  if (this[0x28] == (KeyAccumulator)0x0) {
    param_3 = (ulong *)FilterProxyKeys(this,param_2,param_3,*(undefined4 *)(this + 0x24));
    if (param_3 == (ulong *)0x0) {
      return 0;
    }
    if (*(int *)(this + 0x20) == 0) {
      *(ulong **)(this + 8) = param_3;
      return 0x101;
    }
    KVar5 = this[0x28];
  }
  else {
    KVar5 = (KeyAccumulator)0x1;
  }
  uVar4 = *param_3;
  uVar1 = *(uint *)(uVar4 + 3);
  if ((int)uVar1 < 2) {
    return 0x101;
  }
  iVar6 = 0;
  uVar7 = 1;
  while( true ) {
    pIVar2 = *(Isolate **)this;
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)iVar6 + 7);
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
    uVar4 = AddKey(this,puVar3,KVar5);
    if ((uVar4 & 1) == 0) break;
    if (uVar1 >> 1 <= uVar7) {
      return 0x101;
    }
    uVar4 = *param_3;
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + 4;
  }
  return 0;
}

