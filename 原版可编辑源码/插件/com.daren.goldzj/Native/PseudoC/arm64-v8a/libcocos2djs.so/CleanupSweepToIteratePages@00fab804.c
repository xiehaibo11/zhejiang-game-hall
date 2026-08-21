
/* v8::internal::MinorMarkCompactCollector::CleanupSweepToIteratePages() */

void __thiscall
v8::internal::MinorMarkCompactCollector::CleanupSweepToIteratePages(MinorMarkCompactCollector *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(this + 0x50);
  plVar1 = *(long **)(this + 0x58);
  if (plVar2 != plVar1) {
    do {
      lVar3 = *plVar2;
      if (((uint)*(ulong *)(lVar3 + 8) >> 0x11 & 1) != 0) {
        *(ulong *)(lVar3 + 8) = *(ulong *)(lVar3 + 8) & 0xfffffffffffdffff;
        memset(*(void **)(lVar3 + 0x108),0,0x2000);
        *(undefined8 *)(lVar3 + 0x100) = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
    plVar2 = *(long **)(this + 0x50);
  }
  *(long **)(this + 0x58) = plVar2;
  return;
}

