
/* std::__ndk1::__tree<std::__ndk1::pair<v8::internal::SlotType, unsigned long>,
   std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >,
   std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType, unsigned long> >
   >::destroy(std::__ndk1::__tree_node<std::__ndk1::pair<v8::internal::SlotType, unsigned long>,
   void*>*) */

void __thiscall
std::__ndk1::
__tree<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>
::destroy(__tree<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>,std::__ndk1::less<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>,std::__ndk1::allocator<std::__ndk1::pair<v8::internal::SlotType,unsigned_long>>>
          *this,__tree_node *param_1)

{
  if (param_1 != (__tree_node *)0x0) {
    destroy(this,*(__tree_node **)param_1);
    destroy(this,*(__tree_node **)(param_1 + 8));
    operator_delete(param_1);
    return;
  }
  return;
}

