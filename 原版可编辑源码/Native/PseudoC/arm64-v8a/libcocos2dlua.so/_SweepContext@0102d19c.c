
/* p2t::SweepContext::~SweepContext() */

void __thiscall p2t::SweepContext::~SweepContext(SweepContext *this)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  AdvancingFront *this_00;
  SweepContext *pSVar8;
  SweepContext *pSVar9;
  
  pvVar7 = *(void **)(this + 0xa0);
                    /* try { // try from 0102d1b0 to 0112d207 has its CatchHandler @ 0102d150 */
  if (pvVar7 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar7 + 0x10);
    if (pvVar3 != (void *)0x0) {
      *(void **)((long)pvVar7 + 0x18) = pvVar3;
      operator_delete(pvVar3);
    }
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)(this + 0xa8);
  if (pvVar7 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar7 + 0x10);
    if (pvVar3 != (void *)0x0) {
      *(void **)((long)pvVar7 + 0x18) = pvVar3;
      operator_delete(pvVar3);
    }
                    /* catch() { ... } // from try @ 0102d194 with catch @ 0102d1ec */
    operator_delete(pvVar7);
  }
  this_00 = *(AdvancingFront **)(this + 0x98);
  if (this_00 != (AdvancingFront *)0x0) {
    AdvancingFront::~AdvancingFront(this_00);
    operator_delete(this_00);
  }
                    /* try { // try from 0102d208 to 0112d267 has its CatchHandler @ 0102d208
                       catch() { ... } // from try @ 0102d208 with catch @ 0102d208
                       catch() { ... } // from try @ 0102d284 with catch @ 0102d208 */
  if (*(void **)(this + 0xb0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb0));
  }
  if (*(void **)(this + 0xb8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xb8));
  }
  if (*(void **)(this + 0xc0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0xc0));
  }
  for (pSVar8 = *(SweepContext **)(this + 0x70); this + 0x68 != pSVar8;
      pSVar8 = *(SweepContext **)(pSVar8 + 8)) {
    if (*(void **)(pSVar8 + 0x10) != (void *)0x0) {
      operator_delete(*(void **)(pSVar8 + 0x10));
    }
  }
  puVar4 = *(undefined8 **)this;
  puVar5 = *(undefined8 **)(this + 8);
  if (puVar5 != puVar4) {
                    /* try { // try from 0102d268 to 0112d283 has its CatchHandler @ 0102d360 */
    pvVar7 = (void *)*puVar4;
    uVar2 = 1;
    while( true ) {
      if (pvVar7 != (void *)0x0) {
        operator_delete(pvVar7);
        puVar4 = *(undefined8 **)this;
        puVar5 = *(undefined8 **)(this + 8);
      }
                    /* try { // try from 0102d284 to 0112d37b has its CatchHandler @ 0102d208 */
      if ((ulong)((long)puVar5 - (long)puVar4 >> 3) <= uVar2) break;
      pvVar7 = (void *)puVar4[uVar2];
      uVar2 = (ulong)((int)uVar2 + 1);
    }
  }
  pvVar7 = *(void **)(this + 0x80);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x88) = pvVar7;
    operator_delete(pvVar7);
  }
  if (*(long *)(this + 0x78) != 0) {
    lVar1 = *(long *)(this + 0x68);
    pSVar8 = *(SweepContext **)(this + 0x70);
    lVar6 = *(long *)pSVar8;
    *(undefined8 *)(lVar6 + 8) = *(undefined8 *)(lVar1 + 8);
    **(long **)(lVar1 + 8) = lVar6;
    *(undefined8 *)(this + 0x78) = 0;
    while (pSVar8 != this + 0x68) {
      pSVar9 = *(SweepContext **)(pSVar8 + 8);
      operator_delete(pSVar8);
      pSVar8 = pSVar9;
    }
  }
  pvVar7 = *(void **)(this + 0x50);
  if (pvVar7 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar7;
    operator_delete(pvVar7);
  }
  pvVar7 = *(void **)this;
  if (pvVar7 == (void *)0x0) {
    return;
  }
  *(void **)(this + 8) = pvVar7;
  operator_delete(pvVar7);
  return;
}

