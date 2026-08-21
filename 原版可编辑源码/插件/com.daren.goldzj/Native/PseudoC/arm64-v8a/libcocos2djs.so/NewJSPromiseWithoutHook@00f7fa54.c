
/* v8::internal::Factory::NewJSPromiseWithoutHook() */

ulong * __thiscall v8::internal::Factory::NewJSPromiseWithoutHook(Factory *this)

{
  undefined4 *puVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  
  uVar7 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)) +
                                              0x13)) + 0x393);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar7;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  puVar6 = (ulong *)NewJSObject(this,puVar6,0);
  *(undefined4 *)(*puVar6 + 0xb) = 0;
  *(undefined4 *)(*puVar6 + 0xf) = 0;
  uVar7 = *puVar6 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar6 - 1);
  bVar2 = *(byte *)(uVar7 + 3);
  if (bVar2 != 0) {
    if (*(short *)(uVar7 + 7) == 0x421) {
      iVar4 = 0xc;
    }
    else {
      iVar4 = JSObject::GetHeaderSize(*(short *)(uVar7 + 7),*(char *)(uVar7 + 9) < '\0');
    }
    iVar4 = (((int)((uint)bVar2 * 4 - iVar4) >> 2) - (uint)*(byte *)(uVar7 + 3)) +
            (uint)*(byte *)(uVar7 + 4);
    iVar9 = iVar4;
    if (iVar4 < 0) {
      iVar9 = iVar4 + 1;
    }
    if (1 < iVar4) {
      iVar4 = 0;
      iVar9 = iVar9 >> 1;
      do {
        uVar8 = *puVar6;
        uVar7 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1);
        sVar3 = *(short *)(uVar7 + 7);
        if (sVar3 == 0x421) {
          iVar5 = 0xc;
        }
        else {
          iVar5 = JSObject::GetHeaderSize(sVar3,*(char *)(uVar7 + 9) < '\0');
        }
        iVar9 = iVar9 + -1;
        puVar1 = (undefined4 *)((uVar8 - 1) + (long)(iVar5 + iVar4));
        iVar4 = iVar4 + 8;
        *puVar1 = 0;
        puVar1[1] = 0;
      } while (iVar9 != 0);
    }
  }
  return puVar6;
}

