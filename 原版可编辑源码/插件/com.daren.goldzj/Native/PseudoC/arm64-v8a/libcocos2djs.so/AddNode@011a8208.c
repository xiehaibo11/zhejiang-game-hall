
/* v8::internal::EmbedderGraphImpl::AddNode(std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,
   std::__ndk1::default_delete<v8::EmbedderGraph::Node> >) */

undefined8 __thiscall
v8::internal::EmbedderGraphImpl::AddNode(EmbedderGraphImpl *this,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(this + 0x10);
  uVar2 = *param_2;
  if (puVar1 < *(undefined8 **)(this + 0x18)) {
    *param_2 = 0;
    *puVar1 = uVar2;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  else {
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>>
    ::
    __push_back_slow_path<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>
              ((vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>>
                *)(this + 8),(unique_ptr *)param_2);
  }
  return uVar2;
}

