
/* v8::internal::Scavenger::AddPageToSweeperIfNecessary(v8::internal::MemoryChunk*) */

void __thiscall
v8::internal::Scavenger::AddPageToSweeperIfNecessary(Scavenger *this,MemoryChunk *param_1)

{
  if (((((byte)param_1[10] >> 5 & 1) == 0) && (*(int *)(*(long *)(param_1 + 0x58) + 0x48) == 2)) &&
     (*(long *)(param_1 + 0xa8) != 0)) {
    Sweeper::AddPage(*(Sweeper **)(*(long *)(*(long *)(this + 8) + 0x800) + 0x26f8),2,param_1,1);
    return;
  }
  return;
}

