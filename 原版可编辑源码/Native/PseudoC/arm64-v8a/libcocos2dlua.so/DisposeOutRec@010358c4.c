
/* ClipperLib::Clipper::DisposeOutRec(unsigned long) */

void __thiscall ClipperLib::Clipper::DisposeOutRec(Clipper *this,ulong param_1)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  
                    /* try { // try from 010358c8 to 011358cb has its CatchHandler @ 010358e0 */
                    /* try { // try from 010358cc to 011358f3 has its CatchHandler @ 0103587c */
  lVar2 = *(long *)(this + 8);
                    /* catch() { ... } // from try @ 010358c8 with catch @ 010358e0 */
  pvVar3 = *(void **)(lVar2 + param_1 * 8);
  if (*(long *)((long)pvVar3 + 0x18) == 0) {
    if (pvVar3 == (void *)0x0) goto LAB_01035924;
  }
  else {
    *(undefined8 *)(*(long *)(*(long *)((long)pvVar3 + 0x18) + 0x20) + 0x18) = 0;
    pvVar1 = *(void **)((long)pvVar3 + 0x18);
    while (pvVar1 != (void *)0x0) {
      *(undefined8 *)((long)pvVar3 + 0x18) = *(undefined8 *)((long)pvVar1 + 0x18);
      operator_delete(pvVar1);
      pvVar1 = *(void **)((long)pvVar3 + 0x18);
    }
  }
  operator_delete(pvVar3);
  lVar2 = *(long *)(this + 8);
LAB_01035924:
  *(undefined8 *)(lVar2 + param_1 * 8) = 0;
  return;
}

