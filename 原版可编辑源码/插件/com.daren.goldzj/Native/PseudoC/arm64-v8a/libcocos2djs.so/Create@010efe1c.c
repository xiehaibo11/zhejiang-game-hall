
/* v8::internal::Map::Create(v8::internal::Isolate*, int) */

long * v8::internal::Map::Create(Isolate *param_1,int param_2)

{
  Isolate *pIVar1;
  uint uVar2;
  ulong *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x2bc8) & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)(param_1 + 0x2bc8) - 1))
                                              + 0x13)) + 499);
  pIVar1 = param_1 + 0x95a0;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    uVar5 = *puVar3;
  }
  uVar5 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 0x1b);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)pIVar1;
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar3 + 1;
    *puVar3 = uVar5;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  plVar4 = (long *)Copy(param_1,puVar3,"MapCreate");
  if (0xfb < param_2) {
    param_2 = 0xfc;
  }
  uVar2 = param_2 * 4 + 0xc;
  if (0xff < (uint)((int)uVar2 >> 2)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) < 256");
  }
  *(char *)(*plVar4 + 3) = (char)(uVar2 >> 2);
  if (*(ushort *)(*plVar4 + 7) < 0xaa) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsJSObjectMap()");
  }
  *(undefined1 *)(*plVar4 + 4) = 3;
  lVar6 = *plVar4;
  if (*(ushort *)(lVar6 + 7) < 0xaa) {
    if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 == value");
    }
    *(undefined1 *)(lVar6 + 5) = 0;
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","0 <= value");
    }
    uVar2 = (((uint)*(byte *)(lVar6 + 3) - param_2) - (uint)*(byte *)(lVar6 + 4)) +
            (uint)*(byte *)(lVar6 + 4);
    if (0xff < uVar2) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","static_cast<unsigned>(value) <= 255");
    }
    *(char *)(lVar6 + 5) = (char)uVar2;
  }
  lVar6 = *plVar4;
  uVar2 = GetVisitorId(lVar6);
  if (uVar2 < 0x100) {
    *(char *)(lVar6 + 6) = (char)uVar2;
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","static_cast<unsigned>(id) < 256");
}

