
/* cocos2d::experimental::FrameBuffer::create(unsigned char, unsigned int, unsigned int) */

FrameBuffer * cocos2d::experimental::FrameBuffer::create(uchar param_1,uint param_2,uint param_3)

{
  FrameBuffer *this;
  
  this = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this != (FrameBuffer *)0x0) {
    FrameBuffer(this);
    init(this,param_1,param_2,param_3);
    Ref::autorelease((Ref *)this);
  }
  return this;
}

