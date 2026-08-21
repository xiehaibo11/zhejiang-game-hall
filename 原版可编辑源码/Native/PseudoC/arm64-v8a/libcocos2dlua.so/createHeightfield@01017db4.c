
/* cocos2d::Physics3DShape::createHeightfield(int, int, void const*, float, float, float, bool,
   bool, bool) */

Ref * cocos2d::Physics3DShape::createHeightfield
                (int param_1,int param_2,void *param_3,float param_4,float param_5,float param_6,
                bool param_7,bool param_8,bool param_9)

{
  Ref *this;
  
                    /* try { // try from 01017dcc to 01117e2b has its CatchHandler @ 01017dcc
                       catch() { ... } // from try @ 01017dcc with catch @ 01017dcc
                       catch() { ... } // from try @ 01017e38 with catch @ 01017dcc */
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined8 *)(this + 0x2c) = 0;
    *(undefined8 *)(this + 0x24) = 0;
    *(undefined8 *)(this + 0x3c) = 0;
    *(undefined8 *)(this + 0x34) = 0;
                    /* try { // try from 01017e2c to 01117e37 has its CatchHandler @ 01017e7c */
    *(undefined ***)this = &PTR__Physics3DShape_01726930;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
                    /* try { // try from 01017e38 to 01117e8f has its CatchHandler @ 01017dcc */
  initHeightfield((Physics3DShape *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                  param_8,param_9);
  Ref::autorelease(this);
                    /* catch() { ... } // from try @ 01017e2c with catch @ 01017e7c */
  return this;
}

