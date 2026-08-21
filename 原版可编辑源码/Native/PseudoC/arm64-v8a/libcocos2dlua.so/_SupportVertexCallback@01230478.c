
/* SupportVertexCallback::~SupportVertexCallback() */

void __thiscall SupportVertexCallback::~SupportVertexCallback(SupportVertexCallback *this)

{
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  operator_delete(this);
  return;
}

