
/* v8::internal::compiler::GraphAssembler::BasicBlockUpdater::SetBlockDeferredFromPredecessors() */

void __thiscall
v8::internal::compiler::GraphAssembler::BasicBlockUpdater::SetBlockDeferredFromPredecessors
          (BasicBlockUpdater *this)

{
  long lVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  if (*(char *)(lVar1 + 8) != '\0') {
    return;
  }
  if (*(long **)(lVar1 + 0x80) == *(long **)(lVar1 + 0x88)) {
    *(undefined1 *)(lVar1 + 8) = 1;
    return;
  }
  bVar2 = 1;
  plVar3 = *(long **)(lVar1 + 0x80);
  do {
    lVar4 = *plVar3;
    bVar2 = bVar2 & *(char *)(lVar4 + 8) != '\0';
    if (*(long **)(lVar1 + 0x88) + -1 == plVar3) break;
    plVar3 = plVar3 + 1;
  } while (*(char *)(lVar4 + 8) != '\0');
  *(byte *)(lVar1 + 8) = bVar2;
  return;
}

