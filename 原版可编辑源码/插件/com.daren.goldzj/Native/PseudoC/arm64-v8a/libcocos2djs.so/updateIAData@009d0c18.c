
/* cocos2d::renderer::MeshAssembler::updateIAData(unsigned long, cocos2d::renderer::VertexFormat*,
   se::Object*, se::Object*) */

void __thiscall
cocos2d::renderer::MeshAssembler::updateIAData
          (MeshAssembler *this,ulong param_1,VertexFormat *param_2,Object *param_3,Object *param_4)

{
  uint uVar1;
  RenderData *this_00;
  InputAssembler *this_01;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  IndexBuffer *this_02;
  VertexBuffer *pVVar5;
  
  RenderDataList::updateMesh((RenderDataList *)(this + 0x78),param_1,param_3,param_4);
  this_00 = (RenderData *)RenderDataList::getRenderData((RenderDataList *)(this + 0x78),param_1);
  this_01 = (InputAssembler *)(**(code **)(*(long *)this + 0x40))(this,param_1);
  this_02 = *(IndexBuffer **)(this_01 + 8);
  if (this_02 == (IndexBuffer *)0x0) {
                    /* catch() { ... } // from try @ 009d09a4 with catch @ 009d0cc0 */
                    /* catch() { ... } // from try @ 009d0998 with catch @ 009d0cc4 */
    this_02 = operator_new(0x60);
                    /* catch() { ... } // from try @ 009d0978 with catch @ 009d0cc8 */
    IndexBuffer::IndexBuffer(this_02);
    Ref::autorelease((Ref *)this_02);
                    /* catch() { ... } // from try @ 009d09b0 with catch @ 009d0cd8
                       catch() { ... } // from try @ 009d0b14 with catch @ 009d0cd8 */
    uVar3 = DeviceGraphics::getInstance();
    uVar4 = RenderData::getIndices(this_00);
    IndexBuffer::init(this_02,uVar3,0x1403,0x88e4,uVar4,*(ulong *)(this_00 + 0x10),
                      *(ulong *)(this_00 + 0x10) >> 1 & 0x7fffffff);
    InputAssembler::setIndexBuffer(this_01,this_02);
    pVVar5 = *(VertexBuffer **)this_01;
  }
  else {
    pvVar2 = (void *)RenderData::getIndices(this_00);
                    /* catch() { ... } // from try @ 009d0ad8 with catch @ 009d0c8c */
                    /* catch() { ... } // from try @ 009d0acc with catch @ 009d0c90 */
                    /* catch() { ... } // from try @ 009d0aa0 with catch @ 009d0c94 */
    IndexBuffer::update(this_02,0,pvVar2,*(ulong *)(this_00 + 0x10));
                    /* catch() { ... } // from try @ 009d0a94 with catch @ 009d0c98 */
    pVVar5 = *(VertexBuffer **)this_01;
                    /* catch() { ... } // from try @ 009d0a68 with catch @ 009d0c9c */
  }
  if (pVVar5 == (VertexBuffer *)0x0) {
    pVVar5 = operator_new(0x60);
    VertexBuffer::VertexBuffer(pVVar5);
                    /* try { // try from 009d0d30 to 00ad0d83 has its CatchHandler @ 009d0d30
                       catch() { ... } // from try @ 009d0d30 with catch @ 009d0d30
                       catch() { ... } // from try @ 009d0f70 with catch @ 009d0d30 */
    Ref::autorelease((Ref *)pVVar5);
    uVar3 = DeviceGraphics::getInstance();
    uVar4 = RenderData::getVertices(this_00);
    uVar1 = 0;
    if (*(uint *)(param_2 + 0x50) != 0) {
      uVar1 = (uint)*(undefined8 *)(this_00 + 8) / *(uint *)(param_2 + 0x50);
    }
    VertexBuffer::init(pVVar5,uVar3,param_2,0x88e4,uVar4,*(undefined8 *)(this_00 + 8),uVar1);
    InputAssembler::setVertexBuffer(this_01,pVVar5);
  }
  else {
    pvVar2 = (void *)RenderData::getVertices(this_00);
                    /* catch() { ... } // from try @ 009d0a60 with catch @ 009d0cac */
                    /* catch() { ... } // from try @ 009d0af4 with catch @ 009d0cb0 */
    VertexBuffer::update(pVVar5,0,pvVar2,*(ulong *)(this_00 + 8));
  }
  *(undefined4 *)(this_01 + 0x18) = *(undefined4 *)(this_02 + 0x1c);
                    /* try { // try from 009d0d84 to 00ad0d9b has its CatchHandler @ 009d0f80 */
  return;
}

