
/* cocos2d::experimental::TMXLayer::updateVertexBuffer() */

void __thiscall cocos2d::experimental::TMXLayer::updateVertexBuffer(TMXLayer *this)

{
  long lVar1;
  undefined8 uVar2;
  VertexData *this_00;
  VertexStreamAttribute local_50 [4];
  undefined8 local_4c;
  undefined8 uStack_44;
  long local_38;
  
                    /* try { // try from 00ef9ca4 to 00ff9cb3 has its CatchHandler @ 00ef9dbc */
                    /* try { // try from 00ef9cb8 to 00ff9cc7 has its CatchHandler @ 00ef9dac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GL::bindVAO(0);
  if (*(long *)(this + 0x498) == 0) {
                    /* try { // try from 00ef9ce8 to 00ff9cf7 has its CatchHandler @ 00ef9d9c */
    uVar2 = VertexBuffer::create
                      (0x18,(int)((ulong)(*(long *)(this + 0x408) - *(long *)(this + 0x400)) >> 5) *
                            -0x55555554,0x88e4,1);
    *(undefined8 *)(this + 0x490) = uVar2;
    this_00 = (VertexData *)VertexData::create();
    *(VertexData **)(this + 0x498) = this_00;
    local_50[0] = (VertexStreamAttribute)0x0;
                    /* try { // try from 00ef9d28 to 00ff9d2f has its CatchHandler @ 00ef9d94 */
    uStack_44 = 0x300001406;
    local_4c = 0;
    VertexData::setStream(this_00,*(VertexBuffer **)(this + 0x490),local_50);
    local_50[0] = (VertexStreamAttribute)0x1;
                    /* try { // try from 00ef9d48 to 00ff9d73 has its CatchHandler @ 00ef9de4 */
    uStack_44 = 0x400001401;
    local_4c = 0x10000000c;
    VertexData::setStream(*(VertexData **)(this + 0x498),*(VertexBuffer **)(this + 0x490),local_50);
    local_50[0] = (VertexStreamAttribute)0x0;
    uStack_44 = 0x200001406;
    local_4c = 0x200000010;
    VertexData::setStream(*(VertexData **)(this + 0x498),*(VertexBuffer **)(this + 0x490),local_50);
                    /* try { // try from 00ef9d74 to 00ff9ff7 has its CatchHandler @ 00ef9c28 */
    if (*(Ref **)(this + 0x498) != (Ref *)0x0) {
      Ref::retain(*(Ref **)(this + 0x498));
    }
    if (*(Ref **)(this + 0x490) != (Ref *)0x0) {
      Ref::retain(*(Ref **)(this + 0x490));
    }
  }
  if (*(VertexBuffer **)(this + 0x490) != (VertexBuffer *)0x0) {
                    /* catch() { ... } // from try @ 00ef9d28 with catch @ 00ef9d94 */
                    /* catch() { ... } // from try @ 00ef9ce8 with catch @ 00ef9d9c */
                    /* catch() { ... } // from try @ 00ef9cb8 with catch @ 00ef9dac */
    VertexBuffer::updateVertices
              (*(VertexBuffer **)(this + 0x490),*(void **)(this + 0x400),
               (int)((ulong)(*(long *)(this + 0x408) - (long)*(void **)(this + 0x400)) >> 5) *
               -0x55555554,0,0);
  }
                    /* catch() { ... } // from try @ 00ef9ca4 with catch @ 00ef9dbc */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch() { ... } // from try @ 00ef9c8c with catch @ 00ef9dcc */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00ef9c6c with catch @ 00ef9ddc */
  __stack_chk_fail();
}

