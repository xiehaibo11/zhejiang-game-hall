
/* v8::internal::GlobalHandles::UpdateListOfYoungNodes() */

void __thiscall v8::internal::GlobalHandles::UpdateListOfYoungNodes(GlobalHandles *this)

{
  UpdateAndCompactListOfYoungNode<v8::internal::GlobalHandles::Node>(this,(vector *)(this + 0x10));
  UpdateAndCompactListOfYoungNode<v8::internal::GlobalHandles::TracedNode>
            (this,(vector *)(this + 0x30));
  return;
}

