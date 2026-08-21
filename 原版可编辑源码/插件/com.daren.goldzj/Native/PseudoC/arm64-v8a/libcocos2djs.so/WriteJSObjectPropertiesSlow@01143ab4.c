
/* v8::internal::ValueSerializer::WriteJSObjectPropertiesSlow(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::FixedArray>) */

ulong __thiscall
v8::internal::ValueSerializer::WriteJSObjectPropertiesSlow
          (ValueSerializer *this,undefined8 param_2,ulong *param_3)

{
  uint uVar1;
  ushort uVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  LookupIterator aLStack_c0 [4];
  int local_bc;
  undefined1 auStack_64 [4];
  
  uVar6 = *param_3;
  uVar1 = *(uint *)(uVar6 + 3);
  if ((int)uVar1 < 2) {
    uVar7 = 0;
  }
  else {
    iVar8 = 0;
    uVar7 = 0;
    uVar9 = 1;
    while( true ) {
      pIVar3 = *(Isolate **)this;
      uVar6 = uVar6 & 0xffffffff00000000 | (ulong)*(uint *)(uVar6 + (long)iVar8 + 7);
      if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar4 = *(ulong **)(pIVar3 + 0x95a0);
        if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
          puVar4 = (ulong *)HandleScope::Extend(pIVar3);
        }
        *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
        *puVar4 = uVar6;
      }
      else {
        puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar6);
      }
      LookupIterator::PropertyOrElement(aLStack_c0,*(undefined8 *)this,param_2,puVar4,auStack_64,1);
      lVar5 = Object::GetProperty(aLStack_c0,false);
      if (lVar5 == 0) {
        return 0;
      }
      if (local_bc != 4) {
        uVar2 = WriteObject(this,puVar4);
        if (uVar2 < 0x100) {
          return 0;
        }
        if ((uVar2 & 0xff) == 0) {
          return 0;
        }
        uVar2 = WriteObject(this,lVar5);
        if (uVar2 < 0x100) {
          return 0;
        }
        if ((uVar2 & 0xff) == 0) {
          return 0;
        }
        uVar7 = uVar7 + 1;
      }
      if (uVar1 >> 1 <= uVar9) break;
      uVar6 = *param_3;
      iVar8 = iVar8 + 4;
      uVar9 = uVar9 + 1;
    }
  }
  return (ulong)uVar7 << 0x20 | 1;
}

