
/* std::__ndk1::__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,
   v8::internal::compiler::JSInliningHeuristic::CandidateCompare,
   v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>
   >::destroy(std::__ndk1::__tree_node<v8::internal::compiler::JSInliningHeuristic::Candidate,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
::destroy(__tree<v8::internal::compiler::JSInliningHeuristic::Candidate,v8::internal::compiler::JSInliningHeuristic::CandidateCompare,v8::internal::ZoneAllocator<v8::internal::compiler::JSInliningHeuristic::Candidate>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

