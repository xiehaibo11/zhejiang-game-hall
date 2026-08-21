
/* v8::External::Value() const */

undefined8 __thiscall v8::External::Value(External *this)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar5 = *(ulong *)this;
  if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)((uVar5 & 0xffffffff00000000) + 0xa0))) {
    uVar7 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 - 1);
    sVar2 = *(short *)(uVar7 + 7);
    if (sVar2 == 0x421) {
      lVar6 = 0xc;
    }
    else {
      iVar3 = internal::JSObject::GetHeaderSize(sVar2,*(char *)(uVar7 + 9) < '\0');
      lVar6 = (long)iVar3;
    }
    puVar1 = (uint *)(lVar6 + (uVar5 - 1));
    uVar4 = *(undefined8 *)(((ulong)puVar1 & 0xffffffff00000000 | (ulong)*puVar1) + 3);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

