
/* non-virtual thunk to DebugDrawcallback::~DebugDrawcallback() */

void __thiscall DebugDrawcallback::~DebugDrawcallback(DebugDrawcallback *this)

{
  btInternalTriangleIndexCallback::~btInternalTriangleIndexCallback
            ((btInternalTriangleIndexCallback *)this);
  btTriangleCallback::~btTriangleCallback((btTriangleCallback *)(this + -8));
  operator_delete((btTriangleCallback *)(this + -8));
  return;
}

