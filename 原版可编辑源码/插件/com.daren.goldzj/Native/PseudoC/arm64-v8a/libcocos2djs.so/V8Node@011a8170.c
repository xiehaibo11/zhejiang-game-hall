
/* v8::internal::EmbedderGraphImpl::V8Node(v8::Local<v8::Value> const&) */

long * __thiscall v8::internal::EmbedderGraphImpl::V8Node(EmbedderGraphImpl *this,Local *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *local_18;
  
  plVar3 = *(long **)param_1;
  plVar1 = operator_new(0x10);
  lVar2 = *plVar3;
  *plVar1 = (long)&PTR__Node_01cb7620;
  plVar1[1] = lVar2;
  if (*(undefined8 **)(this + 0x10) < *(undefined8 **)(this + 0x18)) {
    local_18 = (long *)0x0;
    **(undefined8 **)(this + 0x10) = plVar1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  else {
    local_18 = plVar1;
    std::__ndk1::
    vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>>
    ::
    __push_back_slow_path<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>
              ((vector<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>,std::__ndk1::allocator<std::__ndk1::unique_ptr<v8::EmbedderGraph::Node,std::__ndk1::default_delete<v8::EmbedderGraph::Node>>>>
                *)(this + 8),(unique_ptr *)&local_18);
  }
  plVar3 = local_18;
  local_18 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return plVar1;
}

