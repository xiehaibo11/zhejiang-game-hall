
/* cocos2d::VertexBuffer::create(int, int, unsigned int, int) */

VertexBuffer * cocos2d::VertexBuffer::create(int param_1,int param_2,uint param_3,int param_4)

{
  VertexBuffer *this;
  ulong uVar1;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (VertexBuffer *)0x0) {
    VertexBuffer(this);
    uVar1 = init(this,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (VertexBuffer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

