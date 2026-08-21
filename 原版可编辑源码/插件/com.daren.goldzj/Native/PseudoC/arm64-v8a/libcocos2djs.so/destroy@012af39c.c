
/* std::__ndk1::__tree<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::destroy(std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*) */

void __thiscall
std::__ndk1::
__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::destroy(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
          *this,__tree_node *param_1)

{
  for (; param_1 != (__tree_node *)0x0; param_1 = *(__tree_node **)(param_1 + 8)) {
    destroy(this,*(__tree_node **)param_1);
  }
  return;
}

