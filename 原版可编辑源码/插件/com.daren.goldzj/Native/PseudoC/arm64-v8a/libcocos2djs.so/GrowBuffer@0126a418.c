
/* v8::internal::Assembler::GrowBuffer() */

void __thiscall v8::internal::Assembler::GrowBuffer(Assembler *this)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  int iVar5;
  void *__dest;
  long *plVar6;
  void *__src;
  long lVar7;
  int *piVar8;
  int *piVar9;
  void *pvVar10;
  long lVar11;
  long *local_28;
  
  iVar5 = (**(code **)(**(long **)(this + 8) + 0x18))();
  iVar2 = iVar5 + 0x100000;
  if (iVar5 * 2 <= iVar5 + 0x100000) {
    iVar2 = iVar5 * 2;
  }
  if (0x20000000 < iVar2) {
                    /* WARNING: Subroutine does not return */
    V8::FatalProcessOutOfMemory((Isolate *)0x0,"Assembler::GrowBuffer",false);
  }
  (**(code **)(**(long **)(this + 8) + 0x20))(&local_28,*(long **)(this + 8),iVar2);
  __dest = (void *)(**(code **)(*local_28 + 0x10))();
  __src = *(void **)(this + 0x10);
  lVar7 = *(long *)(this + 0xd8);
  lVar11 = (long)__dest + ((long)iVar2 - ((long)__src + (long)iVar5));
  memmove(__dest,__src,(long)(*(int *)(this + 0x20) - (int)__src));
  memmove((void *)((long)*(void **)(this + 0xd8) + lVar11),*(void **)(this + 0xd8),
          ((long)__src + (long)iVar5) - lVar7);
  plVar4 = local_28;
  local_28 = (long *)0x0;
  plVar6 = *(long **)(this + 8);
  *(long **)(this + 8) = plVar4;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 8))();
  }
  plVar4 = local_28;
  lVar7 = *(long *)(this + 0xf0);
  *(void **)(this + 0x10) = __dest;
  *(long *)(this + 0x20) = (long)__dest + (*(long *)(this + 0x20) - (long)__src);
  *(long *)(this + 0xd8) = *(long *)(this + 0xd8) + lVar11;
  *(long *)(this + 0xe0) = (long)__dest + (*(long *)(this + 0xe0) - (long)__src);
  if (*(long *)(this + 0xf8) != lVar7) {
    uVar3 = *(ulong *)(this + 0x108);
    plVar6 = (long *)(lVar7 + (uVar3 >> 7 & 0x1fffffffffffff8));
    piVar8 = (int *)(*plVar6 + (uVar3 & 0x3ff) * 4);
    piVar1 = (int *)(*(long *)(lVar7 + (*(long *)(this + 0x110) + uVar3 >> 7 & 0x1fffffffffffff8)) +
                    (*(long *)(this + 0x110) + uVar3 & 0x3ff) * 4);
    pvVar10 = __dest;
    if (piVar1 != piVar8) {
      while( true ) {
        piVar9 = piVar8 + 1;
        *(long *)((long)pvVar10 + (long)*piVar8) =
             (long)__dest + (*(long *)((long)pvVar10 + (long)*piVar8) - (long)__src);
        if ((long)piVar9 - *plVar6 == 0x1000) {
          plVar6 = plVar6 + 1;
          piVar9 = (int *)*plVar6;
        }
        if (piVar1 == piVar9) break;
        pvVar10 = *(void **)(this + 0x10);
        piVar8 = piVar9;
      }
    }
  }
  local_28 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  return;
}

