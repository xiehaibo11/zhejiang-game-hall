
/* v8::internal::SpaceWithLinearArea::PrintAllocationsOrigins() */

void __thiscall
v8::internal::SpaceWithLinearArea::PrintAllocationsOrigins(SpaceWithLinearArea *this)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x40);
  uVar1 = Heap::GetSpaceName(*(undefined4 *)(this + 0x48));
  PrintIsolate((void *)(lVar2 + -0x8850),
               "Allocations Origins for %s: GeneratedCode:%zu - Runtime:%zu - GC:%zu\n",uVar1,
               *(undefined8 *)(this + 0x80),*(undefined8 *)(this + 0x88),
               *(undefined8 *)(this + 0x90));
  return;
}

