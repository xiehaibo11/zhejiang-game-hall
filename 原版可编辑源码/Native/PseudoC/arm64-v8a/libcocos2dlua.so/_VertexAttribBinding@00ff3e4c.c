
/* cocos2d::VertexAttribBinding::~VertexAttribBinding() */

void __thiscall cocos2d::VertexAttribBinding::~VertexAttribBinding(VertexAttribBinding *this)

{
  undefined8 *puVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  VertexAttribBinding *pVVar6;
  
  *(undefined ***)this = &PTR__VertexAttribBinding_01724630;
  puVar5 = DAT_01792a80;
  if ((DAT_01792a80 != DAT_01792a88) && ((VertexAttribBinding *)*DAT_01792a80 != this)) {
    do {
      if (DAT_01792a88 + -1 == puVar5) goto LAB_00ff3ee0;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
    } while ((VertexAttribBinding *)*puVar1 != this);
  }
  if (puVar5 != DAT_01792a88) {
    __n = (long)DAT_01792a88 - (long)(puVar5 + 1);
    if (__n != 0) {
                    /* catch() { ... } // from try @ 00ff3dac with catch @ 00ff3ecc */
      memmove(puVar5,puVar5 + 1,__n);
    }
    DAT_01792a88 = puVar5 + ((long)__n >> 3);
  }
LAB_00ff3ee0:
  if (*(Ref **)(this + 0x28) != (Ref *)0x0) {
                    /* try { // try from 00ff3ee8 to 010f3f6b has its CatchHandler @ 00ff3ee8
                       catch() { ... } // from try @ 00ff3ee8 with catch @ 00ff3ee8
                       catch() { ... } // from try @ 00ff3f74 with catch @ 00ff3ee8
                       catch() { ... } // from try @ 00ff3fdc with catch @ 00ff3ee8
                       catch() { ... } // from try @ 00ff4044 with catch @ 00ff3ee8 */
    Ref::release(*(Ref **)(this + 0x28));
  }
  if (*(Ref **)(this + 0x30) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x30));
  }
  if (*(long *)(this + 0x50) != 0) {
    puVar5 = *(void **)(this + 0x48);
    while (puVar5 != (void *)0x0) {
      pvVar2 = (void *)*puVar5;
      VertexAttribValue::~VertexAttribValue((VertexAttribValue *)(puVar5 + 5));
      if ((*(byte *)(puVar5 + 2) & 1) != 0) {
        operator_delete((void *)puVar5[4]);
      }
      operator_delete(puVar5);
      puVar5 = pvVar2;
    }
    lVar3 = *(long *)(this + 0x40);
    *(undefined8 *)(this + 0x48) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x38) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x50) = 0;
  }
  pVVar6 = this + 0x24;
                    /* try { // try from 00ff3f6c to 010f3f73 has its CatchHandler @ 00ff4090 */
  if (*(int *)pVVar6 != 0) {
                    /* try { // try from 00ff3f74 to 010f3fd3 has its CatchHandler @ 00ff3ee8 */
    (*glDeleteVertexArraysOESEXT)(1,pVVar6);
    *(int *)pVVar6 = 0;
  }
  puVar5 = *(void **)(this + 0x48);
  while (puVar5 != (void *)0x0) {
    pvVar2 = (void *)*puVar5;
    VertexAttribValue::~VertexAttribValue((VertexAttribValue *)(puVar5 + 5));
    if ((*(byte *)(puVar5 + 2) & 1) != 0) {
      operator_delete((void *)puVar5[4]);
    }
    operator_delete(puVar5);
    puVar5 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (pvVar2 != (void *)0x0) {
                    /* try { // try from 00ff3fd4 to 010f3fdb has its CatchHandler @ 00ff408c */
    operator_delete(pvVar2);
  }
                    /* try { // try from 00ff3fdc to 010f403b has its CatchHandler @ 00ff3ee8 */
  Ref::~Ref((Ref *)this);
  return;
}

