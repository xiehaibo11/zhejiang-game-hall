
/* v8::Object::SlowGetInternalField(int) */

ulong * __thiscall v8::Object::SlowGetInternalField(Object *this,int param_1)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong *puVar6;
  ulong uVar7;
  
  uVar4 = FUN_00ebf580(this,param_1,"v8::Object::GetInternalField()");
  if ((uVar4 & 1) == 0) {
    puVar6 = (ulong *)0x0;
  }
  else {
    uVar7 = *(ulong *)this;
    pIVar5 = (Isolate *)(uVar7 & 0xffffffff00000000);
    uVar4 = (ulong)pIVar5 | (ulong)*(uint *)(uVar7 - 1);
    sVar2 = *(short *)(uVar4 + 7);
    if (sVar2 == 0x421) {
      iVar3 = 0xc;
    }
    else {
      iVar3 = internal::JSObject::GetHeaderSize(sVar2,*(char *)(uVar4 + 9) < '\0');
      pIVar5 = (Isolate *)((ulong)*(uint *)(this + 4) << 0x20);
    }
    puVar1 = (uint *)((uVar7 - 1) + (long)(iVar3 + param_1 * 8));
    uVar4 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1;
    if (*(CanonicalHandleScope **)(pIVar5 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar5 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar5 + 0x95a8)) {
        puVar6 = (ulong *)internal::HandleScope::Extend(pIVar5);
      }
      *(ulong **)(pIVar5 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar4;
    }
    else {
      puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar5 + 0x95b8),uVar4);
    }
  }
  return puVar6;
}

