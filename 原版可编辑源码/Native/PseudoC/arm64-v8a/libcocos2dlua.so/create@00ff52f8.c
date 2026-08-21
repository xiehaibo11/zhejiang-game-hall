
/* cocos2d::IndexBuffer::create(cocos2d::IndexBuffer::IndexType, int, unsigned int, int) */

IndexBuffer *
cocos2d::IndexBuffer::create
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  IndexBuffer *this;
  ulong uVar1;
  
  this = operator_new(0x58,(nothrow_t *)&std::nothrow);
  if (this != (IndexBuffer *)0x0) {
    IndexBuffer(this);
    uVar1 = init(this,param_1,param_2,param_3,param_4);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (IndexBuffer *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

