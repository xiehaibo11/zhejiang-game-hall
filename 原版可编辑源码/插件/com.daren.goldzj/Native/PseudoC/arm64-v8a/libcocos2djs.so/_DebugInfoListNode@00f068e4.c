
/* v8::internal::DebugInfoListNode::~DebugInfoListNode() */

void __thiscall v8::internal::DebugInfoListNode::~DebugInfoListNode(DebugInfoListNode *this)

{
  if (*(ulong **)this != (ulong *)0x0) {
    GlobalHandles::Destroy(*(ulong **)this);
    *(undefined8 *)this = 0;
  }
  return;
}

