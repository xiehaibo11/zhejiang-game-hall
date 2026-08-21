
/* v8::internal::Factory::SizeToString(unsigned long, bool) */

Factory * __thiscall v8::internal::Factory::SizeToString(Factory *this,ulong param_1,bool param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  Factory *pFVar4;
  ulong uVar5;
  ulong *puVar6;
  size_t sVar7;
  undefined8 uVar8;
  byte *__s;
  int iVar9;
  uint uVar10;
  internal *piVar11;
  undefined1 auStack_78 [30];
  byte local_5a [2];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 >> 0x1e == 0) {
    pFVar4 = (Factory *)SmiToString(this,param_1 << 1,param_2);
    goto LAB_00f7d1e4;
  }
  if (param_1 >> 0x35 == 0) {
    uVar3 = *(undefined4 *)(this + 0x140);
    piVar11 = (internal *)(double)param_1;
    uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),0xc,0,1,2);
    *(undefined4 *)(uVar5 - 1) = uVar3;
    if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(this + 0x95a0);
      if (puVar6 == *(ulong **)(this + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
      }
      *(ulong **)(this + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    }
    *(internal **)(*puVar6 + 3) = piVar11;
    if (param_2) {
      uVar10 = (*(int *)(*(long *)(this + 0xf38) + 3) >> 2) - 1U &
               ((uint)((ulong)piVar11 >> 0x20) ^ (uint)piVar11);
      pFVar4 = (Factory *)NumberToStringCacheGet(this,*puVar6,uVar10);
      if (((*(ulong *)pFVar4 & 1) == 0) || ((int)*(ulong *)pFVar4 != *(int *)(this + 0xa0)))
      goto LAB_00f7d1b4;
    }
    else {
      uVar10 = 0;
    }
    uVar8 = DoubleToCString(piVar11,auStack_78,0x20);
    pFVar4 = (Factory *)NumberToStringCacheSet(this,puVar6,uVar10,uVar8,param_2);
  }
  else {
    __s = local_5a + 1;
    local_5a[1] = 0;
    uVar5 = param_1;
    do {
      __s = __s + -1;
      *__s = (char)uVar5 + (char)(uVar5 / 10) * -10 | 0x30;
      bVar1 = 9 < uVar5;
      uVar5 = uVar5 / 10;
    } while (bVar1);
    sVar7 = strlen((char *)__s);
    iVar9 = (int)sVar7;
    if (iVar9 == 1) {
      pFVar4 = (Factory *)LookupSingleCharacterStringFromCode(this,(ushort)*__s);
      if (pFVar4 == (Factory *)0x0) {
LAB_00f7d21c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
    }
    else if (iVar9 == 0) {
      pFVar4 = this + 200;
    }
    else {
      pFVar4 = (Factory *)NewRawOneByteString(this,sVar7 & 0xffffffff,0);
      if (pFVar4 == (Factory *)0x0) goto LAB_00f7d21c;
      CopyChars<unsigned_char,unsigned_char>((uchar *)(*(long *)pFVar4 + 0xb),__s,(long)iVar9);
    }
  }
LAB_00f7d1b4:
  if ((param_1 < 0xffffffff) && (*(int *)(*(long *)pFVar4 + 3) == 7)) {
    uVar3 = StringHasher::MakeArrayIndexHash((uint)param_1,*(int *)(*(long *)pFVar4 + 7));
    *(undefined4 *)(*(long *)pFVar4 + 3) = uVar3;
  }
LAB_00f7d1e4:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pFVar4;
}

