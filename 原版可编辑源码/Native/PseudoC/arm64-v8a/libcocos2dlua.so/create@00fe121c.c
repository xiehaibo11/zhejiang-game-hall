
/* cocos2d::Primitive::create(cocos2d::VertexData*, cocos2d::IndexBuffer*, int) */

Ref * cocos2d::Primitive::create(VertexData *param_1,IndexBuffer *param_2,int param_3)

{
  Ref *this;
  Ref *pRVar1;
  
                    /* catch() { ... } // from try @ 00fe11bc with catch @ 00fe1234 */
  this = operator_new(0x48,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined ***)this = &PTR__Primitive_01724198;
    if (param_1 == (VertexData *)0x0) {
                    /* catch() { ... } // from try @ 00fe1314 with catch @ 00fe12dc */
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
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
      Ref::autorelease(this);
    }
  }
  return this;
}

