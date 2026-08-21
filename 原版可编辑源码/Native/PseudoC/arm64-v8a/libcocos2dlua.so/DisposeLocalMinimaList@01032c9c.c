
/* ClipperLib::ClipperBase::DisposeLocalMinimaList() */

void __thiscall ClipperLib::ClipperBase::DisposeLocalMinimaList(ClipperBase *this)

{
  void *pvVar1;
  void *pvVar2;
  
                    /* try { // try from 01032ca8 to 01132cf7 has its CatchHandler @ 010332ac */
  pvVar1 = *(void **)(this + 0x10);
  while (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x18);
    operator_delete(pvVar1);
    *(void **)(this + 0x10) = pvVar2;
    pvVar1 = pvVar2;
  }
  *(undefined8 *)(this + 8) = 0;
  return;
}

