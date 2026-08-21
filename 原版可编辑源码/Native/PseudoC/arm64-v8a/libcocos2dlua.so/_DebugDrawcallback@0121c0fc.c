
/* DebugDrawcallback::~DebugDrawcallback() */

void __thiscall DebugDrawcallback::~DebugDrawcallback(DebugDrawcallback *this)

{
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)(this + 8));
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)this);
  return;
}

