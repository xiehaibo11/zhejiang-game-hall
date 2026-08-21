
/* v8::internal::CompilationCache::MarkCompactPrologue() */

void __thiscall v8::internal::CompilationCache::MarkCompactPrologue(CompilationCache *this)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong local_28;
  
  lVar6 = 0;
  do {
    plVar3 = *(long **)(this + lVar6 * 8 + 0x68);
    iVar2 = (int)plVar3[1];
    if (iVar2 == 1) {
      local_28 = *(ulong *)plVar3[2];
      if (((local_28 & 1) == 0) || ((int)local_28 != *(int *)(*plVar3 + 0xa0))) {
        CompilationCacheTable::Age((CompilationCacheTable *)&local_28);
      }
    }
    else {
      if (0 < (int)(iVar2 - 1U)) {
        uVar4 = (ulong)(iVar2 - 1U);
        lVar5 = (long)iVar2 * 8 + -0x10;
        do {
          puVar1 = (undefined8 *)(plVar3[2] + lVar5);
          lVar5 = lVar5 + -8;
          *(undefined8 *)(plVar3[2] + uVar4 * 8) = *puVar1;
          uVar4 = uVar4 - 1;
        } while (0 < (int)uVar4);
      }
      *(undefined8 *)plVar3[2] = *(undefined8 *)(*plVar3 + 0xa0);
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 4);
  return;
}

