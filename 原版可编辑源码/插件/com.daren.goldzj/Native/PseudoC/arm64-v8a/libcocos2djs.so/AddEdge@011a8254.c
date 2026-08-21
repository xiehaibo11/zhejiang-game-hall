
/* v8::internal::EmbedderGraphImpl::AddEdge(v8::EmbedderGraph::Node*, v8::EmbedderGraph::Node*, char
   const*) */

void __thiscall
v8::internal::EmbedderGraphImpl::AddEdge
          (EmbedderGraphImpl *this,Node *param_1,Node *param_2,char *param_3)

{
  undefined8 *puVar1;
  Node *local_28;
  Node *pNStack_20;
  char *local_18;
  
  puVar1 = *(undefined8 **)(this + 0x28);
  if (puVar1 < *(undefined8 **)(this + 0x30)) {
    puVar1[2] = param_3;
    puVar1[1] = param_2;
    *puVar1 = param_1;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 0x18;
  }
  else {
    local_28 = param_1;
    pNStack_20 = param_2;
    local_18 = param_3;
    std::__ndk1::
    vector<v8::internal::EmbedderGraphImpl::Edge,std::__ndk1::allocator<v8::internal::EmbedderGraphImpl::Edge>>
    ::__push_back_slow_path<v8::internal::EmbedderGraphImpl::Edge>
              ((vector<v8::internal::EmbedderGraphImpl::Edge,std::__ndk1::allocator<v8::internal::EmbedderGraphImpl::Edge>>
                *)(this + 0x20),(Edge *)&local_28);
  }
  return;
}

