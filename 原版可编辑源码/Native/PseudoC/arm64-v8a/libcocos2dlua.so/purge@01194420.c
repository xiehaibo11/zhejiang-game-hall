
/* dtPathQueue::purge() */

void __thiscall dtPathQueue::purge(dtPathQueue *this)

{
  dtFreeNavMeshQuery(*(dtNavMeshQuery **)(this + 0x250));
  *(undefined8 *)(this + 0x250) = 0;
  dtFree(*(void **)(this + 0x28));
  *(undefined8 *)(this + 0x28) = 0;
  dtFree(*(void **)(this + 0x70));
  *(undefined8 *)(this + 0x70) = 0;
  dtFree(*(void **)(this + 0xb8));
  *(undefined8 *)(this + 0xb8) = 0;
  dtFree(*(void **)(this + 0x100));
  *(undefined8 *)(this + 0x100) = 0;
  dtFree(*(void **)(this + 0x148));
  *(undefined8 *)(this + 0x148) = 0;
  dtFree(*(void **)(this + 400));
  *(undefined8 *)(this + 400) = 0;
  dtFree(*(void **)(this + 0x1d8));
  *(undefined8 *)(this + 0x1d8) = 0;
  dtFree(*(void **)(this + 0x220));
  *(undefined8 *)(this + 0x220) = 0;
  return;
}

