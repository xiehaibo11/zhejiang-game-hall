
/* v8::internal::compiler::LoadElimination::AbstractElements::Print() const */

void __thiscall
v8::internal::compiler::LoadElimination::AbstractElements::Print(AbstractElements *this)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0;
  plVar1 = *(long **)this;
  while( true ) {
    if (plVar1 != (long *)0x0) {
      PrintF("    #%d:%s @ #%d:%s -> #%d:%s\n",(ulong)(*(uint *)((long)plVar1 + 0x14) & 0xffffff),
             *(undefined8 *)(*plVar1 + 8),
             (ulong)(*(uint *)((long)*(long **)(this + lVar2 + 8) + 0x14) & 0xffffff),
             *(undefined8 *)(**(long **)(this + lVar2 + 8) + 8),
             (ulong)(*(uint *)((long)*(long **)(this + lVar2 + 0x10) + 0x14) & 0xffffff),
             *(undefined8 *)(**(long **)(this + lVar2 + 0x10) + 8));
    }
    lVar2 = lVar2 + 0x20;
    if (lVar2 == 0x100) break;
    plVar1 = *(long **)(this + lVar2);
  }
  return;
}

