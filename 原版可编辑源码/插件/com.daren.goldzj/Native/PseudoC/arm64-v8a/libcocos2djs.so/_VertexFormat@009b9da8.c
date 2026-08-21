
/* cocos2d::renderer::VertexFormat::~VertexFormat() */

void __thiscall cocos2d::renderer::VertexFormat::~VertexFormat(VertexFormat *this)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  
  *(undefined ***)this = &PTR__VertexFormat_01c6af48;
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
                    /* try { // try from 009b9dd8 to 00ab9def has its CatchHandler @ 009ba2bc */
    pvVar4 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 3) & 1) != 0) {
      operator_delete((void *)puVar1[5]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
                    /* try { // try from 009b9df8 to 00ab9e03 has its CatchHandler @ 009ba2b8 */
  pvVar4 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar4 != (void *)0x0) {
                    /* try { // try from 009b9e04 to 00ab9e0f has its CatchHandler @ 009ba2b4 */
    operator_delete(pvVar4);
  }
  pbVar3 = *(byte **)(this + 0x10);
  if (pbVar3 != (byte *)0x0) {
                    /* try { // try from 009b9e10 to 00ab9e8b has its CatchHandler @ 009ba2cc */
    pbVar2 = *(byte **)(this + 0x18);
    pbVar5 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar5 = pbVar2 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar5;
      } while (pbVar3 != pbVar5);
      pbVar5 = *(byte **)(this + 0x10);
    }
    *(byte **)(this + 0x18) = pbVar3;
    operator_delete(pbVar5);
  }
  Ref::~Ref((Ref *)this);
  return;
}

