
/* cocos2d::renderer::ModelBatcher::~ModelBatcher() */

void __thiscall cocos2d::renderer::ModelBatcher::~ModelBatcher(ModelBatcher *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  Model *this_00;
  MeshBuffer *this_01;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
  }
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  lVar3 = *(long *)(this + 0xa0);
                    /* try { // try from 009d2340 to 00ad2353 has its CatchHandler @ 009d337c */
  if (lVar3 != *(long *)(this + 0x98)) {
    uVar6 = 0;
    lVar2 = *(long *)(this + 0x98);
    lVar4 = lVar3;
    do {
      lVar3 = lVar2;
      this_00 = *(Model **)(lVar3 + uVar6 * 8);
                    /* try { // try from 009d2354 to 00ad23b3 has its CatchHandler @ 009d2270 */
      if (this_00 != (Model *)0x0) {
        Model::~Model(this_00);
        operator_delete(this_00);
        lVar3 = *(long *)(this + 0x98);
        lVar4 = *(long *)(this + 0xa0);
      }
      uVar6 = uVar6 + 1;
      lVar2 = lVar3;
    } while (uVar6 < (ulong)(lVar4 - lVar3 >> 3));
  }
  plVar7 = *(long **)(this + 0xc0);
  *(long *)(this + 0xa0) = lVar3;
  for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    this_01 = (MeshBuffer *)plVar7[3];
    if (this_01 != (MeshBuffer *)0x0) {
      MeshBuffer::~MeshBuffer(this_01);
      operator_delete(this_01);
    }
  }
  if (*(long *)(this + 200) != 0) {
    puVar1 = *(void **)(this + 0xc0);
                    /* try { // try from 009d23b4 to 00ad23c7 has its CatchHandler @ 009d3378 */
    while (puVar1 != (void *)0x0) {
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar5;
    }
                    /* try { // try from 009d23c8 to 00ad2423 has its CatchHandler @ 009d2270 */
    lVar3 = *(long *)(this + 0xb8);
    *(undefined8 *)(this + 0xc0) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xb0) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 200) = 0;
  }
  puVar1 = *(void **)(this + 0xc0);
  while (puVar1 != (void *)0x0) {
    pvVar5 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar5;
  }
  pvVar5 = *(void **)(this + 0xb0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (pvVar5 != (void *)0x0) {
    operator_delete(pvVar5);
  }
  pvVar5 = *(void **)(this + 0x98);
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0xa0) = pvVar5;
                    /* try { // try from 009d2424 to 00ad2437 has its CatchHandler @ 009d3374 */
    operator_delete(pvVar5);
  }
  InputAssembler::~InputAssembler((InputAssembler *)(this + 0x78));
                    /* try { // try from 009d2438 to 00ad248f has its CatchHandler @ 009d2270 */
  Mat4::~Mat4((Mat4 *)(this + 0xc));
  return;
}

