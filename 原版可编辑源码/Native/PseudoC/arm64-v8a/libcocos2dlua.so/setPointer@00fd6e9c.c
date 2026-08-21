
/* cocos2d::VertexAttribValue::setPointer(int, unsigned int, unsigned char, int, void*) */

void __thiscall
cocos2d::VertexAttribValue::setPointer
          (VertexAttribValue *this,int param_1,uint param_2,uchar param_3,int param_4,void *param_5)

{
  *(int *)(this + 0x10) = param_1;
  *(uint *)(this + 0x14) = param_2;
                    /* try { // try from 00fd6ea4 to 010d6eab has its CatchHandler @ 00fd6f60 */
  this[0x18] = (VertexAttribValue)param_3;
  *(int *)(this + 0x1c) = param_4;
  *(void **)(this + 0x20) = param_5;
  this[9] = (VertexAttribValue)0x1;
  return;
}

