
/* cocos2d::Primitive::init(cocos2d::VertexData*, cocos2d::IndexBuffer*, int) */

undefined8 __thiscall
cocos2d::Primitive::init(Primitive *this,VertexData *param_1,IndexBuffer *param_2,int param_3)

{
  Ref *pRVar1;
  
                    /* try { // try from 00fe1314 to 010e13a3 has its CatchHandler @ 00fe12dc */
  if (param_1 != (VertexData *)0x0) {
    pRVar1 = *(Ref **)(this + 0x28);
    if (pRVar1 != (Ref *)param_1) {
      if (pRVar1 != (Ref *)0x0) {
        Ref::release(pRVar1);
      }
      Ref::retain((Ref *)param_1);
      *(VertexData **)(this + 0x28) = param_1;
    }
    pRVar1 = *(Ref **)(this + 0x30);
    if (pRVar1 != (Ref *)param_2) {
      if (param_2 != (IndexBuffer *)0x0) {
        Ref::retain((Ref *)param_2);
        pRVar1 = *(Ref **)(this + 0x30);
      }
      if (pRVar1 != (Ref *)0x0) {
        Ref::release(pRVar1);
      }
      *(IndexBuffer **)(this + 0x30) = param_2;
    }
    *(int *)(this + 0x40) = param_3;
                    /* catch() { ... } // from try @ 00fe130c with catch @ 00fe1388 */
    return 1;
  }
  return 0;
}

