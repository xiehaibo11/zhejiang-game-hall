
/* v8::internal::compiler::JSInliningHeuristic::~JSInliningHeuristic() */

void __thiscall
v8::internal::compiler::JSInliningHeuristic::~JSInliningHeuristic(JSInliningHeuristic *this)

{
  *(undefined ***)this = &PTR__JSInliningHeuristic_01ccdb40;
  std::__ndk1::
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>::
  destroy((__tree<unsigned_int,std::__ndk1::less<unsigned_int>,v8::internal::ZoneAllocator<unsigned_int>>
           *)(this + 0x68),*(__tree_node **)(this + 0x70));
  std::__ndk1::
  __tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
  ::destroy((__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
             *)(this + 0x48),*(__tree_node **)(this + 0x50));
  return;
}

