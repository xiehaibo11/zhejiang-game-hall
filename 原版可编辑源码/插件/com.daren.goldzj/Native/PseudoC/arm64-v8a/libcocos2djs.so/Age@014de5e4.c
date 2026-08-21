
/* v8::internal::CompilationSubCache::Age() */

void __thiscall v8::internal::CompilationSubCache::Age(CompilationSubCache *this)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong local_18;
  
  iVar2 = *(int *)(this + 8);
  if (iVar2 == 1) {
    local_18 = **(ulong **)(this + 0x10);
    if (((local_18 & 1) == 0) || ((int)local_18 != *(int *)(*(long *)this + 0xa0))) {
      CompilationCacheTable::Age((CompilationCacheTable *)&local_18);
    }
  }
  else {
    if (0 < (int)(iVar2 - 1U)) {
      uVar3 = (ulong)(iVar2 - 1U);
      lVar4 = (long)iVar2 * 8 + -0x10;
      do {
        puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar4);
        lVar4 = lVar4 + -8;
        *(undefined8 *)(*(long *)(this + 0x10) + uVar3 * 8) = *puVar1;
        uVar3 = uVar3 - 1;
      } while (0 < (int)uVar3);
    }
    **(undefined8 **)(this + 0x10) = *(undefined8 *)(*(long *)this + 0xa0);
  }
  return;
}

