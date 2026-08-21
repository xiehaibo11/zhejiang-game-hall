
/* v8::internal::KeyAccumulator::IsShadowed(v8::internal::Handle<v8::internal::Object>) */

undefined8 __thiscall
v8::internal::KeyAccumulator::IsShadowed(KeyAccumulator *this,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  undefined8 local_38;
  
  if ((*(ulong **)(this + 0x18) != (ulong *)0x0) && (this[0x2a] == (KeyAccumulator)0x0)) {
    uVar6 = *param_2;
    uVar8 = **(ulong **)(this + 0x18);
    lVar7 = *(long *)this;
    uVar3 = Object::GetSimpleHash(uVar6);
    if ((uVar3 & 1) != 0) {
      local_38 = uVar6;
      uVar3 = JSReceiver::GetIdentityHash((JSReceiver *)&local_38);
    }
    if ((uVar3 & 1) == 0) {
      uVar1 = *(uint *)(lVar7 + 0xa0);
      uVar2 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
      uVar3 = uVar2 & (int)uVar3 >> 1;
      uVar5 = *(uint *)(uVar8 + 7 + (long)(int)(uVar3 * 4 + 0xc));
      if (uVar5 != uVar1) {
        iVar9 = 1;
        do {
          local_38 = *param_2;
          uVar4 = Object::SameValue((Object *)&local_38,uVar8 & 0xffffffff00000000 | (ulong)uVar5);
          if ((uVar4 & 1) != 0) {
            return 1;
          }
          uVar3 = uVar3 + iVar9 & uVar2;
          uVar5 = *(uint *)(uVar8 + 7 + (long)(int)(uVar3 * 4 + 0xc));
          iVar9 = iVar9 + 1;
        } while (uVar5 != uVar1);
        return 0;
      }
    }
  }
  return 0;
}

