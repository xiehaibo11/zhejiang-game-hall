
/* v8::internal::SourcePositionTable::print() const */

void __thiscall v8::internal::SourcePositionTable::print(SourcePositionTable *this)

{
  uint *puVar1;
  uint *puVar2;
  
  base::OS::Print(" - source position table at %p\n",this);
  puVar2 = *(uint **)(this + 8);
  for (puVar1 = *(uint **)this; puVar1 != puVar2; puVar1 = puVar1 + 3) {
    base::OS::Print("    %d --> line_number: %d inlining_id: %d\n",(ulong)*puVar1,(ulong)puVar1[1],
                    (ulong)puVar1[2]);
  }
  return;
}

