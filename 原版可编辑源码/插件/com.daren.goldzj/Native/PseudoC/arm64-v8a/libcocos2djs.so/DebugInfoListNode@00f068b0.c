
/* v8::internal::DebugInfoListNode::DebugInfoListNode(v8::internal::Isolate*,
   v8::internal::DebugInfo) */

void __thiscall
v8::internal::DebugInfoListNode::DebugInfoListNode
          (DebugInfoListNode *this,long param_1,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(undefined8 *)(this + 8) = 0;
  uVar1 = GlobalHandles::Create(*(GlobalHandles **)(param_1 + 0x95e0),param_3);
  *(undefined8 *)this = uVar1;
  return;
}

